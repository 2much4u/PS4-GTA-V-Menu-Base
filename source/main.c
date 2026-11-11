#include "ps4.h"
#include "gta.h"

extern char gtaPayload[];
extern int gtaPayloadSize;

int gamePID;

void sysNotify(char* msg) {
	sceSysUtilSendSystemNotificationWithText(222, msg);
}

BOOL gameCheck() {
	procAttach(gamePID);

	u64 testBytes;
	procReadBytes(gamePID, GameCheckAddress, (void*)&testBytes, sizeof(testBytes));

	BOOL success = FALSE;
	switch (testBytes)
	{
	case GameCheckEUBytes:
		sysNotify("1.57 EU GTA V detected.\nThis payload can only be used on 1.57 GTA V.");
		success = TRUE;
		break;
	default:
		sysNotify("Failed to detect GTA V.");
		break;
	}

	procDetach(gamePID);
	return success;
}

void runSetup() {
	procAttach(gamePID);

	// gtaVars
	void* null = NULL;
	struct _gtaVars _gtaVars;
	_gtaVars.allocationNeeded = TRUE;
	_gtaVars.allocationSize   = (int)ceil((double)gtaPayloadSize / 0x4000) * 0x4000;
	_gtaVars.executableSpace  = null;
	_gtaVars.dataSpace        = null;
	procWriteBytes(gamePID, gtaVars, &_gtaVars, sizeof(_gtaVars));

	// nativeHook
	procWriteBytes(gamePID, PayloadAddress, nativeHook, 0x1000);

	// syscall
	u8 syscallASM[] = { SyscallBytes };
	procWriteBytes(gamePID, SyscallAddress, syscallASM, sizeof(syscallASM));

	// hook (IS_PLAYER_ONLINE)
	u8 hookASM[] = { HookBytes };
	procWriteBytes(gamePID, HookAddress, hookASM, sizeof(hookASM));

	procDetach(gamePID);
}

BOOL setupDone() {
	procAttach(gamePID);

	struct _gtaVars check;
  	procReadBytes(gamePID, gtaVars, &check, sizeof(check));

	if (!check.allocationNeeded) {
		printf_debug("[setup_done] allocNeeded read=%d\n", check.allocationNeeded);
		printf_debug("[setup_done] execSpace read=%p\n", check.executableSpace);
		printf_debug("[setup_done] dataSpace read=%p\n", check.dataSpace);
		printf_debug("[setup_done] allocSize read=0x%X\n", check.allocationSize);
	}

	procDetach(gamePID);
	return !check.allocationNeeded;
}

void startExecution() {
	procAttach(gamePID);

	void* executableSpace;
	procReadBytes(gamePID, &gtaVars->executableSpace, &executableSpace, sizeof(executableSpace));

	procWriteBytes(gamePID, executableSpace, gtaPayload, gtaPayloadSize);

	procDetach(gamePID);
}

int _main(void) {
	initKernel();
	initLibc();
	initSysUtil();

	jailbreak();
	ptrace_patch();
	disable_aslr();

	sysNotify("Payload loaded.\nPlease launch GTA V.");
	gamePID = findProcess("eboot.bin");

	sceKernelSleep(3);

	if (!gameCheck()) {
		return 0;
	}

	sysNotify("Setting up environment.");
	runSetup();

	while (!setupDone()) sceKernelSleep(3);

	startExecution();
	sysNotify("Mods activated.\nEnjoy!");

	return 0;
}
