#pragma once

#include "invoker.h"

namespace PLAYER
{
	static Ped GET_PLAYER_PED(Player playerid) { return invoke<Ped>(0xFBBE70, playerid); } // 0x43A66C31C68491C0 0x6E31E993
	static Ped GET_PLAYER_PED_SCRIPT_INDEX(Player Player) { return invoke<Ped>(0xFBBED0, Player); } // 0x50FAC3A3E030A6E1 0x6AC64990
	static void SET_PLAYER_MODEL(Player player, Hash model) { invoke<Void>(0xFBBF10, player, model); } // 0x00A1CADD00108836 0x774A4C54
	static void CHANGE_PLAYER_PED(Player Player, Ped ped, BOOL b2, BOOL b3) { invoke<Void>(0xFBBF20, Player, ped, b2, b3); } // 0x048189FAC643DEEE 0xBE515485
	static void GET_PLAYER_RGB_COLOUR(Player Player, int* r, int* g, int* b) { invoke<Void>(0xFBBF50, Player, r, g, b); } // 0xE902EF951DCE178F 0x6EF43BBB
	static Vehicle* GET_NUMBER_OF_PLAYERS() { return invoke<Vehicle*>(0xFBBFB0); } // 0x407C7F91DDB46C16 0x4C1B8867
	static int GET_PLAYER_TEAM(Player player) { return invoke<int>(0xFBBFE0, player); } // 0x37039302F4E0A008 0x9873E404
	static void SET_PLAYER_TEAM(Player player, int team) { invoke<Void>(0xFBC020, player, team); } // 0x0299FA38396A4940 0x725ADCF2
	static char* GET_PLAYER_NAME(Player player) { return invoke<char*>(0xFBC120, player); } // 0x6D0DE6A7B5DA71F8 0x406B4B20
	static Any GET_WANTED_LEVEL_RADIUS(Player player) { return invoke<Any>(0xFBC1A0, player); } // 0x085DEB493BE80812 0x1CF7D7DA
	static Vector3 GET_PLAYER_WANTED_CENTRE_POSITION(Player player) { return invoke<Vector3>(0xFBC1D0, player); } // 0x0C92BA89F1AF26F8 0x821F2D2C
	static void SET_PLAYER_WANTED_CENTRE_POSITION(Player player, Player position, Vehicle p2, Ped* p3) { invoke<Void>(0xFBC270, player, position, p2, p3); } // 0x520E541A97A13354 0xF261633A
	static int GET_WANTED_LEVEL_THRESHOLD(int wantedLevel) { return invoke<int>(0xFBC2F0, wantedLevel); } // 0xFDD179EAF45B556C 0xD9783F6B
	static void SET_PLAYER_WANTED_LEVEL(Player player, int wantedLevel, BOOL disableNoMission) { invoke<Void>(0xFBC310, player, wantedLevel, disableNoMission); } // 0x39FF19C64EF7DA5B 0xB7A0914B
	static void SET_PLAYER_WANTED_LEVEL_NO_DROP(Player player, int wantedLevel, BOOL p2) { invoke<Void>(0xFBC330, player, wantedLevel, p2); } // 0x340E61DE7F471565 0xED6F44F5
	static void SET_PLAYER_WANTED_LEVEL_NOW(Player player, BOOL p1) { invoke<Void>(0xFBC3F0, player, p1); } // 0xE0A7D1E497FFCD6F 0xAF3AFD83
	static BOOL ARE_PLAYER_FLASHING_STARS_ABOUT_TO_DROP(Player player) { return invoke<BOOL>(0xFBC4B0, player); } // 0xAFAF86043E5874E9 0xE13A71C7
	static BOOL ARE_PLAYER_STARS_GREYED_OUT(Player player) { return invoke<BOOL>(0xFBC520, player); } // 0x0A6EB355EE14A2DB 0x5E72AB72
	static void SET_DISPATCH_COPS_FOR_PLAYER(Player player, BOOL toggle) { invoke<Void>(0xFBC5F0, player, toggle); } // 0xDB172424876553F4 0x48A18913
	static BOOL IS_PLAYER_WANTED_LEVEL_GREATER(Player player, int wantedLevel) { return invoke<BOOL>(0xFBC660, player, wantedLevel); } // 0x238DB2A2C23EE9EF 0x589A2661
	static void CLEAR_PLAYER_WANTED_LEVEL(Player player) { invoke<Void>(0xFBC6B0, player); } // 0xB302540597885499 0x54EA5BCC
	static BOOL IS_PLAYER_DEAD(Player player) { return invoke<BOOL>(0xFBC750, player); } // 0x424D4687FA1E5652 0x140CA5A8
	static BOOL IS_PLAYER_PRESSING_HORN(Player player) { return invoke<BOOL>(0xFBC790, player); } // 0xFA1E2BF8B10598F9 0xED1D1662
	static void SET_PLAYER_CONTROL(Player player, BOOL toggle, int flags) { invoke<Void>(0xFBC7D0, player, toggle, flags); } // 0x8D32347D6D4C40A2 0xD17AFCD8
	static int GET_PLAYER_WANTED_LEVEL(Player player) { return invoke<int>(0xFBC7F0, player); } // 0xE28E54788CE8F12D 0xBDCDD163
	static void SET_MAX_WANTED_LEVEL(int maxWantedLevel) { invoke<Void>(0xFBC840, maxWantedLevel); } // 0xAA5F02DB48D704B9 0x665A06F5
	static void SET_POLICE_RADAR_BLIPS(BOOL toggle) { invoke<Void>(0xFBC860, toggle); } // 0x43286D561B72B8BF 0x8E114B10
	static void SET_POLICE_IGNORE_PLAYER(Player player, BOOL toggle) { invoke<Void>(0xFBC880, player, toggle); } // 0x32C62AA929C2DA6A 0xE6DE71B7
	static BOOL IS_PLAYER_PLAYING(Player player) { return invoke<BOOL>(0xFBC8F0, player); } // 0x5E9564D8246B909A 0xE15D777F
	static void SET_EVERYONE_IGNORE_PLAYER(Player player, BOOL toggle) { invoke<Void>(0xFBC930, player, toggle); } // 0x8EEDA153AD141BA4 0xC915285E
	static void SET_ALL_RANDOM_PEDS_FLEE(Player player, BOOL toggle) { invoke<Void>(0xFBC9A0, player, toggle); } // 0x056E0FE8534C2949 0x49EAE968
	static void SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(Player player) { invoke<Void>(0xFBC9F0, player); } // 0x471D2FF42A94B4F2 0xBF974891
	static void _0xDE45D1A1EF45EE61(Player player, BOOL toggle) { invoke<Void>(0xFBCA20, player, toggle); } // 0xDE45D1A1EF45EE61 0x274631FE
	static void _0xC3376F42B1FACCC6(Player player) { invoke<Void>(0xFBCA80, player); } // 0xC3376F42B1FACCC6 0x02DF7AF4
	static void SET_IGNORE_LOW_PRIORITY_SHOCKING_EVENTS(Player player, BOOL toggle) { invoke<Void>(0xFBCAE0, player, toggle); } // 0x596976B02B6B5700 0xA3D675ED
	static void SET_WANTED_LEVEL_MULTIPLIER(float multiplier) { invoke<Void>(0xFBCB30, multiplier); } // 0x020E5F00CDA207BA 0x1359292F
	static void SET_WANTED_LEVEL_DIFFICULTY(Player player, float difficulty) { invoke<Void>(0xFBCB70, player, difficulty); } // 0x9B0BB33B04405E7A 0xB552626C
	static void RESET_WANTED_LEVEL_DIFFICULTY(Player player) { invoke<Void>(0xFBCBC0, player); } // 0xB9D0DD990DC141DD 0xA64C378D
	static void START_FIRING_AMNESTY(int duration) { invoke<Void>(0xFBCC00, duration); } // 0xBF9BD71691857E48 0x5F8A22A6
	static void REPORT_CRIME(Player player, int crimeType, int wantedLvlThresh) { invoke<Void>(0xFBCC60, player, crimeType, wantedLvlThresh); } // 0xE9B09589827545E7 0xD8EB3A44
	static void _SWITCH_CRIME_TYPE(Player player, int p1) { invoke<Void>(0xFBCD00, player, p1); } // 0x9A987297ED8BD838 0x59B5C2A2
	static void _0xBC9490CA15AEA8FB(Player player) { invoke<Void>(0xFBCD50, player); } // 0xBC9490CA15AEA8FB 0x6B34A160
	static void _0x4669B3ED80F24B4E(Player player) { invoke<Void>(0xFBCD80, player); } // 0x4669B3ED80F24B4E 0xB9FB142F
	static void _0xAD73CE5A09E42D12(Player player) { invoke<Void>(0xFBCE20, player); } // 0xAD73CE5A09E42D12 0x85725848
	static void _0x36F1B38855F2A8DF(Player player) { invoke<Void>(0xFBCE60, player); } // 0x36F1B38855F2A8DF 0x3A7E5FB6
	static void _0xDC64D2C53493ED12(Player player) { invoke<Void>(0xFBCE90, player); } // 0xDC64D2C53493ED12 0xD15C4B1C
	static void _0xB45EFF719D8427A6(float p0) { invoke<Void>(0xFBCF20, p0); } // 0xB45EFF719D8427A6 0xBF6993C7
	static void _0x0032A6DBA562C518() { invoke<Void>(0xFBCF40); } // 0x0032A6DBA562C518 0x47CAB814
	static BOOL CAN_PLAYER_START_MISSION(Player player) { return invoke<BOOL>(0xFBCF50, player); } // 0xDE7465A27D403C06 0x39E3CB3F
	static BOOL IS_PLAYER_READY_FOR_CUTSCENE(Player player) { return invoke<BOOL>(0xFBCF90, player); } // 0x908CBECC2CAA3690 0xBB77E9CD
	static BOOL IS_PLAYER_TARGETTING_ENTITY(Player player, Entity entity) { return invoke<BOOL>(0xFBCFC0, player, entity); } // 0x7912F7FC4F6264B6 0xF3240B77
	static BOOL GET_PLAYER_TARGET_ENTITY(Player player, Entity* entity) { return invoke<BOOL>(0xFBD060, player, entity); } // 0x13EDE1A5DBF797C9 0xF6AAA2D7
	static BOOL IS_PLAYER_FREE_AIMING(Player player) { return invoke<BOOL>(0xFBD0C0, player); } // 0x2E397FD2ECD37C87 0x1DEC67B7
	static BOOL IS_PLAYER_FREE_AIMING_AT_ENTITY(Player player, Entity entity) { return invoke<BOOL>(0xFBD110, player, entity); } // 0x3C06B5C839B38F7B 0x7D80EEAA
	static BOOL GET_ENTITY_PLAYER_IS_FREE_AIMING_AT(Player player, Entity* entity) { return invoke<BOOL>(0xFBD1D0, player, entity); } // 0x2975C866E6713290 0x8866D9D0
	static void SET_PLAYER_LOCKON_RANGE_OVERRIDE(Player player, float range) { invoke<Void>(0xFBD240, player, range); } // 0x29961D490E5814FD 0x74D42C03
	static void SET_PLAYER_CAN_DO_DRIVE_BY(Player player, BOOL toggle) { invoke<Void>(0xFBD290, player, toggle); } // 0x6E8834B52EC20C77 0xF4D99685
	static void SET_PLAYER_CAN_BE_HASSLED_BY_GANGS(Player player, BOOL toggle) { invoke<Void>(0xFBD2E0, player, toggle); } // 0xD5E460AD7020A246 0x71B305BB
	static void SET_PLAYER_CAN_USE_COVER(Player player, BOOL toggle) { invoke<Void>(0xFBD330, player, toggle); } // 0xD465A8599DFF6814 0x13CAFAFA
	static int GET_MAX_WANTED_LEVEL() { return invoke<int>(0xFBD380); } // 0x462E0DB9B137DC5F 0x457F1E44
	static BOOL IS_PLAYER_TARGETTING_ANYTHING(Player player) { return invoke<BOOL>(0xFBD390, player); } // 0x78CFE51896B6B8A4 0x456DB50D
	static void SET_PLAYER_SPRINT(Player player, BOOL toggle) { invoke<Void>(0xFBD3E0, player, toggle); } // 0xA01B8075D8B92DF4 0x7DD7900C
	static void RESET_PLAYER_STAMINA(Player player) { invoke<Void>(0xFBD430, player); } // 0xA6F312FCCE9C1DFE 0xC0445A9C
	static void RESTORE_PLAYER_STAMINA(Player player, float p1) { invoke<Void>(0xFBD460, player, p1); } // 0xA352C1B864CAFD33 0x62A93608
	static float GET_PLAYER_SPRINT_STAMINA_REMAINING(Player player) { return invoke<float>(0xFBD4C0, player); } // 0x3F9F16F8E65A7ED7 0x47017C90
	static float GET_PLAYER_SPRINT_TIME_REMAINING(Player player) { return invoke<float>(0xFBD510, player); } // 0x1885BC9B108B4C99 0x40E80543
	static float GET_PLAYER_UNDERWATER_TIME_REMAINING(Player player) { return invoke<float>(0xFBD580, player); } // 0xA1FCF8E6AF40B731 0x1317125A
	static int GET_PLAYER_GROUP(Player player) { return invoke<int>(0xFBD650, player); } // 0x0D127585F77030AF 0xA5EDCDE8
	static int GET_PLAYER_MAX_ARMOUR(Player player) { return invoke<int>(0xFBD670, player); } // 0x92659B4CE1863CB3 0x02A50657
	static BOOL IS_PLAYER_CONTROL_ON(Player player) { return invoke<BOOL>(0xFBD6B0, player); } // 0x49C32D60007AFA47 0x618857F2
	static BOOL _IS_PLAYER_CAM_CONTROL_DISABLED() { return invoke<BOOL>(0xFBD710); } // 0x7C814D2FB49F40C0
	static BOOL IS_PLAYER_SCRIPT_CONTROL_ON(Player player) { return invoke<BOOL>(0xFBD750, player); } // 0x8A876A65283DD7D7 0x61B00A84
	static BOOL IS_PLAYER_CLIMBING(Player player) { return invoke<BOOL>(0xFBD7A0, player); } // 0x95E8F73DC65EFB9C 0x4A9E9AE0
	static BOOL IS_PLAYER_BEING_ARRESTED(Player player, BOOL atArresting) { return invoke<BOOL>(0xFBD7E0, player, atArresting); } // 0x388A47C51ABDAC8E 0x7F6A60D3
	static void RESET_PLAYER_ARREST_STATE(Player player) { invoke<Void>(0xFBD870, player); } // 0x2D03E13C460760D6 0x453C7CAB
	static Vehicle GET_PLAYERS_LAST_VEHICLE() { return invoke<Vehicle>(0xFBD8A0); } // 0xB6997A7EB3F5C8C0 0xE2757AC1
	static Player GET_PLAYER_INDEX() { return invoke<Player>(0xFBD8D0); } // 0xA5EDC40EF369B48D 0x309BBDC1
	static Player INT_TO_PLAYERINDEX(int value) { return invoke<Player>(0xFBD910, value); } // 0x41BD2A6B006AF756 0x98DD98F1
	static int INT_TO_PARTICIPANTINDEX(int value) { return invoke<int>(0xFBD920, value); } // 0x9EC6603812C24710 0x98F3B274
	static int GET_TIME_SINCE_PLAYER_HIT_VEHICLE(Player player) { return invoke<int>(0xFBD930, player); } // 0x5D35ECF3A81A0EE0 0x6E9B8B9E
	static int GET_TIME_SINCE_PLAYER_HIT_PED(Player player) { return invoke<int>(0xFBD970, player); } // 0xE36A25322DC35F42 0xB6209195
	static int GET_TIME_SINCE_PLAYER_DROVE_ON_PAVEMENT(Player player) { return invoke<int>(0xFBD9B0, player); } // 0xD559D2BE9E37853B 0x8836E732
	static int GET_TIME_SINCE_PLAYER_DROVE_AGAINST_TRAFFIC(Player player) { return invoke<int>(0xFBD9F0, player); } // 0xDB89591E290D9182 0x9F27D00E
	static BOOL IS_PLAYER_FREE_FOR_AMBIENT_TASK(Player player) { return invoke<BOOL>(0xFBDA30, player); } // 0xDCCFD3F106C36AB4 0x85C7E232
	static Player PLAYER_ID() { return invoke<Player>(0xFBDA60); } // 0x4F8644AF03D0E0D6 0x8AEA886C
	static Ped PLAYER_PED_ID() { return invoke<Ped>(0xFBDAA0); } // 0xD80958FC74E988A6 0xFA92E226
	static int NETWORK_PLAYER_ID_TO_INT() { return invoke<int>(0xFBDAE0); } // 0xEE68096F9F37341E 0x8DD5B838
	static BOOL HAS_FORCE_CLEANUP_OCCURRED(int cleanupFlags) { return invoke<BOOL>(0xFBDB20, cleanupFlags); } // 0xC968670BFACE42D9 0x4B37333C
	static void FORCE_CLEANUP(int cleanupFlags) { invoke<Void>(0xFBDB60, cleanupFlags); } // 0xBC8983F38F78ED51 0xFDAAEA2B
	static void FORCE_CLEANUP_FOR_ALL_THREADS_WITH_THIS_NAME(char* name, int cleanupFlags) { invoke<Void>(0xFBDBA0, name, cleanupFlags); } // 0x4C68DDDDF0097317 0x04256C73
	static void FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(int id, int cleanupFlags) { invoke<Void>(0xFBDBD0, id, cleanupFlags); } // 0xF745B37630DF176B 0x882D3EB3
	static int GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP() { return invoke<int>(0xFBDC10); } // 0x9A41CF4674A12272 0x39AA9FC8
	static void SET_PLAYER_MAY_ONLY_ENTER_THIS_VEHICLE(Player player, Vehicle vehicle) { invoke<Void>(0xFBDC40, player, vehicle); } // 0x8026FF78F208978A 0xA454DD29
	static void SET_PLAYER_MAY_NOT_ENTER_ANY_VEHICLE(Player player) { invoke<Void>(0xFBDC50, player); } // 0x1DE37BBF9E9CC14A 0xAF7AFCC4
	static Any GIVE_ACHIEVEMENT_TO_PLAYER(int achId) { return invoke<Any>(0xFBDC90, achId); } // 0xBEC7076D64130195 0x822BC992
	static BOOL _SET_ACHIEVEMENT_PROGRESSION(int achId, int progression) { return invoke<BOOL>(0xFBDCC0, achId, progression); } // 0xC2AFFFDABBDC2C5C
	static int _GET_ACHIEVEMENT_PROGRESSION(int achId) { return invoke<int>(0xFBDCF0, achId); } // 0x1C186837D0619335
	static BOOL HAS_ACHIEVEMENT_BEEN_PASSED(int achievement) { return invoke<BOOL>(0xFBDD20, achievement); } // 0x867365E111A3B6EB 0x136A5BE9
	static BOOL IS_PLAYER_ONLINE() { return invoke<BOOL>(0xFBDD50); } // 0xF25D331DC2627BBC 0x9FAB6729
	static BOOL IS_PLAYER_LOGGING_IN_NP() { return invoke<BOOL>(0xFBDD80); } // 0x74556E1420867ECA 0x8F72FAD0
	static void DISPLAY_SYSTEM_SIGNIN_UI(BOOL unk) { invoke<Void>(0xFBDD90, unk); } // 0x94DD7888C10A979E 0x4264CED2
	static BOOL IS_SYSTEM_UI_BEING_DISPLAYED() { return invoke<BOOL>(0xFBDDA0); } // 0x5D511E3867C87139 0xE495B6DA
	static void SET_PLAYER_INVINCIBLE(Player player, BOOL toggle) { invoke<Void>(0xFBDDC0, player, toggle); } // 0x239528EACDC3E7DE 0xDFB9A2A2
	static BOOL GET_PLAYER_INVINCIBLE(Player player) { return invoke<BOOL>(0xFBDE40, player); } // 0xB721981B2B939E07 0x680C90EE
	static void _0xCAC57395B151135F(Player player, BOOL p1) { invoke<Void>(0xFBDEF0, player, p1); } // 0xCAC57395B151135F 0x00563E0D
	static void REMOVE_PLAYER_HELMET(Player player, BOOL p2) { invoke<Void>(0xFBDF40, player, p2); } // 0xF3AC26D3CC576528 0x6255F3B4
	static void GIVE_PLAYER_RAGDOLL_CONTROL(Player player, BOOL toggle) { invoke<Void>(0xFBDF90, player, toggle); } // 0x3C49C870E66F0A28 0xC7B4D7AC
	static void SET_PLAYER_LOCKON(Player player, BOOL toggle) { invoke<Void>(0xFBDFF0, player, toggle); } // 0x5C8B2F450EE4328E 0x0B270E0F
	static void SET_PLAYER_TARGETING_MODE(int targetMode) { invoke<Void>(0xFBE030, targetMode); } // 0xB1906895227793F3 0x61CAE253
	static void _0x5702B917B99DB1CD(int p0) { invoke<Void>(0xFBE070, p0); } // 0x5702B917B99DB1CD
	static BOOL _0xB9CF1F793A9F1BF1() { return invoke<BOOL>(0xFBE080); } // 0xB9CF1F793A9F1BF1
	static void CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(Player player) { invoke<Void>(0xFBE0C0, player); } // 0xF0B67A4DE6AB5F98 0x1D31CBBD
	static BOOL HAS_PLAYER_DAMAGED_AT_LEAST_ONE_PED(Player player) { return invoke<BOOL>(0xFBE0F0, player); } // 0x20CE80B0C2BF4ACC 0x14F52453
	static void CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_NON_ANIMAL_PED(Player player) { invoke<Void>(0xFBE140, player); } // 0x4AACB96203D11A31 0x7E3BFBC5
	static BOOL HAS_PLAYER_DAMAGED_AT_LEAST_ONE_NON_ANIMAL_PED(Player player) { return invoke<BOOL>(0xFBE170, player); } // 0xE4B90F367BD81752 0xA3707DFC
	static void SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(Player player, float multiplier) { invoke<Void>(0xFBE1C0, player, multiplier); } // 0xCA7DC8329F0A1E9E 0xF20F72E5
	static void SET_SWIM_MULTIPLIER_FOR_PLAYER(Player player, float multiplier) { invoke<Void>(0xFBE220, player, multiplier); } // 0xA91C6F0FF7D16A13 0xB986FF47
	static void SET_RUN_SPRINT_MULTIPLIER_FOR_PLAYER(Player player, float multiplier) { invoke<Void>(0xFBE280, player, multiplier); } // 0x6DB47AA77FD94E09 0x825423C2
	static int GET_TIME_SINCE_LAST_ARREST() { return invoke<int>(0xFBE2E0); } // 0x5063F92F07C2A316 0x62824EF4
	static int GET_TIME_SINCE_LAST_DEATH() { return invoke<int>(0xFBE310); } // 0xC7034807558DDFCA 0x24BC5AC0
	static void ASSISTED_MOVEMENT_CLOSE_ROUTE() { invoke<Void>(0xFBE340); } // 0xAEBF081FFC0A0E5E 0xF23277F3
	static void ASSISTED_MOVEMENT_FLUSH_ROUTE() { invoke<Void>(0xFBE390); } // 0x8621390F0CDCFE1F 0xD04568B9
	static void SET_PLAYER_FORCED_AIM(Player player, BOOL toggle) { invoke<Void>(0xFBE3C0, player, toggle); } // 0x0FEE4F80AC44A726 0x94E42E2E
	static void SET_PLAYER_FORCED_ZOOM(Player player, BOOL toggle) { invoke<Void>(0xFBE400, player, toggle); } // 0x75E7D505F2B15902 0xB0C576CB
	static void SET_PLAYER_FORCE_SKIP_AIM_INTRO(Player player, BOOL toggle) { invoke<Void>(0xFBE450, player, toggle); } // 0x7651BC64AE59E128 0x374F42F0
	static void DISABLE_PLAYER_FIRING(Player player, BOOL toggle) { invoke<Void>(0xFBE4A0, player, toggle); } // 0x5E6CC07646BBEAB8 0x30CB28CB
	static void _0xB885852C39CC265D() { invoke<Void>(0xFBE530); } // 0xB885852C39CC265D
	static void SET_DISABLE_AMBIENT_MELEE_MOVE(Player player, BOOL toggle) { invoke<Void>(0xFBE550, player, toggle); } // 0x2E8AABFA40A84F8C 0xCCD937E7
	static void SET_PLAYER_MAX_ARMOUR(Player player, int value) { invoke<Void>(0xFBE5A0, player, value); } // 0x77DFCCF5948B8C71 0xC6C3C53B
	static void SPECIAL_ABILITY_DEACTIVATE(Player player) { invoke<Void>(0xFBE700, player); } // 0xD6A953C6D1492057 0x80C2AB09
	static void SPECIAL_ABILITY_DEACTIVATE_FAST(Player player) { invoke<Void>(0xFBE740, player); } // 0x9CB5CE07A3968D5A 0x0751908A
	static void SPECIAL_ABILITY_RESET(Player player) { invoke<Void>(0xFBE780, player); } // 0x375F0E738F861A94 0xA7D8BCD3
	static void _0xC9A763D8FE87436A(Player player) { invoke<Void>(0xFBE7C0, player); } // 0xC9A763D8FE87436A 0x4136829A
	static void SPECIAL_ABILITY_CHARGE_SMALL(Player player, BOOL p1, BOOL p2) { invoke<Void>(0xFBE800, player, p1, p2); } // 0x2E7B9B683481687D 0x6F463F56
	static void SPECIAL_ABILITY_CHARGE_MEDIUM(Player player, BOOL p1, BOOL p2) { invoke<Void>(0xFBE880, player, p1, p2); } // 0xF113E3AA9BC54613 0xAB55D8F3
	static void SPECIAL_ABILITY_CHARGE_LARGE(Player player, BOOL p1, BOOL p2) { invoke<Void>(0xFBE900, player, p1, p2); } // 0xF733F45FA4497D93 0xF440C04D
	static void SPECIAL_ABILITY_CHARGE_CONTINUOUS(Player player, Ped p2) { invoke<Void>(0xFBE980, player, p2); } // 0xED481732DFF7E997 0x5FEE98A2
	static void SPECIAL_ABILITY_CHARGE_ABSOLUTE(Player player, int p1, BOOL p2) { invoke<Void>(0xFBE9E0, player, p1, p2); } // 0xB7B0870EB531D08D 0x72429998
	static void SPECIAL_ABILITY_CHARGE_NORMALIZED(Player player, float normalizedValue, BOOL p2) { invoke<Void>(0xFBEA40, player, normalizedValue, p2); } // 0xA0696A65F009EE18 0x8C7E68C1
	static void SPECIAL_ABILITY_FILL_METER(Player player, BOOL p1) { invoke<Void>(0xFBEAA0, player, p1); } // 0x3DACA8DDC6FD4980 0xB71589DA
	static void SPECIAL_ABILITY_DEPLETE_METER(Player player, BOOL p1) { invoke<Void>(0xFBEAF0, player, p1); } // 0x1D506DBBBC51E64B 0x9F80F6DF
	static void SPECIAL_ABILITY_LOCK(Hash playerModel) { invoke<Void>(0xFBEB40, playerModel); } // 0x6A09D0D590A47D13 0x1B7BB388
	static void SPECIAL_ABILITY_UNLOCK(Hash playerModel) { invoke<Void>(0xFBEB50, playerModel); } // 0xF145F3BE2EFA9A3B 0x1FDB2919
	static BOOL IS_SPECIAL_ABILITY_UNLOCKED(Hash playerModel) { return invoke<BOOL>(0xFBEB60, playerModel); } // 0xC6017F6A6CDFA694 0xC9C75E82
	static BOOL IS_SPECIAL_ABILITY_ACTIVE(Player player) { return invoke<BOOL>(0xFBEB90, player); } // 0x3E5F7FC85D854E15 0x1B17E334
	static BOOL IS_SPECIAL_ABILITY_METER_FULL(Player player) { return invoke<BOOL>(0xFBEBE0, player); } // 0x05A1FE504B7F2587 0x2E19D7F6
	static void ENABLE_SPECIAL_ABILITY(Player player, BOOL toggle) { invoke<Void>(0xFBEC30, player, toggle); } // 0x181EC197DAEFE121 0xC86C1B4E
	static BOOL IS_SPECIAL_ABILITY_ENABLED(Player player) { return invoke<BOOL>(0xFBEC80, player); } // 0xB1D200FE26AEF3CB 0xC01238CC
	static void SET_SPECIAL_ABILITY_MULTIPLIER(float multiplier) { invoke<Void>(0xFBECD0, multiplier); } // 0xA49C426ED0CA4AB7 0xFF1BC556
	static void _0xFFEE8FA29AB9A18E(Player player) { invoke<Void>(0xFBECF0, player); } // 0xFFEE8FA29AB9A18E 0x5D0FE25B
	static BOOL _0x5FC472C501CCADB3(Player player) { return invoke<BOOL>(0xFBED30, player); } // 0x5FC472C501CCADB3 0x46E7E31D
	static BOOL _0xF10B44FD479D69F3(Player player, int p1) { return invoke<BOOL>(0xFBEDB0, player, p1); } // 0xF10B44FD479D69F3 0x1E359CC8
	static BOOL _0xDD2620B7B9D16FF1(Player player, float p1) { return invoke<BOOL>(0xFBEE50, player, p1); } // 0xDD2620B7B9D16FF1 0x8CB53C9F
	static void START_PLAYER_TELEPORT(Player player, float x, float y, float z, float heading, BOOL p5, BOOL p6, BOOL p7) { invoke<Void>(0xFBEE80, player, x, y, z, heading, p5, p6, p7); } // 0xAD15F075A4DA0FDE 0xC552E06C
	static BOOL _HAS_PLAYER_TELEPORT_FINISHED(Player player) { return invoke<BOOL>(0xFBEEC0, player); } // 0xE23D5873C2394C61
	static void STOP_PLAYER_TELEPORT() { invoke<Void>(0xFBEF10); } // 0xC449EDED9D73009C 0x86AB8DBB
	static BOOL IS_PLAYER_TELEPORT_ACTIVE() { return invoke<BOOL>(0xFBEF20); } // 0x02B15662D7F8886F 0x3A11D118
	static float GET_PLAYER_CURRENT_STEALTH_NOISE(Player player) { return invoke<float>(0xFBEF40, player); } // 0x2F395D61F3A1F877 0xC3B02362
	static void SET_PLAYER_HEALTH_RECHARGE_MULTIPLIER(Player player, float regenRate) { invoke<Void>(0xFBEF90, player, regenRate); } // 0x5DB660B38DD98A31 0x45514731
	static void SET_PLAYER_WEAPON_DAMAGE_MODIFIER(Player player, float damageAmount) { invoke<Void>(0xFBF0E0, player, damageAmount); } // 0xCE07B9F7817AADA3 0xB02C2F39
	static void SET_PLAYER_WEAPON_DEFENSE_MODIFIER(Player player, ScrHandle modifier) { invoke<Void>(0xFBF130, player, modifier); } // 0x2D83BC011CA14A3C 0xAE446344
	static void SET_PLAYER_MELEE_WEAPON_DAMAGE_MODIFIER(Player player, float modifier) { invoke<Void>(0xFBF1D0, player, modifier); } // 0x4A3DC7ECCC321032 0x362E69AD
	static void SET_PLAYER_MELEE_WEAPON_DEFENSE_MODIFIER(Player player, float modifier) { invoke<Void>(0xFBF230, player, modifier); } // 0xAE540335B4ABC4E2 0x9F3D577F
	static void SET_PLAYER_VEHICLE_DAMAGE_MODIFIER(Player player, float damageAmount) { invoke<Void>(0xFBF280, player, damageAmount); } // 0xA50E117CDDF82F0C 0x823ECA63
	static void SET_PLAYER_VEHICLE_DEFENSE_MODIFIER(Player player, float modifier) { invoke<Void>(0xFBF2D0, player, modifier); } // 0x4C60E6EFDAFF2462 0xA16626C7
	static void SET_PLAYER_PARACHUTE_TINT_INDEX(Player player, int tintIndex) { invoke<Void>(0xFBF410, player, tintIndex); } // 0xA3D0E54541D9A5E5 0x8EA12EDB
	static void GET_PLAYER_PARACHUTE_TINT_INDEX(Player player, int* tintIndex) { invoke<Void>(0xFBF450, player, tintIndex); } // 0x75D3F7A1B0D9B145 0x432B0509
	static void SET_PLAYER_RESERVE_PARACHUTE_TINT_INDEX(Player player, int index) { invoke<Void>(0xFBF490, player, index); } // 0xAF04C87F5DC1DF38 0x70689638
	static void GET_PLAYER_RESERVE_PARACHUTE_TINT_INDEX(Player player, int* index) { invoke<Void>(0xFBF4D0, player, index); } // 0xD5A016BC3C09CF40 0x77B8EF01
	static void SET_PLAYER_PARACHUTE_PACK_TINT_INDEX(Player player, int tintIndex) { invoke<Void>(0xFBF510, player, tintIndex); } // 0x93B0FB27C9A04060 0xD79D5D1B
	static void GET_PLAYER_PARACHUTE_PACK_TINT_INDEX(Player player, int* tintIndex) { invoke<Void>(0xFBF550, player, tintIndex); } // 0x6E9C742F340CE5A2 0x4E418E13
	static void SET_PLAYER_HAS_RESERVE_PARACHUTE(Player player) { invoke<Void>(0xFBF590, player); } // 0x7DDAB28D31FAC363 0xA3E4798E
	static BOOL GET_PLAYER_HAS_RESERVE_PARACHUTE(Player player) { return invoke<BOOL>(0xFBF5C0, player); } // 0x5DDFE2FF727F3CA3 0x30DA1DA1
	static void SET_PLAYER_CAN_LEAVE_PARACHUTE_SMOKE_TRAIL(Player player, BOOL enabled) { invoke<Void>(0xFBF600, player, enabled); } // 0xF401B182DBA8AF53 0x832DEB7A
	static void SET_PLAYER_PARACHUTE_SMOKE_TRAIL_COLOR(Player player, int r, int g, int b) { invoke<Void>(0xFBF650, player, r, g, b); } // 0x8217FD371A4625CF 0x14FE9264
	static void GET_PLAYER_PARACHUTE_SMOKE_TRAIL_COLOR(Player player, int* r, int* g, int* b) { invoke<Void>(0xFBF700, player, r, g, b); } // 0xEF56DBABD3CD4887 0xF66E5CDD
	static void SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(Player player, int flags) { invoke<Void>(0xFBF770, player, flags); } // 0x11D5F725F0E780E0 0x725C6174
	static void SET_PLAYER_NOISE_MULTIPLIER(Player player, float multiplier) { invoke<Void>(0xFBF7A0, player, multiplier); } // 0xDB89EF50FF25FCE9 0x15786DD1
	static void SET_PLAYER_SNEAKING_NOISE_MULTIPLIER(Player player, float multiplier) { invoke<Void>(0xFBF7F0, player, multiplier); } // 0xB2C1A29588A9F47C 0x8D2D89C4
	static BOOL CAN_PED_HEAR_PLAYER(Player player, Ped ped) { return invoke<BOOL>(0xFBF840, player, ped); } // 0xF297383AA91DCA29 0x1C70B2EB
	static void SIMULATE_PLAYER_INPUT_GAIT(Player control, float amount, int gaitType, float speed, BOOL p4, BOOL p5) { invoke<Void>(0xFBF900, control, amount, gaitType, speed, p4, p5); } // 0x477D5D63E63ECA5D 0x0D77CC34
	static void RESET_PLAYER_INPUT_GAIT(Player player) { invoke<Void>(0xFBF990, player); } // 0x19531C47A2ABD691 0x4A701EE1
	static void SET_AUTO_GIVE_PARACHUTE_WHEN_ENTER_PLANE(Player player, BOOL toggle) { invoke<Void>(0xFBF9D0, player, toggle); } // 0x9F343285A00B4BB6 0xA97C2059
	static void _0xD2B315B6689D537D(Player player, BOOL p1) { invoke<Void>(0xFBFA20, player, p1); } // 0xD2B315B6689D537D 0xA25D767E
	static void SET_PLAYER_STEALTH_PERCEPTION_MODIFIER(Player player, float value) { invoke<Void>(0xFBFA70, player, value); } // 0x4E9021C1FCDD507A 0x3D26105F
	static BOOL _0x690A61A6D13583F6(Ped p0) { return invoke<BOOL>(0xFBFAD0, p0); } // 0x690A61A6D13583F6 0x1D371529
	static void _0x9EDD76E87D5D51BA(Player player) { invoke<Void>(0xFBFB10, player); } // 0x9EDD76E87D5D51BA 0xE30A64DC
	static void SET_PLAYER_SIMULATE_AIMING(Player player, BOOL toggle) { invoke<Void>(0xFBFB40, player, toggle); } // 0xC54C95DA968EC5B5 0xF1E0CAFC
	static void SET_PLAYER_CLOTH_PIN_FRAMES(Player player, BOOL toggle) { invoke<Void>(0xFBFB80, player, toggle); } // 0x749FADDF97DFE930 0xF7A0F00F
	static void SET_PLAYER_CLOTH_PACKAGE_INDEX(int index) { invoke<Void>(0xFBFBC0, index); } // 0x9F7BBA2EA6372500 0xB8209F16
	static void SET_PLAYER_CLOTH_LOCK_COUNTER(int value) { invoke<Void>(0xFBFBF0, value); } // 0x14D913B777DFF5DA 0x8D9FD4D1
	static void PLAYER_ATTACH_VIRTUAL_BOUND(float p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7) { invoke<Void>(0xFBFC20, p0, p1, p2, p3, p4, p5, p6, p7); } // 0xED51733DC73AED51 0xECD12E60
	static void PLAYER_DETACH_VIRTUAL_BOUND() { invoke<Void>(0xFBFC40); } // 0x1DD5897E2FA6E7C9 0x96100EA4
	static BOOL HAS_PLAYER_BEEN_SPOTTED_IN_STOLEN_VEHICLE(Player player) { return invoke<BOOL>(0xFBFCA0, player); } // 0xD705740BB0A1CF4C 0x4A01B76A
	static BOOL _0x38D28DA81E4E9BF9(Player player) { return invoke<BOOL>(0xFBFCF0, player); } // 0x38D28DA81E4E9BF9 0x013B4F72
	static BOOL _0xBC0753C9CA14B506(Player player, int p1, BOOL p2) { return invoke<BOOL>(0xFBFD70, player, p1, p2); } // 0xBC0753C9CA14B506 0x9DF75B2A
	static void _EXPAND_WORLD_LIMITS(float x, float y, float z) { invoke<Void>(0xFBFDE0, x, y, z); } // 0x5006D96C995A5827
	static BOOL IS_PLAYER_RIDING_TRAIN(Player player) { return invoke<BOOL>(0xFBFEA0, player); } // 0x4EC12697209F2196 0x9765E71D
	static BOOL HAS_PLAYER_LEFT_THE_WORLD(Player player) { return invoke<BOOL>(0xFBFF00, player); } // 0xD55DDFB47991A294 0xFEA40B6C
	static void _0xFF300C7649724A0B(Player player, BOOL p1) { invoke<Void>(0xFBFF50, player, p1); } // 0xFF300C7649724A0B 0xAD8383FA
	static void SET_PLAYER_PARACHUTE_VARIATION_OVERRIDE(Player player, int p1, Any p2, Any p3, BOOL p4) { invoke<Void>(0xFBFFA0, player, p1, p2, p3, p4); } // 0xD9284A8C0D48352C 0x9254249D
	static void CLEAR_PLAYER_PARACHUTE_VARIATION_OVERRIDE(Player player) { invoke<Void>(0xFC0010, player); } // 0x0F4CC924CF8C7B21 0xFD60F5AB
	static void SET_PLAYER_PARACHUTE_MODEL_OVERRIDE(Player player, Hash model) { invoke<Void>(0xFC0040, player, model); } // 0x977DB4641F6FC3DB 0x5D382498
	static void CLEAR_PLAYER_PARACHUTE_MODEL_OVERRIDE(Player player) { invoke<Void>(0xFC0080, player); } // 0x8753997EB5F6EE3F 0x6FF034BB
	static void SET_PLAYER_PARACHUTE_PACK_MODEL_OVERRIDE(Player player, Hash model) { invoke<Void>(0xFC00C0, player, model); } // 0xDC80A4C2F18A2B64 0xA877FF5E
	static void CLEAR_PLAYER_PARACHUTE_PACK_MODEL_OVERRIDE(Player player) { invoke<Void>(0xFC0100, player); } // 0x10C54E4389C12B42 0xBB62AAC5
	static void DISABLE_PLAYER_VEHICLE_REWARDS(Player player) { invoke<Void>(0xFC0140, player); } // 0xC142BE3BB9CE125F 0x8C6E611D
	static void _0x2F7CEB6520288061(BOOL p0) { invoke<Void>(0xFC0170, p0); } // 0x2F7CEB6520288061 0x2849D4B2
	static void _0x5DC40A8869C22141(BOOL p0, ScrHandle p1) { invoke<Void>(0xFC01B0, p0, p1); } // 0x5DC40A8869C22141
	static BOOL _0x65FAEE425DE637B0(Player p0) { return invoke<BOOL>(0xFC0200, p0); } // 0x65FAEE425DE637B0
	static void _0x5501B7A5CDB79D37(Player p0) { invoke<Void>(0xFC0250, p0); } // 0x5501B7A5CDB79D37
	static Player _0x56105E599CAB0EFA(int* p0) { return invoke<Player>(0xFC0280, p0); } // 0x56105E599CAB0EFA
}

namespace ENTITY
{
	static BOOL DOES_ENTITY_EXIST(Object entity) { return invoke<BOOL>(0xEED0B0, entity); } // 0x7239B21A38F536BA 0x3AC90869
	static BOOL DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Entity entity, BOOL p2) { return invoke<BOOL>(0xEED110, entity, p2); } // 0xDDE6DF5AE89981D2 0xACFEB3F9
	static BOOL DOES_ENTITY_HAVE_DRAWABLE(Entity entity) { return invoke<BOOL>(0xEED190, entity); } // 0x060D6E96F8B8E48D 0xA5B33300
	static BOOL DOES_ENTITY_HAVE_PHYSICS(Entity entity) { return invoke<BOOL>(0xEED1F0, entity); } // 0xDA95EA3317CC5064 0x9BCD2979
	static BOOL HAS_ENTITY_ANIM_FINISHED(Entity entity, char* animDict, char* animName, int p3) { return invoke<BOOL>(0xEED250, entity, animDict, animName, p3); } // 0x20B711662962B472 0x1D9CAB92
	static BOOL HAS_ENTITY_BEEN_DAMAGED_BY_ANY_OBJECT(Entity entity) { return invoke<BOOL>(0xEED280, entity); } // 0x95EB9964FF5C5C65 0x6B74582E
	static BOOL HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(Entity entity) { return invoke<BOOL>(0xEED2E0, entity); } // 0x605F5A140F202491 0x53FD4A25
	static BOOL HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(Entity entity) { return invoke<BOOL>(0xEED340, entity); } // 0xDFD5033FDBA0A9C8 0x878C2CE0
	static BOOL HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Entity entity1, Entity entity2, BOOL p2) { return invoke<BOOL>(0xEED3A0, entity1, entity2, p2); } // 0xC86D67D52A707CF8 0x07FC77E0
	static BOOL HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Entity entity1, Entity entity2, int traceType) { return invoke<BOOL>(0xEED3D0, entity1, entity2, traceType); } // 0xFCDFF7B72D23A1AC 0x53576FA7
	static BOOL HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(Entity entity1, Entity entity2) { return invoke<BOOL>(0xEED400, entity1, entity2); } // 0x0267D00AF114F17A 0x210D87C8
	static BOOL HAS_ENTITY_COLLIDED_WITH_ANYTHING(Entity entity) { return invoke<BOOL>(0xEED430, entity); } // 0x8BAD02F0368D9E14 0x662A2F41
	static Hash GET_LAST_MATERIAL_HIT_BY_ENTITY(Entity entity) { return invoke<Hash>(0xEED4B0, entity); } // 0x5C3D0A935F535C4C 0xC0E3AA47
	static Vector3 GET_COLLISION_NORMAL_OF_LAST_HIT_FOR_ENTITY(Entity entity) { return invoke<Vector3>(0xEED590, entity); } // 0xE465D4AB7CA6AE72 0xAB415C07
	static void FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(Entity entity) { invoke<Void>(0xEED690, entity); } // 0x40FDEDB72F8293B2 0x58D9775F
	static float GET_ENTITY_ANIM_CURRENT_TIME(Entity entity, char* animDict, char* animName) { return invoke<float>(0xEED700, entity, animDict, animName); } // 0x346D81500D088F42 0x83943F41
	static float GET_ENTITY_ANIM_TOTAL_TIME(Entity entity, char* animDict, char* animName) { return invoke<float>(0xEED730, entity, animDict, animName); } // 0x50BD2730B191E360 0x433A9D18
	static float _GET_ANIM_DURATION(char* animDict, char* animName) { return invoke<float>(0xEED760, animDict, animName); } // 0xFEDDF04D62B8D790
	static Entity GET_ENTITY_ATTACHED_TO(Entity entity) { return invoke<Entity>(0xEED7A0, entity); } // 0x48C2BED9180FE123 0xFE1589F9
	static Vector3 GET_ENTITY_COORDS(Entity entity, BOOL alive) { return invoke<Vector3>(0xEED830, entity, alive); } // 0x3FEF770D40960D5A 0x1647F1CB
	static Vector3 GET_ENTITY_FORWARD_VECTOR(Entity entity) { return invoke<Vector3>(0xEED8E0, entity); } // 0x0A794A5A57F8DF91 0x84DCECBF
	static float GET_ENTITY_FORWARD_X(Entity entity) { return invoke<float>(0xEED990, entity); } // 0x8BB4EF4214E0E6D5 0x49FAE914
	static float GET_ENTITY_FORWARD_Y(Entity entity) { return invoke<float>(0xEEDA00, entity); } // 0x866A4A5FAE349510 0x9E2F917C
	static float GET_ENTITY_HEADING(Entity entity) { return invoke<float>(0xEEDA70, entity); } // 0xE83D4F9BA2A38914 0x972CC383
	static float _GET_ENTITY_PHYSICS_HEADING(Entity entity) { return invoke<float>(0xEEDB20, entity); } // 0x846BF6291198A71E
	static int GET_ENTITY_HEALTH(Entity entity) { return invoke<int>(0xEEDC90, entity); } // 0xEEF059FAD016D209 0x8E3222B7
	static int GET_ENTITY_MAX_HEALTH(Entity entity) { return invoke<int>(0xEEDCF0, entity); } // 0x15D757606D170C3C 0xC7AE6AA1
	static void SET_ENTITY_MAX_HEALTH(Entity entity, int value) { invoke<Void>(0xEEDD50, entity, value); } // 0x166E7CF68597D8B5 0x96F84DF8
	static float GET_ENTITY_HEIGHT(Entity entity, float X, float Y, float Z, BOOL atTop, BOOL inWorldCoords) { return invoke<float>(0xEEDDA0, entity, X, Y, Z, atTop, inWorldCoords); } // 0x5A504562485944DD 0xEE443481
	static float GET_ENTITY_HEIGHT_ABOVE_GROUND(Entity entity) { return invoke<float>(0xEEDDE0, entity); } // 0x1DD55701034110E5 0x57F56A4D
	static void GET_ENTITY_MATRIX(Entity entity, Vector3* rightVector, Vector3* forwardVector, Vector3* upVector, Vector3* position) { invoke<Void>(0xEEDE70, entity, rightVector, forwardVector, upVector, position); } // 0xECB2FC7235A7D137 0xEB9EB001
	static Hash GET_ENTITY_MODEL(Entity entity) { return invoke<Hash>(0xEEDFC0, entity); } // 0x9F47B058362C84B5 0xDAFCB3EC
	static Vector3 GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(Entity entity, float posX, float posY, float posZ) { return invoke<Vector3>(0xEEDFE0, entity, posX, posY, posZ); } // 0x2274BC1C4885E333 0x6477EC9E
	static Vector3 GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Entity entity, float offsetX, float offsetY, float offsetZ) { return invoke<Vector3>(0xEEE100, entity, offsetX, offsetY, offsetZ); } // 0x1899F328B0E12848 0xABCF043A
	static float GET_ENTITY_PITCH(Entity entity) { return invoke<float>(0xEEE1C0, entity); } // 0xD45DC2893621E1FE 0xFCE6ECE5
	static void GET_ENTITY_QUATERNION(Entity entity, float* x, float* y, float* z, float* w) { invoke<Void>(0xEEE1F0, entity, x, y, z, w); } // 0x7B3703D2D32DFA18 0x5154EC90
	static float GET_ENTITY_ROLL(Entity entity) { return invoke<float>(0xEEE330, entity); } // 0x831E0242595560DF 0x36610842
	static Vector3 GET_ENTITY_ROTATION(Entity entity, int rotationOrder) { return invoke<Vector3>(0xEEE360, entity, rotationOrder); } // 0xAFBD61CC738D9EB9 0x8FF45B04
	static Vector3 GET_ENTITY_ROTATION_VELOCITY(Entity entity) { return invoke<Vector3>(0xEEE4D0, entity); } // 0x213B91045D09B983 0x9BF8A73F
	static char* GET_ENTITY_SCRIPT(Entity entity, ScrHandle* script) { return invoke<char*>(0xEEE5B0, entity, script); } // 0xA6E9C38DB51D7748 0xB7F70784
	static float GET_ENTITY_SPEED(Entity entity) { return invoke<float>(0xEEE610, entity); } // 0xD5037BA82E12416F 0x9E1E4798
	static Vector3 GET_ENTITY_SPEED_VECTOR(Entity entity, BOOL relative) { return invoke<Vector3>(0xEEE6C0, entity, relative); } // 0x9A8D700A51CB7B0D 0x3ED2B997
	static float GET_ENTITY_UPRIGHT_VALUE(Entity entity) { return invoke<float>(0xEEE800, entity); } // 0x95EED5A694951F9F 0xF4268190
	static Vector3 GET_ENTITY_VELOCITY(Entity entity) { return invoke<Vector3>(0xEEE850, entity); } // 0x4805D2B1D8CF94A9 0xC14C9B6B
	static Object GET_OBJECT_INDEX_FROM_ENTITY_INDEX(Entity entity) { return invoke<Object>(0xEEE920, entity); } // 0xD7E3B9735C0F89D6 0xBC5A9C58
	static Ped GET_PED_INDEX_FROM_ENTITY_INDEX(Entity entity) { return invoke<Ped>(0xEEE930, entity); } // 0x04A2A40C73395041 0xC46F74AC
	static Vehicle GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(Entity entity) { return invoke<Vehicle>(0xEEE940, entity); } // 0x4B53F92932ADFAC0 0xC69CF43D
	static Vector3 GET_WORLD_POSITION_OF_ENTITY_BONE(Entity entity, int boneIndex) { return invoke<Vector3>(0xEEE950, entity, boneIndex); } // 0x44A8FCB8ED227738 0x7C6339DF
	static Player GET_NEAREST_PLAYER_TO_ENTITY(Entity entity) { return invoke<Player>(0xEEE9C0, entity); } // 0x7196842CB375CDB3 0xCE17FDEC
	static Player GET_NEAREST_PLAYER_TO_ENTITY_ON_TEAM(Entity entity, int team) { return invoke<Player>(0xEEEA00, entity, team); } // 0x4DC9A62F844D9337 0xB1808F56
	static int GET_ENTITY_TYPE(Entity entity) { return invoke<int>(0xEEEA40, entity); } // 0x8ACD366038D14505 0x0B1BD08D
	static int _GET_ENTITY_POPULATION_TYPE(Entity entity) { return invoke<int>(0xEEEAB0, entity); } // 0xF6F5161F4534EDFF
	static BOOL IS_AN_ENTITY(int handle) { return invoke<BOOL>(0xEEEB20, handle); } // 0x731EC8A916BD11A1 0xD4B9715A
	static BOOL IS_ENTITY_A_PED(Entity entity) { return invoke<BOOL>(0xEEEB60, entity); } // 0x524AC5ECEA15343E 0x55D33EAB
	static BOOL IS_ENTITY_A_MISSION_ENTITY(Entity entity) { return invoke<BOOL>(0xEEEBC0, entity); } // 0x0A7B270912999B3C 0x2632E124
	static BOOL IS_ENTITY_A_VEHICLE(Entity entity) { return invoke<BOOL>(0xEEEC20, entity); } // 0x6AC7003FA6E5575E 0xBE800B01
	static BOOL IS_ENTITY_AN_OBJECT(Entity entity) { return invoke<BOOL>(0xEEEC80, entity); } // 0x8D68C8FD0FACA94E 0x3F52E561
	static BOOL IS_ENTITY_AT_COORD(Entity entity, float xPos, float yPos, float zPos, float xSize, float ySize, float zSize, BOOL p7, BOOL p8, int p9) { return invoke<BOOL>(0xEEECE0, entity, xPos, yPos, zPos, xSize, ySize, zSize, p7, p8, p9); } // 0x20B60995556D004F 0xD749B606
	static BOOL IS_ENTITY_AT_ENTITY(Entity entity1, Entity entity2, float xSize, float ySize, float zSize, BOOL p5, BOOL p6, int p7) { return invoke<BOOL>(0xEEED30, entity1, entity2, xSize, ySize, zSize, p5, p6, p7); } // 0x751B70C3D034E187 0xDABDCB52
	static BOOL IS_ENTITY_ATTACHED(Entity entity) { return invoke<BOOL>(0xEEED80, entity); } // 0xB346476EF1A64897 0xEC1479D5
	static BOOL IS_ENTITY_ATTACHED_TO_ANY_OBJECT(Entity entity) { return invoke<BOOL>(0xEEEE10, entity); } // 0xCF511840CEEDE0CC 0x0B5DE340
	static BOOL IS_ENTITY_ATTACHED_TO_ANY_PED(Entity entity) { return invoke<BOOL>(0xEEEEA0, entity); } // 0xB1632E9A5F988D11 0x9D7A609C
	static BOOL IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(Entity entity) { return invoke<BOOL>(0xEEEF30, entity); } // 0x26AA915AD89BFB4B 0xDE5C995E
	static BOOL IS_ENTITY_ATTACHED_TO_ENTITY(Entity from, Entity to) { return invoke<BOOL>(0xEEEFC0, from, to); } // 0xEFBE71898A993728 0xB0ABFEA8
	static BOOL IS_ENTITY_DEAD(Entity entity) { return invoke<BOOL>(0xEEEFF0, entity); } // 0x5F9532F3B5CC2551 0xB6F7CBAC
	static BOOL IS_ENTITY_IN_AIR(Entity entity) { return invoke<BOOL>(0xEEF0B0, entity); } // 0x886E37EC497200B6 0xA4157987
	static BOOL IS_ENTITY_IN_ANGLED_AREA(Entity entity, float originX, float originY, float originZ, float edgeX, float edgeY, float edgeZ, float angle, BOOL p8, BOOL p9, Any p10) { return invoke<BOOL>(0xEEF0E0, entity, originX, originY, originZ, edgeX, edgeY, edgeZ, angle, p8, p9, p10); } // 0x51210CED3DA1C78A 0x883622FA
	static BOOL IS_ENTITY_IN_AREA(Entity entity, float x1, float y1, float z1, float x2, float y2, float z2, BOOL p7, BOOL p8, Any p9) { return invoke<BOOL>(0xEEF130, entity, x1, y1, z1, x2, y2, z2, p7, p8, p9); } // 0x54736AA40E271165 0x8C2DFA9D
	static BOOL IS_ENTITY_IN_ZONE(Entity entity, char* zone) { return invoke<BOOL>(0xEEF180, entity, zone); } // 0xB6463CF6AF527071 0x45C82B21
	static BOOL IS_ENTITY_IN_WATER(Entity entity) { return invoke<BOOL>(0xEEF270, entity); } // 0xCFB0A0D8EDD145A3 0x4C3C2508
	static float GET_ENTITY_SUBMERGED_LEVEL(Entity entity) { return invoke<float>(0xEEF2A0, entity); } // 0xE81AFC1BC4CC41CE 0x0170F68C
	static void _0x694E00132F2823ED(Entity entity, BOOL p1) { invoke<Void>(0xEEF310, entity, p1); } // 0x694E00132F2823ED 0x40C84A74
	static BOOL IS_ENTITY_ON_SCREEN(Entity entity) { return invoke<BOOL>(0xEEF370, entity); } // 0xE659E47AF827484B 0xC1FEC5ED
	static BOOL IS_ENTITY_PLAYING_ANIM(Entity entity, char* animDict, char* animName, int taskFlag) { return invoke<BOOL>(0xEEF410, entity, animDict, animName, taskFlag); } // 0x1F0B79228E461EC9 0x0D130D34
	static BOOL IS_ENTITY_STATIC(Entity entity) { return invoke<BOOL>(0xEEF440, entity); } // 0x1218E6886D3D8327 0x928E12E9
	static BOOL IS_ENTITY_TOUCHING_ENTITY(Entity entity, Entity targetEntity) { return invoke<BOOL>(0xEEF4A0, entity, targetEntity); } // 0x17FFC1B2BA35A494 0x6B931477
	static BOOL IS_ENTITY_TOUCHING_MODEL(Entity entity, Hash modelHash) { return invoke<BOOL>(0xEEF4D0, entity, modelHash); } // 0x0F42323798A58C8C 0x307E7611
	static BOOL IS_ENTITY_UPRIGHT(Entity entity, float angle) { return invoke<BOOL>(0xEEF500, entity, angle); } // 0x5333F526F6AB19AA 0x3BCDF4E1
	static BOOL IS_ENTITY_UPSIDEDOWN(Entity entity) { return invoke<BOOL>(0xEEF590, entity); } // 0x1DBD58820FA61D71 0x5ACAA48F
	static BOOL IS_ENTITY_VISIBLE(Entity entity) { return invoke<BOOL>(0xEEF600, entity); } // 0x47D6F43D77935C75 0x120B4ED5
	static BOOL IS_ENTITY_VISIBLE_TO_SCRIPT(Entity entity) { return invoke<BOOL>(0xEEF660, entity); } // 0xD796CB5BA8F20E32 0x5D240E9D
	static BOOL IS_ENTITY_OCCLUDED(Entity entity) { return invoke<BOOL>(0xEEF6E0, entity); } // 0xE31C2C72B8692B64 0x46BC5B40
	static BOOL WOULD_ENTITY_BE_OCCLUDED(Hash entityModelHash, float x, float y, float z, BOOL p4) { return invoke<BOOL>(0xEEF710, entityModelHash, x, y, z, p4); } // 0xEE5D2A122E09EC42 0xEA127CBC
	static BOOL IS_ENTITY_WAITING_FOR_WORLD_COLLISION(Entity entity) { return invoke<BOOL>(0xEEF750, entity); } // 0xD05BFF0C0A12C68F 0x00AB7A4A
	static void APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(Entity entity, int forceType, float x, float y, float z, BOOL p5, BOOL isDirectionRel, BOOL isForceRel, BOOL p8) { invoke<Void>(0xEEF7B0, entity, forceType, x, y, z, p5, isDirectionRel, isForceRel, p8); } // 0x18FF00FC7EFF559E 0x28924E98
	static void APPLY_FORCE_TO_ENTITY(Entity entity, int forceFlags, float x, float y, float z, float offX, float offY, float offZ, int boneIndex, BOOL isDirectionRel, BOOL ignoreUpVec, BOOL isForceRel, BOOL p12, BOOL p13) { invoke<Void>(0xEEF850, entity, forceFlags, x, y, z, offX, offY, offZ, boneIndex, isDirectionRel, ignoreUpVec, isForceRel, p12, p13); } // 0xC5F68BE9613E2D18 0xC1C0855A
	static void ATTACH_ENTITY_TO_ENTITY(Entity entity1, Entity entity2, int boneIndex, float xPos, float yPos, float zPos, float xRot, float yRot, float zRot, BOOL p9, BOOL useSoftPinning, BOOL collision, BOOL isPed, int vertexIndex, BOOL fixedRot) { invoke<Void>(0xEEF8D0, entity1, entity2, boneIndex, xPos, yPos, zPos, xRot, yRot, zRot, p9, useSoftPinning, collision, isPed, vertexIndex, fixedRot); } // 0x6B9BBD38AB0796DF 0xEC024237
	static void ATTACH_ENTITY_TO_ENTITY_PHYSICALLY(Entity entity1, Entity entity2, int boneIndex1, int boneIndex2, float xPos1, float yPos1, float zPos1, float xPos2, float yPos2, float zPos2, float xRot, float yRot, float zRot, float breakForce, BOOL fixedRot, BOOL p15, BOOL collision, BOOL p17, int p18) { invoke<Void>(0xEEF9B0, entity1, entity2, boneIndex1, boneIndex2, xPos1, yPos1, zPos1, xPos2, yPos2, zPos2, xRot, yRot, zRot, breakForce, fixedRot, p15, collision, p17, p18); } // 0xC3675780C92F90F9 0x0547417F
	static void PROCESS_ENTITY_ATTACHMENTS(Entity entity) { invoke<Void>(0xEEFA60, entity); } // 0xF4080490ADC51C6F 0x6909BA59
	static int GET_ENTITY_BONE_INDEX_BY_NAME(Entity entity, char* boneName) { return invoke<int>(0xEEFA70, entity, boneName); } // 0xFB71170B7E76ACBA 0xE4ECAC22
	static void CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Entity entity) { invoke<Void>(0xEEFB40, entity); } // 0xA72CD9CA74A5ECBA 0x2B83F43B
	static void DELETE_ENTITY(Entity* entity) { invoke<Void>(0xEEFBA0, entity); } // 0xAE3CBE5BF394C9C9 0xFAA3D236
	static void DETACH_ENTITY(Entity entity, BOOL p1, BOOL collision) { invoke<Void>(0xEEFBB0, entity, p1, collision); } // 0x961AC54BF0613F5D 0xC8EFCB41
	static void FREEZE_ENTITY_POSITION(Entity entity, BOOL toggle) { invoke<Void>(0xEEFBD0, entity, toggle); } // 0x428CA6DBD1094446 0x65C16D57
	static void _SET_ENTITY_SOMETHING(Entity entity, BOOL toggle) { invoke<Void>(0xEEFBF0, entity, toggle); } // 0x3910051CCECDB00C 0xD3850671
	static BOOL PLAY_ENTITY_ANIM(Entity entity, char* animName, char* animDict, float p3, BOOL loop, BOOL stayInAnim, BOOL p6, float delta, Any bitset) { return invoke<BOOL>(0xEEFCE0, entity, animName, animDict, p3, loop, stayInAnim, p6, delta, bitset); } // 0x7FB218262B810701 0x878753D5
	static BOOL PLAY_SYNCHRONIZED_ENTITY_ANIM(Entity entity, int syncedScene, char* animation, char* propName, float p4, float p5, Any p6, float p7) { return invoke<BOOL>(0xEEFD50, entity, syncedScene, animation, propName, p4, p5, p6, p7); } // 0xC77720A12FE14A86 0x012760AA
	static BOOL PLAY_SYNCHRONIZED_MAP_ENTITY_ANIM(float p0, float p1, float p2, float p3, Any p4, Any p5, Any* p6, Any* p7, float p8, float p9, Any p10, float p11) { return invoke<BOOL>(0xEEFDA0, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); } // 0xB9C54555ED30FBC4 0xEB4CBA74
	static BOOL STOP_SYNCHRONIZED_MAP_ENTITY_ANIM(float p0, float p1, float p2, float p3, Any p4, float p5) { return invoke<BOOL>(0xEEFE90, p0, p1, p2, p3, p4, p5); } // 0x11E79CAB7183B6F5 0x7253D5B2
	static Any STOP_ENTITY_ANIM(Entity entity, char* animation, char* animGroup, float p3) { return invoke<Any>(0xEEFF30, entity, animation, animGroup, p3); } // 0x28004F88151E03E0 0xC4769830
	static BOOL STOP_SYNCHRONIZED_ENTITY_ANIM(Entity entity, float p1, BOOL p2) { return invoke<BOOL>(0xEEFF50, entity, p1, p2); } // 0x43D3807C077261E3 0xE27D2FC1
	static BOOL HAS_ANIM_EVENT_FIRED(Entity entity, Hash actionHash) { return invoke<BOOL>(0xEEFF90, entity, actionHash); } // 0xEAF4CD9EA3E7E922 0x66571CA0
	static BOOL FIND_ANIM_EVENT_PHASE(char* animDictionary, char* animName, char* p2, Any* p3, Any* p4) { return invoke<BOOL>(0xEEFFC0, animDictionary, animName, p2, p3, p4); } // 0x07F1BE2BCCAA27A7 0xC41DDA62
	static void SET_ENTITY_ANIM_CURRENT_TIME(Entity entity, char* animDictionary, char* animName, float time) { invoke<Void>(0xEF0000, entity, animDictionary, animName, time); } // 0x4487C259F0F70977 0x99D90735
	static void SET_ENTITY_ANIM_SPEED(Entity entity, char* animDictionary, char* animName, float speedMultiplier) { invoke<Void>(0xEF0020, entity, animDictionary, animName, speedMultiplier); } // 0x28D1A16553C51776 0x3990C90A
	static void SET_ENTITY_AS_MISSION_ENTITY(Entity entity, BOOL p1, BOOL p2) { invoke<Void>(0xEF0040, entity, p1, p2); } // 0xAD738C3085FE7E11 0x5D1F9E0F
	static void SET_ENTITY_AS_NO_LONGER_NEEDED(Entity* entity) { invoke<Void>(0xEF0060, entity); } // 0xB736A491E64A32CF 0xADF2267C
	static void SET_PED_AS_NO_LONGER_NEEDED(Ped* ped) { invoke<Void>(0xEF0070, ped); } // 0x2595DD4236549CE3 0x9A388380
	static void SET_VEHICLE_AS_NO_LONGER_NEEDED(Vehicle* vehicle) { invoke<Void>(0xEF0080, vehicle); } // 0x629BFA74418D6239 0x9B0E10BE
	static void SET_OBJECT_AS_NO_LONGER_NEEDED(Object* object) { invoke<Void>(0xEF0090, object); } // 0x3AE22DEB5BA5A3E6 0x3F6B949F
	static void SET_ENTITY_CAN_BE_DAMAGED(Entity entity, BOOL toggle) { invoke<Void>(0xEF00A0, entity, toggle); } // 0x1760FFA8AB074D66 0x60B6E744
	static void SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(Entity entity, BOOL bCanBeDamaged, int relGroup) { invoke<Void>(0xEF01A0, entity, bCanBeDamaged, relGroup); } // 0xE22D8FDE858B8119 0x34165B5D
	static void SET_ENTITY_CAN_BE_TARGETED_WITHOUT_LOS(Entity entity, BOOL toggle) { invoke<Void>(0xEF0300, entity, toggle); } // 0xD3997889736FD899 0x3B13797C
	static void SET_ENTITY_COLLISION(Entity entity, BOOL toggle, BOOL keepPhysics) { invoke<Void>(0xEF0400, entity, toggle, keepPhysics); } // 0x1A9205C1B9EE827F 0x139FD37D
	static BOOL _GET_ENTITY_COLLISON_DISABLED(Entity entity) { return invoke<BOOL>(0xEF0430, entity); } // 0xCCF1E97BEFDAE480
	static void _SET_ENTITY_COLLISION_2(Entity entity, BOOL p1, BOOL p2) { invoke<Void>(0xEF0490, entity, p1, p2); } // 0x9EBC85ED0FFFE51C
	static void SET_ENTITY_COORDS(Entity entity, float xPos, float yPos, float zPos, BOOL xAxis, BOOL yAxis, BOOL zAxis, BOOL clearArea) { invoke<Void>(0xEF04C0, entity, xPos, yPos, zPos, xAxis, yAxis, zAxis, clearArea); } // 0x06843DA7060A026B 0xDF70B41B
	static void _SET_ENTITY_COORDS_2(Entity entity, float xPos, float yPos, float zPos, BOOL xAxis, BOOL yAxis, BOOL zAxis, BOOL clearArea) { invoke<Void>(0xEF0510, entity, xPos, yPos, zPos, xAxis, yAxis, zAxis, clearArea); } // 0x621873ECE1178967
	static void SET_ENTITY_COORDS_NO_OFFSET(Entity entity, float xPos, float yPos, float zPos, BOOL xAxis, BOOL yAxis, BOOL zAxis) { invoke<Void>(0xEF0560, entity, xPos, yPos, zPos, xAxis, yAxis, zAxis); } // 0x239A3351AC1DA385 0x4C83DE8D
	static void SET_ENTITY_DYNAMIC(Entity entity, BOOL toggle) { invoke<Void>(0xEF0590, entity, toggle); } // 0x1718DE8E3F2823CA 0x236F525B
	static void SET_ENTITY_HEADING(Entity entity, float heading) { invoke<Void>(0xEF0610, entity, heading); } // 0x8E2530AA8ADA980E 0xE0FF064D
	static void SET_ENTITY_HEALTH(Entity entity, int health) { invoke<Void>(0xEF0620, entity, health); } // 0x6B76DC1F3AE6E6A3 0xFBCD1831
	static void SET_ENTITY_INVINCIBLE(Entity entity, BOOL toggle) { invoke<Void>(0xEF0640, entity, toggle); } // 0x3882114BDE571AD4 0xC1213A21
	static void SET_ENTITY_IS_TARGET_PRIORITY(Entity entity, BOOL p1, float p2) { invoke<Void>(0xEF0710, entity, p1, p2); } // 0xEA02E132F5C68722 0x9729EE32
	static void SET_ENTITY_LIGHTS(Entity entity, BOOL toggle) { invoke<Void>(0xEF0830, entity, toggle); } // 0x7CFBA6A80BDF3874 0xE8FC85AF
	static void SET_ENTITY_LOAD_COLLISION_FLAG(Entity entity, BOOL toggle) { invoke<Void>(0xEF08B0, entity, toggle); } // 0x0DC7CABAB1E9B67E 0xC52F295B
	static BOOL HAS_COLLISION_LOADED_AROUND_ENTITY(Entity entity) { return invoke<BOOL>(0xEF0900, entity); } // 0xE9676F61BC0B3321 0x851687F9
	static void SET_ENTITY_MAX_SPEED(Entity entity, float speed) { invoke<Void>(0xEF0970, entity, speed); } // 0x0E46A3FCBDE2A1B1 0x46AFFED3
	static void SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Entity entity, BOOL toggle) { invoke<Void>(0xEF09E0, entity, toggle); } // 0x79F020FF9EDC0748 0x4B707F50
	static void SET_ENTITY_ONLY_DAMAGED_BY_RELATIONSHIP_GROUP(Entity entity, BOOL p1, Any p2) { invoke<Void>(0xEF0A60, entity, p1, p2); } // 0x7022BD828FA0B082 0x202237E2
	static void SET_ENTITY_PROOFS(Entity entity, BOOL bulletProof, BOOL fireProof, BOOL explosionProof, BOOL collisionProof, BOOL meleeProof, BOOL p6, BOOL p7, BOOL drownProof) { invoke<Void>(0xEF0B30, entity, bulletProof, fireProof, explosionProof, collisionProof, meleeProof, p6, p7, drownProof); } // 0xFAEE099C6F890BB8 0x7E9EAB66
	static void SET_ENTITY_QUATERNION(Entity entity, float x, float y, float z, float w) { invoke<Void>(0xEF0C70, entity, x, y, z, w); } // 0x77B21BE7AC540F07 0x83B6046F
	static void SET_ENTITY_RECORDS_COLLISIONS(Entity entity, BOOL toggle) { invoke<Void>(0xEF0E40, entity, toggle); } // 0x0A50A1EEDAD01E65 0x6B189A1A
	static void SET_ENTITY_ROTATION(Entity entity, float pitch, float roll, float yaw, int rotationOrder, BOOL p5) { invoke<Void>(0xEF0E90, entity, pitch, roll, yaw, rotationOrder, p5); } // 0x8524A8B0171D5E07 0x0A345EFE
	static void SET_ENTITY_VISIBLE(Entity entity, BOOL toggle, BOOL unk) { invoke<Void>(0xEF0EB0, entity, toggle, unk); } // 0xEA1C610A04DB6BBB 0xD043E8E1
	static void SET_ENTITY_VELOCITY(Entity entity, float x, float y, float z) { invoke<Void>(0xEF0F40, entity, x, y, z); } // 0x1C99BB7B6E96D16F 0xFF5A1988
	static void SET_ENTITY_HAS_GRAVITY(Entity entity, BOOL toggle) { invoke<Void>(0xEF0FD0, entity, toggle); } // 0x4A4722448F18EEF5 0xE2F262BF
	static void SET_ENTITY_LOD_DIST(Entity entity, int value) { invoke<Void>(0xEF1030, entity, value); } // 0x5927F96A78577363 0xD7ACC7AD
	static int GET_ENTITY_LOD_DIST(Entity entity) { return invoke<int>(0xEF1080, entity); } // 0x4159C2762B5791D6 0x4DA3D51F
	static void SET_ENTITY_ALPHA(Entity entity, int alphaLevel, int skin) { invoke<Void>(0xEF10E0, entity, alphaLevel, skin); } // 0x44A0870B7E92D7C0 0xAE667CB0
	static int GET_ENTITY_ALPHA(Entity entity) { return invoke<int>(0xEF1140, entity); } // 0x5A47B3B5E63E94C6 0x1560B017
	static void RESET_ENTITY_ALPHA(Entity entity) { invoke<Void>(0xEF11A0, entity); } // 0x9B1E824FFBB7027A 0x8A30761C
	static void _0x5C3B791D580E0BC2(Entity entity, float p1) { invoke<Void>(0xEF1260, entity, p1); } // 0x5C3B791D580E0BC2
	static void SET_ENTITY_ALWAYS_PRERENDER(Entity entity, BOOL toggle) { invoke<Void>(0xEF12C0, entity, toggle); } // 0xACAD101E1FB66689 0xD8FF798A
	static void SET_ENTITY_RENDER_SCORCHED(Entity entity, BOOL toggle) { invoke<Void>(0xEF1320, entity, toggle); } // 0x730F5F8D3F0F2050 0xAAC9317B
	static void SET_ENTITY_TRAFFICLIGHT_OVERRIDE(Entity entity, int state) { invoke<Void>(0xEF13A0, entity, state); } // 0x57C5DB656185EAC4 0xC47F5B91
	static void _0x78E8E3A640178255(Entity entity) { invoke<Void>(0xEF1400, entity); } // 0x78E8E3A640178255
	static void CREATE_MODEL_SWAP(float x, float y, float z, float radius, Hash originalModel, Hash newModel, BOOL p6) { invoke<Void>(0xEF1460, x, y, z, radius, originalModel, newModel, p6); } // 0x92C47782FDA8B2A3 0x0BC12F9E
	static void REMOVE_MODEL_SWAP(float x, float y, float z, float radius, Hash originalModel, Hash newModel, BOOL p6) { invoke<Void>(0xEF1540, x, y, z, radius, originalModel, newModel, p6); } // 0x033C0F9A64E229AE 0xCE0AA8BC
	static void CREATE_MODEL_HIDE(float x, float y, float z, float radius, Hash model, BOOL p5) { invoke<Void>(0xEF15D0, x, y, z, radius, model, p5); } // 0x8A97BCA30A0CE478 0x7BD5CF2F
	static void CREATE_MODEL_HIDE_EXCLUDING_SCRIPT_OBJECTS(float x, float y, float z, float radius, Hash model, BOOL p5) { invoke<Void>(0xEF16A0, x, y, z, radius, model, p5); } // 0x3A52AE588830BF7F 0x07AAF22C
	static void REMOVE_MODEL_HIDE(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoke<Void>(0xEF1770, p0, p1, p2, p3, p4, p5); } // 0xD9E3006FB3CBD765 0x993DBC10
	static void CREATE_FORCED_OBJECT(float x, float y, float z, Any p3, Hash modelHash, BOOL p5) { invoke<Void>(0xEF1800, x, y, z, p3, modelHash, p5); } // 0x150E808B375A385A 0x335190A2
	static void REMOVE_FORCED_OBJECT(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0xEF18D0, p0, p1, p2, p3, p4); } // 0x61B6775E83C0DB6F 0xAED73ADD
	static void SET_ENTITY_NO_COLLISION_ENTITY(Entity entity1, Entity entity2, BOOL unknown) { invoke<Void>(0xEF1950, entity1, entity2, unknown); } // 0xA53ED5520C07654A 0x1E11BFE9
	static void SET_ENTITY_MOTION_BLUR(Entity entity, BOOL toggle) { invoke<Void>(0xEF1970, entity, toggle); } // 0x295D82A8559F9150 0xE90005B8
	static void _0xE12ABE5E3A389A6C(Entity entity, BOOL p1) { invoke<Void>(0xEF19D0, entity, p1); } // 0xE12ABE5E3A389A6C 0x44767B31
	static void _0xA80AE305E0A3044F(Entity entity, BOOL p1) { invoke<Void>(0xEF1A50, entity, p1); } // 0xA80AE305E0A3044F 0xE224A6A5
	static void _0xDC6F8601FAF2E893(Entity entity, BOOL p1) { invoke<Void>(0xEF1AD0, entity, p1); } // 0xDC6F8601FAF2E893
	static void _0x2C2E3DC128F44309(Entity entity, BOOL p1) { invoke<Void>(0xEF1B40, entity, p1); } // 0x2C2E3DC128F44309
	static void _0x1A092BB0C3808B96(Entity entity, BOOL p1) { invoke<Void>(0xEF1BB0, entity, p1); } // 0x1A092BB0C3808B96
}

namespace PED
{
	static Ped CREATE_PED(int pedType, Hash modelHash, float x, float y, float z, float heading, BOOL isNetwork, BOOL thisScriptCheck) { return invoke<Ped>(0xFA2300, pedType, modelHash, x, y, z, heading, isNetwork, thisScriptCheck); } // 0xD49F9B0955C367DE 0x0389EF71
	static void DELETE_PED(Ped* ped) { invoke<Void>(0xFA2350, ped); } // 0x9614299DCB53E54B 0x13EFB9A0
	static Ped CLONE_PED(Ped ped, float heading, BOOL isNetwork, BOOL thisScriptCheck) { return invoke<Ped>(0xFA2360, ped, heading, isNetwork, thisScriptCheck); } // 0xEF29A16337FACADB 0x8C8A8D6E
	static void CLONE_PED_TO_TARGET(Ped ped, Ped targetPed) { invoke<Void>(0xFA2400, ped, targetPed); } // 0xE952D6431689AD9A 0xFC70EEC7
	static BOOL IS_PED_IN_VEHICLE(Ped ped, Vehicle vehicle, BOOL atGetIn) { return invoke<BOOL>(0xFA2550, ped, vehicle, atGetIn); } // 0xA3EE4A07279BB9DB 0x7DA6BC83
	static BOOL IS_PED_IN_MODEL(Ped ped, Hash modelHash) { return invoke<BOOL>(0xFA2580, ped, modelHash); } // 0x796D90EFB19AA332 0xA6438D4B
	static BOOL IS_PED_IN_ANY_VEHICLE(Ped ped, BOOL atGetIn) { return invoke<BOOL>(0xFA2660, ped, atGetIn); } // 0x997ABD671D25CA0B 0x3B0171EE
	static BOOL IS_COP_PED_IN_AREA_3D(float x1, float y1, float z1, float x2, float y2, float z2) { return invoke<BOOL>(0xFA2690, x1, y1, z1, x2, y2, z2); } // 0x16EC4839969F9F5E 0xB98DB96B
	static BOOL IS_PED_INJURED(Ped ped) { return invoke<BOOL>(0xFA2740, ped); } // 0x84A2DD9AC37C35C1 0x2530A087
	static BOOL IS_PED_HURT(Ped ped) { return invoke<BOOL>(0xFA27B0, ped); } // 0x5983BB449D7FDB12 0x69DFA0AF
	static BOOL IS_PED_FATALLY_INJURED(Ped ped) { return invoke<BOOL>(0xFA2810, ped); } // 0xD839450756ED5A80 0xBADA0093
	static BOOL IS_PED_DEAD_OR_DYING(Ped ped, BOOL p1) { return invoke<BOOL>(0xFA2880, ped, p1); } // 0x3317DEDB88C95038 0xCBDB7739
	static BOOL IS_CONVERSATION_PED_DEAD(Ped ped) { return invoke<BOOL>(0xFA2900, ped); } // 0xE0A0AEC214B1FABA 0x1FA39EFE
	static BOOL IS_PED_AIMING_FROM_COVER(Ped ped) { return invoke<BOOL>(0xFA2970, ped); } // 0x3998B1276A3300E5 0xDEBAB2AF
	static BOOL IS_PED_RELOADING(Ped ped) { return invoke<BOOL>(0xFA29A0, ped); } // 0x24B100C68C645951 0x961E1745
	static BOOL IS_PED_A_PLAYER(Ped ped) { return invoke<BOOL>(0xFA2A00, ped); } // 0x12534C348C6CB68B 0x404794CA
	static Ped CREATE_PED_INSIDE_VEHICLE(Vehicle vehicle, int pedType, Hash modelHash, int seat, BOOL isNetwork, BOOL thisScriptCheck) { return invoke<Ped>(0xFA2A60, vehicle, pedType, modelHash, seat, isNetwork, thisScriptCheck); } // 0x7DD959874C1FD534 0x3000F092
	static void SET_PED_DESIRED_HEADING(Ped ped, float heading) { invoke<Void>(0xFA2AA0, ped, heading); } // 0xAA5A7ECE2AA8FE70 0x961458F9
	static void _FREEZE_PED_CAMERA_ROTATION(Ped ped) { invoke<Void>(0xFA2B90, ped); } // 0xFF287323B0E2C69A 0x290421BE
	static BOOL IS_PED_FACING_PED(Ped ped, Ped otherPed, float angle) { return invoke<BOOL>(0xFA2BA0, ped, otherPed, angle); } // 0xD71649DB0A545AA3 0x0B775838
	static BOOL IS_PED_IN_MELEE_COMBAT(Ped ped) { return invoke<BOOL>(0xFA2BD0, ped); } // 0x4E209B2C1EAD5159 0xFD7814A5
	static BOOL IS_PED_STOPPED(Ped ped) { return invoke<BOOL>(0xFA2C40, ped); } // 0x530944F6F4B8A214 0xA0DC0B87
	static BOOL IS_PED_SHOOTING_IN_AREA(Ped ped, float x1, float y1, float z1, float x2, float y2, float z2, BOOL p7, BOOL p8) { return invoke<BOOL>(0xFA2CA0, ped, x1, y1, z1, x2, y2, z2, p7, p8); } // 0x7E9DFE24AC1E58EF 0x741BF04F
	static BOOL IS_ANY_PED_SHOOTING_IN_AREA(float x1, float y1, float z1, float x2, float y2, float z2, BOOL p6, BOOL p7) { return invoke<BOOL>(0xFA2CE0, x1, y1, z1, x2, y2, z2, p6, p7); } // 0xA0D3D71EA1086C55 0x91833867
	static BOOL IS_PED_SHOOTING(Ped ped) { return invoke<BOOL>(0xFA2D20, ped); } // 0x34616828CD07F1A1 0xE7C3405E
	static void SET_PED_ACCURACY(Ped ped, int accuracy) { invoke<Void>(0xFA2D80, ped, accuracy); } // 0x7AEFB85C1D49DEB6 0x6C17122E
	static int GET_PED_ACCURACY(Ped ped) { return invoke<int>(0xFA2E10, ped); } // 0x37F4AD56ECBC0CD6 0x0A2A0AA0
	static BOOL IS_PED_MODEL(Ped ped, Hash modelHash) { return invoke<BOOL>(0xFA2EB0, ped, modelHash); } // 0xC9D55B1A358A5BF7 0x5F1DDFCB
	static void EXPLODE_PED_HEAD(Ped ped, Hash weaponHash) { invoke<Void>(0xFA2F70, ped, weaponHash); } // 0x2D05CED3A38D0F3A 0x05CC1380
	static void REMOVE_PED_ELEGANTLY(Ped* ped) { invoke<Void>(0xFA2F80, ped); } // 0xAC6D445B994DF95E 0x4FFB8C6C
	static void ADD_ARMOUR_TO_PED(Ped ped, int amount) { invoke<Void>(0xFA2F90, ped, amount); } // 0x5BA652A0CD14DF2F 0xF686B26E
	static void SET_PED_ARMOUR(Ped ped, int amount) { invoke<Void>(0xFA3070, ped, amount); } // 0xCEA04D83135264CC 0x4E3A0CC4
	static void SET_PED_INTO_VEHICLE(Ped ped, Vehicle vehicle, int seatIndex) { invoke<Void>(0xFA3150, ped, vehicle, seatIndex); } // 0xF75B0D629E1C063D 0x07500C79
	static void SET_PED_ALLOW_VEHICLES_OVERRIDE(Ped ped, BOOL toggle) { invoke<Void>(0xFA3170, ped, toggle); } // 0x3C028C636A414ED9 0x58A80BD5
	static BOOL CAN_CREATE_RANDOM_PED(BOOL unk) { return invoke<BOOL>(0xFA31D0, unk); } // 0x3E8349C08E4B82E4 0xF9ABE88F
	static Ped CREATE_RANDOM_PED(float posX, float posY, float posZ) { return invoke<Ped>(0xFA3290, posX, posY, posZ); } // 0xB4AC7D0CF06BFE8F 0x5A949543
	static Ped CREATE_RANDOM_PED_AS_DRIVER(Vehicle vehicle, BOOL returnHandle) { return invoke<Ped>(0xFA3310, vehicle, returnHandle); } // 0x9B62392B474F44A0 0xB927CE9A
	static BOOL CAN_CREATE_RANDOM_DRIVER() { return invoke<BOOL>(0xFA3340); } // 0xB8EB95E5B4E56978 0x99861609
	static BOOL CAN_CREATE_RANDOM_BIKE_RIDER() { return invoke<BOOL>(0xFA3390); } // 0xEACEEDA81751915C 0x7018BE31
	static void SET_PED_MOVE_ANIMS_BLEND_OUT(Ped ped) { invoke<Void>(0xFA33F0, ped); } // 0x9E8C908F41584ECD 0x20E01957
	static void SET_PED_CAN_BE_DRAGGED_OUT(Ped ped, BOOL toggle) { invoke<Void>(0xFA3460, ped, toggle); } // 0xC1670E958EEE24E5 0xAA7F1131
	static void _0xF2BEBCDFAFDAA19E(BOOL toggle) { invoke<Void>(0xFA34C0, toggle); } // 0xF2BEBCDFAFDAA19E 0x6CD58238
	static BOOL IS_PED_MALE(Ped ped) { return invoke<BOOL>(0xFA34E0, ped); } // 0x6D9F5FAA7488BA46 0x90950455
	static BOOL IS_PED_HUMAN(Ped ped) { return invoke<BOOL>(0xFA3550, ped); } // 0xB980061DA992779D 0x194BB7B0
	static Vehicle GET_VEHICLE_PED_IS_IN(Ped ped, BOOL lastVehicle) { return invoke<Vehicle>(0xFA35D0, ped, lastVehicle); } // 0x9A9112A0FE9A4713 0xAFE92319
	static void RESET_PED_LAST_VEHICLE(Ped ped) { invoke<Void>(0xFA3600, ped); } // 0xBB8DE8CF6A8DD8BB 0x5E3B5942
	static void SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(float multiplier) { invoke<Void>(0xFA3660, multiplier); } // 0x95E3D6257B166CF2 0x039C82BB
	static void SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(float p0, float p1) { invoke<Void>(0xFA3670, p0, p1); } // 0x7A556143A1C03898 0x2909ABF0
	static void _0x5A7F62FDA59759BD() { invoke<Void>(0xFA3690); } // 0x5A7F62FDA59759BD 0xB48C0C04
	static void SET_SCRIPTED_CONVERSION_COORD_THIS_FRAME(float x, float y, float z) { invoke<Void>(0xFA36A0, x, y, z); } // 0x5086C7843552CF85 0x25EA2AA5
	static void SET_PED_NON_CREATION_AREA(float x1, float y1, float z1, float x2, float y2, float z2) { invoke<Void>(0xFA3700, x1, y1, z1, x2, y2, z2); } // 0xEE01041D559983EA 0x7A97283F
	static void CLEAR_PED_NON_CREATION_AREA() { invoke<Void>(0xFA3780); } // 0x2E05208086BA0651 0x6F7043A3
	static void _0x4759CC730F947C81() { invoke<Void>(0xFA3790); } // 0x4759CC730F947C81 0x8C555ADD
	static BOOL IS_PED_ON_MOUNT(Ped ped) { return invoke<BOOL>(0xFA37A0, ped); } // 0x460BC76A0E10655E 0x43103006
	static Ped GET_MOUNT(Ped ped) { return invoke<Ped>(0xFA37E0, ped); } // 0xE7E11B8DCBED1058 0xDD31EC4E
	static BOOL IS_PED_ON_VEHICLE(Ped ped) { return invoke<BOOL>(0xFA3820, ped); } // 0x67722AEB798E5FAB 0xA1AE7CC7
	static BOOL IS_PED_ON_SPECIFIC_VEHICLE(Ped ped, Vehicle vehicle) { return invoke<BOOL>(0xFA3890, ped, vehicle); } // 0xEC5F66E459AF3BB2 0x63CB4603
	static void SET_PED_MONEY(Ped ped, int amount) { invoke<Void>(0xFA3930, ped, amount); } // 0xA9C8960E8684C1B5 0x40D90BF2
	static int GET_PED_MONEY(Ped ped) { return invoke<int>(0xFA3980, ped); } // 0x3F69145BBA87BAE7 0xEB3C4C7E
	static void _0xFF4803BC019852D9(float p0, Any p1) { invoke<Void>(0xFA39E0, p0, p1); } // 0xFF4803BC019852D9 0xD41C9AED
	static void _0x6B0E6172C9A4D902(BOOL p0) { invoke<Void>(0xFA3A20, p0); } // 0x6B0E6172C9A4D902 0x30B98369
	static void _0x9911F4A24485F653(BOOL p0) { invoke<Void>(0xFA3A40, p0); } // 0x9911F4A24485F653 0x02A080C8
	static void SET_PED_SUFFERS_CRITICAL_HITS(Ped ped, BOOL toggle) { invoke<Void>(0xFA3A60, ped, toggle); } // 0xEBD76F2359F190AC 0x6F6FC7E6
	static void _0xAFC976FD0580C7B3(Ped ped, BOOL toggle) { invoke<Void>(0xFA3AC0, ped, toggle); } // 0xAFC976FD0580C7B3 0x1572022A
	static BOOL IS_PED_SITTING_IN_VEHICLE(Ped ped, Vehicle vehicle) { return invoke<BOOL>(0xFA3B20, ped, vehicle); } // 0xA808AA1D79230FC2 0xDDDE26FA
	static BOOL IS_PED_SITTING_IN_ANY_VEHICLE(Ped ped) { return invoke<BOOL>(0xFA3B50, ped); } // 0x826AA586EDB9FEF8 0x0EA9CA03
	static BOOL IS_PED_ON_FOOT(Ped ped) { return invoke<BOOL>(0xFA3BF0, ped); } // 0x01FEE67DB37F59B2 0xC60D0785
	static BOOL IS_PED_ON_ANY_BIKE(Ped ped) { return invoke<BOOL>(0xFA3C20, ped); } // 0x94495889E22C6479 0x4D885B2E
	static BOOL IS_PED_PLANTING_BOMB(Ped ped) { return invoke<BOOL>(0xFA3CA0, ped); } // 0xC70B5FAE151982D8 0x0EDAC574
	static Vector3 GET_DEAD_PED_PICKUP_COORDS(Ped ped, float p1, float p2) { return invoke<Vector3>(0xFA3D20, ped, p1, p2); } // 0xCD5003B097200F36 0x129F9DC1
	static BOOL IS_PED_IN_ANY_BOAT(Ped ped) { return invoke<BOOL>(0xFA3D90, ped); } // 0x2E0E1C2B4F6CB339 0x1118A947
	static BOOL IS_PED_IN_ANY_SUB(Ped ped) { return invoke<BOOL>(0xFA3E00, ped); } // 0xFBFC01CCFB35D99E 0xE65F8059
	static BOOL IS_PED_IN_ANY_HELI(Ped ped) { return invoke<BOOL>(0xFA3E70, ped); } // 0x298B91AE825E5705 0x7AB5523B
	static BOOL IS_PED_IN_ANY_PLANE(Ped ped) { return invoke<BOOL>(0xFA3EF0, ped); } // 0x5FFF4CFC74D8FB80 0x51BBCE7E
	static BOOL IS_PED_IN_FLYING_VEHICLE(Ped ped) { return invoke<BOOL>(0xFA3F60, ped); } // 0x9134873537FA419C 0xCA072485
	static void SET_PED_DIES_IN_WATER(Ped ped, BOOL toggle) { invoke<Void>(0xFA3FE0, ped, toggle); } // 0x56CEF0AC79073BDE 0x604C872B
	static void SET_PED_DIES_IN_SINKING_VEHICLE(Ped ped, BOOL toggle) { invoke<Void>(0xFA4040, ped, toggle); } // 0xD718A22995E2B4BC 0x8D4D9ABB
	static int GET_PED_ARMOUR(Ped ped) { return invoke<int>(0xFA40A0, ped); } // 0x9483AF821605B1D8 0x2CE311A7
	static void SET_PED_STAY_IN_VEHICLE_WHEN_JACKED(Ped ped, BOOL toggle) { invoke<Void>(0xFA4100, ped, toggle); } // 0xEDF4079F9D54C9A1 0xB014A09C
	static void SET_PED_CAN_BE_SHOT_IN_VEHICLE(Ped ped, BOOL toggle) { invoke<Void>(0xFA4160, ped, toggle); } // 0xC7EF1BA83230BA07 0x5DB7B3A9
	static BOOL GET_PED_LAST_DAMAGE_BONE(Ped ped, int* outBone) { return invoke<BOOL>(0xFA41C0, ped, outBone); } // 0xD75960F6BD9EA49C 0xAB933841
	static void CLEAR_PED_LAST_DAMAGE_BONE(Ped ped) { invoke<Void>(0xFA4230, ped); } // 0x8EF6B7AC68E2F01B 0x56CB715E
	static void SET_AI_WEAPON_DAMAGE_MODIFIER(float value) { invoke<Void>(0xFA4280, value); } // 0x1B1E2A40A65B8521 0x516E30EE
	static void RESET_AI_WEAPON_DAMAGE_MODIFIER() { invoke<Void>(0xFA42A0); } // 0xEA16670E7BA4743C 0x6E965420
	static void SET_AI_MELEE_WEAPON_DAMAGE_MODIFIER(float modifier) { invoke<Void>(0xFA42C0, modifier); } // 0x66460DEDDD417254 0x0F9A401F
	static void RESET_AI_MELEE_WEAPON_DAMAGE_MODIFIER() { invoke<Void>(0xFA42E0); } // 0x46E56A7CD1D63C3F 0x97886238
	static void _0x2F3C3D9F50681DE4(Any p0, BOOL p1) { invoke<Void>(0xFA4300, p0, p1); } // 0x2F3C3D9F50681DE4 0xCC9D7F1A
	static void SET_PED_CAN_BE_TARGETTED(Ped ped, BOOL toggle) { invoke<Void>(0xFA4360, ped, toggle); } // 0x63F58F7C80513AAD 0x75C49F74
	static void SET_PED_CAN_BE_TARGETTED_BY_TEAM(Ped ped, int team, BOOL toggle) { invoke<Void>(0xFA43C0, ped, team, toggle); } // 0xBF1CA77833E58F2C 0xB103A8E1
	static void SET_PED_CAN_BE_TARGETTED_BY_PLAYER(Ped ped, Player player, BOOL toggle) { invoke<Void>(0xFA4440, ped, player, toggle); } // 0x66B57B72E0836A76 0xD050F490
	static void _0x061CB768363D6424(Any p0, BOOL p1) { invoke<Void>(0xFA44C0, p0, p1); } // 0x061CB768363D6424 0x7DA12905
	static void SET_TIME_EXCLUSIVE_DISPLAY_TEXTURE(Any p0, BOOL p1) { invoke<Void>(0xFA4520, p0, p1); } // 0xFD325494792302D7 0x7F67671D
	static BOOL IS_PED_IN_ANY_POLICE_VEHICLE(Ped ped) { return invoke<BOOL>(0xFA4580, ped); } // 0x0BD04E29640C9C12 0x84FA790D
	static void FORCE_PED_TO_OPEN_PARACHUTE(Ped ped) { invoke<Void>(0xFA4600, ped); } // 0x16E42E800B472221 0xA819680B
	static BOOL IS_PED_IN_PARACHUTE_FREE_FALL(Ped ped) { return invoke<BOOL>(0xFA4660, ped); } // 0x7DCE8BDA0F1C1200 0xCD71F11B
	static BOOL IS_PED_FALLING(Ped ped) { return invoke<BOOL>(0xFA4730, ped); } // 0xFB92A102F1C4DFA3 0xABF77334
	static BOOL IS_PED_JUMPING(Ped ped) { return invoke<BOOL>(0xFA4790, ped); } // 0xCEDABC5900A0BF97 0x07E5BC0E
	static BOOL IS_PED_CLIMBING(Ped ped) { return invoke<BOOL>(0xFA48D0, ped); } // 0x53E8CB4F48BFE623 0xBCE03D35
	static BOOL IS_PED_VAULTING(Ped ped) { return invoke<BOOL>(0xFA4930, ped); } // 0x117C70D1F5730B5E 0xC3169BDA
	static BOOL IS_PED_DIVING(Ped ped) { return invoke<BOOL>(0xFA4990, ped); } // 0x5527B8246FEF9B11 0x7BC5BF3C
	static BOOL IS_PED_JUMPING_OUT_OF_VEHICLE(Ped ped) { return invoke<BOOL>(0xFA49F0, ped); } // 0x433DDFFE2044B636 0xB19215F6
	static BOOL _0x26AF0E8E30BD2A2C(Ped ped) { return invoke<BOOL>(0xFA4A20, ped); } // 0x26AF0E8E30BD2A2C
	static int GET_PED_PARACHUTE_STATE(Ped ped) { return invoke<int>(0xFA4AB0, ped); } // 0x79CFD9827CC979B6 0x7D4BC475
	static int GET_PED_PARACHUTE_LANDING_TYPE(Ped ped) { return invoke<int>(0xFA4AD0, ped); } // 0x8B9F1FC6AE8166C0 0x01F3B035
	static void SET_PED_PARACHUTE_TINT_INDEX(Ped ped, int tintIndex) { invoke<Void>(0xFA4B50, ped, tintIndex); } // 0x333FC8DB079B7186 0x5AEFEC3A
	static void GET_PED_PARACHUTE_TINT_INDEX(Ped ped, int* outTintIndex) { invoke<Void>(0xFA4BA0, ped, outTintIndex); } // 0xEAF5F7E5AE7C6C9D 0xE9E7FAC5
	static void SET_PED_RESERVE_PARACHUTE_TINT_INDEX(Ped ped, Any p1) { invoke<Void>(0xFA4BF0, ped, p1); } // 0xE88DA0751C22A2AD 0x177EFC79
	static Entity _0x8C4F3BF23B6237DB(Ped ped, BOOL p1, BOOL p2) { return invoke<Entity>(0xFA4C40, ped, p1, p2); } // 0x8C4F3BF23B6237DB
	static void SET_PED_DUCKING(Ped ped, BOOL toggle) { invoke<Void>(0xFA4CD0, ped, toggle); } // 0x030983CA930B692D 0xB90353D7
	static BOOL IS_PED_DUCKING(Ped ped) { return invoke<BOOL>(0xFA4D30, ped); } // 0xD125AE748725C6BC 0x9199C77D
	static BOOL IS_PED_IN_ANY_TAXI(Ped ped) { return invoke<BOOL>(0xFA4D90, ped); } // 0x6E575D6A898AB852 0x16FD386C
	static void SET_PED_ID_RANGE(Ped ped, float value) { invoke<Void>(0xFA4E60, ped, value); } // 0xF107E836A70DCE05 0xEF3B4ED9
	static void _0x52D59AB61DDC05DD(Ped ped, BOOL p1) { invoke<Void>(0xFA4EC0, ped, p1); } // 0x52D59AB61DDC05DD 0x9A2180FF
	static void _0xEC4B4B3B9908052A(Ped ped, float unk) { invoke<Void>(0xFA4F90, ped, unk); } // 0xEC4B4B3B9908052A 0xF30658D2
	static void _0x733C87D4CE22BEA2(Any p0) { invoke<Void>(0xFA5000, p0); } // 0x733C87D4CE22BEA2 0x43709044
	static void SET_PED_SEEING_RANGE(Ped ped, float value) { invoke<Void>(0xFA5050, ped, value); } // 0xF29CF591C4BF6CEE 0x4BD72FE8
	static void SET_PED_HEARING_RANGE(Ped ped, float value) { invoke<Void>(0xFA50B0, ped, value); } // 0x33A8F7F7D5F7F33C 0xB32087E0
	static void SET_PED_VISUAL_FIELD_MIN_ANGLE(Ped ped, float value) { invoke<Void>(0xFA5110, ped, value); } // 0x2DB492222FB21E26 0x72E2E18B
	static void SET_PED_VISUAL_FIELD_MAX_ANGLE(Ped ped, float value) { invoke<Void>(0xFA5170, ped, value); } // 0x70793BDCA1E854D4 0x0CEA0F9A
	static void SET_PED_VISUAL_FIELD_MIN_ELEVATION_ANGLE(Ped ped, float angle) { invoke<Void>(0xFA51D0, ped, angle); } // 0x7A276EB2C224D70F 0x5CC2F1B8
	static void SET_PED_VISUAL_FIELD_MAX_ELEVATION_ANGLE(Ped ped, float angle) { invoke<Void>(0xFA5230, ped, angle); } // 0x78D0B67629D75856 0x39D9102F
	static void SET_PED_VISUAL_FIELD_PERIPHERAL_RANGE(Ped ped, float range) { invoke<Void>(0xFA5290, ped, range); } // 0x9C74B0BC831B753A 0xFDF2F7C2
	static void SET_PED_VISUAL_FIELD_CENTER_ANGLE(Ped ped, float angle) { invoke<Void>(0xFA52F0, ped, angle); } // 0x3B6405E8AB34A907 0xE57202A1
	static void SET_PED_STEALTH_MOVEMENT(Ped ped, BOOL p1, char* action) { invoke<Void>(0xFA5350, ped, p1, action); } // 0x88CBB5CEB96B7BD2 0x67E28E1D
	static BOOL GET_PED_STEALTH_MOVEMENT(Ped ped) { return invoke<BOOL>(0xFA5370, ped); } // 0x7C2AC9CA66575FBF 0x40321B83
	static int CREATE_GROUP(int unused) { return invoke<int>(0xFA53D0, unused); } // 0x90370EBE0FEE1A3D 0x8DC0368D
	static void SET_PED_AS_GROUP_LEADER(Ped ped, int groupId) { invoke<Void>(0xFA5450, ped, groupId); } // 0x2A7819605465FBCE 0x7265BEA2
	static void SET_PED_AS_GROUP_MEMBER(Ped ped, int groupId) { invoke<Void>(0xFA5460, ped, groupId); } // 0x9F3480FE65DB31B5 0x0EE13F92
	static void SET_PED_CAN_TELEPORT_TO_GROUP_LEADER(Ped pedHandle, int groupHandle, BOOL toggle) { invoke<Void>(0xFA5470, pedHandle, groupHandle, toggle); } // 0x2E2F4240B3F24647 0xD0D8BDBC
	static void REMOVE_GROUP(int groupId) { invoke<Void>(0xFA5490, groupId); } // 0x8EB2F69076AF7053 0x48D72B88
	static void REMOVE_PED_FROM_GROUP(Ped ped) { invoke<Void>(0xFA54A0, ped); } // 0xED74007FFB146BC2 0x82697713
	static BOOL IS_PED_GROUP_MEMBER(Ped ped, int groupId) { return invoke<BOOL>(0xFA54B0, ped, groupId); } // 0x9BB01E3834671191 0x876D5363
	static BOOL IS_PED_HANGING_ON_TO_VEHICLE(Ped ped) { return invoke<BOOL>(0xFA54E0, ped); } // 0x1C86D8AEF8254B78 0x9678D4FF
	static void SET_GROUP_SEPARATION_RANGE(int groupHandle, float separationRange) { invoke<Void>(0xFA5580, groupHandle, separationRange); } // 0x4102C7858CFEE4E4 0x7B820CD5
	static void SET_PED_MIN_GROUND_TIME_FOR_STUNGUN(Ped ped, int ms) { invoke<Void>(0xFA5590, ped, ms); } // 0xFA0675AB151073FA 0x2F0D0973
	static BOOL IS_PED_PRONE(Ped ped) { return invoke<BOOL>(0xFA55D0, ped); } // 0xD6A86331A537A7B9 0x02C2A6C3
	static BOOL IS_PED_IN_COMBAT(Ped ped, Ped target) { return invoke<BOOL>(0xFA5630, ped, target); } // 0x4859F1FC66A6278E 0xFE027CB5
	static BOOL CAN_PED_IN_COMBAT_SEE_TARGET(Ped ped, Ped target) { return invoke<BOOL>(0xFA5660, ped, target); } // 0xEAD42DE3610D0721 0xCCD525E1
	static BOOL IS_PED_DOING_DRIVEBY(Ped ped) { return invoke<BOOL>(0xFA5710, ped); } // 0xB2C086CC1BF8F2BF 0xAC3CEB9C
	static BOOL IS_PED_JACKING(Ped ped) { return invoke<BOOL>(0xFA57B0, ped); } // 0x4AE4FF911DFB61DA 0x3B321816
	static BOOL IS_PED_BEING_JACKED(Ped ped) { return invoke<BOOL>(0xFA57E0, ped); } // 0x9A497FE2DF198913 0xD45D605C
	static BOOL IS_PED_BEING_STUNNED(Ped ped, int p1) { return invoke<BOOL>(0xFA5810, ped, p1); } // 0x4FBACCE3B4138EE8 0x0A66CE30
	static Ped GET_PEDS_JACKER(Ped ped) { return invoke<Ped>(0xFA5840, ped); } // 0x9B128DC36C1E04CF 0xDE1DBB59
	static Ped GET_JACK_TARGET(Ped ped) { return invoke<Ped>(0xFA5860, ped); } // 0x5486A79D9FBD342D 0x1D196361
	static BOOL IS_PED_FLEEING(Ped ped) { return invoke<BOOL>(0xFA5880, ped); } // 0xBBCCE00B381F8482 0x85D813C6
	static BOOL IS_PED_IN_COVER(Ped ped, BOOL exceptUseWeapon) { return invoke<BOOL>(0xFA58B0, ped, exceptUseWeapon); } // 0x60DFD0691A170B88 0x972C5A8B
	static BOOL IS_PED_IN_COVER_FACING_LEFT(Ped ped) { return invoke<BOOL>(0xFA58E0, ped); } // 0x845333B3150583AB 0xB89DBB80
	static BOOL _IS_PED_STANDING_IN_COVER(Ped ped) { return invoke<BOOL>(0xFA5910, ped); } // 0x6A03BF943D767C93
	static BOOL IS_PED_GOING_INTO_COVER(Ped ped) { return invoke<BOOL>(0xFA5940, ped); } // 0x9F65DBC537E59AD5 0xA3589628
	static Any SET_PED_PINNED_DOWN(Ped ped, BOOL pinned, int p2) { return invoke<Any>(0xFA5970, ped, pinned, p2); } // 0xAAD6D1ACF08F4612 0xCC78999D
	static int GET_SEAT_PED_IS_TRYING_TO_ENTER(Ped ped) { return invoke<int>(0xFA59F0, ped); } // 0x6F4C85ACD641BCD2 0xACF162E0
	static Vehicle GET_VEHICLE_PED_IS_TRYING_TO_ENTER(Ped ped) { return invoke<Vehicle>(0xFA5A10, ped); } // 0x814FA8BE5449445D 0x99968B37
	static Entity GET_PED_SOURCE_OF_DEATH(Ped ped) { return invoke<Entity>(0xFA5A30, ped); } // 0x93C8B64DEB84728C 0x84ADF9EB
	static Hash GET_PED_CAUSE_OF_DEATH(Ped ped) { return invoke<Hash>(0xFA5A90, ped); } // 0x16FFE42AB2D2DC59 0x63458C27
	static int _0x1E98817B311AE98A(Ped ped) { return invoke<int>(0xFA5AF0, ped); } // 0x1E98817B311AE98A
	static int _0x5407B7288D0478B7(Any p0) { return invoke<int>(0xFA5B50, p0); } // 0x5407B7288D0478B7 0xEF0B78E6
	static Any _0x336B3D200AB007CB(Any p0, float p1, float p2, float p3, float p4) { return invoke<Any>(0xFA5BC0, p0, p1, p2, p3, p4); } // 0x336B3D200AB007CB 0xFB18CB19
	static void SET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(Ped ped, Hash hash) { invoke<Void>(0xFA5C90, ped, hash); } // 0xADB3F206518799E8 0x423B7BA2
	static void SET_PED_RELATIONSHIP_GROUP_HASH(Ped ped, Hash hash) { invoke<Void>(0xFA5CF0, ped, hash); } // 0xC80A74AC829DDD92 0x79F8C18C
	static void SET_RELATIONSHIP_BETWEEN_GROUPS(int relationship, Hash group1, Hash group2) { invoke<Void>(0xFA5D00, relationship, group1, group2); } // 0xBF25EB89375A37AD 0xD4A215BA
	static void CLEAR_RELATIONSHIP_BETWEEN_GROUPS(int relationship, Hash group1, Hash group2) { invoke<Void>(0xFA5D70, relationship, group1, group2); } // 0x5E29243FB56FC6D4 0x994B8C2D
	static Any ADD_RELATIONSHIP_GROUP(char* name, Hash* groupHash) { return invoke<Any>(0xFA5DB0, name, groupHash); } // 0xF372BC22FCB88606 0x8B635546
	static void REMOVE_RELATIONSHIP_GROUP(Hash groupHash) { invoke<Void>(0xFA5E20, groupHash); } // 0xB6BA2444AB393DA2 0x4A1DC59A
	static int GET_RELATIONSHIP_BETWEEN_PEDS(Ped ped1, Ped ped2) { return invoke<int>(0xFA5E60, ped1, ped2); } // 0xEBA5AD3A0EAF7121 0xE254C39C
	static Hash GET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(Ped ped) { return invoke<Hash>(0xFA5E90, ped); } // 0x42FDD0F017B1E38E 0x714BD6E4
	static Hash GET_PED_RELATIONSHIP_GROUP_HASH(Ped ped) { return invoke<Hash>(0xFA5EF0, ped); } // 0x7DBDD04862D95F04 0x354F283C
	static int GET_RELATIONSHIP_BETWEEN_GROUPS(Hash group1, Hash group2) { return invoke<int>(0xFA5F50, group1, group2); } // 0x9E6B70061662AE5C 0x4E372FE2
	static void SET_PED_CAN_BE_TARGETED_WITHOUT_LOS(Ped ped, BOOL toggle) { invoke<Void>(0xFA6060, ped, toggle); } // 0x4328652AE5769C71 0x7FDDC0A6
	static void SET_PED_TO_INFORM_RESPECTED_FRIENDS(Ped ped, float radius, int maxFriends) { invoke<Void>(0xFA60C0, ped, radius, maxFriends); } // 0x112942C6E708F70B 0xD78AC46C
	static BOOL IS_PED_RESPONDING_TO_EVENT(Ped ped, Any event) { return invoke<BOOL>(0xFA6140, ped, event); } // 0x625B774D75C87068 0x7A877554
	static void SET_PED_FIRING_PATTERN(Ped ped, Hash patternHash) { invoke<Void>(0xFA61B0, ped, patternHash); } // 0x9AC577F5A12AD8A9 0xB4629D66
	static void SET_PED_SHOOT_RATE(Ped ped, int shootRate) { invoke<Void>(0xFA61C0, ped, shootRate); } // 0x614DA022990752DC 0xFB301746
	static void SET_COMBAT_FLOAT(Ped ped, int combatType, float p2) { invoke<Void>(0xFA6270, ped, combatType, p2); } // 0xFF41B4B141ED981C 0xD8B7637C
	static float GET_COMBAT_FLOAT(Ped ped, int p1) { return invoke<float>(0xFA62E0, ped, p1); } // 0x52DFF8A10508090A 0x511D7EF8
	static void GET_GROUP_SIZE(int groupID, Any* unknown, int* sizeInMembers) { invoke<Void>(0xFA6360, groupID, unknown, sizeInMembers); } // 0x8DE69FE35CA09A45 0xF7E1A691
	static BOOL DOES_GROUP_EXIST(int groupId) { return invoke<BOOL>(0xFA63F0, groupId); } // 0x7C6B0C22F9F40BBE 0x935C978D
	static int GET_PED_GROUP_INDEX(Ped ped) { return invoke<int>(0xFA6430, ped); } // 0xF162E133B4E7A675 0x134E0785
	static BOOL IS_PED_IN_GROUP(Ped ped) { return invoke<BOOL>(0xFA6450, ped); } // 0x5891CAC5D4ACFF74 0x836D9795
	static Player GET_PLAYER_PED_IS_FOLLOWING(Ped ped) { return invoke<Player>(0xFA64B0, ped); } // 0x6A3975DEA89F9A17 0xDE7442EE
	static void SET_GROUP_FORMATION(int groupId, int formationType) { invoke<Void>(0xFA64D0, groupId, formationType); } // 0xCE2F5FC3AF7E8C1E 0x08FAC739
	static void SET_GROUP_FORMATION_SPACING(int groupId, float p1, float p2, float p3) { invoke<Void>(0xFA6540, groupId, p1, p2, p3); } // 0x1D9D45004C28C916 0xB1E086FF
	static void RESET_GROUP_FORMATION_DEFAULT_SPACING(int groupHandle) { invoke<Void>(0xFA65F0, groupHandle); } // 0x63DAB4CCB3273205 0x267FCEAD
	static Vehicle GET_VEHICLE_PED_IS_USING(Ped ped) { return invoke<Vehicle>(0xFA6670, ped); } // 0x6094AD011A2EA87D 0x6DE3AADA
	static Vehicle SET_EXCLUSIVE_PHONE_RELATIONSHIPS(Ped ped) { return invoke<Vehicle>(0xFA66F0, ped); } // 0xF92691AED837A5FC 0x56E0C163
	static void SET_PED_GRAVITY(Ped ped, BOOL toggle) { invoke<Void>(0xFA6710, ped, toggle); } // 0x9FF447B6B6AD960A 0x3CA16652
	static void APPLY_DAMAGE_TO_PED(Ped ped, int damageAmount, BOOL p2) { invoke<Void>(0xFA6790, ped, damageAmount, p2); } // 0x697157CED63F18D4 0x4DC27FCF
	static Any _0x36B77BB84687C318(Ped ped, Any p1) { return invoke<Any>(0xFA67B0, ped, p1); } // 0x36B77BB84687C318
	static void SET_PED_ALLOWED_TO_DUCK(Ped ped, BOOL toggle) { invoke<Void>(0xFA6860, ped, toggle); } // 0xDA1F1B7BE1A8766F 0xC4D122F8
	static void SET_PED_NEVER_LEAVES_GROUP(Ped ped, BOOL toggle) { invoke<Void>(0xFA68D0, ped, toggle); } // 0x3DBFC55D5C9BB447 0x0E038813
	static int GET_PED_TYPE(Ped ped) { return invoke<int>(0xFA6930, ped); } // 0xFF059E1E4C01E63C 0xB1460D43
	static void SET_PED_AS_COP(Ped ped, BOOL toggle) { invoke<Void>(0xFA6990, ped, toggle); } // 0xBB03C38DD3FB7FFD 0x84E7DE9F
	static void SET_PED_MAX_HEALTH(Ped ped, int value) { invoke<Void>(0xFA6A20, ped, value); } // 0xF5F6378C4F3419D3 0x5533F60B
	static int GET_PED_MAX_HEALTH(Ped ped) { return invoke<int>(0xFA6A90, ped); } // 0x4700A416E8324EF3 0xA45B6C8D
	static void SET_PED_MAX_TIME_IN_WATER(Ped ped, float value) { invoke<Void>(0xFA6AF0, ped, value); } // 0x43C851690662113D 0xFE0A106B
	static void SET_PED_MAX_TIME_UNDERWATER(Ped ped, float value) { invoke<Void>(0xFA6B70, ped, value); } // 0x6BA428C528D9E522 0x082EF240
	static void _0x2735233A786B1BEF(Ped ped, float p1) { invoke<Void>(0xFA6BD0, ped, p1); } // 0x2735233A786B1BEF 0x373CC405
	static void _0x952F06BEECD775CC(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xFA6C20, p0, p1, p2, p3); } // 0x952F06BEECD775CC
	static void _0xE6CA85E7259CE16B(Any p0) { invoke<Void>(0xFA6C40, p0); } // 0xE6CA85E7259CE16B
	static void SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(Ped ped, int state) { invoke<Void>(0xFA6CA0, ped, state); } // 0x7A6535691B477C48 0x8A251612
	static BOOL CAN_KNOCK_PED_OFF_VEHICLE(Ped ped) { return invoke<BOOL>(0xFA6D20, ped); } // 0x51AC07A44D4F5B8A 0xC9D098B3
	static void KNOCK_PED_OFF_VEHICLE(Ped ped) { invoke<Void>(0xFA6DE0, ped); } // 0x45BBCBA77C29A841 0xACDD0674
	static void SET_PED_COORDS_NO_GANG(Ped ped, float posX, float posY, float posZ) { invoke<Void>(0xFA6DF0, ped, posX, posY, posZ); } // 0x87052FE446E07247 0x9561AD98
	static Ped GET_PED_AS_GROUP_MEMBER(int groupID, int memberNumber) { return invoke<Ped>(0xFA6E60, groupID, memberNumber); } // 0x51455483CF23ED97 0x9AA3CC8C
	static Ped _GET_PED_AS_GROUP_LEADER(int groupID) { return invoke<Ped>(0xFA6EE0, groupID); } // 0x5CCE68DBD5FE93EC
	static void SET_PED_KEEP_TASK(Ped ped, BOOL toggle) { invoke<Void>(0xFA6F50, ped, toggle); } // 0x971D38760FBC02EF 0xA7EC79CE
	static void _0x49E50BDB8BA4DAB2(Ped ped, BOOL p1) { invoke<Void>(0xFA6FB0, ped, p1); } // 0x49E50BDB8BA4DAB2 0x397F06E3
	static BOOL IS_PED_SWIMMING(Ped ped) { return invoke<BOOL>(0xFA7010, ped); } // 0x9DE327631295B4C2 0x7AB43DB8
	static BOOL IS_PED_SWIMMING_UNDER_WATER(Ped ped) { return invoke<BOOL>(0xFA7070, ped); } // 0xC024869A53992F34 0x0E8D524F
	static void SET_PED_COORDS_KEEP_VEHICLE(Ped ped, float posX, float posY, float posZ) { invoke<Void>(0xFA70E0, ped, posX, posY, posZ); } // 0x9AFEFF481A85AB2E 0xD66AE1D3
	static void SET_PED_DIES_IN_VEHICLE(Ped ped, BOOL toggle) { invoke<Void>(0xFA7170, ped, toggle); } // 0x2A30922C90C9B42C 0x6FE1E440
	static void SET_CREATE_RANDOM_COPS(BOOL toggle) { invoke<Void>(0xFA71D0, toggle); } // 0x102E68B2024D536D 0x23441648
	static void SET_CREATE_RANDOM_COPS_NOT_ON_SCENARIOS(BOOL toggle) { invoke<Void>(0xFA7200, toggle); } // 0x8A4986851C4EF6E7 0x82E548CC
	static void SET_CREATE_RANDOM_COPS_ON_SCENARIOS(BOOL toggle) { invoke<Void>(0xFA7220, toggle); } // 0x444CB7D7DBE6973D 0xEDC31475
	static BOOL CAN_CREATE_RANDOM_COPS() { return invoke<BOOL>(0xFA7240); } // 0x5EE2CAFF7F17770D 0xAA73DAD9
	static void SET_PED_AS_ENEMY(Ped ped, BOOL toggle) { invoke<Void>(0xFA7260, ped, toggle); } // 0x02A0C9720B854BFA 0xAE620A1B
	static void SET_PED_CAN_SMASH_GLASS(Ped ped, BOOL p1, BOOL p2) { invoke<Void>(0xFA72C0, ped, p1, p2); } // 0x1CCE141467FF42A2 0x149C60A8
	static BOOL IS_PED_IN_ANY_TRAIN(Ped ped) { return invoke<BOOL>(0xFA7330, ped); } // 0x6F972C1AB75A1ED0 0x759EF63A
	static BOOL IS_PED_GETTING_INTO_A_VEHICLE(Ped ped) { return invoke<BOOL>(0xFA73B0, ped); } // 0xBB062B2B5722478E 0x90E805AC
	static BOOL IS_PED_TRYING_TO_ENTER_A_LOCKED_VEHICLE(Ped ped) { return invoke<BOOL>(0xFA73E0, ped); } // 0x44D28D5DDFE5F68C 0x46828B4E
	static void SET_ENABLE_HANDCUFFS(Ped ped, BOOL toggle) { invoke<Void>(0xFA74A0, ped, toggle); } // 0xDF1AF8B5D56542FA 0xAC9BBA23
	static void SET_ENABLE_BOUND_ANKLES(Ped ped, BOOL toggle) { invoke<Void>(0xFA7520, ped, toggle); } // 0xC52E0F855C58FC2E 0x9208D689
	static void SET_ENABLE_SCUBA(Ped ped, BOOL toggle) { invoke<Void>(0xFA75A0, ped, toggle); } // 0xF99F62004024D506 0x7BF61471
	static void SET_CAN_ATTACK_FRIENDLY(Ped ped, BOOL toggle, BOOL p2) { invoke<Void>(0xFA7600, ped, toggle, p2); } // 0xB3B1CB349FF9C75D 0x47C60963
	static int GET_PED_ALERTNESS(Ped ped) { return invoke<int>(0xFA7680, ped); } // 0xF6AA118530443FD2 0xF83E4DAF
	static void SET_PED_ALERTNESS(Ped ped, int value) { invoke<Void>(0xFA76E0, ped, value); } // 0xDBA71115ED9941A6 0x2C32D9AE
	static void SET_PED_GET_OUT_UPSIDE_DOWN_VEHICLE(Ped ped, BOOL toggle) { invoke<Void>(0xFA7730, ped, toggle); } // 0xBC0ED94165A48BC2 0x89AD49FF
	static void SET_PED_MOVEMENT_CLIPSET(Ped ped, char* clipSet, float p2) { invoke<Void>(0xFA7790, ped, clipSet, p2); } // 0xAF8A94EDE7712BEF 0xA817CDEB
	static void RESET_PED_MOVEMENT_CLIPSET(Ped ped, float p1) { invoke<Void>(0xFA77B0, ped, p1); } // 0xAA74EC0CB0AAEA2C 0xB83CEE93
	static void SET_PED_STRAFE_CLIPSET(Ped ped, char* clipSet) { invoke<Void>(0xFA7820, ped, clipSet); } // 0x29A28F3F8CF6D854 0x0BACF010
	static void RESET_PED_STRAFE_CLIPSET(Ped ped) { invoke<Void>(0xFA7830, ped); } // 0x20510814175EA477 0xF1967A12
	static void SET_PED_WEAPON_MOVEMENT_CLIPSET(Ped ped, char* clipSet) { invoke<Void>(0xFA7890, ped, clipSet); } // 0x2622E35B77D3ACA2 0xF8BE54DC
	static void RESET_PED_WEAPON_MOVEMENT_CLIPSET(Ped ped) { invoke<Void>(0xFA78A0, ped); } // 0x97B0DB5B4AA74E77 0xC60C9ACD
	static void SET_PED_DRIVE_BY_CLIPSET_OVERRIDE(Ped ped, char* clipset) { invoke<Void>(0xFA7900, ped, clipset); } // 0xED34AB6C5CB36520 0xD4C73595
	static void CLEAR_PED_DRIVE_BY_CLIPSET_OVERRIDE(Ped ped) { invoke<Void>(0xFA7910, ped); } // 0x4AFE3690D7E0B5AC 0xAEC9163B
	static void _0x9DBA107B4937F809(Any p0, char* p1) { invoke<Void>(0xFA7960, p0, p1); } // 0x9DBA107B4937F809
	static void _0xC79196DCB36F6121(Any p0) { invoke<Void>(0xFA7970, p0); } // 0xC79196DCB36F6121
	static void _0x80054D7FCC70EEC6(Any p0) { invoke<Void>(0xFA79C0, p0); } // 0x80054D7FCC70EEC6
	static void SET_PED_IN_VEHICLE_CONTEXT(Ped ped, Hash context) { invoke<Void>(0xFA7A10, ped, context); } // 0x530071295899A8C6 0x27F25C0E
	static void RESET_PED_IN_VEHICLE_CONTEXT(Ped ped) { invoke<Void>(0xFA7A80, ped); } // 0x22EF8FF8778030EB 0x3C94D88A
	static BOOL IS_SCRIPTED_SCENARIO_PED_USING_CONDITIONAL_ANIM(Ped ped, char* animDict, char* anim) { return invoke<BOOL>(0xFA7AE0, ped, animDict, anim); } // 0x6EC47A344923E1ED 0x3C30B447
	static void SET_PED_ALTERNATE_WALK_ANIM(Ped ped, char* animDict, char* animName, float p3, BOOL p4) { invoke<Void>(0xFA7B10, ped, animDict, animName, p3, p4); } // 0x6C60394CB4F75E9A 0x895E1D67
	static void CLEAR_PED_ALTERNATE_WALK_ANIM(Ped ped, float p1) { invoke<Void>(0xFA7B40, ped, p1); } // 0x8844BBFCE30AA9E9 0x5736FB23
	static void SET_PED_ALTERNATE_MOVEMENT_ANIM(Ped ped, int stance, char* animDictionary, char* animationName, float p4, BOOL p5) { invoke<Void>(0xFA7BE0, ped, stance, animDictionary, animationName, p4, p5); } // 0x90A43CC281FFAB46 0xBA84FD8C
	static void CLEAR_PED_ALTERNATE_MOVEMENT_ANIM(Ped ped, int stance, float p2) { invoke<Void>(0xFA7C10, ped, stance, p2); } // 0xD8D19675ED5FBDCE 0x7A7F5BC3
	static void SET_PED_GESTURE_GROUP(Ped ped, char* animGroupGesture) { invoke<Void>(0xFA7CC0, ped, animGroupGesture); } // 0xDDF803377F94AAA8 0x170DA109
	static Vector3 GET_ANIM_INITIAL_OFFSET_POSITION(char* animDict, char* animName, float x, float y, float z, float xRot, float yRot, float zRot, float p8, int p9) { return invoke<Vector3>(0xFA7D50, animDict, animName, x, y, z, xRot, yRot, zRot, p8, p9); } // 0xBE22B26DD764C040 0xC59D4268
	static Vector3 GET_ANIM_INITIAL_OFFSET_ROTATION(char* animDict, char* animName, float x, float y, float z, float xRot, float yRot, float zRot, float p8, int p9) { return invoke<Vector3>(0xFA7E60, animDict, animName, x, y, z, xRot, yRot, zRot, p8, p9); } // 0x4B805E6046EE9E47 0x5F7789E6
	static int GET_PED_DRAWABLE_VARIATION(Ped ped, int componentId) { return invoke<int>(0xFA7F70, ped, componentId); } // 0x67F3780DD425D4FC 0x29850FE2
	static int GET_NUMBER_OF_PED_DRAWABLE_VARIATIONS(Ped ped, int componentId) { return invoke<int>(0xFA7FD0, ped, componentId); } // 0x27561561732A7842 0x9754C27D
	static int GET_PED_TEXTURE_VARIATION(Ped ped, int componentId) { return invoke<int>(0xFA8000, ped, componentId); } // 0x04A355E041E004E6 0xC0A8590A
	static int GET_NUMBER_OF_PED_TEXTURE_VARIATIONS(Ped ped, int componentId, int drawableId) { return invoke<int>(0xFA8060, ped, componentId, drawableId); } // 0x8F7156A3142A6BAD 0x83D9FBE7
	static int GET_NUMBER_OF_PED_PROP_DRAWABLE_VARIATIONS(Ped ped, int propId) { return invoke<int>(0xFA8090, ped, propId); } // 0x5FAF9754E789FB47 0xC9780B95
	static int GET_NUMBER_OF_PED_PROP_TEXTURE_VARIATIONS(Ped ped, int propId, int drawableId) { return invoke<int>(0xFA80C0, ped, propId, drawableId); } // 0xA6E7F1CEB523E171 0x4892B882
	static int GET_PED_PALETTE_VARIATION(Ped ped, int componentId) { return invoke<int>(0xFA80F0, ped, componentId); } // 0xE3DD5F2A84B42281 0xEF1BC082
	static BOOL _0x9E30E91FB03A2CAF(Any* p0, Any* p1) { return invoke<BOOL>(0xFA8150, p0, p1); } // 0x9E30E91FB03A2CAF
	static Any _0x1E77FA7A62EE6C4C(Any p0) { return invoke<Any>(0xFA8180, p0); } // 0x1E77FA7A62EE6C4C
	static Any _0xF033419D1B81FAE8(Any p0) { return invoke<Any>(0xFA81A0, p0); } // 0xF033419D1B81FAE8
	static BOOL IS_PED_COMPONENT_VARIATION_VALID(Ped ped, int componentId, int drawableId, int textureId) { return invoke<BOOL>(0xFA81C0, ped, componentId, drawableId, textureId); } // 0xE825F6B6CEA7671D 0x952ABD9A
	static void SET_PED_COMPONENT_VARIATION(Ped ped, int componentId, int drawableId, int textureId, int paletteId) { invoke<Void>(0xFA8240, ped, componentId, drawableId, textureId, paletteId); } // 0x262B14F48D29DE80 0xD4F7B05C
	static void SET_PED_RANDOM_COMPONENT_VARIATION(Ped ped, BOOL p1) { invoke<Void>(0xFA8300, ped, p1); } // 0xC8A9481A01E63C28 0x4111BA46
	static void SET_PED_RANDOM_PROPS(Ped ped) { invoke<Void>(0xFA83A0, ped); } // 0xC44AA05345C992C6 0xE3318E0E
	static void SET_PED_DEFAULT_COMPONENT_VARIATION(Ped ped) { invoke<Void>(0xFA8450, ped); } // 0x45EEE61580806D63 0xC866A984
	static void SET_PED_BLEND_FROM_PARENTS(Ped ped, Ped father, Ped mother, float fathersSide, float mothersSide) { invoke<Void>(0xFA84D0, ped, father, mother, fathersSide, mothersSide); } // 0x137BBD05230DB22D 0x837BD370
	static void SET_PED_HEAD_BLEND_DATA(Ped ped, int shapeFirstID, int shapeSecondID, int shapeThirdID, int skinFirstID, int skinSecondID, int skinThirdID, float shapeMix, float skinMix, float thirdMix, BOOL isParent) { invoke<Void>(0xFA84F0, ped, shapeFirstID, shapeSecondID, shapeThirdID, skinFirstID, skinSecondID, skinThirdID, shapeMix, skinMix, thirdMix, isParent); } // 0x9414E18B9434C2FE 0x60746B88
	static BOOL _GET_PED_HEAD_BLEND_DATA(Ped ped, Any* headBlendData) { return invoke<BOOL>(0xFA8650, ped, headBlendData); } // 0x2746BD9D88C5C5D0
	static void UPDATE_PED_HEAD_BLEND_DATA(Ped ped, float shapeMix, float skinMix, float thirdMix) { invoke<Void>(0xFA8740, ped, shapeMix, skinMix, thirdMix); } // 0x723538F61C647C5A 0x5CB76219
	static void _SET_PED_EYE_COLOR(Ped ped, int index) { invoke<Void>(0xFA87C0, ped, index); } // 0x50B56988B170AFDF
	static void SET_PED_HEAD_OVERLAY(Ped ped, int overlayID, int index, float opacity) { invoke<Void>(0xFA8870, ped, overlayID, index, opacity); } // 0x48F44967FA05CC1E 0xD28DBA90
	static int _GET_PED_HEAD_OVERLAY_VALUE(Ped ped, int overlayID) { return invoke<int>(0xFA88F0, ped, overlayID); } // 0xA60EF3B6461A4D43
	static int _GET_NUM_HEAD_OVERLAY_VALUES(int overlayID) { return invoke<int>(0xFA8960, overlayID); } // 0xCF1CE768BB43480E 0xFF43C18D
	static void _SET_PED_HEAD_OVERLAY_COLOR(Ped ped, int overlayID, int colorType, int colorID, int secondColorID) { invoke<Void>(0xFA8A80, ped, overlayID, colorType, colorID, secondColorID); } // 0x497BF74A7B9CB952
	static void _SET_PED_HAIR_COLOR(Ped ped, int colorID, int highlightColorID) { invoke<Void>(0xFA8B00, ped, colorID, highlightColorID); } // 0x4CFFC65454C93A49
	static int _GET_NUM_HAIR_COLORS() { return invoke<int>(0xFA8B60); } // 0xE5C0CF872C2AD150
	static int _GET_NUM_MAKEUP_COLORS() { return invoke<int>(0xFA8B70); } // 0xD1F7CA1535D22818
	static void _0x4852FC386E2E1BB5(Any p0, Any* p1, Any* p2, Any* p3) { invoke<Void>(0xFA8B80, p0, p1, p2, p3); } // 0x4852FC386E2E1BB5
	static void _0x013E5CFC38CD5387(Any p0, Any* p1, Any* p2, Any* p3) { invoke<Void>(0xFA8BD0, p0, p1, p2, p3); } // 0x013E5CFC38CD5387
	static BOOL _0xED6D8E27A43B8CDE(Any p0) { return invoke<BOOL>(0xFA8C20, p0); } // 0xED6D8E27A43B8CDE
	static int _0xEA9960D07DADCF10(Any p0) { return invoke<int>(0xFA8C70, p0); } // 0xEA9960D07DADCF10
	static BOOL _0x3E802F11FBE27674(Any p0) { return invoke<BOOL>(0xFA8CB0, p0); } // 0x3E802F11FBE27674
	static BOOL _0xF41B5D290C99A3D6(Any p0) { return invoke<BOOL>(0xFA8D00, p0); } // 0xF41B5D290C99A3D6
	static BOOL _IS_PED_HAIR_COLOR_VALID(int colorID) { return invoke<BOOL>(0xFA8D50, colorID); } // 0xE0D36E5D9E99CC21
	static Any _0xAAA6A3698A69E048(Any p0) { return invoke<Any>(0xFA8DA0, p0); } // 0xAAA6A3698A69E048
	static BOOL _IS_PED_LIPSTICK_COLOR_VALID(int colorID) { return invoke<BOOL>(0xFA8DE0, colorID); } // 0x0525A2C2562F3CD4
	static BOOL _IS_PED_BLUSH_COLOR_VALID(int colorID) { return invoke<BOOL>(0xFA8E80, colorID); } // 0x604E810189EE3A59
	static Any _0xC56FBF2F228E1DAC(Hash modelHash, Any p1, Any p2) { return invoke<Any>(0xFA8ED0, modelHash, p1, p2); } // 0xC56FBF2F228E1DAC
	static void _SET_PED_FACE_FEATURE(Ped ped, int index, float scale) { invoke<Void>(0xFA8FB0, ped, index, scale); } // 0x71A5C1DBA060049E
	static BOOL HAS_PED_HEAD_BLEND_FINISHED(Ped ped) { return invoke<BOOL>(0xFA9020, ped); } // 0x654CD0A825161131 0x2B1BD9C5
	static void _0x4668D80430D6C299(Ped ped) { invoke<Void>(0xFA9080, ped); } // 0x4668D80430D6C299 0x894314A4
	static void _0xCC9682B8951C5229(Ped ped, int r, int g, int b, int p4) { invoke<Void>(0xFA90D0, ped, r, g, b, p4); } // 0xCC9682B8951C5229 0x57E5B3F9
	static void _0xA21C118553BBDF02(Ped ped) { invoke<Void>(0xFA9190, ped); } // 0xA21C118553BBDF02 0xC6F36292
	static int _GET_FIRST_PARENT_ID_FOR_PED_TYPE(int type) { return invoke<int>(0xFA91E0, type); } // 0x68D353AB88B97E0C 0x211DEFEC
	static int _GET_NUM_PARENT_PEDS_OF_TYPE(int type) { return invoke<int>(0xFA9240, type); } // 0x5EF37013A6539C9D 0x095D3BD8
	static Any _0x39D55A620FCB6A3A(Ped ped, int slot, int drawableId, int textureId) { return invoke<Any>(0xFA92B0, ped, slot, drawableId, textureId); } // 0x39D55A620FCB6A3A 0x45F3BDFB
	static BOOL _0x66680A92700F43DF(Ped p0) { return invoke<BOOL>(0xFA9360, p0); } // 0x66680A92700F43DF 0xC6517D52
	static void _0x5AAB586FFEC0FD96(Any p0) { invoke<Void>(0xFA93C0, p0); } // 0x5AAB586FFEC0FD96 0x6435F67F
	static BOOL _IS_PED_PROP_VALID(Ped ped, int componentId, int drawableId, int TextureId) { return invoke<BOOL>(0xFA9410, ped, componentId, drawableId, TextureId); } // 0x2B16A3BFF1FBCE49 0xC0E23671
	static BOOL _0x784002A632822099(Ped ped) { return invoke<BOOL>(0xFA94C0, ped); } // 0x784002A632822099 0x3B0CA391
	static void _0xF79F9DEF0AADE61A(Ped ped) { invoke<Void>(0xFA9520, ped); } // 0xF79F9DEF0AADE61A 0xFD103BA7
	static int GET_PED_PROP_INDEX(Ped ped, int componentId) { return invoke<int>(0xFA9570, ped, componentId); } // 0x898CC20EA75BACD8 0x746DDAC0
	static void SET_PED_PROP_INDEX(Ped ped, int componentId, int drawableId, int TextureId, BOOL attach) { invoke<Void>(0xFA95D0, ped, componentId, drawableId, TextureId, attach); } // 0x93376B65A266EB5F 0x0829F2E2
	static void KNOCK_OFF_PED_PROP(Ped ped, BOOL p1, BOOL p2, BOOL p3, BOOL p4) { invoke<Void>(0xFA95F0, ped, p1, p2, p3, p4); } // 0x6FD7816A36615F48 0x08D8B180
	static void CLEAR_PED_PROP(Ped ped, int propId) { invoke<Void>(0xFA96A0, ped, propId); } // 0x0943E5B8E078E76E 0x2D23D743
	static void CLEAR_ALL_PED_PROPS(Ped ped) { invoke<Void>(0xFA9700, ped); } // 0xCD8A7537A9B52F06 0x81DF8B43
	static void _0xAFF4710E2A0A6C12(Ped ped) { invoke<Void>(0xFA9750, ped); } // 0xAFF4710E2A0A6C12
	static int GET_PED_PROP_TEXTURE_INDEX(Ped ped, int componentId) { return invoke<int>(0xFA97E0, ped, componentId); } // 0xE131A28626F81AB2 0x922A6653
	static void _0x1280804F7CFD2D6C(Any p0) { invoke<Void>(0xFA9840, p0); } // 0x1280804F7CFD2D6C 0x7BCD8991
	static void _0x36C6984C3ED0C911(Any p0) { invoke<Void>(0xFA9890, p0); } // 0x36C6984C3ED0C911
	static void _0xB50EB4CCB29704AC(Any p0) { invoke<Void>(0xFA98E0, p0); } // 0xB50EB4CCB29704AC 0x080275EE
	static BOOL _0xFEC9A3B1820F3331(Any p0) { return invoke<BOOL>(0xFA9930, p0); } // 0xFEC9A3B1820F3331
	static void SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Ped ped, BOOL toggle) { invoke<Void>(0xFA9990, ped, toggle); } // 0x9F8AA94D6D97DBF4 0xDFE34E4A
	static void SET_PED_BOUNDS_ORIENTATION(Ped ped, float p1, float p2, float p3, float p4, float p5) { invoke<Void>(0xFA99B0, ped, p1, p2, p3, p4, p5); } // 0x4F5F651ACCC9C4CF 0xCFA20D68
	static void REGISTER_TARGET(Ped ped, Ped target) { invoke<Void>(0xFA9A50, ped, target); } // 0x2F25D9AEFA34FBA2 0x50A95442
	static void REGISTER_HATED_TARGETS_AROUND_PED(Ped ped, float radius) { invoke<Void>(0xFA9A60, ped, radius); } // 0x9222F300BF8354FE 0x7F87559E
	static Ped GET_RANDOM_PED_AT_COORD(float x, float y, float z, float xRadius, float yRadius, float zRadius, int pedType) { return invoke<Ped>(0xFA9B00, x, y, z, xRadius, yRadius, zRadius, pedType); } // 0x876046A8E3A4B71C 0xDC8239EB
	static BOOL GET_CLOSEST_PED(float x, float y, float z, float radius, BOOL p4, BOOL p5, Ped* outPed, BOOL p7, BOOL p8, int pedType) { return invoke<BOOL>(0xFA9B30, x, y, z, radius, p4, p5, outPed, p7, p8, pedType); } // 0xC33AB876A77F8164 0x8F6C1F55
	static void SET_SCENARIO_PEDS_TO_BE_RETURNED_BY_NEXT_COMMAND(BOOL value) { invoke<Void>(0xFA9C30, value); } // 0x14F19A8782C8071E 0x85615FD0
	static BOOL _0x03EA03AF85A85CB7(Ped ped, BOOL p1, BOOL p2, BOOL p3, BOOL p4, BOOL p5, BOOL p6, BOOL p7, Any p8) { return invoke<BOOL>(0xFA9C50, ped, p1, p2, p3, p4, p5, p6, p7, p8); } // 0x03EA03AF85A85CB7 0x18DD76A1
	static void _0xDED5AF5A0EA4B297(Ped driver, float p1) { invoke<Void>(0xFA9D40, driver, p1); } // 0xDED5AF5A0EA4B297 0x6D55B3B3
	static void SET_DRIVER_ABILITY(Ped driver, float ability) { invoke<Void>(0xFA9DB0, driver, ability); } // 0xB195FFA8042FC5C3 0xAAD4012C
	static void SET_DRIVER_AGGRESSIVENESS(Ped driver, float aggressiveness) { invoke<Void>(0xFA9E20, driver, aggressiveness); } // 0xA731F608CA104E3C 0x8B02A8FB
	static BOOL CAN_PED_RAGDOLL(Ped ped) { return invoke<BOOL>(0xFA9E90, ped); } // 0x128F79EDCECE4FD5 0xC0EFB7A3
	static BOOL SET_PED_TO_RAGDOLL(Ped ped, int time1, int time2, int ragdollType, BOOL p4, BOOL p5, BOOL p6) { return invoke<BOOL>(0xFA9F10, ped, time1, time2, ragdollType, p4, p5, p6); } // 0xAE99FB955581844A 0x83CB5052
	static BOOL SET_PED_TO_RAGDOLL_WITH_FALL(Ped ped, int time, int p2, int ragdollType, float x, float y, float z, float p7, float p8, float p9, float p10, float p11, float p12, float p13) { return invoke<BOOL>(0xFA9F70, ped, time, p2, ragdollType, x, y, z, p7, p8, p9, p10, p11, p12, p13); } // 0xD76632D99E4966C8 0xFA12E286
	static void SET_PED_RAGDOLL_ON_COLLISION(Ped ped, BOOL toggle) { invoke<Void>(0xFA9FC0, ped, toggle); } // 0xF0A4F1BBF4FA7497 0x2654A0F4
	static BOOL IS_PED_RAGDOLL(Ped ped) { return invoke<BOOL>(0xFA9FE0, ped); } // 0x47E4E977581C5B55 0xC833BBE1
	static BOOL IS_PED_RUNNING_RAGDOLL_TASK(Ped ped) { return invoke<BOOL>(0xFAA050, ped); } // 0xE3B6097CC25AA69E 0x44A153F2
	static void SET_PED_RAGDOLL_FORCE_FALL(Ped ped) { invoke<Void>(0xFAA0E0, ped); } // 0x01F6594B923B9251 0x20A5BDE0
	static void RESET_PED_RAGDOLL_TIMER(Ped ped) { invoke<Void>(0xFAA160, ped); } // 0x9FA4664CF62E47E8 0xF2865370
	static void SET_PED_CAN_RAGDOLL(Ped ped, BOOL toggle) { invoke<Void>(0xFAA1D0, ped, toggle); } // 0xB128377056A54E2A 0xCF1384C4
	static BOOL _0xD1871251F3B5ACD7(Ped ped) { return invoke<BOOL>(0xFAA1F0, ped); } // 0xD1871251F3B5ACD7
	static BOOL IS_PED_RUNNING_MOBILE_PHONE_TASK(Ped ped) { return invoke<BOOL>(0xFAA250, ped); } // 0x2AFE52F782F25775 0xFB2AFED1
	static BOOL _0xA3F3564A5B3646C0(Ped ped) { return invoke<BOOL>(0xFAA2A0, ped); } // 0xA3F3564A5B3646C0 0x97353375
	static void _SET_PED_RAGDOLL_BLOCKING_FLAGS(Ped ped, int flags) { invoke<Void>(0xFAA330, ped, flags); } // 0x26695EC767728D84 0x9C8F830D
	static void _RESET_PED_RAGDOLL_BLOCKING_FLAGS(Ped ped, int flags) { invoke<Void>(0xFAA340, ped, flags); } // 0xD86D101FCFD00A4B 0x77CBA290
	static void SET_PED_ANGLED_DEFENSIVE_AREA(Ped ped, float p1, float p2, float p3, float p4, float p5, float p6, float p7, BOOL p8, BOOL p9) { invoke<Void>(0xFAA3B0, ped, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 0xC7F76DF27A5045A1 0x3EFBDD9B
	static void SET_PED_SPHERE_DEFENSIVE_AREA(Ped ped, float x, float y, float z, float radius, BOOL p5, BOOL p6) { invoke<Void>(0xFAA3E0, ped, x, y, z, radius, p5, p6); } // 0x9D3151A373974804 0xBD96D8E8
	static void SET_PED_DEFENSIVE_SPHERE_ATTACHED_TO_PED(Ped ped, Ped target, float xOffset, float yOffset, float zOffset, float radius, BOOL p6) { invoke<Void>(0xFAA4E0, ped, target, xOffset, yOffset, zOffset, radius, p6); } // 0xF9B8F91AAD3B953E 0x40638BDC
	static void _0xE4723DB6E736CCFF(Ped ped, Any p1, float p2, float p3, float p4, float p5, BOOL p6) { invoke<Void>(0xFAA510, ped, p1, p2, p3, p4, p5, p6); } // 0xE4723DB6E736CCFF 0x4763B2C6
	static void SET_PED_DEFENSIVE_AREA_ATTACHED_TO_PED(Ped ped, Ped attachPed, float p2, float p3, float p4, float p5, float p6, float p7, float p8, BOOL p9, BOOL p10) { invoke<Void>(0xFAA540, ped, attachPed, p2, p3, p4, p5, p6, p7, p8, p9, p10); } // 0x4EF47FE21698A8B6 0x74BDA7CE
	static void SET_PED_DEFENSIVE_AREA_DIRECTION(Ped ped, float p1, float p2, float p3, BOOL p4) { invoke<Void>(0xFAA580, ped, p1, p2, p3, p4); } // 0x413C6C763A4AFFAD 0xB66B0C9A
	static void REMOVE_PED_DEFENSIVE_AREA(Ped ped, BOOL toggle) { invoke<Void>(0xFAA640, ped, toggle); } // 0x74D4E028107450A9 0x34AAAFA5
	static Vector3 GET_PED_DEFENSIVE_AREA_POSITION(Ped ped, BOOL p1) { return invoke<Vector3>(0xFAA6A0, ped, p1); } // 0x3C06B8786DD94CD1 0xCB65198D
	static BOOL _0xBA63D9FE45412247(Ped ped, BOOL p1) { return invoke<BOOL>(0xFAA710, ped, p1); } // 0xBA63D9FE45412247
	static void SET_PED_PREFERRED_COVER_SET(Ped ped, Any itemSet) { invoke<Void>(0xFAA790, ped, itemSet); } // 0x8421EB4DA7E391B9 0xF3B7EFBF
	static void REMOVE_PED_PREFERRED_COVER_SET(Ped ped) { invoke<Void>(0xFAA7E0, ped); } // 0xFDDB234CF74073D9 0xA0134498
	static void REVIVE_INJURED_PED(Ped ped) { invoke<Void>(0xFAA830, ped); } // 0x8D8ACD8388CD99CE 0x14D3E6E3
	static void RESURRECT_PED(Ped ped) { invoke<Void>(0xFAA8C0, ped); } // 0x71BC8E838B9C6035 0xA4B82097
	static void SET_PED_NAME_DEBUG(Ped ped, char* name) { invoke<Void>(0xFAA960, ped, name); } // 0x98EFA132A4117BE1 0x20D6273E
	static Vector3 GET_PED_EXTRACTED_DISPLACEMENT(Ped ped, BOOL worldSpace) { return invoke<Vector3>(0xFAA970, ped, worldSpace); } // 0xE0AF41401ADF87E3 0x5231F901
	static void SET_PED_DIES_WHEN_INJURED(Ped ped, BOOL toggle) { invoke<Void>(0xFAAA50, ped, toggle); } // 0x5BA7919BED300023 0xE94E24D4
	static void SET_PED_ENABLE_WEAPON_BLOCKING(Ped ped, BOOL toggle) { invoke<Void>(0xFAAAC0, ped, toggle); } // 0x97A790315D3831FD 0x4CAD1A4A
	static void _0xF9ACF4A08098EA25(Ped ped, BOOL p1) { invoke<Void>(0xFAAB20, ped, p1); } // 0xF9ACF4A08098EA25 0x141CC936
	static void RESET_PED_VISIBLE_DAMAGE(Ped ped) { invoke<Void>(0xFAABA0, ped); } // 0x3AC1F7B898F30C05 0xC4BC4841
	static void APPLY_PED_BLOOD_DAMAGE_BY_ZONE(Ped ped, Any p1, float p2, float p3, Any p4) { invoke<Void>(0xFAABF0, ped, p1, p2, p3, p4); } // 0x816F6981C60BF53B 0x1E54DB12
	static void APPLY_PED_BLOOD(Ped ped, int boneIndex, float xRot, float yRot, float zRot, char* woundType) { invoke<Void>(0xFAAC10, ped, boneIndex, xRot, yRot, zRot, woundType); } // 0x83F7E01C7B769A26 0x376CE3C0
	static void APPLY_PED_BLOOD_BY_ZONE(Ped ped, Any p1, float p2, float p3, Any* p4) { invoke<Void>(0xFAACE0, ped, p1, p2, p3, p4); } // 0x3311E47B91EDCBBC 0x8F3F3A9C
	static void APPLY_PED_BLOOD_SPECIFIC(Ped ped, Any p1, float p2, float p3, float p4, float p5, Any p6, float p7, Any* p8) { invoke<Void>(0xFAADC0, ped, p1, p2, p3, p4, p5, p6, p7, p8); } // 0xEF0D582CBF2D9B0F 0xFC13CE80
	static void APPLY_PED_DAMAGE_DECAL(Ped ped, int p1, float p2, float p3, float p4, float p5, float p6, int p7, BOOL p8, char* p9) { invoke<Void>(0xFAAEE0, ped, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 0x397C38AA7B4A5F83 0x8A13A41F
	static void APPLY_PED_DAMAGE_PACK(Ped ped, char* damagePack, float damage, float mult) { invoke<Void>(0xFAB010, ped, damagePack, damage, mult); } // 0x46DF918788CB093F 0x208D0CB8
	static void CLEAR_PED_BLOOD_DAMAGE(Ped ped) { invoke<Void>(0xFAB0C0, ped); } // 0x8FE22675A5A45817 0xF7ADC960
	static void CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(Ped ped, int p1) { invoke<Void>(0xFAB110, ped, p1); } // 0x56E3B78C5408D9F4 0xF210BE69
	static void HIDE_PED_BLOOD_DAMAGE_BY_ZONE(Ped ped, Any p1, BOOL p2) { invoke<Void>(0xFAB160, ped, p1, p2); } // 0x62AB793144DE75DC 0x0CB6C4ED
	static void CLEAR_PED_DAMAGE_DECAL_BY_ZONE(Ped ped, int p1, char* p2) { invoke<Void>(0xFAB1D0, ped, p1, p2); } // 0x523C79AEEFCC4A2A 0x70AA5B7D
	static Any GET_PED_DECORATIONS_STATE(Ped ped) { return invoke<Any>(0xFAB280, ped); } // 0x71EAB450D86954A1 0x47187F7F
	static void _0x2B694AFCF64E6994(Ped ped, BOOL p1) { invoke<Void>(0xFAB340, ped, p1); } // 0x2B694AFCF64E6994
	static void CLEAR_PED_WETNESS(Ped ped) { invoke<Void>(0xFAB3B0, ped); } // 0x9C720776DAA43E7E 0x629F15BD
	static void SET_PED_WETNESS_HEIGHT(Ped ped, float height) { invoke<Void>(0xFAB410, ped, height); } // 0x44CB6447D2571AA0 0x7B33289A
	static void SET_PED_WETNESS_ENABLED_THIS_FRAME(Ped ped) { invoke<Void>(0xFAB480, ped); } // 0xB5485E4907B53019 0xBDE749F7
	static void _0x6585D955A68452A5(Ped ped) { invoke<Void>(0xFAB4D0, ped); } // 0x6585D955A68452A5 0xA993915F
	static void SET_PED_SWEAT(Ped ped, float sweat) { invoke<Void>(0xFAB520, ped, sweat); } // 0x27B0405F59637D1F 0x76A1DB9F
	static void _SET_PED_DECORATION(Ped ped, Hash collection, Hash overlay) { invoke<Void>(0xFAB570, ped, collection, overlay); } // 0x5F5D1665E352A839 0x70559AC7
	static void _SET_PED_FACIAL_DECORATION(Ped ped, Hash collection, Hash overlay) { invoke<Void>(0xFAB610, ped, collection, overlay); } // 0x5619BFA07CFD7833
	static int _GET_TATTOO_ZONE(Hash collection, Hash overlay) { return invoke<int>(0xFAB6D0, collection, overlay); } // 0x9FD452BFBE7A7A8B 0x3543019E
	static void CLEAR_PED_DECORATIONS(Ped ped) { invoke<Void>(0xFAB730, ped); } // 0x0E5173C163976E38 0xD4496BF3
	static void _CLEAR_PED_FACIAL_DECORATIONS(Ped ped) { invoke<Void>(0xFAB780, ped); } // 0xE3B27E70CEAB9F0C 0xEFD58EB9
	static BOOL WAS_PED_SKELETON_UPDATED(Ped ped) { return invoke<BOOL>(0xFAB790, ped); } // 0x11B499C1E0FF8559 0xF7E2FBAD
	static Vector3 GET_PED_BONE_COORDS(Ped ped, int boneId, float offsetX, float offsetY, float offsetZ) { return invoke<Vector3>(0xFAB7D0, ped, boneId, offsetX, offsetY, offsetZ); } // 0x17C07FC640E86B4E 0x4579CAB1
	static void CREATE_NM_MESSAGE(BOOL startImmediately, int messageId) { invoke<Void>(0xFAB840, startImmediately, messageId); } // 0x418EF2A1BCE56685 0x1CFBFD4B
	static void GIVE_PED_NM_MESSAGE(Ped ped) { invoke<Void>(0xFAB8B0, ped); } // 0xB158DFCCC56E5C5B 0x737C3689
	static int ADD_SCENARIO_BLOCKING_AREA(float x1, float y1, float z1, float x2, float y2, float z2, BOOL p6, BOOL p7, BOOL p8, BOOL p9) { return invoke<int>(0xFAB8C0, x1, y1, z1, x2, y2, z2, p6, p7, p8, p9); } // 0x1B5C85C612E5256E 0xA38C0234
	static void REMOVE_SCENARIO_BLOCKING_AREAS() { invoke<Void>(0xFAB910); } // 0xD37401D78A929A49 0x4DDF845F
	static void REMOVE_SCENARIO_BLOCKING_AREA(Any p0, BOOL p1) { invoke<Void>(0xFAB930, p0, p1); } // 0x31D16B74C6E29D66 0x4483EF06
	static void SET_SCENARIO_PEDS_SPAWN_IN_SPHERE_AREA(float x, float y, float z, float range, int p4) { invoke<Void>(0xFAB950, x, y, z, range, p4); } // 0x28157D43CF600981 0x80EAD297
	static BOOL IS_PED_USING_SCENARIO(Ped ped, char* scenario) { return invoke<BOOL>(0xFABA60, ped, scenario); } // 0x1BF094736DD62C2E 0x0F65B0D4
	static BOOL IS_PED_USING_ANY_SCENARIO(Ped ped) { return invoke<BOOL>(0xFABA90, ped); } // 0x57AB4A3080F85143 0x195EF5B7
	static Any _0xFE07FF6495D52E2A(Any p0, Any p1, Any p2, Any p3) { return invoke<Any>(0xFABB00, p0, p1, p2, p3); } // 0xFE07FF6495D52E2A 0x59DE73AC
	static void _0x9A77DFD295E29B09(Any p0, BOOL p1) { invoke<Void>(0xFABB30, p0, p1); } // 0x9A77DFD295E29B09 0xC08FE5F6
	static Any _0x25361A96E0F7E419(Any p0, Any p1, Any p2, Any p3) { return invoke<Any>(0xFABBA0, p0, p1, p2, p3); } // 0x25361A96E0F7E419 0x58C0F6CF
	static Any _0xEC6935EBE0847B90(Any p0, Any p1, Any p2, Any p3) { return invoke<Any>(0xFABBD0, p0, p1, p2, p3); } // 0xEC6935EBE0847B90 0x761F8F48
	static void _0xA3A9299C4F2ADB98(Any p0) { invoke<Void>(0xFABC80, p0); } // 0xA3A9299C4F2ADB98 0x033F43FA
	static void _0xF1C03A5352243A30(Any p0) { invoke<Void>(0xFABCD0, p0); } // 0xF1C03A5352243A30 0x4C684C81
	static Any _0xEEED8FAFEC331A70(Any p0, Any p1, Any p2, Any p3) { return invoke<Any>(0xFABD20, p0, p1, p2, p3); } // 0xEEED8FAFEC331A70 0x7B4C3E6F
	static void _0x425AECF167663F48(Ped ped, BOOL p1) { invoke<Void>(0xFABDE0, ped, p1); } // 0x425AECF167663F48 0x5BC276AE
	static void _0x5B6010B3CBC29095(Any p0, BOOL p1) { invoke<Void>(0xFABE40, p0, p1); } // 0x5B6010B3CBC29095
	static void _0xCEDA60A74219D064(Any p0, BOOL p1) { invoke<Void>(0xFABEA0, p0, p1); } // 0xCEDA60A74219D064
	static void PLAY_FACIAL_ANIM(Ped ped, char* animName, char* animDict) { invoke<Void>(0xFABF00, ped, animName, animDict); } // 0xE1E65CA8AC9C00ED 0x1F6CCDDE
	static void SET_FACIAL_IDLE_ANIM_OVERRIDE(Ped ped, char* animName, char* animDict) { invoke<Void>(0xFABF20, ped, animName, animDict); } // 0xFFC24B988B938B38 0x9BA19C13
	static void CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(Ped ped) { invoke<Void>(0xFABF40, ped); } // 0x726256CC1EEB182F 0x5244F4E2
	static void SET_PED_CAN_PLAY_GESTURE_ANIMS(Ped ped, BOOL toggle) { invoke<Void>(0xFABF50, ped, toggle); } // 0xBAF20C5432058024 0xE131E3B3
	static void SET_PED_CAN_PLAY_VISEME_ANIMS(Ped ped, BOOL toggle, BOOL p2) { invoke<Void>(0xFABFC0, ped, toggle, p2); } // 0xF833DDBA3B104D43 0xA2FDAF27
	static void _SET_PED_CAN_PLAY_INJURED_ANIMS(Ped ped, BOOL p1) { invoke<Void>(0xFAC050, ped, p1); } // 0x33A60D8BDD6E508C 0xADB2511A
	static void SET_PED_CAN_PLAY_AMBIENT_ANIMS(Ped ped, BOOL toggle) { invoke<Void>(0xFAC0B0, ped, toggle); } // 0x6373D1349925A70E 0xF8053081
	static void SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(Ped ped, BOOL toggle) { invoke<Void>(0xFAC110, ped, toggle); } // 0x0EB0585D15254740 0x5720A5DD
	static void _0xC2EE020F5FB4DB53(Ped ped) { invoke<Void>(0xFAC170, ped); } // 0xC2EE020F5FB4DB53 0xB7CD0A49
	static void SET_PED_CAN_ARM_IK(Ped ped, BOOL toggle) { invoke<Void>(0xFAC1D0, ped, toggle); } // 0x6C3B4D6D13B4C841 0x343B4DE0
	static void SET_PED_CAN_HEAD_IK(Ped ped, BOOL toggle) { invoke<Void>(0xFAC230, ped, toggle); } // 0xC11C18092C5530DC 0xD3B04476
	static void SET_PED_CAN_LEG_IK(Ped ped, BOOL toggle) { invoke<Void>(0xFAC290, ped, toggle); } // 0x73518ECE2485412B 0x9955BC6F
	static void SET_PED_CAN_TORSO_IK(Ped ped, BOOL toggle) { invoke<Void>(0xFAC2F0, ped, toggle); } // 0xF2B7106D37947CE0 0x8E5D4EAB
	static void _0xF5846EDB26A98A24(Ped ped, BOOL p1) { invoke<Void>(0xFAC350, ped, p1); } // 0xF5846EDB26A98A24 0x7B0040A8
	static void _0x6647C5F6F5792496(Ped ped, BOOL p1) { invoke<Void>(0xFAC3B0, ped, p1); } // 0x6647C5F6F5792496 0x0FDA62DE
	static void SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Ped ped, BOOL toggle) { invoke<Void>(0xFAC410, ped, toggle); } // 0xEC4686EC06434678 0x584C5178
	static BOOL IS_PED_HEADTRACKING_PED(Ped ped1, Ped ped2) { return invoke<BOOL>(0xFAC470, ped1, ped2); } // 0x5CD3CB88A7F8850D 0x2A5DF721
	static BOOL IS_PED_HEADTRACKING_ENTITY(Ped ped, Entity entity) { return invoke<BOOL>(0xFAC4A0, ped, entity); } // 0x813A0A7C9D2E831F 0x233C9ACF
	static void SET_PED_PRIMARY_LOOKAT(Ped ped, Ped lookAt) { invoke<Void>(0xFAC4D0, ped, lookAt); } // 0xCD17B554996A8D9E 0x6DEF6F1C
	static void _0x78C4E9961DB3EB5B(Any p0, Any p1) { invoke<Void>(0xFAC4E0, p0, p1); } // 0x78C4E9961DB3EB5B 0xFC942D7C
	static void SET_PED_CLOTH_PRONE(Any p0, Any p1) { invoke<Void>(0xFAC530, p0, p1); } // 0x82A3D6D9CC2CB8E3 0x89EEE07B
	static void _0xA660FAF550EB37E5(Any p0, BOOL p1) { invoke<Void>(0xFAC580, p0, p1); } // 0xA660FAF550EB37E5
	static void SET_PED_CONFIG_FLAG(Ped ped, int flagId, BOOL value) { invoke<Void>(0xFAC5D0, ped, flagId, value); } // 0x1913FE4CBF41C463 0x9CFBE10D
	static void SET_PED_RESET_FLAG(Ped ped, int flagId, BOOL doReset) { invoke<Void>(0xFAC680, ped, flagId, doReset); } // 0xC1E8A365BF3B29F2 0xCFF6FF66
	static BOOL GET_PED_CONFIG_FLAG(Ped ped, int flagId, BOOL p2) { return invoke<BOOL>(0xFAC700, ped, flagId, p2); } // 0x7EE53118C892B513 0xABE98267
	static BOOL GET_PED_RESET_FLAG(Ped ped, int flagId) { return invoke<BOOL>(0xFAC730, ped, flagId); } // 0xAF9E59B1B1FBF2A0 0x2FC10D11
	static void SET_PED_GROUP_MEMBER_PASSENGER_INDEX(Ped ped, int index) { invoke<Void>(0xFAC7A0, ped, index); } // 0x0BDDB8D9EC6BCF3C 0x2AB3670B
	static void SET_PED_CAN_EVASIVE_DIVE(Ped ped, BOOL toggle) { invoke<Void>(0xFAC800, ped, toggle); } // 0x6B7A646C242A7059 0x542FEB4D
	static BOOL IS_PED_EVASIVE_DIVING(Ped ped, Entity* evadingEntity) { return invoke<BOOL>(0xFAC860, ped, evadingEntity); } // 0x414641C26E105898 0xD82829DC
	static void SET_PED_SHOOTS_AT_COORD(Ped ped, float x, float y, float z, BOOL toggle) { invoke<Void>(0xFAC8F0, ped, x, y, z, toggle); } // 0x96A05E4FB321B1BA 0xFD64EAE5
	static void SET_PED_MODEL_IS_SUPPRESSED(Ped ped, BOOL toggle) { invoke<Void>(0xFAC910, ped, toggle); } // 0xE163A4BCE4DE6F11 0x7820CA43
	static void STOP_ANY_PED_MODEL_BEING_SUPPRESSED() { invoke<Void>(0xFAC930); } // 0xB47BD05FA66B40CF 0x5AD7DC55
	static void SET_PED_CAN_BE_TARGETED_WHEN_INJURED(Ped ped, BOOL toggle) { invoke<Void>(0xFAC940, ped, toggle); } // 0x638C03B0F9878F57 0x6FD9A7CD
	static void SET_PED_GENERATES_DEAD_BODY_EVENTS(Ped ped, BOOL toggle) { invoke<Void>(0xFAC9A0, ped, toggle); } // 0x7FB17BA2E7DECA5B 0xE9B97A2B
	static void _0xE43A13C9E4CCCBCF(Ped ped, BOOL p1) { invoke<Void>(0xFAC9C0, ped, p1); } // 0xE43A13C9E4CCCBCF 0xFF1F6AEB
	static void SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(Ped ped, BOOL toggle) { invoke<Void>(0xFACA80, ped, toggle); } // 0xDF993EE5E90ABA25 0xE9BD733A
	static void GIVE_PED_HELMET(Ped ped, BOOL cannotRemove, int helmetFlag, int textureIndex) { invoke<Void>(0xFACAE0, ped, cannotRemove, helmetFlag, textureIndex); } // 0x54C7C4A94367717E 0x1862A461
	static void REMOVE_PED_HELMET(Ped ped, BOOL instantly) { invoke<Void>(0xFACB00, ped, instantly); } // 0xA7B2458D0AD6DED8 0x2086B1F0
	static BOOL _0x14590DDBEDB1EC85(Ped ped) { return invoke<BOOL>(0xFACB20, ped); } // 0x14590DDBEDB1EC85
	static void SET_PED_HELMET(Ped ped, BOOL canWearHelmet) { invoke<Void>(0xFACB80, ped, canWearHelmet); } // 0x560A43136EB58105 0xED366E53
	static void SET_PED_HELMET_FLAG(Ped ped, int helmetFlag) { invoke<Void>(0xFACBE0, ped, helmetFlag); } // 0xC0E78D5C2CE3EB25 0x12677780
	static void SET_PED_HELMET_PROP_INDEX(Ped ped, int propIndex) { invoke<Void>(0xFACC40, ped, propIndex); } // 0x26D83693ED99291C 0xA316D13F
	static void SET_PED_HELMET_TEXTURE_INDEX(Ped ped, int textureIndex) { invoke<Void>(0xFACDD0, ped, textureIndex); } // 0xF1550C4BD22582E2 0x5F6C3328
	static BOOL IS_PED_WEARING_HELMET(Ped ped) { return invoke<BOOL>(0xFACE30, ped); } // 0xF33BDFE19B309B19 0x0D680D49
	static void _0x687C0B594907D2E8(Ped ped) { invoke<Void>(0xFACE90, ped); } // 0x687C0B594907D2E8 0x24A1284E
	static BOOL _0x451294E859ECC018(int p0) { return invoke<BOOL>(0xFACEF0, p0); } // 0x451294E859ECC018 0x8A3A3116
	static Any _0x9D728C1E12BF5518(Any p0) { return invoke<Any>(0xFACF50, p0); } // 0x9D728C1E12BF5518 0x74EB662D
	static BOOL _0xF2385935BFFD4D92(Any p0) { return invoke<BOOL>(0xFACFB0, p0); } // 0xF2385935BFFD4D92 0xFFF149FE
	static void SET_PED_TO_LOAD_COVER(Ped ped, BOOL toggle) { invoke<Void>(0xFACFE0, ped, toggle); } // 0x332B562EEDA62399 0xCF94BA97
	static void SET_PED_CAN_COWER_IN_COVER(Ped ped, BOOL toggle) { invoke<Void>(0xFAD040, ped, toggle); } // 0xCB7553CDCEF4A735 0x5194658B
	static void SET_PED_CAN_PEEK_IN_COVER(Ped ped, BOOL toggle) { invoke<Void>(0xFAD0A0, ped, toggle); } // 0xC514825C507E3736 0xC1DAE216
	static void SET_PED_PLAYS_HEAD_ON_HORN_ANIM_WHEN_DIES_IN_VEHICLE(Ped ped, BOOL toggle) { invoke<Void>(0xFAD100, ped, toggle); } // 0x94D94BF1A75AED3D 0x7C563CD2
	static void SET_PED_LEG_IK_MODE(Ped ped, int mode) { invoke<Void>(0xFAD110, ped, mode); } // 0xC396F5B86FF9FEBD 0xFDDB042E
	static void SET_PED_MOTION_BLUR(Ped ped, BOOL toggle) { invoke<Void>(0xFAD170, ped, toggle); } // 0x0A986918B102B448 0xA211A128
	static void SET_PED_CAN_SWITCH_WEAPON(Ped ped, BOOL toggle) { invoke<Void>(0xFAD1D0, ped, toggle); } // 0xED7F7EFE9FABF340 0xB5F8BA28
	static void SET_PED_DIES_INSTANTLY_IN_WATER(Ped ped, BOOL toggle) { invoke<Void>(0xFAD230, ped, toggle); } // 0xEEB64139BA29A7CF 0xFE2554FC
	static void _0x1A330D297AAC6BC1(Ped ped, int p1) { invoke<Void>(0xFAD290, ped, p1); } // 0x1A330D297AAC6BC1 0x77BB7CB8
	static void STOP_PED_WEAPON_FIRING_WHEN_DROPPED(Ped ped) { invoke<Void>(0xFAD2F0, ped); } // 0xC158D28142A34608 0x4AC3421E
	static void SET_SCRIPTED_ANIM_SEAT_OFFSET(Ped ped, float p1) { invoke<Void>(0xFAD330, ped, p1); } // 0x5917BBA32D06C230 0x7CEFFA45
	static void SET_PED_COMBAT_MOVEMENT(Ped ped, int combatMovement) { invoke<Void>(0xFAD380, ped, combatMovement); } // 0x4D9CA1009AFBD057 0x12E62F9E
	static int GET_PED_COMBAT_MOVEMENT(Ped ped) { return invoke<int>(0xFAD3D0, ped); } // 0xDEA92412FCAEB3F5 0xF3E7730E
	static void SET_PED_COMBAT_ABILITY(Ped ped, int p1) { invoke<Void>(0xFAD430, ped, p1); } // 0xC7622C0D36B2FDA8 0x6C23D329
	static void SET_PED_COMBAT_RANGE(Ped ped, int p1) { invoke<Void>(0xFAD480, ped, p1); } // 0x3C606747B23E497B 0x8818A959
	static Any GET_PED_COMBAT_RANGE(Ped ped) { return invoke<Any>(0xFAD4D0, ped); } // 0xF9D9F7F2DB8E2FA0 0x9B9B7163
	static void SET_PED_COMBAT_ATTRIBUTES(Ped ped, int attributeIndex, BOOL enabled) { invoke<Void>(0xFAD530, ped, attributeIndex, enabled); } // 0x9F7794730795E019 0x81D64248
	static void SET_PED_TARGET_LOSS_RESPONSE(Ped ped, int responseType) { invoke<Void>(0xFAD5B0, ped, responseType); } // 0x0703B9079823DA4A 0xCFA613FF
	static BOOL _0xDCCA191DF9980FD7(Ped ped) { return invoke<BOOL>(0xFAD600, ped); } // 0xDCCA191DF9980FD7 0x139C0875
	static BOOL IS_PED_PERFORMING_STEALTH_KILL(Ped ped) { return invoke<BOOL>(0xFAD670, ped); } // 0xFD4CCDBCC59941B7 0x9ADD7B21
	static BOOL _0xEBD0EDBA5BE957CF(Ped ped) { return invoke<BOOL>(0xFAD710, ped); } // 0xEBD0EDBA5BE957CF 0x9BE7C860
	static BOOL IS_PED_BEING_STEALTH_KILLED(Ped ped) { return invoke<BOOL>(0xFAD7A0, ped); } // 0x863B23EFDE9C5DF2 0xD044C8AF
	static Ped GET_MELEE_TARGET_FOR_PED(Ped ped) { return invoke<Ped>(0xFAD820, ped); } // 0x18A3E9EE1297FD39 0xAFEC26A4
	static BOOL WAS_PED_KILLED_BY_STEALTH(Ped ped) { return invoke<BOOL>(0xFAD8B0, ped); } // 0xF9800AA1A771B000 0x2EA4B54E
	static BOOL WAS_PED_KILLED_BY_TAKEDOWN(Ped ped) { return invoke<BOOL>(0xFAD900, ped); } // 0x7F08E26039C7347C 0xBDD3CE69
	static BOOL _0x61767F73EACEED21(Ped ped) { return invoke<BOOL>(0xFAD950, ped); } // 0x61767F73EACEED21 0x3993092B
	static void SET_PED_FLEE_ATTRIBUTES(Ped ped, int attributes, BOOL p2) { invoke<Void>(0xFAD9A0, ped, attributes, p2); } // 0x70A2D1137C8ED7C9 0xA717A875
	static void SET_PED_COWER_HASH(Ped ped, char* p1) { invoke<Void>(0xFADA10, ped, p1); } // 0xA549131166868ED3 0x16F30DF4
	static void _0x2016C603D6B8987C(Any p0, BOOL p1) { invoke<Void>(0xFADA70, p0, p1); } // 0x2016C603D6B8987C 0xA6F2C057
	static void SET_PED_STEERS_AROUND_PEDS(Ped ped, BOOL toggle) { invoke<Void>(0xFADAD0, ped, toggle); } // 0x46F2193B3AD1D891 0x797CAE4F
	static void SET_PED_STEERS_AROUND_OBJECTS(Ped ped, BOOL toggle) { invoke<Void>(0xFADB30, ped, toggle); } // 0x1509C089ADC208BF 0x3BD9B0A6
	static void SET_PED_STEERS_AROUND_VEHICLES(Ped ped, BOOL toggle) { invoke<Void>(0xFADB90, ped, toggle); } // 0xEB6FB9D48DDE23EC 0x533C0651
	static void _0xA9B61A329BFDCBEA(Any p0, BOOL p1) { invoke<Void>(0xFADBF0, p0, p1); } // 0xA9B61A329BFDCBEA 0x2276DE0D
	static void _0x570389D1C3DE3C6B(Any p0) { invoke<Void>(0xFADC50, p0); } // 0x570389D1C3DE3C6B 0x59C52BE6
	static void _0x576594E8D64375E2(Any p0, BOOL p1) { invoke<Void>(0xFADC90, p0, p1); } // 0x576594E8D64375E2 0x1D87DDC1
	static void _0xA52D5247A4227E14(Any p0) { invoke<Void>(0xFADCF0, p0); } // 0xA52D5247A4227E14 0xB52BA5F5
	static BOOL IS_ANY_PED_NEAR_POINT(float x, float y, float z, float radius) { return invoke<BOOL>(0xFADD30, x, y, z, radius); } // 0x083961498679DC9F 0xFBD9B050
	static void _0x2208438012482A1A(Ped ped, BOOL p1, BOOL p2) { invoke<Void>(0xFADE10, ped, p1, p2); } // 0x2208438012482A1A 0x187B9070
	static BOOL _0xFCF37A457CB96DC0(Any p0, float p1, float p2, float p3, float p4) { return invoke<BOOL>(0xFADEA0, p0, p1, p2, p3, p4); } // 0xFCF37A457CB96DC0 0x45037B9B
	static void _0x7D7A2E43E74E2EB8(Any p0) { invoke<Void>(0xFADED0, p0); } // 0x7D7A2E43E74E2EB8 0x840D24D3
	static void GET_PED_FLOOD_INVINCIBILITY(Ped ped, BOOL p1) { invoke<Void>(0xFADF10, ped, p1); } // 0x2BC338A7B21F4608 0x31C31DAA
	static void _0xCD018C591F94CB43(Any p0, BOOL p1) { invoke<Void>(0xFADF70, p0, p1); } // 0xCD018C591F94CB43
	static void _0x75BA1CB3B7D40CAF(Ped ped, BOOL p1) { invoke<Void>(0xFADFD0, ped, p1); } // 0x75BA1CB3B7D40CAF 0x9194DB71
	static BOOL IS_TRACKED_PED_VISIBLE(Ped ped) { return invoke<BOOL>(0xFAE030, ped); } // 0x91C8E617F64188AC 0x33248CC1
	static Any _0x511F1A683387C7E2(Any p0) { return invoke<Any>(0xFAE090, p0); } // 0x511F1A683387C7E2 0x5B1B70AA
	static BOOL IS_PED_TRACKED(Ped ped) { return invoke<BOOL>(0xFAE0F0, ped); } // 0x4C5E1F087CD10BB7 0x7EB613D9
	static BOOL HAS_PED_RECEIVED_EVENT(Ped ped, Any p1) { return invoke<BOOL>(0xFAE150, ped, p1); } // 0x8507BCB710FA6DC0 0xECD73DB0
	static BOOL _CAN_PED_SEE_PED(Ped ped1, Ped ped2) { return invoke<BOOL>(0xFAE180, ped1, ped2); } // 0x6CD5A433374D4CFB 0x74A0F291
	static BOOL _0x9C6A6C19B6C0C496(Ped p0, Any* p1) { return invoke<BOOL>(0xFAE1B0, p0, p1); } // 0x9C6A6C19B6C0C496
	static int GET_PED_BONE_INDEX(Ped ped, int boneId) { return invoke<int>(0xFAE2B0, ped, boneId); } // 0x3F428D08BE5AAE31 0x259C6BA2
	static int GET_PED_RAGDOLL_BONE_INDEX(Ped ped, int bone) { return invoke<int>(0xFAE2E0, ped, bone); } // 0x2057EF813397A772 0x849F0716
	static void SET_PED_ENVEFF_SCALE(Ped ped, float value) { invoke<Void>(0xFAE2F0, ped, value); } // 0xBF29516833893561 0xFC1CFC27
	static float GET_PED_ENVEFF_SCALE(Ped ped) { return invoke<float>(0xFAE390, ped); } // 0x9C14D30395A51A3C 0xA3421E39
	static void SET_ENABLE_PED_ENVEFF_SCALE(Ped ped, BOOL toggle) { invoke<Void>(0xFAE420, ped, toggle); } // 0xD2C5AA0C0E8D0F1E 0xC70F4A84
	static void _0x110F526AB784111F(Ped ped, float p1) { invoke<Void>(0xFAE4A0, ped, p1); } // 0x110F526AB784111F 0x3B882533
	static void _0xD69411AA0CEBF9E9(Ped ped, int p1, int p2, int p3) { invoke<Void>(0xFAE540, ped, p1, p2, p3); } // 0xD69411AA0CEBF9E9 0x87A0C174
	static void _0x1216E0BFA72CC703(Any p0, Any p1) { invoke<Void>(0xFAE810, p0, p1); } // 0x1216E0BFA72CC703 0x7BD26837
	static void _0x2B5AA717A181FB4C(Any p0, BOOL p1) { invoke<Void>(0xFAE820, p0, p1); } // 0x2B5AA717A181FB4C 0x98E29ED0
	static BOOL _0xB8B52E498014F5B0(Ped ped) { return invoke<BOOL>(0xFAE880, ped); } // 0xB8B52E498014F5B0
	static int CREATE_SYNCHRONIZED_SCENE(float x, float y, float z, float roll, float pitch, float yaw, int p6) { return invoke<int>(0xFAE8E0, x, y, z, roll, pitch, yaw, p6); } // 0x8C18E0F9080ADD73 0xFFDDF8FA
	static int _CREATE_SYNCHRONIZED_SCENE_2(float x, float y, float z, float radius, Hash object) { return invoke<int>(0xFAE910, x, y, z, radius, object); } // 0x62EC273D00187DCA 0xF3876894
	static BOOL IS_SYNCHRONIZED_SCENE_RUNNING(int sceneId) { return invoke<BOOL>(0xFAE940, sceneId); } // 0x25D39B935A038A26 0x57A282F1
	static void SET_SYNCHRONIZED_SCENE_ORIGIN(int sceneID, float x, float y, float z, float roll, float pitch, float yaw, BOOL p7) { invoke<Void>(0xFAE970, sceneID, x, y, z, roll, pitch, yaw, p7); } // 0x6ACF6B7225801CD7 0x2EC2A0B2
	static void SET_SYNCHRONIZED_SCENE_PHASE(int sceneID, float phase) { invoke<Void>(0xFAEA30, sceneID, phase); } // 0x734292F4F0ABF6D0 0xF5AB0D98
	static float GET_SYNCHRONIZED_SCENE_PHASE(int sceneID) { return invoke<float>(0xFAEA70, sceneID); } // 0xE4A310B1D7FA73CC 0xB0B2C852
	static void SET_SYNCHRONIZED_SCENE_RATE(int sceneID, float rate) { invoke<Void>(0xFAEAB0, sceneID, rate); } // 0xB6C49F8A5E295A5D 0xF10112FD
	static float GET_SYNCHRONIZED_SCENE_RATE(int sceneID) { return invoke<float>(0xFAEB20, sceneID); } // 0xD80932D577274D40 0x89365F0D
	static void SET_SYNCHRONIZED_SCENE_LOOPED(int sceneID, BOOL toggle) { invoke<Void>(0xFAEB60, sceneID, toggle); } // 0xD9A897A4C6C2974F 0x32ED9F82
	static BOOL IS_SYNCHRONIZED_SCENE_LOOPED(int sceneID) { return invoke<BOOL>(0xFAEBA0, sceneID); } // 0x62522002E0C391BA 0x47D87A84
	static void _SET_SYNCHRONIZED_SCENE_OCCLUSION_PORTAL(Any sceneID, BOOL p1) { invoke<Void>(0xFAEBE0, sceneID, p1); } // 0x394B9CD12435C981 0x2DE48DA1
	static BOOL _0x7F2F4F13AC5257EF(Any p0) { return invoke<BOOL>(0xFAEC30, p0); } // 0x7F2F4F13AC5257EF 0x72CF2514
	static void ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(int sceneID, Entity entity, int boneIndex) { invoke<Void>(0xFAEC70, sceneID, entity, boneIndex); } // 0x272E4723B56A3B96 0xE9BA6189
	static void DETACH_SYNCHRONIZED_SCENE(int sceneID) { invoke<Void>(0xFAECE0, sceneID); } // 0x6D38F1F04CBB37EA 0x52A1CAB2
	static void _DISPOSE_SYNCHRONIZED_SCENE(int scene) { invoke<Void>(0xFAED10, scene); } // 0xCD9CC7E200A52A6F 0xBF7F9035
	static BOOL FORCE_PED_MOTION_STATE(Ped ped, Hash motionStateHash, BOOL p2, BOOL p3, BOOL p4) { return invoke<BOOL>(0xFAED50, ped, motionStateHash, p2, p3, p4); } // 0xF28965D04F570DCA 0x164DDEFF
	static BOOL _0xF60165E1D2C5370B(Ped ped, Any* p1, Any* p2) { return invoke<BOOL>(0xFAED90, ped, p1, p2); } // 0xF60165E1D2C5370B
	static void SET_PED_MAX_MOVE_BLEND_RATIO(Ped ped, float value) { invoke<Void>(0xFAEE10, ped, value); } // 0x433083750C5E064A 0xEAD0269A
	static void SET_PED_MIN_MOVE_BLEND_RATIO(Ped ped, float value) { invoke<Void>(0xFAEE60, ped, value); } // 0x01A898D26E2333DD 0x383EC364
	static void SET_PED_MOVE_RATE_OVERRIDE(Ped ped, float value) { invoke<Void>(0xFAEEC0, ped, value); } // 0x085BF80FA50A39D1 0x900008C6
	static BOOL _0x46B05BCAE43856B0(Ped ped, int flag) { return invoke<BOOL>(0xFAEFC0, ped, flag); } // 0x46B05BCAE43856B0 0x79543043
	static int GET_PED_NEARBY_VEHICLES(Ped ped, int* sizeAndVehs) { return invoke<int>(0xFAF020, ped, sizeAndVehs); } // 0xCFF869CBFA210D82 0xCB716F68
	static int GET_PED_NEARBY_PEDS(Ped ped, int* sizeAndPeds, int ignore) { return invoke<int>(0xFAF050, ped, sizeAndPeds, ignore); } // 0x23F8F5FC7E8C4A6B 0x4D3325F4
	static BOOL _0x7350823473013C02(Ped ped) { return invoke<BOOL>(0xFAF080, ped); } // 0x7350823473013C02 0xF9FB4B71
	static BOOL IS_PED_USING_ACTION_MODE(Ped ped) { return invoke<BOOL>(0xFAF0E0, ped); } // 0x00E73468D085F745 0x5AE7EDA2
	static void SET_PED_USING_ACTION_MODE(Ped ped, BOOL p1, Any p2, char* action) { invoke<Void>(0xFAF140, ped, p1, p2, action); } // 0xD75ACCF5E0FB5367 0x8802F696
	static void _0x781DE8FA214E87D2(Ped ped, char* p1) { invoke<Void>(0xFAF160, ped, p1); } // 0x781DE8FA214E87D2
	static void SET_PED_CAPSULE(Ped ped, float value) { invoke<Void>(0xFAF1C0, ped, value); } // 0x364DF566EC833DE2 0xB153E1B9
	static int REGISTER_PEDHEADSHOT(Ped ped) { return invoke<int>(0xFAF210, ped); } // 0x4462658788425076 0xFFE2667B
	static Any _0x953563CE563143AF(Any p0) { return invoke<Any>(0xFAF2F0, p0); } // 0x953563CE563143AF 0x4DD03628
	static void UNREGISTER_PEDHEADSHOT(int handle) { invoke<Void>(0xFAF360, handle); } // 0x96B1361D9B24C2FF 0x0879AE45
	static BOOL IS_PEDHEADSHOT_VALID(int handle) { return invoke<BOOL>(0xFAF380, handle); } // 0xA0A9668F158129A2 0x0B1080C4
	static BOOL IS_PEDHEADSHOT_READY(int handle) { return invoke<BOOL>(0xFAF3C0, handle); } // 0x7085228842B13A67 0x761CD02E
	static char* GET_PEDHEADSHOT_TXD_STRING(int handle) { return invoke<char*>(0xFAF3F0, handle); } // 0xDB4EACD4AD0A5D6B 0x76D28E96
	static BOOL _0xF0DAEF2F545BEE25(Any p0) { return invoke<BOOL>(0xFAF420, p0); } // 0xF0DAEF2F545BEE25 0x10F2C023
	static void _0x5D517B27CF6ECD04(Any p0) { invoke<Void>(0xFAF460, p0); } // 0x5D517B27CF6ECD04 0x0DBB2FA7
	static Any _0xEBB376779A760AA8() { return invoke<Any>(0xFAF480); } // 0xEBB376779A760AA8 0x810158F8
	static Any _0x876928DDDFCCC9CD() { return invoke<Any>(0xFAF4A0); } // 0x876928DDDFCCC9CD 0x05023F8F
	static Any _0xE8A169E666CBC541() { return invoke<Any>(0xFAF4C0); } // 0xE8A169E666CBC541 0xAA39FD6C
	static void _0xC1F6EBF9A3D55538(Any p0, Any p1) { invoke<Void>(0xFAF4E0, p0, p1); } // 0xC1F6EBF9A3D55538 0xEF9142DB
	static void _0x600048C60D5C2C51(Any p0) { invoke<Void>(0xFAF540, p0); } // 0x600048C60D5C2C51 0x0688DE64
	static void _0x2DF9038C90AD5264(float p0, float p1, float p2, float p3, float p4, int interiorFlags, float scale, int duration) { invoke<Void>(0xFAF580, p0, p1, p2, p3, p4, interiorFlags, scale, duration); } // 0x2DF9038C90AD5264 0x909A1D76
	static void _0xB2AFF10216DEFA2F(float x, float y, float z, float p3, float p4, float p5, float p6, int interiorFlags, float scale, int duration) { invoke<Void>(0xFAF600, x, y, z, p3, p4, p5, p6, interiorFlags, scale, duration); } // 0xB2AFF10216DEFA2F 0x4AAD0ECB
	static void _0xFEE4A5459472A9F8() { invoke<Void>(0xFAF6A0); } // 0xFEE4A5459472A9F8 0x492C9E46
	static Any _0x3C67506996001F5E() { return invoke<Any>(0xFAF6B0); } // 0x3C67506996001F5E 0x814A28F4
	static Any _0xA586FBEB32A53DBB() { return invoke<Any>(0xFAF6E0); } // 0xA586FBEB32A53DBB 0x0B60D2BA
	static Any _0xF445DE8DA80A1792() { return invoke<Any>(0xFAF710); } // 0xF445DE8DA80A1792 0x6B83ABDF
	static Any _0xA635C11B8C44AFC2() { return invoke<Any>(0xFAF740); } // 0xA635C11B8C44AFC2 0xF46B4DC8
	static void _0x280C7E3AC7F56E90(Any p0, Any* p1, Any* p2, Any* p3) { invoke<Void>(0xFAF770, p0, p1, p2, p3); } // 0x280C7E3AC7F56E90 0x36A4AC65
	static void _0xB782F8238512BAD5(Any p0, Any* p1) { invoke<Void>(0xFAF7F0, p0, p1); } // 0xB782F8238512BAD5 0xBA699DDF
	static void SET_IK_TARGET(Ped ped, int ikIndex, Entity entityLookAt, int boneLookAt, float offsetX, float offsetY, float offsetZ, Any p7, int blendInDuration, int blendOutDuration) { invoke<Void>(0xFAF840, ped, ikIndex, entityLookAt, boneLookAt, offsetX, offsetY, offsetZ, p7, blendInDuration, blendOutDuration); } // 0xC32779C16FCEECD9 0x6FE5218C
	static void _0xED3C76ADFA6D07C4(Ped ped) { invoke<Void>(0xFAF880, ped); } // 0xED3C76ADFA6D07C4 0xFB4000DC
	static void REQUEST_ACTION_MODE_ASSET(char* asset) { invoke<Void>(0xFAF8E0, asset); } // 0x290E2780BB7AA598 0x572BA553
	static BOOL HAS_ACTION_MODE_ASSET_LOADED(char* asset) { return invoke<BOOL>(0xFAF960, asset); } // 0xE4B5F4BF2CB24E65 0xF7EB2BF1
	static void REMOVE_ACTION_MODE_ASSET(char* asset) { invoke<Void>(0xFAF990, asset); } // 0x13E940F88470FA51 0x3F480F92
	static void REQUEST_STEALTH_MODE_ASSET(char* asset) { invoke<Void>(0xFAFA10, asset); } // 0x2A0A62FCDEE16D4F 0x280A004A
	static BOOL HAS_STEALTH_MODE_ASSET_LOADED(char* asset) { return invoke<BOOL>(0xFAFAA0, asset); } // 0xE977FC5B08AF3441 0x39245667
	static void REMOVE_STEALTH_MODE_ASSET(char* asset) { invoke<Void>(0xFAFAD0, asset); } // 0x9219857D21F0E842 0x8C0B243A
	static void SET_PED_LOD_MULTIPLIER(Ped ped, float multiplier) { invoke<Void>(0xFAFB60, ped, multiplier); } // 0xDC2C5C242AAC342B 0x1D2B5C70
	static void _0xE861D0B05C7662B8(Pickup p0, Any p1, Blip* p2) { invoke<Void>(0xFAFBD0, p0, p1, p2); } // 0xE861D0B05C7662B8 0x2F9550C2
	static void _0x129466ED55140F8D(Ped ped, BOOL toggle) { invoke<Void>(0xFAFC60, ped, toggle); } // 0x129466ED55140F8D 0x37DBC2AD
	static void _0xCB968B53FC7F916D(Any p0, BOOL p1, Any p2, Any p3) { invoke<Void>(0xFAFCB0, p0, p1, p2, p3); } // 0xCB968B53FC7F916D 0xC0F1BC91
	static BOOL _0x68772DB2B2526F9F(Ped ped, float x, float y, float z, float range) { return invoke<BOOL>(0xFAFD20, ped, x, y, z, range); } // 0x68772DB2B2526F9F 0x1A464167
	static BOOL _0x06087579E7AA85A9(Any p0, Any p1, float p2, float p3, float p4, float p5) { return invoke<BOOL>(0xFAFDB0, p0, p1, p2, p3, p4, p5); } // 0x06087579E7AA85A9 0xD0567D41
	static void _0xD8C3BE3EE94CAF2D(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0xFAFDF0, p0, p1, p2, p3, p4); } // 0xD8C3BE3EE94CAF2D 0x4BBE5E2C
	static void _0xD33DAA36272177C4(Ped ped) { invoke<Void>(0xFAFE60, ped); } // 0xD33DAA36272177C4 0xA89A53F2
	static void _0x83A169EABCDB10A2(Any p0, Any p1) { invoke<Void>(0xFAFF00, p0, p1); } // 0x83A169EABCDB10A2
	static void _0x288DF530C92DAD6F(Any p0, float p1) { invoke<Void>(0xFAFF40, p0, p1); } // 0x288DF530C92DAD6F
}

namespace VEHICLE
{
	static Vehicle CREATE_VEHICLE(Hash modelHash, float x, float y, float z, float heading, BOOL isNetwork, BOOL thisScriptCheck) { return invoke<Vehicle>(0x101FBC0, modelHash, x, y, z, heading, isNetwork, thisScriptCheck); } // 0xAF35D0D2583051B0 0xDD75460A
	static void DELETE_VEHICLE(Vehicle* vehicle) { invoke<Void>(0x101FC10, vehicle); } // 0xEA386986E786A54F 0x9803AF60
	static void _0x7D6F9A3EF26136A0(Vehicle vehicle, BOOL p1, BOOL p2) { invoke<Void>(0x101FC20, vehicle, p1, p2); } // 0x7D6F9A3EF26136A0 0xBB54ECCA
	static void SET_VEHICLE_ALLOW_NO_PASSENGERS_LOCKON(Vehicle veh, BOOL toggle) { invoke<Void>(0x101FD50, veh, toggle); } // 0x5D14D4154BFE7B2C 0x8BAAC437
	static int _0xE6B0E8CFC3633BF0(Vehicle vehicle) { return invoke<int>(0x101FE00, vehicle); } // 0xE6B0E8CFC3633BF0 0xFBDE9FD8
	static BOOL IS_VEHICLE_MODEL(Vehicle vehicle, Hash model) { return invoke<BOOL>(0x101FEC0, vehicle, model); } // 0x423E8DE37D934D89 0x013B10B6
	static BOOL DOES_SCRIPT_VEHICLE_GENERATOR_EXIST(int v) { return invoke<BOOL>(0x101FF80, v); } // 0xF6086BC836400876 0xF6BDDA30
	static int CREATE_SCRIPT_VEHICLE_GENERATOR(float x, float y, float z, float heading, float p4, float p5, Hash modelHash, int p7, int p8, int p9, int p10, BOOL p11, BOOL p12, BOOL p13, BOOL p14, BOOL p15, int p16) { return invoke<int>(0x101FFE0, x, y, z, heading, p4, p5, modelHash, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16); } // 0x9DEF883114668116 0x25A9A261
	static void DELETE_SCRIPT_VEHICLE_GENERATOR(int vehicleGenerator) { invoke<Void>(0x10201B0, vehicleGenerator); } // 0x22102C9ABFCF125D 0xE4328E3F
	static void SET_SCRIPT_VEHICLE_GENERATOR(int vehicleGenerator, BOOL enabled) { invoke<Void>(0x1020230, vehicleGenerator, enabled); } // 0xD9D620E0AC6DC4B0 0x40D73747
	static void SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(float x1, float y1, float z1, float x2, float y2, float z2, BOOL p6, BOOL p7) { invoke<Void>(0x10202C0, x1, y1, z1, x2, y2, z2, p6, p7); } // 0xC12321827687FE4D 0xB4E0E69A
	static void SET_ALL_VEHICLE_GENERATORS_ACTIVE() { invoke<Void>(0x10202F0); } // 0x34AD89078831A4BC 0xAB1FDD76
	static void SET_ALL_LOW_PRIORITY_VEHICLE_GENERATORS_ACTIVE(BOOL active) { invoke<Void>(0x1020300, active); } // 0x608207E7A8FB787C 0x87F767F2
	static void _0x9A75585FB2E54FAD(float p0, float p1, float p2, float p3) { invoke<Void>(0x1020320, p0, p1, p2, p3); } // 0x9A75585FB2E54FAD 0x935A95DA
	static void _0x0A436B8643716D14() { invoke<Void>(0x1020360); } // 0x0A436B8643716D14 0x6C73E45A
	static BOOL SET_VEHICLE_ON_GROUND_PROPERLY(Vehicle vehicle) { return invoke<BOOL>(0x1020370, vehicle); } // 0x49733E92263139D1 0xE14FDBA6
	static Any SET_ALL_VEHICLES_SPAWN(Vehicle p0, BOOL p1, BOOL p2, BOOL p3) { return invoke<Any>(0x1020420, p0, p1, p2, p3); } // 0xE023E8AC4EF7C117 0xA0909ADB
	static BOOL IS_VEHICLE_STUCK_ON_ROOF(Vehicle vehicle) { return invoke<BOOL>(0x1020560, vehicle); } // 0xB497F06B288DCFDF 0x18D07C6C
	static void ADD_VEHICLE_UPSIDEDOWN_CHECK(Vehicle vehicle) { invoke<Void>(0x10205C0, vehicle); } // 0xB72E26D81006005B 0x3A13D384
	static void REMOVE_VEHICLE_UPSIDEDOWN_CHECK(Vehicle vehicle) { invoke<Void>(0x1020610, vehicle); } // 0xC53EB42A499A7E90 0xF390BA1B
	static BOOL IS_VEHICLE_STOPPED(Vehicle vehicle) { return invoke<BOOL>(0x1020630, vehicle); } // 0x5721B434AD84D57A 0x655F072C
	static int GET_VEHICLE_NUMBER_OF_PASSENGERS(Vehicle vehicle) { return invoke<int>(0x1020690, vehicle); } // 0x24CB2137731FFE89 0x1EF20849
	static int GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(Vehicle vehicle) { return invoke<int>(0x1020700, vehicle); } // 0xA7C4F2C6E744A550 0x0A2FC08C
	static int GET_VEHICLE_MODEL_NUMBER_OF_SEATS(Hash modelHash) { return invoke<int>(0x1020760, modelHash); } // 0x2AD93716F184EDA4 0x838F7BF7
	static BOOL _0xF7F203E31F96F6A1(Vehicle vehicle, BOOL flag) { return invoke<BOOL>(0x1020800, vehicle, flag); } // 0xF7F203E31F96F6A1 0x769E5CF2
	static BOOL _0xE33FFA906CE74880(Vehicle vehicle, Any p1) { return invoke<BOOL>(0x10208A0, vehicle, p1); } // 0xE33FFA906CE74880
	static void SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(float multiplier) { invoke<Void>(0x1020990, multiplier); } // 0x245A6883D966D537 0xF4187E51
	static void SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(float multiplier) { invoke<Void>(0x10209C0, multiplier); } // 0xB3B3359379FE77D3 0x543F712B
	static void SET_PARKED_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(float multiplier) { invoke<Void>(0x10209E0, multiplier); } // 0xEAE6DCC7EEE3DB1D 0xDD46CEBE
	static void _SET_SOMETHING_MULTIPLIER_THIS_FRAME(BOOL toggle) { invoke<Void>(0x1020A00, toggle); } // 0xD4B8E3D1917BC86B 0x09462665
	static void _SET_SOME_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(float value) { invoke<Void>(0x1020A20, value); } // 0x90B6DA738A9A25DA 0xDAE2A2BE
	static void SET_FAR_DRAW_VEHICLES(BOOL toggle) { invoke<Void>(0x1020A60, toggle); } // 0x26324F33423F3CC3 0x9F019C49
	static void SET_NUMBER_OF_PARKED_VEHICLES(int value) { invoke<Void>(0x1020A80, value); } // 0xCAA15F13EBD417FF 0x206A58E8
	static void SET_VEHICLE_DOORS_LOCKED(Vehicle vehicle, int doorLockStatus) { invoke<Void>(0x1020A90, vehicle, doorLockStatus); } // 0xB664292EAECF7FA6 0x4CDD35D0
	static void SET_PED_TARGETTABLE_VEHICLE_DESTROY(Vehicle vehicle, int doorIndex, int destroyType) { invoke<Void>(0x1020AE0, vehicle, doorIndex, destroyType); } // 0xBE70724027F85BCD 0xD61D182D
	static void DISABLE_VEHICLE_IMPACT_EXPLOSION_ACTIVATION(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x1020B60, vehicle, toggle); } // 0xD8050E0EB60CF274 0xC54156A9
	static void SET_VEHICLE_DOORS_LOCKED_FOR_PLAYER(Vehicle vehicle, Player player, BOOL toggle) { invoke<Void>(0x1020C00, vehicle, player, toggle); } // 0x517AAF684BB50CD1 0x49829236
	static BOOL GET_VEHICLE_DOORS_LOCKED_FOR_PLAYER(Vehicle vehicle, Player player) { return invoke<BOOL>(0x1020C20, vehicle, player); } // 0xF6AF6CB341349015 0x1DC50247
	static void SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x1020C90, vehicle, toggle); } // 0xA2F80B8D040727CC 0x891BA8A4
	static void _0x9737A37136F07E75(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x1020CB0, vehicle, toggle); } // 0x9737A37136F07E75 0xE4EF6514
	static void SET_VEHICLE_DOORS_LOCKED_FOR_TEAM(Vehicle vehicle, int team, BOOL toggle) { invoke<Void>(0x1020D10, vehicle, team, toggle); } // 0xB81F6D4A8F5EEBA8 0x4F85E783
	static void EXPLODE_VEHICLE(Vehicle vehicle, BOOL isAudible, BOOL isInvisible) { invoke<Void>(0x1020E50, vehicle, isAudible, isInvisible); } // 0xBA71116ADF5B514C 0xBEDEACEB
	static void SET_VEHICLE_OUT_OF_CONTROL(Vehicle vehicle, BOOL killDriver, BOOL explodeOnImpact) { invoke<Void>(0x1020F00, vehicle, killDriver, explodeOnImpact); } // 0xF19D095E42D430CC 0x3764D734
	static void SET_VEHICLE_TIMED_EXPLOSION(Vehicle vehicle, Ped ped, BOOL toggle) { invoke<Void>(0x1020FE0, vehicle, ped, toggle); } // 0x2E0A74E1002380B1 0xDB8CB8E2
	static void _0x99AD4CCCB128CBC9(Vehicle vehicle) { invoke<Void>(0x1021000, vehicle); } // 0x99AD4CCCB128CBC9 0x811373DE
	static Any _0x6ADAABD3068C5235() { return invoke<Any>(0x10210B0); } // 0x6ADAABD3068C5235 0xA4E69134
	static void _REQUEST_VEHICLE_PHONE_EXPLOSION() { invoke<Void>(0x1021130); } // 0xEF49CF0270307CBE 0x65255524
	static void SET_TAXI_LIGHTS(Vehicle vehicle, BOOL state) { invoke<Void>(0x1021140, vehicle, state); } // 0x598803E85E8448D9 0x68639D85
	static BOOL IS_TAXI_LIGHT_ON(Vehicle vehicle) { return invoke<BOOL>(0x10211B0, vehicle); } // 0x7504C0F113AB50FC 0x6FC4924A
	static BOOL IS_VEHICLE_IN_GARAGE_AREA(char* garageName, Vehicle vehicle) { return invoke<BOOL>(0x1021220, garageName, vehicle); } // 0xCEE4490CD57BB3C2 0xA90EC257
	static void SET_VEHICLE_COLOURS(Vehicle vehicle, int colorPrimary, int colorSecondary) { invoke<Void>(0x1021290, vehicle, colorPrimary, colorSecondary); } // 0x4F1D4BE3A7F24601 0x57F24253
	static void SET_VEHICLE_FULLBEAM(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x1021330, vehicle, toggle); } // 0x8B7FD87F0DDB421E 0x9C49CC15
	static void STEER_UNLOCK_BIAS(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x10213E0, vehicle, toggle); } // 0x07116E24E9D1929D 0xA59E3DCD
	static void SET_VEHICLE_CUSTOM_PRIMARY_COLOUR(Vehicle vehicle, int r, int g, int b) { invoke<Void>(0x10214A0, vehicle, r, g, b); } // 0x7141766F91D15BEA 0x8DF9F9BC
	static void GET_VEHICLE_CUSTOM_PRIMARY_COLOUR(Vehicle vehicle, int* r, int* g, int* b) { invoke<Void>(0x1021570, vehicle, r, g, b); } // 0xB64CF2CCA9D95F52 0x1C2B9FEF
	static void CLEAR_VEHICLE_CUSTOM_PRIMARY_COLOUR(Vehicle vehicle) { invoke<Void>(0x10215F0, vehicle); } // 0x55E1D2758F34E437 0x51E1E33D
	static BOOL GET_IS_VEHICLE_PRIMARY_COLOUR_CUSTOM(Vehicle vehicle) { return invoke<BOOL>(0x1021640, vehicle); } // 0xF095C0405307B21B 0xD7EC8760
	static void SET_VEHICLE_CUSTOM_SECONDARY_COLOUR(Vehicle vehicle, int r, int g, int b) { invoke<Void>(0x10216A0, vehicle, r, g, b); } // 0x36CED73BFED89754 0x9D77259E
	static void GET_VEHICLE_CUSTOM_SECONDARY_COLOUR(Vehicle vehicle, int* r, int* g, int* b) { invoke<Void>(0x1021770, vehicle, r, g, b); } // 0x8389CD56CA8072DC 0x3FF247A2
	static void CLEAR_VEHICLE_CUSTOM_SECONDARY_COLOUR(Vehicle vehicle) { invoke<Void>(0x10217F0, vehicle); } // 0x5FFBDEEC3E8E2009 0x7CE00B29
	static BOOL GET_IS_VEHICLE_SECONDARY_COLOUR_CUSTOM(Vehicle vehicle) { return invoke<BOOL>(0x1021840, vehicle); } // 0x910A32E7AAD2656C 0x288AD228
	static void SET_VEHICLE_ENVEFF_SCALE(Vehicle vehicle, float fade) { invoke<Void>(0x10218A0, vehicle, fade); } // 0x3AFDC536C3D01674 0x8332730C
	static float GET_VEHICLE_ENVEFF_SCALE(Vehicle vehicle) { return invoke<float>(0x1021910, vehicle); } // 0xA82819CAC9C4C403 0xD5F1EEE1
	static void SET_CAN_RESPRAY_VEHICLE(Vehicle vehicle, BOOL state) { invoke<Void>(0x1021990, vehicle, state); } // 0x52BBA29D5EC69356 0x37677590
	static void _0x33506883545AC0DF(Vehicle vehicle, BOOL p1) { invoke<Void>(0x1021B10, vehicle, p1); } // 0x33506883545AC0DF 0x54E9EE75
	static void _JITTER_VEHICLE(Vehicle vehicle, BOOL p1, float yaw, float pitch, float roll) { invoke<Void>(0x1021B80, vehicle, p1, yaw, pitch, roll); } // 0xC59872A5134879C7 0x4A46E814
	static void SET_BOAT_ANCHOR(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x1021C90, vehicle, toggle); } // 0x75DBEC174AEEAD10 0xA3906284
	static BOOL _GET_BOAT_ANCHOR(Vehicle vehicle) { return invoke<BOOL>(0x1021D30, vehicle); } // 0x26C10ECBDA5D043B
	static void _0xE3EBAAE484798530(Vehicle vehicle, BOOL p1) { invoke<Void>(0x1021DB0, vehicle, p1); } // 0xE3EBAAE484798530 0x0ED84792
	static void _0xB28B1FE5BFADD7F5(Vehicle vehicle, BOOL p1) { invoke<Void>(0x1021DD0, vehicle, p1); } // 0xB28B1FE5BFADD7F5 0xA739012A
	static void _0xE842A9398079BD82(Vehicle vehicle, float p1) { invoke<Void>(0x1021E30, vehicle, p1); } // 0xE842A9398079BD82 0x66FA450C
	static void _0x8F719973E1445BA2(Vehicle vehicle, Vehicle p1) { invoke<Void>(0x1021F00, vehicle, p1); } // 0x8F719973E1445BA2 0x35614622
	static void SET_VEHICLE_SIREN(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x1021FB0, vehicle, toggle); } // 0xF4924635A19EB37D 0x4AC1EFC7
	static BOOL IS_VEHICLE_SIREN_ON(Vehicle vehicle) { return invoke<BOOL>(0x1022010, vehicle); } // 0x4C9BF537BE2634B2 0x25EB5873
	static BOOL _IS_VEHICLE_SIREN_SOUND_ON(Vehicle vehicle) { return invoke<BOOL>(0x10220A0, vehicle); } // 0xB5CC40FBCB586380
	static void SET_VEHICLE_STRONG(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x1022140, vehicle, toggle); } // 0x3E8C8727991A8A0B 0xC758D19F
	static void REMOVE_VEHICLE_STUCK_CHECK(Vehicle vehicle) { invoke<Void>(0x10221E0, vehicle); } // 0x8386BFB614D06749 0x81594917
	static void GET_VEHICLE_COLOURS(Vehicle vehicle, int* colorPrimary, int* colorSecondary) { invoke<Void>(0x1022200, vehicle, colorPrimary, colorSecondary); } // 0xA19435F193E081AC 0x40D82D88
	static BOOL IS_VEHICLE_SEAT_FREE(Vehicle vehicle, int seatIndex) { return invoke<BOOL>(0x1022270, vehicle, seatIndex); } // 0x22AC59A870E6A669 0xDAF42B02
	static Ped GET_PED_IN_VEHICLE_SEAT(Vehicle vehicle, int index) { return invoke<Ped>(0x10222A0, vehicle, index); } // 0xBB40DD2270B65366 0x388FDE9A
	static Ped GET_LAST_PED_IN_VEHICLE_SEAT(Vehicle vehicle, int seatIndex) { return invoke<Ped>(0x10222D0, vehicle, seatIndex); } // 0x83F969AA1EE2A664 0xF7C6792D
	static BOOL GET_VEHICLE_LIGHTS_STATE(Vehicle vehicle, BOOL* lightsOn, BOOL* highbeamsOn) { return invoke<BOOL>(0x1022350, vehicle, lightsOn, highbeamsOn); } // 0xB91B4C20085BD12F 0x7C278621
	static Vehicle IS_VEHICLE_TYRE_BURST(Vehicle vehicle, Vehicle wheel_rf, BOOL completely) { return invoke<Vehicle>(0x10223E0, vehicle, wheel_rf, completely); } // 0xBA291848A0815CA9 0x48C80210
	static void SET_VEHICLE_FORWARD_SPEED(Vehicle vehicle, float speed) { invoke<Void>(0x10224B0, vehicle, speed); } // 0xAB54A438726D25D5 0x69880D14
	static void _SET_VEHICLE_HALT(Vehicle vehicle, float distance, int killEngine, BOOL unknown) { invoke<Void>(0x1022590, vehicle, distance, killEngine, unknown); } // 0x260BE8F09E326A20 0xCBC7D3C8
	static void _0x37EBBF3117BD6A25(Vehicle vehicle, float height) { invoke<Void>(0x10226A0, vehicle, height); } // 0x37EBBF3117BD6A25 0x943A6CFC
	static BOOL SET_PED_ENABLED_BIKE_RINGTONE(Vehicle vehicle, Entity entity) { return invoke<BOOL>(0x10226B0, vehicle, entity); } // 0x57715966069157AD 0x7FB25568
	static BOOL _0x62CA17B74C435651(Vehicle vehicle) { return invoke<BOOL>(0x10226E0, vehicle); } // 0x62CA17B74C435651 0x593143B9
	static Vehicle _GET_VEHICLE_ATTACHED_TO_ENTITY(Vehicle object) { return invoke<Vehicle>(0x10227A0, object); } // 0x375E7FC44F21C8AB 0x70DD5E25
	static BOOL _0x89D630CF5EA96D23(Vehicle vehicle, Entity entity) { return invoke<BOOL>(0x10227C0, vehicle, entity); } // 0x89D630CF5EA96D23 0xFBF5536A
	static void _0x6A98C2ECF57FA5D4(Vehicle vehicle, Entity entity) { invoke<Void>(0x10227F0, vehicle, entity); } // 0x6A98C2ECF57FA5D4 0x20AB5783
	static void _0x7C0043FDFF6436BC(Vehicle x) { invoke<Void>(0x1022800, x); } // 0x7C0043FDFF6436BC 0x0F11D01F
	static void _0x8AA9180DE2FEDD45(Vehicle vehicle, BOOL p1) { invoke<Void>(0x1022810, vehicle, p1); } // 0x8AA9180DE2FEDD45 0xAE040377
	static void _0x0A6A279F3AA4FD70(Vehicle vehicle, BOOL p1) { invoke<Void>(0x10228B0, vehicle, p1); } // 0x0A6A279F3AA4FD70 0x4C0E4031
	static BOOL _0x634148744F385576(Vehicle vehicle) { return invoke<BOOL>(0x1022920, vehicle); } // 0x634148744F385576 0x6346B7CC
	static void _0xE6F13851780394DA(Vehicle vehicle, float p1) { invoke<Void>(0x1022A00, vehicle, p1); } // 0xE6F13851780394DA 0xCCB41A55
	static void SET_VEHICLE_TYRE_BURST(Vehicle vehicle, int index, BOOL onRim, float p3) { invoke<Void>(0x1022AD0, vehicle, index, onRim, p3); } // 0xEC6A202EE4960385 0x89D28068
	static void SET_VEHICLE_DOORS_SHUT(Vehicle vehicle, BOOL closeInstantly) { invoke<Void>(0x1022AF0, vehicle, closeInstantly); } // 0x781B3D62BB013EF5 0xBB1FF6E7
	static void SET_VEHICLE_TYRES_CAN_BURST(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x1022B10, vehicle, toggle); } // 0xEB9DC3C7D8596C46 0xA198DB54
	static BOOL GET_VEHICLE_TYRES_CAN_BURST(Vehicle vehicle) { return invoke<BOOL>(0x1022B70, vehicle); } // 0x678B9BB8C3F58FEB 0x4D76CD2F
	static void SET_VEHICLE_WHEELS_CAN_BREAK(Vehicle vehicle, BOOL enabled) { invoke<Void>(0x1022BD0, vehicle, enabled); } // 0x29B18B4FD460CA8F 0x829ED654
	static void SET_VEHICLE_DOOR_OPEN(Vehicle vehicle, int doorIndex, BOOL loose, BOOL openInstantly) { invoke<Void>(0x1022C70, vehicle, doorIndex, loose, openInstantly); } // 0x7C65DAC73C35C862 0xBB75D38B
	static void REMOVE_VEHICLE_WINDOW(Vehicle vehicle, int windowIndex) { invoke<Void>(0x1022D50, vehicle, windowIndex); } // 0xA711568EEDB43069 0xBB8104A3
	static void ROLL_DOWN_WINDOWS(Vehicle vehicle) { invoke<Void>(0x1022DC0, vehicle); } // 0x85796B0549DDE156 0x51A16DC6
	static void ROLL_DOWN_WINDOW(Vehicle vehicle, int windowIndex) { invoke<Void>(0x1022DD0, vehicle, windowIndex); } // 0x7AD9E6CE657D69E3 0xF840134C
	static void ROLL_UP_WINDOW(Vehicle vehicle, int windowIndex) { invoke<Void>(0x1022E30, vehicle, windowIndex); } // 0x602E548F46E24D59 0x83B7E06A
	static void SMASH_VEHICLE_WINDOW(Vehicle vehicle, int index) { invoke<Void>(0x1022E90, vehicle, index); } // 0x9E5B5E4D2CCD2259 0xDDD9A8C2
	static void FIX_VEHICLE_WINDOW(Vehicle vehicle, int index) { invoke<Void>(0x1022EA0, vehicle, index); } // 0x772282EBEB95E682 0x6B8E990D
	static void _DETACH_VEHICLE_WINDSCREEN(Vehicle vehicle) { invoke<Void>(0x1022F00, vehicle); } // 0x6D645D59FB5F5AD3 0xCC95C96B
	static void _EJECT_JB700_ROOF(Vehicle vehicle, float x, float y, float z) { invoke<Void>(0x1022F60, vehicle, x, y, z); } // 0xE38CB9D7D39FDBCC 0xFDA7B6CA
	static void SET_VEHICLE_LIGHTS(Vehicle vehicle, int state) { invoke<Void>(0x1023010, vehicle, state); } // 0x34E710FF01247C5A 0xE8930226
	static void _0xC45C27EF50F36ADC(Vehicle vehicle, BOOL p1) { invoke<Void>(0x1023110, vehicle, p1); } // 0xC45C27EF50F36ADC 0x4221E435
	static void _SET_VEHICLE_LIGHTS_MODE(Vehicle vehicle, int p1) { invoke<Void>(0x1023160, vehicle, p1); } // 0x1FD09E7390A74D54
	static void SET_VEHICLE_ALARM(Vehicle vehicle, BOOL state) { invoke<Void>(0x10231C0, vehicle, state); } // 0xCDE5E70C1DDB954C 0x24877D84
	static void START_VEHICLE_ALARM(Vehicle vehicle) { invoke<Void>(0x1023210, vehicle); } // 0xB8FF7AB45305C345 0x5B451FF7
	static BOOL IS_VEHICLE_ALARM_ACTIVATED(Vehicle vehicle) { return invoke<BOOL>(0x1023260, vehicle); } // 0x4319E335B71FFF34 0xF2630A4C
	static void SET_VEHICLE_INTERIORLIGHT(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x10232E0, vehicle, toggle); } // 0xBC2042F090AF6AD3 0x9AD1FE1E
	static void SET_VEHICLE_LIGHT_MULTIPLIER(Vehicle vehicle, float multiplier) { invoke<Void>(0x10233E0, vehicle, multiplier); } // 0xB385454F8791F57C 0x48039D6A
	static void ATTACH_VEHICLE_TO_TRAILER(Vehicle vehicle, Vehicle trailer, float radius) { invoke<Void>(0x1023430, vehicle, trailer, radius); } // 0x3C7D42D58F770B54 0x2133977F
	static void _0x16B5E274BDE402F8(Vehicle vehicle, Vehicle trailer, float p2, float p3, float p4, float p5, float p6, float p7, float p8, float p9, float p10, float p11) { invoke<Void>(0x1023450, vehicle, trailer, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); } // 0x16B5E274BDE402F8 0x12AC1A16
	static void _0x374706271354CB18(Vehicle vehicle, Entity p1, float p2) { invoke<Void>(0x1023470, vehicle, p1, p2); } // 0x374706271354CB18 0x40C4763F
	static void DETACH_VEHICLE_FROM_TRAILER(Vehicle vehicle) { invoke<Void>(0x1023490, vehicle); } // 0x90532EDF0D2BDD86 0xB5DBF91D
	static BOOL IS_VEHICLE_ATTACHED_TO_TRAILER(Vehicle vehicle) { return invoke<BOOL>(0x1023520, vehicle); } // 0xE7CF3C4F9F489F0C 0xE142BBCC
	static void _0x2A8F319B392E7B3F(Vehicle vehicle, float p1) { invoke<Void>(0x1023550, vehicle, p1); } // 0x2A8F319B392E7B3F 0xE74E85CE
	static void _0x95CF53B3D687F9FA(Vehicle vehicle) { invoke<Void>(0x10235E0, vehicle); } // 0x95CF53B3D687F9FA 0x06C47A6F
	static void SET_VEHICLE_TYRE_FIXED(Vehicle vehicle, int tyreIndex) { invoke<Void>(0x10236A0, vehicle, tyreIndex); } // 0x6E13FC662B882D1D 0xA42EFA6B
	static void SET_VEHICLE_NUMBER_PLATE_TEXT(Vehicle vehicle, char* plateText) { invoke<Void>(0x1023720, vehicle, plateText); } // 0x95A88F0B409CDA47 0x400F9556
	static char* GET_VEHICLE_NUMBER_PLATE_TEXT(Vehicle vehicle) { return invoke<char*>(0x1023770, vehicle); } // 0x7CE1CCB9B293020E 0xE8522D58
	static int GET_NUMBER_OF_VEHICLE_NUMBER_PLATES() { return invoke<int>(0x10237D0); } // 0x4C4D6B2644F458CB 0xD24BC1AE
	static void SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(Vehicle vehicle, int plateIndex) { invoke<Void>(0x10237F0, vehicle, plateIndex); } // 0x9088EB5A43FFB0A1 0xA1A1890E
	static int GET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(Vehicle elegy) { return invoke<int>(0x1023840, elegy); } // 0xF11BC2DD9A3E7195 0x499747B6
	static void SET_RANDOM_TRAINS(BOOL toggle) { invoke<Void>(0x10238A0, toggle); } // 0x80D9F74197EA47D9 0xD461CA7F
	static Vehicle CREATE_MISSION_TRAIN(int variation, float x, float y, float z, BOOL direction) { return invoke<Vehicle>(0x10238C0, variation, x, y, z, direction); } // 0x63C6CCA8E68AE8C8 0xD4C2EAFD
	static void SWITCH_TRAIN_TRACK(int intersectionId, BOOL state) { invoke<Void>(0x10238F0, intersectionId, state); } // 0xFD813BB7DB977F20 0x68BFDD61
	static void _0x21973BBF8D17EDFA(Any p0, Any p1) { invoke<Void>(0x1023920, p0, p1); } // 0x21973BBF8D17EDFA 0xD5774FB7
	static void DELETE_ALL_TRAINS() { invoke<Void>(0x1023950); } // 0x736A718577F39C7D 0x83DE7ABF
	static void SET_TRAIN_SPEED(Vehicle train, float speed) { invoke<Void>(0x1023960, train, speed); } // 0xAA0BC91BE0B796E3 0xDFC35E4D
	static void SET_TRAIN_CRUISE_SPEED(Vehicle train, float speed) { invoke<Void>(0x10239D0, train, speed); } // 0x16469284DB8C62B5 0xB507F51D
	static void SET_RANDOM_BOATS(BOOL toggle) { invoke<Void>(0x1023A40, toggle); } // 0x84436EC293B1415F 0xB505BD89
	static void SET_GARBAGE_TRUCKS(BOOL toggle) { invoke<Void>(0x1023A60, toggle); } // 0x2AFD795EEAC8D30D 0xD9ABB0FF
	static BOOL DOES_VEHICLE_HAVE_STUCK_VEHICLE_CHECK(Vehicle vehicle) { return invoke<BOOL>(0x1023A80, vehicle); } // 0x57E4C39DE5EE8470 0x5D91D9AC
	static int GET_VEHICLE_RECORDING_ID(int p0, char* p1) { return invoke<int>(0x1023B00, p0, p1); } // 0x21543C612379DB3C 0x328D601D
	static void REQUEST_VEHICLE_RECORDING(int i, char* name) { invoke<Void>(0x1023B30, i, name); } // 0xAF514CABE74CBF15 0x91AFEFD9
	static BOOL HAS_VEHICLE_RECORDING_BEEN_LOADED(Any p0, Any* p1) { return invoke<BOOL>(0x1023BB0, p0, p1); } // 0x300D614A4C785FC4 0xF52CD7F5
	static void REMOVE_VEHICLE_RECORDING(Any p0, Any* p1) { invoke<Void>(0x1023BF0, p0, p1); } // 0xF1160ACCF98A3FC8 0xD3C05B00
	static Vector3 _0x92523B76657A517D(Any p0, float p1) { return invoke<Vector3>(0x1023C40, p0, p1); } // 0x92523B76657A517D 0xF31973BB
	static Vector3 GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(int p0, float p1, char* p2) { return invoke<Vector3>(0x1023CB0, p0, p1, p2); } // 0xD242728AA6F0FBA2 0x7178558D
	static Vector3 _0xF0F2103EFAF8CBA7(Any p0, float p1) { return invoke<Vector3>(0x1023D50, p0, p1); } // 0xF0F2103EFAF8CBA7 0x4D1C15C2
	static Vector3 GET_ROTATION_OF_VEHICLE_RECORDING_AT_TIME(Any p0, float p1, Any* p2) { return invoke<Vector3>(0x1023DC0, p0, p1, p2); } // 0x2058206FBE79A8AD 0xD96DEC68
	static float GET_TOTAL_DURATION_OF_VEHICLE_RECORDING_ID(Any p0) { return invoke<float>(0x1023E60, p0); } // 0x102D125411A7B6E6 0x7116785E
	static Any GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(Any p0, Any p1) { return invoke<Any>(0x1023E90, p0, p1); } // 0x0E48D1C262390950 0x5B35EEB7
	static float GET_POSITION_IN_RECORDING(Any p0) { return invoke<float>(0x1023ED0, p0); } // 0x2DACD605FC681475 0x7DCD644C
	static float GET_TIME_POSITION_IN_RECORDING(Any p0) { return invoke<float>(0x1023F20, p0); } // 0x5746F3A7AB7FE544 0xF8C3E4A2
	static void START_PLAYBACK_RECORDED_VEHICLE(Vehicle vehicle, int p1, char* playback, BOOL p3) { invoke<Void>(0x1023F70, vehicle, p1, playback, p3); } // 0x3F878F92B3A7A071 0xCF614CA8
	static void START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(Vehicle vehicle, Any p1, char* playback, Any p3, Any p4, Any p5) { invoke<Void>(0x1023F90, vehicle, p1, playback, p3, p4, p5); } // 0x7D80FD645D4DA346 0x4E721AD2
	static void _0x1F2E4E06DEA8992B(Any p0, BOOL p1) { invoke<Void>(0x1023FB0, p0, p1); } // 0x1F2E4E06DEA8992B 0x01B91CD0
	static void STOP_PLAYBACK_RECORDED_VEHICLE(Any p0) { invoke<Void>(0x1023FD0, p0); } // 0x54833611C17ABDEA 0xAE99C57C
	static void PAUSE_PLAYBACK_RECORDED_VEHICLE(Any p0) { invoke<Void>(0x1024020, p0); } // 0x632A689BF42301B1 0xCCF54912
	static void UNPAUSE_PLAYBACK_RECORDED_VEHICLE(Any p0) { invoke<Void>(0x1024070, p0); } // 0x8879EE09268305D5 0x59060F75
	static BOOL IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Any p0) { return invoke<BOOL>(0x10240C0, p0); } // 0x1C8A4C2C19E68EEC 0x61F7650D
	static BOOL IS_PLAYBACK_USING_AI_GOING_ON_FOR_VEHICLE(Any p0) { return invoke<BOOL>(0x1024120, p0); } // 0xAEA8FD591FAD4106 0x63022C58
	static Any GET_CURRENT_PLAYBACK_FOR_VEHICLE(Any p0) { return invoke<Any>(0x1024190, p0); } // 0x42BC05C27A946054 0xA3F44390
	static void SKIP_TO_END_AND_STOP_PLAYBACK_RECORDED_VEHICLE(Any p0) { invoke<Void>(0x10241E0, p0); } // 0xAB8E2EDA0C0A5883 0x8DEA18C8
	static void SET_PLAYBACK_SPEED(Vehicle vehicle, float speed) { invoke<Void>(0x1024230, vehicle, speed); } // 0x6683AB880E427778 0x684E26E4
	static void START_PLAYBACK_RECORDED_VEHICLE_USING_AI(Any p0, Any p1, Any* p2, float p3, Any p4) { invoke<Void>(0x1024290, p0, p1, p2, p3, p4); } // 0x29DE5FA52D00428C 0x8DE8E24E
	static void SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Any p0, float p1) { invoke<Void>(0x10242B0, p0, p1); } // 0x9438F7AD68771A20 0xCF3EFA4B
	static void SET_PLAYBACK_TO_USE_AI(Vehicle vehicle, int flag) { invoke<Void>(0x1024310, vehicle, flag); } // 0xA549C3B37EA28131 0xB536CCD7
	static void SET_PLAYBACK_TO_USE_AI_TRY_TO_REVERT_BACK_LATER(Any p0, Any p1, Any p2, BOOL p3) { invoke<Void>(0x1024360, p0, p1, p2, p3); } // 0x6E63860BBB190730 0x0C8ABAA4
	static void _0x5845066D8A1EA7F7(Vehicle vehicle, float x, float y, float z, Any p4) { invoke<Void>(0x10243E0, vehicle, x, y, z, p4); } // 0x5845066D8A1EA7F7 0x943A58EB
	static void _0x796A877E459B99EA(Any p0, float p1, float p2, float p3) { invoke<Void>(0x1024400, p0, p1, p2, p3); } // 0x796A877E459B99EA 0x5C9F477C
	static void _0xFAF2A78061FD9EF4(Any p0, float p1, float p2, float p3) { invoke<Void>(0x1024460, p0, p1, p2, p3); } // 0xFAF2A78061FD9EF4 0xCD83C393
	static void _0x063AE2B2CC273588(Any p0, BOOL p1) { invoke<Void>(0x10244C0, p0, p1); } // 0x063AE2B2CC273588 0x2EF8435C
	static void EXPLODE_VEHICLE_IN_CUTSCENE(Vehicle vehicle, BOOL p1) { invoke<Void>(0x1024560, vehicle, p1); } // 0x786A4EB67B01BF0B 0xA85207B5
	static void ADD_VEHICLE_STUCK_CHECK_WITH_WARP(Any p0, float p1, Any p2, BOOL p3, BOOL p4, BOOL p5, Any p6) { invoke<Void>(0x10245E0, p0, p1, p2, p3, p4, p5, p6); } // 0x2FA9923062DD396C 0xC8B789AD
	static void SET_VEHICLE_MODEL_IS_SUPPRESSED(Hash model, BOOL suppressed) { invoke<Void>(0x1024690, model, suppressed); } // 0x0FC2D89AC25A5814 0x42A08C9B
	static Vehicle GET_RANDOM_VEHICLE_IN_SPHERE(float x, float y, float z, float radius, Hash modelHash, int flags) { return invoke<Vehicle>(0x10246B0, x, y, z, radius, modelHash, flags); } // 0x386F6CE5BAF6091C 0x57216D03
	static Vehicle GET_RANDOM_VEHICLE_FRONT_BUMPER_IN_SPHERE(float p0, float p1, float p2, float p3, int p4, int p5, int p6) { return invoke<Vehicle>(0x1024730, p0, p1, p2, p3, p4, p5, p6); } // 0xC5574E0AEB86BA68 0xDCADEB66
	static Vehicle GET_RANDOM_VEHICLE_BACK_BUMPER_IN_SPHERE(float p0, float p1, float p2, float p3, int p4, int p5, int p6) { return invoke<Vehicle>(0x10247B0, p0, p1, p2, p3, p4, p5, p6); } // 0xB50807EABE20A8DC 0xD6343F6B
	static Vehicle GET_CLOSEST_VEHICLE(float x, float y, float z, float radius, Hash modelHash, int flags) { return invoke<Vehicle>(0x1024830, x, y, z, radius, modelHash, flags); } // 0xF73EB622C4F1689B 0xD7E26B2C
	static Entity GET_TRAIN_CARRIAGE(Vehicle train, int trailerNumber) { return invoke<Entity>(0x1024860, train, trailerNumber); } // 0x08AAFD0814722BC3 0x2544E7A6
	static void DELETE_MISSION_TRAIN(Vehicle* train) { invoke<Void>(0x10248D0, train); } // 0x5B76B14AE875C795 0x86C9497D
	static void SET_MISSION_TRAIN_AS_NO_LONGER_NEEDED(Vehicle* train, BOOL p1) { invoke<Void>(0x1024950, train, p1); } // 0xBBE7648349B49BE8 0x19808560
	static void SET_MISSION_TRAIN_COORDS(Vehicle train, float x, float y, float z) { invoke<Void>(0x10249D0, train, x, y, z); } // 0x591CA673AA6AB736 0xD6D70803
	static BOOL IS_THIS_MODEL_A_BOAT(Hash model) { return invoke<BOOL>(0x1024A80, model); } // 0x45A9187928F4B9E3 0x10F6085C
	static BOOL _IS_THIS_MODEL_A_JETSKI(Hash model) { return invoke<BOOL>(0x1024B00, model); } // 0x9537097412CF75FE
	static BOOL IS_THIS_MODEL_A_PLANE(Hash model) { return invoke<BOOL>(0x1024B80, model); } // 0xA0948AB42D7BA0DE 0x3B3907BB
	static BOOL IS_THIS_MODEL_A_HELI(Hash model) { return invoke<BOOL>(0x1024C00, model); } // 0xDCE4334788AF94EA 0x8AF7F568
	static BOOL IS_THIS_MODEL_A_CAR(Hash model) { return invoke<BOOL>(0x1024C80, model); } // 0x7F6DB52EEFC96DF8 0x60E4C22F
	static BOOL IS_THIS_MODEL_A_TRAIN(Hash model) { return invoke<BOOL>(0x1024D00, model); } // 0xAB935175B22E822B 0xF87DCFFD
	static BOOL IS_THIS_MODEL_A_BIKE(Hash model) { return invoke<BOOL>(0x1024D80, model); } // 0xB50C0B0CEDC6CE84 0x7E702CDD
	static BOOL IS_THIS_MODEL_A_BICYCLE(Hash model) { return invoke<BOOL>(0x1024E00, model); } // 0xBF94DD42F63BDED2 0x328E6FF5
	static BOOL IS_THIS_MODEL_A_QUADBIKE(Hash model) { return invoke<BOOL>(0x1024E80, model); } // 0x39DAC362EE65FA28 0xC1625277
	static void SET_HELI_BLADES_FULL_SPEED(Vehicle vehicle) { invoke<Void>(0x1025000, vehicle); } // 0xA178472EBB8AE60D 0x033A9408
	static void SET_HELI_BLADES_SPEED(Vehicle vehicle, float speed) { invoke<Void>(0x1025020, vehicle, speed); } // 0xFD280B4D7F3ABC4D 0x5C7D4EA9
	static void _0x99CAD8E7AFDB60FA(Vehicle vehicle, float p1, float p2) { invoke<Void>(0x1025030, vehicle, p1, p2); } // 0x99CAD8E7AFDB60FA 0x1128A45B
	static void SET_VEHICLE_CAN_BE_TARGETTED(Vehicle vehicle, BOOL state) { invoke<Void>(0x10250C0, vehicle, state); } // 0x3750146A28097A82 0x64B70B1D
	static void _0xDBC631F109350B8C(Vehicle vehicle, BOOL p1) { invoke<Void>(0x1025160, vehicle, p1); } // 0xDBC631F109350B8C 0x486C1280
	static void SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(Vehicle vehicle, BOOL state) { invoke<Void>(0x1025180, vehicle, state); } // 0x4C7028F78FFD3681 0xC5D94017
	static void _0x1AA8A837D2169D94(Vehicle vehicle, BOOL p1) { invoke<Void>(0x1025220, vehicle, p1); } // 0x1AA8A837D2169D94 0x009AB49E
	static void _0x2311DD7159F00582(Vehicle vehicle, BOOL p1) { invoke<Void>(0x10252C0, vehicle, p1); } // 0x2311DD7159F00582 0x758C5E2E
	static float GET_VEHICLE_DIRT_LEVEL(Vehicle vehicle) { return invoke<float>(0x10253B0, vehicle); } // 0x8F17BC8BA08DA62B 0xFD15C065
	static void SET_VEHICLE_DIRT_LEVEL(Vehicle vehicle, float dirtLevel) { invoke<Void>(0x1025400, vehicle, dirtLevel); } // 0x79D3B596FE44EE8B 0x2B39128B
	static BOOL _IS_VEHICLE_DAMAGED(Vehicle vehicle) { return invoke<BOOL>(0x1025470, vehicle); } // 0xBCDC5017D3CE1E9E 0xDAC523BC
	static BOOL IS_VEHICLE_DOOR_FULLY_OPEN(Vehicle vehicle, int doorIndex) { return invoke<BOOL>(0x10254D0, vehicle, doorIndex); } // 0x3E933CFF7B111C22 0xC2385B6F
	static void SET_VEHICLE_ENGINE_ON(Vehicle vehicle, BOOL value, BOOL instantly, BOOL otherwise) { invoke<Void>(0x1025550, vehicle, value, instantly, otherwise); } // 0x2497C4717C8B881E 0x7FBC86F1
	static void SET_VEHICLE_UNDRIVEABLE(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x1025580, vehicle, toggle); } // 0x8ABA6AF54B942B95 0x48D02A4E
	static void SET_VEHICLE_PROVIDES_COVER(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x1025650, vehicle, toggle); } // 0x5AFEEDD9BB2899D7 0xEFC01CA9
	static void SET_VEHICLE_DOOR_CONTROL(Vehicle vehicle, int doorIndex, int speed, float angle) { invoke<Void>(0x10256F0, vehicle, doorIndex, speed, angle); } // 0xF2BFA0430F0A0FCB 0x572DD360
	static void SET_VEHICLE_DOOR_LATCHED(Vehicle vehicle, int doorIndex, BOOL forceClose, BOOL lock, BOOL p4) { invoke<Void>(0x1025710, vehicle, doorIndex, forceClose, lock, p4); } // 0xA5A9653A8D2CAF48 0x4EB7BBFC
	static float GET_VEHICLE_DOOR_ANGLE_RATIO(Vehicle vehicle, int door) { return invoke<float>(0x1025740, vehicle, door); } // 0xFE3F9C29F7B32BD5 0x0E399C26
	static Ped _GET_PED_USING_VEHICLE_DOOR(Vehicle vehicle, int doorIndex) { return invoke<Ped>(0x10257D0, vehicle, doorIndex); } // 0x218297BF0CFD853B
	static void SET_VEHICLE_DOOR_SHUT(Vehicle vehicle, int doorIndex, BOOL closeInstantly) { invoke<Void>(0x1025800, vehicle, doorIndex, closeInstantly); } // 0x93D9BD300D7789E5 0x142606BD
	static void SET_VEHICLE_DOOR_BROKEN(Vehicle vehicle, int doorIndex, BOOL deleteDoor) { invoke<Void>(0x1025820, vehicle, doorIndex, deleteDoor); } // 0xD4D4F6A4AB575A33 0x8147FEA7
	static void SET_VEHICLE_CAN_BREAK(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x1025840, vehicle, toggle); } // 0x59BF8C3D52C92F66 0x90A810D1
	static BOOL DOES_VEHICLE_HAVE_ROOF(Vehicle vehicle) { return invoke<BOOL>(0x10258B0, vehicle); } // 0x8AC862B0B32C5B80 0xDB817403
	static BOOL IS_BIG_VEHICLE(Vehicle vehicle) { return invoke<BOOL>(0x10259D0, vehicle); } // 0x9F243D3919F442FE 0x9CDBA8DE
	static int GET_NUMBER_OF_VEHICLE_COLOURS(Vehicle vehicle) { return invoke<int>(0x1025A30, vehicle); } // 0x3B963160CD65D41E 0xF2442EE2
	static void SET_VEHICLE_COLOUR_COMBINATION(Vehicle vehicle, int colorCombination) { invoke<Void>(0x1025AA0, vehicle, colorCombination); } // 0x33E8CD3322E2FE31 0xA557AEAD
	static int GET_VEHICLE_COLOUR_COMBINATION(Vehicle vehicle) { return invoke<int>(0x1025AB0, vehicle); } // 0x6A842D197F845D56 0x77AC1B4C
	static void SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x1025AD0, vehicle, toggle); } // 0x31B927BBC44156CD 0x14413319
	static void _0xBE5C1255A1830FF5(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x1025B70, vehicle, toggle); } // 0xBE5C1255A1830FF5 0xA6D8D7A5
	static void _0x9BECD4B9FEF3F8A6(Vehicle vehicle, BOOL p1) { invoke<Void>(0x1025C10, vehicle, p1); } // 0x9BECD4B9FEF3F8A6 0xACAB8FF3
	static void _0x88BC673CA9E0AE99(Vehicle vehicle, BOOL p1) { invoke<Void>(0x1025C90, vehicle, p1); } // 0x88BC673CA9E0AE99 0xF0E5C41D
	static void _0xE851E480B814D4BA(Vehicle vehicle, BOOL p1) { invoke<Void>(0x1025D10, vehicle, p1); } // 0xE851E480B814D4BA 0x2F98B4B7
	static void GET_RANDOM_VEHICLE_MODEL_IN_MEMORY(BOOL p0, Hash* modelHash, int* p2) { invoke<Void>(0x1025DA0, p0, modelHash, p2); } // 0x055BF0AC0C34F4FD 0xE2C45631
	static int GET_VEHICLE_DOOR_LOCK_STATUS(Vehicle vehicle) { return invoke<int>(0x1025DB0, vehicle); } // 0x25BC98A59C2EA962 0x0D72CEF2
	static BOOL IS_VEHICLE_DOOR_DAMAGED(Vehicle veh, int doorID) { return invoke<BOOL>(0x1025E80, veh, doorID); } // 0xB8E181E559464527 0x4999E3C3
	static void _SET_VEHICLE_DOOR_CAN_BREAK(Vehicle vehicle, int doorIndex, BOOL isBreakable) { invoke<Void>(0x1025F20, vehicle, doorIndex, isBreakable); } // 0x2FA133A4A9D37ED8 0x065B92B3
	static BOOL _0x27B926779DEB502D(Vehicle vehicle, BOOL frontBumper) { return invoke<BOOL>(0x1025FB0, vehicle, frontBumper); } // 0x27B926779DEB502D 0xB3A2CC4F
	static BOOL IS_VEHICLE_BUMPER_BROKEN_OFF(Vehicle vehicle, BOOL front) { return invoke<BOOL>(0x1026040, vehicle, front); } // 0x468056A6BB6F3846 0xAF25C027
	static BOOL IS_COP_VEHICLE_IN_AREA_3D(float x1, float x2, float y1, float y2, float z1, float z2) { return invoke<BOOL>(0x1026070, x1, x2, y1, y2, z1, z2); } // 0x7EEF65D5F153E26A 0xFB16C6D1
	static BOOL IS_VEHICLE_ON_ALL_WHEELS(Vehicle vehicle) { return invoke<BOOL>(0x1026120, vehicle); } // 0xB104CD1BABF302E2 0x10089F8E
	static Hash GET_VEHICLE_LAYOUT_HASH(Vehicle vehicle) { return invoke<Hash>(0x10261A0, vehicle); } // 0x28D37D4F71AC5C58 0xE0B35187
	static Any _0xA01BC64DD4BFBBAC(Vehicle vehicle, int p1) { return invoke<Any>(0x1026200, vehicle, p1); } // 0xA01BC64DD4BFBBAC
	static void SET_RENDER_TRAIN_AS_DERAILED(Vehicle train, BOOL toggle) { invoke<Void>(0x1026280, train, toggle); } // 0x317B11A312DF5534 0x899D9092
	static void SET_VEHICLE_EXTRA_COLOURS(Vehicle vehicle, int pearlescentColor, int wheelColor) { invoke<Void>(0x10262A0, vehicle, pearlescentColor, wheelColor); } // 0x2036F561ADD12E33 0x515DB2A0
	static void GET_VEHICLE_EXTRA_COLOURS(Vehicle vehicle, int* pearlescentColor, int* wheelColor) { invoke<Void>(0x1026340, vehicle, pearlescentColor, wheelColor); } // 0x3BC4245933A166F7 0x80E4659B
	static void STOP_ALL_GARAGE_ACTIVITY() { invoke<Void>(0x1026530); } // 0x0F87E938BDF29D66 0x17A0BCE5
	static void SET_VEHICLE_FIXED(Vehicle vehicle) { invoke<Void>(0x1026540, vehicle); } // 0x115722B1B9C14C1C 0x17469AA1
	static void SET_VEHICLE_DEFORMATION_FIXED(Vehicle vehicle) { invoke<Void>(0x10265B0, vehicle); } // 0x953DA1E1B12C0491 0xDD2920C8
	static void _0x206BC5DC9D1AC70A(Vehicle vehicle, BOOL p1) { invoke<Void>(0x1026600, vehicle, p1); } // 0x206BC5DC9D1AC70A
	static void _0x51BB2D88D31A914B(Vehicle vehicle, BOOL p1) { invoke<Void>(0x10266B0, vehicle, p1); } // 0x51BB2D88D31A914B 0x88F0F7E7
	static void _0x192547247864DFDD(Vehicle vehicle, BOOL p1) { invoke<Void>(0x1026770, vehicle, p1); } // 0x192547247864DFDD 0x90D6EE57
	static void SET_DISABLE_VEHICLE_PETROL_TANK_FIRES(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x1026830, vehicle, toggle); } // 0x465BF26AB9684352 0xC40192B5
	static void SET_DISABLE_VEHICLE_PETROL_TANK_DAMAGE(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x10268E0, vehicle, toggle); } // 0x37C8252A7C92D017 0xAD3E05F2
	static void _0x91A0BD635321F145(Vehicle vehicle, BOOL p1) { invoke<Void>(0x1026990, vehicle, p1); } // 0x91A0BD635321F145 0x1784BA1A
	static void _0xC50CE861B55EAB8B(Vehicle vehicle, BOOL p1) { invoke<Void>(0x1026A40, vehicle, p1); } // 0xC50CE861B55EAB8B 0x40C323AE
	static void _0x6EBFB22D646FFC18(Vehicle vehicle, BOOL p1) { invoke<Void>(0x1026AF0, vehicle, p1); } // 0x6EBFB22D646FFC18 0x847F1304
	static void _0x25367DE49D64CF16(Vehicle vehicle, BOOL p1) { invoke<Void>(0x1026B90, vehicle, p1); } // 0x25367DE49D64CF16 0xCBD98BA1
	static void REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(float x1, float y1, float z1, float x2, float y2, float z2, Any unk) { invoke<Void>(0x1026C40, x1, y1, z1, x2, y2, z2, unk); } // 0x46A1E1A299EC4BBA 0x42CC15E0
	static void SET_VEHICLE_STEER_BIAS(Vehicle vehicle, float value) { invoke<Void>(0x1026C60, vehicle, value); } // 0x42A8EC77D5150CBE 0x7357C1EB
	static BOOL IS_VEHICLE_EXTRA_TURNED_ON(Vehicle vehicle, int extraId) { return invoke<BOOL>(0x1026CB0, vehicle, extraId); } // 0xD2E6822DBFD6C8BD 0x042098B5
	static void SET_VEHICLE_EXTRA(Vehicle vehicle, int extraId, BOOL disable) { invoke<Void>(0x1026D20, vehicle, extraId, disable); } // 0x7EE3A3C5E4A40CC9 0x642D065C
	static BOOL DOES_EXTRA_EXIST(Vehicle vehicle, int extraId) { return invoke<BOOL>(0x1026D40, vehicle, extraId); } // 0x1262D55792428154 0x409411CC
	static void SET_CONVERTIBLE_ROOF(Vehicle vehicle, BOOL p1) { invoke<Void>(0x1026DC0, vehicle, p1); } // 0xF39C4F538B5124C2 0xC87B6A51
	static void LOWER_CONVERTIBLE_ROOF(Vehicle vehicle, BOOL instantlyLower) { invoke<Void>(0x1026E30, vehicle, instantlyLower); } // 0xDED51F703D0FA83D 0xC5F72EAE
	static void RAISE_CONVERTIBLE_ROOF(Vehicle vehicle, BOOL instantlyRaise) { invoke<Void>(0x1026E80, vehicle, instantlyRaise); } // 0x8F5FB35D7E88FC70 0xA4E4CBA3
	static int GET_CONVERTIBLE_ROOF_STATE(Vehicle vehicle) { return invoke<int>(0x1026ED0, vehicle); } // 0xF8C397922FC03F41 0x1B09714D
	static BOOL IS_VEHICLE_A_CONVERTIBLE(Vehicle vehicle, BOOL p1) { return invoke<BOOL>(0x1026F30, vehicle, p1); } // 0x52F357A30698BCCE 0x6EF54490
	static BOOL IS_VEHICLE_STOPPED_AT_TRAFFIC_LIGHTS(Vehicle vehicle) { return invoke<BOOL>(0x10270B0, vehicle); } // 0x2959F696AE390A99 0x69200FA4
	static void SET_VEHICLE_DAMAGE(Vehicle vehicle, float xOffset, float yOffset, float zOffset, float damage, float radius, BOOL p6) { invoke<Void>(0x1027150, vehicle, xOffset, yOffset, zOffset, damage, radius, p6); } // 0xA1DD317EA8FD4F29 0x21B458B2
	static float GET_VEHICLE_ENGINE_HEALTH(Vehicle vehicle) { return invoke<float>(0x10271D0, vehicle); } // 0xC45D23BAF168AAB8 0x8880038A
	static void SET_VEHICLE_ENGINE_HEALTH(Vehicle vehicle, float health) { invoke<Void>(0x1027230, vehicle, health); } // 0x45F6D8EEF34ABEF1 0x1B760FB5
	static float GET_VEHICLE_PETROL_TANK_HEALTH(Vehicle vehicle) { return invoke<float>(0x10273D0, vehicle); } // 0x7D5DABE888D2D074 0xE41595CE
	static void SET_VEHICLE_PETROL_TANK_HEALTH(Vehicle vehicle, float health) { invoke<Void>(0x1027430, vehicle, health); } // 0x70DB57649FA8D0D8 0x660A3692
	static BOOL IS_VEHICLE_STUCK_TIMER_UP(Vehicle vehicle, int p1, int p2) { return invoke<BOOL>(0x1027480, vehicle, p1, p2); } // 0x679BE1DAF71DA874 0x2FCF58C1
	static void RESET_VEHICLE_STUCK_TIMER(Vehicle vehicle, int nullAttributes) { invoke<Void>(0x1027510, vehicle, nullAttributes); } // 0xD7591B0065AFAA7A 0xEF2A6016
	static BOOL IS_VEHICLE_DRIVEABLE(Vehicle vehicle, BOOL isOnFireCheck) { return invoke<BOOL>(0x1027560, vehicle, isOnFireCheck); } // 0x4C241E39B23DF959 0x41A7267A
	static void SET_VEHICLE_HAS_BEEN_OWNED_BY_PLAYER(Vehicle vehicle, BOOL owned) { invoke<Void>(0x10275F0, vehicle, owned); } // 0x2B5F9D2AF1F1722D 0xB4D3DBFB
	static void SET_VEHICLE_NEEDS_TO_BE_HOTWIRED(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x1027690, vehicle, toggle); } // 0xFBA550EA44404EE6 0xD8260751
	static void _0x9F3F689B814F2599(Vehicle vehicle, BOOL p1) { invoke<Void>(0x1027730, vehicle, p1); } // 0x9F3F689B814F2599
	static void _0x4E74E62E0A97E901(Vehicle vehicle, BOOL p1) { invoke<Void>(0x10277D0, vehicle, p1); } // 0x4E74E62E0A97E901
	static void START_VEHICLE_HORN(Vehicle vehicle, int duration, Hash mode, BOOL forever) { invoke<Void>(0x1027870, vehicle, duration, mode, forever); } // 0x9C8C6504B5B63D2C 0x0DF5ADB3
	static void _SET_VEHICLE_SILENT(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x1027940, vehicle, toggle); } // 0x9D44FCCE98450843 0x968E5770
	static void SET_VEHICLE_HAS_STRONG_AXLES(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x10279A0, vehicle, toggle); } // 0x92F0CF722BC4202F 0x0D1CBC65
	static char* GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(Hash modelHash) { return invoke<char*>(0x1027A40, modelHash); } // 0xB215AAC32D25D019 0xEC86DF39
	static Vector3 GET_VEHICLE_DEFORMATION_AT_POS(Vehicle vehicle, float offsetX, float offsetY, float offsetZ) { return invoke<Vector3>(0x1027AC0, vehicle, offsetX, offsetY, offsetZ); } // 0x4EC6CFBC7B2E9536 0xABF02075
	static void SET_VEHICLE_LIVERY(Vehicle vehicle, int liveryIndex) { invoke<Void>(0x1027B90, vehicle, liveryIndex); } // 0x60BF608F1B8CD1B6 0x7AD87059
	static int GET_VEHICLE_LIVERY(Vehicle trailers2) { return invoke<int>(0x1027BF0, trailers2); } // 0x2BB9230590DA5E8A 0xEC82A51D
	static int GET_VEHICLE_LIVERY_COUNT(Vehicle vehicle) { return invoke<int>(0x1027C50, vehicle); } // 0x87B63E25A529D526 0xFB0CA947
	static BOOL IS_VEHICLE_WINDOW_INTACT(Vehicle vehicle, int windowIndex) { return invoke<BOOL>(0x1027DD0, vehicle, windowIndex); } // 0x46E571A0E20D01F1 0xAC4EF23D
	static BOOL ARE_ALL_VEHICLE_WINDOWS_INTACT(Vehicle vehicle) { return invoke<BOOL>(0x1027E40, vehicle); } // 0x11D862A3E977A9EF 0xBB619744
	static BOOL ARE_ANY_VEHICLE_SEATS_FREE(Vehicle vehicle) { return invoke<BOOL>(0x1027EA0, vehicle); } // 0x2D34FC3BC4ADB780 0x648E685A
	static void RESET_VEHICLE_WHEELS(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x1027F10, vehicle, toggle); } // 0x21D2E5662C1F6FED 0xD5FFE779
	static BOOL IS_HELI_PART_BROKEN(Vehicle vehicle, BOOL p1, BOOL p2, BOOL p3) { return invoke<BOOL>(0x1027F90, vehicle, p1, p2, p3); } // 0xBC74B4BE25EB6C8A 0xF4E4C439
	static float _GET_HELI_MAIN_ROTOR_HEALTH(Vehicle vehicle) { return invoke<float>(0x1028040, vehicle); } // 0xE4CB7541F413D2C5 0xF01E2AAB
	static float _GET_HELI_TAIL_ROTOR_HEALTH(Vehicle vehicle) { return invoke<float>(0x10280C0, vehicle); } // 0xAE8CE82A4219AC8C 0xA41BC13D
	static float _GET_HELI_ENGINE_HEALTH(Vehicle vehicle) { return invoke<float>(0x1028140, vehicle); } // 0xAC51915D27E4A5F7 0x8A68388F
	static BOOL WAS_COUNTER_ACTIVATED(Vehicle vehicle, Any p1) { return invoke<BOOL>(0x1028280, vehicle, p1); } // 0x3EC8BF18AA453FE9 0x2916D69B
	static void SET_VEHICLE_NAME_DEBUG(Vehicle vehicle, char* name) { invoke<Void>(0x10282E0, vehicle, name); } // 0xBFDF984E2C22B94F 0xA712FF5C
	static void SET_VEHICLE_EXPLODES_ON_HIGH_EXPLOSION_DAMAGE(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x10282F0, vehicle, toggle); } // 0x71B0892EC081D60A 0x38CC692B
	static void _0x3441CAD2F2231923(Vehicle vehicle, BOOL p1) { invoke<Void>(0x10283E0, vehicle, p1); } // 0x3441CAD2F2231923 0xC306A9A3
	static void _0x2B6747FAA9DB9D6B(Vehicle vehicle, BOOL p1) { invoke<Void>(0x1028480, vehicle, p1); } // 0x2B6747FAA9DB9D6B 0x95A9ACCB
	static void CONTROL_LANDING_GEAR(Vehicle vehicle, int state) { invoke<Void>(0x1028580, vehicle, state); } // 0xCFC8BE9A5E1FE575 0x24F873FB
	static int GET_LANDING_GEAR_STATE(Vehicle vehicle) { return invoke<int>(0x1028600, vehicle); } // 0x9B0F3DCA3DB0F4CD 0xA6F02670
	static BOOL IS_ANY_VEHICLE_NEAR_POINT(float x, float y, float z, float radius) { return invoke<BOOL>(0x1028690, x, y, z, radius); } // 0x61E1DD6125A3EEE6 0x2867A834
	static void REQUEST_VEHICLE_HIGH_DETAIL_MODEL(Vehicle vehicle) { invoke<Void>(0x1028790, vehicle); } // 0xA6E9FDCB2C76785E 0x9DA21956
	static void REMOVE_VEHICLE_HIGH_DETAIL_MODEL(Vehicle vehicle) { invoke<Void>(0x10287D0, vehicle); } // 0x00689CDE5F7C6787 0x382BE070
	static BOOL IS_VEHICLE_HIGH_DETAIL(Vehicle vehicle) { return invoke<BOOL>(0x1028810, vehicle); } // 0x1F25887F3C104278 0x55D41928
	static void REQUEST_VEHICLE_ASSET(Hash vehicleHash, int vehicleAsset) { invoke<Void>(0x1028870, vehicleHash, vehicleAsset); } // 0x81A15811460FAB3A 0x902B4F06
	static BOOL HAS_VEHICLE_ASSET_LOADED(int vehicleAsset) { return invoke<BOOL>(0x1028920, vehicleAsset); } // 0x1BBE0523B8DB9A21 0x8DAAC3CB
	static void REMOVE_VEHICLE_ASSET(int vehicleAsset) { invoke<Void>(0x1028950, vehicleAsset); } // 0xACE699C71AB9DEB5 0x9620E9C6
	static void _SET_TOW_TRUCK_CRANE_HEIGHT(Vehicle towTruck, float height) { invoke<Void>(0x10289D0, towTruck, height); } // 0xFE54B92A344583CA 0x88236E22
	static void ATTACH_VEHICLE_TO_TOW_TRUCK(Vehicle towTruck, Vehicle vehicle, BOOL rear, float hookOffsetX, float hookOffsetY, float hookOffsetZ) { invoke<Void>(0x1028A70, towTruck, vehicle, rear, hookOffsetX, hookOffsetY, hookOffsetZ); } // 0x29A16F8D621C4508 0x8151571A
	static void DETACH_VEHICLE_FROM_TOW_TRUCK(Vehicle towTruck, Vehicle vehicle) { invoke<Void>(0x1028A90, towTruck, vehicle); } // 0xC2DB6B6708350ED8 0xC666CF33
	static BOOL DETACH_VEHICLE_FROM_ANY_TOW_TRUCK(Vehicle vehicle) { return invoke<BOOL>(0x1028AA0, vehicle); } // 0xD0E9CE05A1E68CD8 0x3BF93651
	static BOOL IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(Vehicle towTruck, Vehicle vehicle) { return invoke<BOOL>(0x1028AD0, towTruck, vehicle); } // 0x146DF9EC4C4B9FD4 0x9699CFDC
	static Entity GET_ENTITY_ATTACHED_TO_TOW_TRUCK(Vehicle towTruck) { return invoke<Entity>(0x1028B00, towTruck); } // 0xEFEA18DCF10F8F75 0x11EC7844
	static Any SET_VEHICLE_AUTOMATICALLY_ATTACHES(Vehicle vehicle, BOOL p1, Any p2) { return invoke<Any>(0x1028BB0, vehicle, p1, p2); } // 0x8BA6F76BC53A1493 0x4273A8D3
	static void _0xF8EBCCC96ADB9FB7(Any p0, float p1, BOOL p2) { invoke<Void>(0x1028C70, p0, p1, p2); } // 0xF8EBCCC96ADB9FB7 0xED23C8A3
	static void _0x56B94C6D7127DFBA(Any p0, float p1, BOOL p2) { invoke<Void>(0x1028C90, p0, p1, p2); } // 0x56B94C6D7127DFBA 0xB1A52EF7
	static void _0x1093408B4B9D1146(Any p0, float p1) { invoke<Void>(0x1028D40, p0, p1); } // 0x1093408B4B9D1146 0xF30C566F
	static void _SET_DESIRED_VERTICAL_FLIGHT_PHASE(Vehicle vehicle, float angleRatio) { invoke<Void>(0x1028D60, vehicle, angleRatio); } // 0x30D779DE7C4F6DD3 0xA7DF64D7
	static void _SET_VERTICAL_FLIGHT_PHASE(Vehicle vehicle, float angle) { invoke<Void>(0x1028DD0, vehicle, angle); } // 0x9AA47FFF660CB932 0xDD7936F5
	static BOOL _0xA4822F1CF23F4810(Vector3* outVec, Any p1, Vector3* outVec1, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { return invoke<BOOL>(0x1028F10, outVec, p1, outVec1, p3, p4, p5, p6, p7, p8); } // 0xA4822F1CF23F4810 0x34E02FCD
	static void SET_VEHICLE_BURNOUT(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x1029000, vehicle, toggle); } // 0xFB8794444A7D60FB 0x9B6EF0EA
	static BOOL IS_VEHICLE_IN_BURNOUT(Vehicle vehicle) { return invoke<BOOL>(0x1029060, vehicle); } // 0x1297A88E081430EB 0x6632BC12
	static void SET_VEHICLE_REDUCE_GRIP(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x10290D0, vehicle, toggle); } // 0x222FF6A823D122E2 0x90D3A0D9
	static void SET_VEHICLE_INDICATOR_LIGHTS(Vehicle vehicle, int turnSignal, BOOL toggle) { invoke<Void>(0x1029140, vehicle, turnSignal, toggle); } // 0xB5D45264751B7DF0 0xA6073B5D
	static void SET_VEHICLE_BRAKE_LIGHTS(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x1029250, vehicle, toggle); } // 0x92B35082E0B42F66 0x6D9BA11E
	static void SET_VEHICLE_HANDBRAKE(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x1029300, vehicle, toggle); } // 0x684785568EF26A22 0xBA729A25
	static void _0x48ADC8A773564670() { invoke<Void>(0x1029420); } // 0x48ADC8A773564670 0x37BC6ACB
	static BOOL _0x91D6DD290888CBAB() { return invoke<BOOL>(0x1029430); } // 0x91D6DD290888CBAB 0x71D898EF
	static void _0x51DB102F4A3BA5E0(BOOL p0) { invoke<Void>(0x1029450, p0); } // 0x51DB102F4A3BA5E0 0x0B0523B0
	static BOOL GET_VEHICLE_TRAILER_VEHICLE(Vehicle vehicle, Vehicle* trailer) { return invoke<BOOL>(0x1029470, vehicle, trailer); } // 0x1CDD6BADC297830D 0xAE84D758
	static void _0xCAC66558B944DA67(char* vehicle, BOOL p1) { invoke<Void>(0x10294A0, vehicle, p1); } // 0xCAC66558B944DA67 0x0B200CE2
	static void SET_VEHICLE_RUDDER_BROKEN(Vehicle vehicle, BOOL p1) { invoke<Void>(0x1029540, vehicle, p1); } // 0x09606148B6C71DEF 0x3FAC3CD4
	static void _0x1A78AD3D8240536F(Vehicle vehicle, BOOL p1) { invoke<Void>(0x1029610, vehicle, p1); } // 0x1A78AD3D8240536F 0x0858678C
	static float _GET_VEHICLE_MAX_SPEED(Vehicle vehicle) { return invoke<float>(0x1029670, vehicle); } // 0x53AF99BAA671CA47 0x7D1A0616
	static float GET_VEHICLE_MAX_BRAKING(Vehicle vehicle) { return invoke<float>(0x10296A0, vehicle); } // 0xAD7E85FC227197C4 0x03B926F6
	static float GET_VEHICLE_MAX_TRACTION(Vehicle vehicle) { return invoke<float>(0x1029750, vehicle); } // 0xA132FB5370554DB0 0x7E5A1587
	static float GET_VEHICLE_ACCELERATION(Vehicle vehicle) { return invoke<float>(0x1029850, vehicle); } // 0x5DD35C8D074E57AE 0x00478321
	static float _GET_VEHICLE_MODEL_MAX_SPEED(Hash modelHash) { return invoke<float>(0x1029880, modelHash); } // 0xF417C2502FFFED43 0x8F291C4A
	static float GET_VEHICLE_MODEL_MAX_BRAKING(Hash modelHash) { return invoke<float>(0x1029930, modelHash); } // 0xDC53FD41B4ED944C 0x7EF02883
	static float _GET_VEHICLE_MODEL_HAND_BRAKE(Hash modelHash) { return invoke<float>(0x1029A00, modelHash); } // 0xBFBA3BA79CFF7EBF 0xF3A7293F
	static float GET_VEHICLE_MODEL_MAX_TRACTION(Hash modelHash) { return invoke<float>(0x1029AE0, modelHash); } // 0x539DE94D44FDFD0D 0x7F985597
	static float GET_VEHICLE_MODEL_ACCELERATION(Hash modelHash) { return invoke<float>(0x1029B70, modelHash); } // 0x8C044C5C84505B6A 0x29CB3537
	static float _GET_VEHICLE_MODEL_DOWN_FORCE(Hash modelHash) { return invoke<float>(0x1029C30, modelHash); } // 0x53409B5163D5B846 0x37FBA7BC
	static float _GET_VEHICLE_MODEL_MAX_KNOTS(Hash modelHash) { return invoke<float>(0x1029D10, modelHash); } // 0xC6AD107DDC9054CC 0x95BB67EB
	static float _GET_VEHICLE_MODEL_MOVE_RESISTANCE(Hash modelHash) { return invoke<float>(0x1029D40, modelHash); } // 0x5AA3F878A178C4FC 0x87C5D271
	static float _GET_VEHICLE_CLASS_MAX_SPEED(int vehicleClass) { return invoke<float>(0x1029E00, vehicleClass); } // 0x00C09F246ABEDD82 0xCE67162C
	static float GET_VEHICLE_CLASS_MAX_TRACTION(int vehicleClass) { return invoke<float>(0x1029E30, vehicleClass); } // 0xDBC86D85C5059461 0x5B4FDC16
	static float GET_VEHICLE_CLASS_MAX_AGILITY(int vehicleClass) { return invoke<float>(0x1029E70, vehicleClass); } // 0x4F930AD022D6DE3B 0x45F2BD83
	static float GET_VEHICLE_CLASS_MAX_ACCELERATION(int vehicleClass) { return invoke<float>(0x1029EB0, vehicleClass); } // 0x2F83E7E45D9EA7AE 0x3E220A9B
	static float GET_VEHICLE_CLASS_MAX_BRAKING(int vehicleClass) { return invoke<float>(0x1029EF0, vehicleClass); } // 0x4BF54C16EC8FEC03 0xD08CC1A5
	static int _ADD_SPEED_ZONE_FOR_COORD(float x, float y, float z, float radius, float speed, BOOL p5) { return invoke<int>(0x1029F30, x, y, z, radius, speed, p5); } // 0x2CE544C68FB812A0 0xD6685803
	static BOOL _REMOVE_SPEED_ZONE(int speedzone) { return invoke<BOOL>(0x1029FE0, speedzone); } // 0x1033371FC8E842A7 0x0C0332A6
	static void OPEN_BOMB_BAY_DOORS(Vehicle vehicle) { invoke<Void>(0x102A020, vehicle); } // 0x87E7F24270732CB1 0x6574041D
	static void CLOSE_BOMB_BAY_DOORS(Vehicle vehicle) { invoke<Void>(0x102A0A0, vehicle); } // 0x3556041742A0DC74 0xF8EC5751
	static BOOL IS_VEHICLE_SEARCHLIGHT_ON(Vehicle vehicle) { return invoke<BOOL>(0x102A1B0, vehicle); } // 0xC0F97FCE55094987 0xADAF3513
	static void SET_VEHICLE_SEARCHLIGHT(Vehicle heli, BOOL toggle, BOOL canBeUsedByAI) { invoke<Void>(0x102A280, heli, toggle, canBeUsedByAI); } // 0x14E85C5EE7A4D542 0xE2C0DD8A
	static BOOL _0x639431E895B9AA57(Ped ped, Vehicle vehicle, BOOL p2, BOOL p3, BOOL p4) { return invoke<BOOL>(0x102A2A0, ped, vehicle, p2, p3, p4); } // 0x639431E895B9AA57 0xAB0E79EB
	static BOOL CAN_SHUFFLE_SEAT(Vehicle vehicle, Any p1) { return invoke<BOOL>(0x102A3D0, vehicle, p1); } // 0x30785D90C956BF35 0xB3EB01ED
	static int GET_NUM_MOD_KITS(Vehicle vehicle) { return invoke<int>(0x102A480, vehicle); } // 0x33F2E3FE70EAAE1D 0xE4903AA0
	static void SET_VEHICLE_MOD_KIT(Vehicle vehicle, int modKit) { invoke<Void>(0x102A4E0, vehicle, modKit); } // 0x1F2AA07F00B3217A 0xB8132158
	static int GET_VEHICLE_MOD_KIT(Vehicle vehicle) { return invoke<int>(0x102A550, vehicle); } // 0x6325D1A044AE510D 0x9FE60927
	static int GET_VEHICLE_MOD_KIT_TYPE(Vehicle vehicle) { return invoke<int>(0x102A5B0, vehicle); } // 0xFC058F5121E54C32 0xE5F76765
	static int GET_VEHICLE_WHEEL_TYPE(Vehicle vehicle) { return invoke<int>(0x102A630, vehicle); } // 0xB3ED1BFB4BE636DC 0xDA58D7AE
	static void SET_VEHICLE_WHEEL_TYPE(Vehicle vehicle, int WheelType) { invoke<Void>(0x102A690, vehicle, WheelType); } // 0x487EB21CC7295BA1 0x64BDAAAD
	static int GET_NUM_MOD_COLORS(int p0, BOOL p1) { return invoke<int>(0x102A740, p0, p1); } // 0xA551BE18C11A476D 0x73722CD9
	static void SET_VEHICLE_MOD_COLOR_1(Vehicle vehicle, int paintType, int color, int p3) { invoke<Void>(0x102A7C0, vehicle, paintType, color, p3); } // 0x43FEB945EE7F85B8 0xCBE9A54D
	static void SET_VEHICLE_MOD_COLOR_2(Vehicle vehicle, int paintType, int color) { invoke<Void>(0x102A850, vehicle, paintType, color); } // 0x816562BADFDEC83E 0xC32613C2
	static void GET_VEHICLE_MOD_COLOR_1(Vehicle vehicle, int* paintType, int* color, int* pearlescentColor) { invoke<Void>(0x102A8E0, vehicle, paintType, color, pearlescentColor); } // 0xE8D65CA700C9A693 0xE625510A
	static void GET_VEHICLE_MOD_COLOR_2(Vehicle vehicle, int* paintType, int* color) { invoke<Void>(0x102A990, vehicle, paintType, color); } // 0x81592BE4E3878728 0x9B76BB8E
	static char* GET_VEHICLE_MOD_COLOR_1_NAME(Vehicle vehicle, BOOL p1) { return invoke<char*>(0x102AA40, vehicle, p1); } // 0xB45085B721EFD38C 0x9A0840FD
	static char* GET_VEHICLE_MOD_COLOR_2_NAME(Vehicle vehicle) { return invoke<char*>(0x102AAD0, vehicle); } // 0x4967A516ED23A5A1 0x9BDC0B49
	static BOOL _IS_VEHICLE_MOD_LOAD_DONE(Vehicle vehicle) { return invoke<BOOL>(0x102AB50, vehicle); } // 0x9A83F5F9963775EF 0x112D637A
	static void SET_VEHICLE_MOD(Vehicle vehicle, int modType, int modIndex, BOOL customTires) { invoke<Void>(0x102ABB0, vehicle, modType, modIndex, customTires); } // 0x6AF0636DDEDCB6DD 0xB52E5ED5
	static int GET_VEHICLE_MOD(Vehicle vehicle, int modType) { return invoke<int>(0x102AC90, vehicle, modType); } // 0x772960298DA26FDB 0xDC520069
	static BOOL GET_VEHICLE_MOD_VARIATION(Vehicle vehicle, int modType) { return invoke<BOOL>(0x102AD70, vehicle, modType); } // 0xB3924ECD70E095DC 0xC1B92003
	static int GET_NUM_VEHICLE_MODS(Vehicle vehicle, int modType) { return invoke<int>(0x102AE40, vehicle, modType); } // 0xE38E9162A2500646 0x8A814FF9
	static void REMOVE_VEHICLE_MOD(Vehicle vehicle, int modType) { invoke<Void>(0x102AEE0, vehicle, modType); } // 0x92D619E420858204 0x9CC80A43
	static void TOGGLE_VEHICLE_MOD(Vehicle vehicle, int modType, BOOL toggle) { invoke<Void>(0x102AFB0, vehicle, modType, toggle); } // 0x2A1F4F37F95BAD08 0xD095F811
	static BOOL IS_TOGGLE_MOD_ON(Vehicle vehicle, int modType) { return invoke<BOOL>(0x102B040, vehicle, modType); } // 0x84B233A8C8FC8AE7 0xF0E1689F
	static char* GET_MOD_TEXT_LABEL(Vehicle vehicle, int modType, int modValue) { return invoke<char*>(0x102B0C0, vehicle, modType, modValue); } // 0x8935624F8C5592CC 0x0BA39CA7
	static char* GET_MOD_SLOT_NAME(Vehicle vehicle, int modType) { return invoke<char*>(0x102B170, vehicle, modType); } // 0x51F0FEB9F6AE98C0 0x5E113483
	static char* GET_LIVERY_NAME(Vehicle vehicle, int liveryIndex) { return invoke<char*>(0x102B210, vehicle, liveryIndex); } // 0xB4C7A93837C91A1F 0xED80B5BE
	static float GET_VEHICLE_MOD_MODIFIER_VALUE(Vehicle vehicle, int modType, int modIndex) { return invoke<float>(0x102B290, vehicle, modType, modIndex); } // 0x90A38E9838E0A8C1 0x73AE5505
	static Any _GET_VEHICLE_MOD_DATA(Vehicle vehicle, int modType, int modIndex) { return invoke<Any>(0x102B2C0, vehicle, modType, modIndex); } // 0x4593CF82AA179706 0x94850968
	static void PRELOAD_VEHICLE_MOD(Any p0, int modType, Any p2) { invoke<Void>(0x102B2F0, p0, modType, p2); } // 0x758F49C24925568A 0x6EA5F4A8
	static BOOL HAS_PRELOAD_MODS_FINISHED(Any p0) { return invoke<BOOL>(0x102B390, p0); } // 0x06F43E5175EB6D96 0xA8A0D246
	static void RELEASE_PRELOAD_MODS(Vehicle vehicle) { invoke<Void>(0x102B3F0, vehicle); } // 0x445D79F995508307 0xD442521F
	static void SET_VEHICLE_TYRE_SMOKE_COLOR(Vehicle vehicle, int r, int g, int b) { invoke<Void>(0x102B440, vehicle, r, g, b); } // 0xB5BA80F839791C0F 0x3EDEC0DB
	static void GET_VEHICLE_TYRE_SMOKE_COLOR(Vehicle vehicle, int* r, int* g, int* b) { invoke<Void>(0x102B4B0, vehicle, r, g, b); } // 0xB635392A4938B3C3 0x75280015
	static void SET_VEHICLE_WINDOW_TINT(Vehicle vehicle, int tint) { invoke<Void>(0x102B520, vehicle, tint); } // 0x57C51E6BAD752696 0x497C8787
	static int GET_VEHICLE_WINDOW_TINT(Vehicle vehicle) { return invoke<int>(0x102B570, vehicle); } // 0x0EE21293DAD47C95 0x13D53892
	static int GET_NUM_VEHICLE_WINDOW_TINTS() { return invoke<int>(0x102B5E0); } // 0x9D1224004B3A6707 0x625C7B66
	static void GET_VEHICLE_COLOR(Vehicle vehicle, int* r, int* g, int* b) { invoke<Void>(0x102B600, vehicle, r, g, b); } // 0xF3CC740D36221548 0x03BC8F1B
	static int _0xEEBFC7A7EFDC35B4(Vehicle vehicle) { return invoke<int>(0x102B6E0, vehicle); } // 0xEEBFC7A7EFDC35B4 0x749DEEA2
	static Hash GET_VEHICLE_CAUSE_OF_DESTRUCTION(Vehicle vehicle) { return invoke<Hash>(0x102B700, vehicle); } // 0xE495D1EF4C91FD20 0x7F8C20DD
	static BOOL GET_IS_LEFT_VEHICLE_HEADLIGHT_DAMAGED(Vehicle vehicle) { return invoke<BOOL>(0x102B7B0, vehicle); } // 0x5EF77C9ADD3B11A3 0xA0777943
	static BOOL GET_IS_RIGHT_VEHICLE_HEADLIGHT_DAMAGED(Vehicle vehicle) { return invoke<BOOL>(0x102B830, vehicle); } // 0xA7ECB73355EB2F20 0xF178390B
	static void _SET_VEHICLE_ENGINE_POWER_MULTIPLIER(Vehicle vehicle, float value) { invoke<Void>(0x102B920, vehicle, value); } // 0x93A3996368C94158 0xE943B09C
	static void _SET_VEHICLE_ST(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x102B9D0, vehicle, toggle); } // 0x1CF38D529D7441D9 0xDF594D8D
	static void _0x1F9FB66F3A3842D2(Vehicle vehicle, BOOL p1) { invoke<Void>(0x102BA80, vehicle, p1); } // 0x1F9FB66F3A3842D2 0x4D840FC4
	static Any _0x54B0F614960F4A5F(float p0, float p1, float p2, float p3, float p4, float p5, float p6) { return invoke<Any>(0x102BB20, p0, p1, p2, p3, p4, p5, p6); } // 0x54B0F614960F4A5F 0x5AB26C2B
	static void _0xE30524E1871F481D(Any p0) { invoke<Void>(0x102BBC0, p0); } // 0xE30524E1871F481D 0xEF05F807
	static BOOL _ANY_PASSENGERS_RAPPELING(Vehicle vehicle) { return invoke<BOOL>(0x102BC00, vehicle); } // 0x291E373D483E7EE7 0xD656E7E5
	static void _SET_VEHICLE_ENGINE_TORQUE_MULTIPLIER(Vehicle vehicle, float value) { invoke<Void>(0x102BC30, vehicle, value); } // 0xB59E4BD37AE292DB 0x642DA5AA
	static void _0x0AD9E8F87FF7C16F(Any p0, BOOL p1) { invoke<Void>(0x102BC80, p0, p1); } // 0x0AD9E8F87FF7C16F 0x04F5546C
	static void SET_VEHICLE_IS_WANTED(Vehicle vehicle, BOOL state) { invoke<Void>(0x102BD20, vehicle, state); } // 0xF7EC25A3EBEEC726 0xDAA388E8
	static void _0xF488C566413B4232(Any p0, float p1) { invoke<Void>(0x102BDC0, p0, p1); } // 0xF488C566413B4232 0xA25CCB8C
	static void _0xC1F981A6F74F0C23(Any p0, BOOL p1) { invoke<Void>(0x102BE60, p0, p1); } // 0xC1F981A6F74F0C23 0x00966934
	static void _0x0F3B4D4E43177236(Any p0, BOOL p1) { invoke<Void>(0x102BF00, p0, p1); } // 0x0F3B4D4E43177236 0x113DF5FD
	static float _0x6636C535F6CC2725(Vehicle vehicle) { return invoke<float>(0x102BFA0, vehicle); } // 0x6636C535F6CC2725 0x7C8D6464
	static void DISABLE_PLANE_AILERON(Vehicle vehicle, BOOL p1, BOOL p2) { invoke<Void>(0x102C040, vehicle, p1, p2); } // 0x23428FC53C60919C 0x7E84C45C
	static BOOL GET_IS_VEHICLE_ENGINE_RUNNING(Vehicle vehicle) { return invoke<BOOL>(0x102C0C0, vehicle); } // 0xAE31E7DF9B5B132E 0x7DC6D022
	static void _0x1D97D1E3A70A649F(Vehicle vehicle, BOOL p1) { invoke<Void>(0x102C120, vehicle, p1); } // 0x1D97D1E3A70A649F 0xA03E42DF
	static void _SET_BIKE_LEAN_ANGLE(Vehicle vehicle, float x, float y) { invoke<Void>(0x102C1E0, vehicle, x, y); } // 0x9CFA4896C3A53CBB 0x15D40761
	static void _0xAB04325045427AAE(Vehicle vehicle, BOOL p1) { invoke<Void>(0x102C260, vehicle, p1); } // 0xAB04325045427AAE 0x1984F88D
	static void _0xCFD778E7904C255E(Vehicle vehicle) { invoke<Void>(0x102C300, vehicle); } // 0xCFD778E7904C255E 0x3FBE904F
	static void SET_LAST_DRIVEN_VEHICLE(Vehicle vehicle) { invoke<Void>(0x102C350, vehicle); } // 0xACFB2463CC22BED2 0xD1B71A25
	static Vehicle GET_LAST_DRIVEN_VEHICLE() { return invoke<Vehicle>(0x102C3A0); } // 0xB2D06FAEDE65B577 0xFEB0C0C8
	static void _0xE01903C47C7AC89E() { invoke<Void>(0x102C3D0); } // 0xE01903C47C7AC89E
	static void _0x02398B627547189C(Vehicle p0, BOOL p1) { invoke<Void>(0x102C3E0, p0, p1); } // 0x02398B627547189C 0x08CD58F9
	static void _SET_PLANE_MIN_HEIGHT_ABOVE_TERRAIN(Vehicle plane, int height) { invoke<Void>(0x102C480, plane, height); } // 0xB893215D8D4C015B 0x8C4B63E2
	static void SET_VEHICLE_LOD_MULTIPLIER(Vehicle vehicle, float multiplier) { invoke<Void>(0x102C490, vehicle, multiplier); } // 0x93AE6A61BE015BF1 0x569E5AE3
	static void _0x428BACCDF5E26EAD(Vehicle vehicle, BOOL p1) { invoke<Void>(0x102C4E0, vehicle, p1); } // 0x428BACCDF5E26EAD 0x1604C2F5
	static Any _0x42A4BEB35D372407(Any p0) { return invoke<Any>(0x102C580, p0); } // 0x42A4BEB35D372407 0x8CDB0C09
	static Any _0x2C8CBFE1EA5FC631(Any p0) { return invoke<Any>(0x102C5E0, p0); } // 0x2C8CBFE1EA5FC631 0xABC99E21
	static void _0x4D9D109F63FEE1D4(Any p0, BOOL p1) { invoke<Void>(0x102C640, p0, p1); } // 0x4D9D109F63FEE1D4 0x900C878C
	static void _0x279D50DE5652D935(Any p0, BOOL p1) { invoke<Void>(0x102C6E0, p0, p1); } // 0x279D50DE5652D935 0xB3200F72
	static void _0xE44A982368A4AF23(Vehicle vehicle, Vehicle vehicle2) { invoke<Void>(0x102C780, vehicle, vehicle2); } // 0xE44A982368A4AF23 0xBAE491C7
	static void _0xF25E02CB9C5818F8() { invoke<Void>(0x102C810); } // 0xF25E02CB9C5818F8 0xF0E59BC1
	static void _0xBC3CCA5844452B06(float p0) { invoke<Void>(0x102C820, p0); } // 0xBC3CCA5844452B06 0x929801C6
	static void SET_VEHICLE_SHOOT_AT_TARGET(Ped driver, Entity entity, float xTarget, float yTarget, float zTarget) { invoke<Void>(0x102C840, driver, entity, xTarget, yTarget, zTarget); } // 0x74CD9A9327A282EA 0x2343FFDF
	static BOOL _GET_VEHICLE_OWNER(Vehicle vehicle, Entity* entity) { return invoke<BOOL>(0x102C860, vehicle, entity); } // 0x8F5EBAB1F260CFCE 0x4A557117
	static void SET_FORCE_HD_VEHICLE(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x102C8D0, vehicle, toggle); } // 0x97CE68CB032583F0 0xE0FC6A32
	static void _0x182F266C2D9E2BEB(Vehicle vehicle, float p1) { invoke<Void>(0x102C970, vehicle, p1); } // 0x182F266C2D9E2BEB 0x7D0DE7EA
	static int GET_VEHICLE_PLATE_TYPE(Vehicle vehicle) { return invoke<int>(0x102C9D0, vehicle); } // 0x9CCC9525BF2408E0 0x65CA9286
	static void TRACK_VEHICLE_VISIBILITY(Vehicle vehicle) { invoke<Void>(0x102CA30, vehicle); } // 0x64473AEFDCF47DCA 0x78122DC1
	static BOOL IS_VEHICLE_VISIBLE(Vehicle vehicle) { return invoke<BOOL>(0x102CA70, vehicle); } // 0xAA0A52D24FB98293 0x7E0D6056
	static void SET_VEHICLE_GRAVITY(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x102CAE0, vehicle, toggle); } // 0x89F149B6131E57DA 0x07B2A6DC
	static void _0xE6C0C80B8C867537(BOOL p0) { invoke<Void>(0x102CB40, p0); } // 0xE6C0C80B8C867537 0xD2B8ACBD
	static Any _0x36492C2F0D134C56(Any p0) { return invoke<Any>(0x102CB80, p0); } // 0x36492C2F0D134C56 0xA4A75FCF
	static void _0x06582AFF74894C75(Vehicle vehicle, BOOL p1) { invoke<Void>(0x102CC30, vehicle, p1); } // 0x06582AFF74894C75 0x50F89338
	static void _0xDFFCEF48E511DB48(Any p0, BOOL p1) { invoke<Void>(0x102CD40, p0, p1); } // 0xDFFCEF48E511DB48 0xEB7D7C27
	static BOOL _IS_VEHICLE_SHOP_RESPRAY_ALLOWED(Vehicle vehicle) { return invoke<BOOL>(0x102CDE0, vehicle); } // 0x8D474C8FAEFF6CDE 0x5EB00A6A
	static void SET_VEHICLE_ENGINE_CAN_DEGRADE(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x102CE40, vehicle, toggle); } // 0x983765856F2564F9 0x081DAC12
	static void _0xF0E4BA16D1DB546C(Vehicle vehicle, int p1, int p2) { invoke<Void>(0x102CF00, vehicle, p1, p2); } // 0xF0E4BA16D1DB546C 0x5BD8D82D
	static void _0xF87D9F2301F7D206(Any p0) { invoke<Void>(0x102CF80, p0); } // 0xF87D9F2301F7D206 0x450AD03A
	static BOOL _VEHICLE_HAS_LANDING_GEAR(Vehicle vehicle) { return invoke<BOOL>(0x102CFC0, vehicle); } // 0x4198AB0022B15F87 0xBD085DCA
	static BOOL _ARE_PROPELLERS_UNDAMAGED(Vehicle vehicle) { return invoke<BOOL>(0x102D040, vehicle); } // 0x755D6D5267CBBD7E 0xABBDD5C6
	static void _0x0CDDA42F9E360CA6(Vehicle vehicle, BOOL p1) { invoke<Void>(0x102D130, vehicle, p1); } // 0x0CDDA42F9E360CA6 0x9B581DE7
	static BOOL IS_VEHICLE_STOLEN(Vehicle vehicle) { return invoke<BOOL>(0x102D1E0, vehicle); } // 0x4AF9BD80EEBEB453 0x20B61DDE
	static void SET_VEHICLE_IS_STOLEN(Vehicle vehicle, BOOL isStolen) { invoke<Void>(0x102D240, vehicle, isStolen); } // 0x67B2C79AA7FF5738 0x70912E42
	static void _0xAD2D28A1AFDFF131(Vehicle vehicle, float value) { invoke<Void>(0x102D2D0, vehicle, value); } // 0xAD2D28A1AFDFF131 0xED159AE6
	static BOOL _ARE_VEHICLE_WINGS_INTACT(Vehicle vehicle) { return invoke<BOOL>(0x102D350, vehicle); } // 0x5991A01434CE9677 0xAF8CB3DF
	static void _0xB264C4D2F2B0A78B(Vehicle vehicle) { invoke<Void>(0x102D3E0, vehicle); } // 0xB264C4D2F2B0A78B 0x45F72495
	static void DETACH_VEHICLE_FROM_CARGOBOB(Vehicle vehicle, Vehicle cargobob) { invoke<Void>(0x102D3F0, vehicle, cargobob); } // 0x0E21D3DF1051399D 0x83D3D331
	static BOOL DETACH_VEHICLE_FROM_ANY_CARGOBOB(Vehicle vehicle) { return invoke<BOOL>(0x102D400, vehicle); } // 0xADF7BE450512C12F 0x50E0EABE
	static BOOL IS_VEHICLE_ATTACHED_TO_CARGOBOB(Vehicle cargobob, Vehicle vehicleAttached) { return invoke<BOOL>(0x102D440, cargobob, vehicleAttached); } // 0xD40148F22E81A1D9 0x5DEEC76C
	static Vehicle GET_VEHICLE_ATTACHED_TO_CARGOBOB(Vehicle cargobob) { return invoke<Vehicle>(0x102D470, cargobob); } // 0x873B82D42AC2B9E5 0x301A1D24
	static void ATTACH_VEHICLE_TO_CARGOBOB(Vehicle vehicle, Vehicle cargobob, int p2, float x, float y, float z) { invoke<Void>(0x102D4B0, vehicle, cargobob, p2, x, y, z); } // 0x4127F1D84E347769 0x607DC9D5
	static void _0x571FEB383F629926(Vehicle cargobob, BOOL p1) { invoke<Void>(0x102D4F0, cargobob, p1); } // 0x571FEB383F629926
	static Vector3 _GET_CARGOBOB_HOOK_POSITION(Vehicle cargobob) { return invoke<Vector3>(0x102D550, cargobob); } // 0xCBDB9B923CACC92D
	static BOOL DOES_CARGOBOB_HAVE_PICK_UP_ROPE(Vehicle cargobob) { return invoke<BOOL>(0x102D5C0, cargobob); } // 0x1821D91AD4B56108 0xAF769B81
	static void CREATE_PICK_UP_ROPE_FOR_CARGOBOB(Vehicle cargobob, int state) { invoke<Void>(0x102D670, cargobob, state); } // 0x7BEB0C7A235F6F3B 0x4D3C9A99
	static void REMOVE_PICK_UP_ROPE_FOR_CARGOBOB(Vehicle cargobob) { invoke<Void>(0x102D680, cargobob); } // 0x9768CF648F54C804 0xA8211EE9
	static void _SET_CARGOBOB_HOOK_POSITION(Any p0, float p1, float p2, int state) { invoke<Void>(0x102D6E0, p0, p1, p2, state); } // 0x877C1EAEAC531023 0x3A8AB081
	static void _0xCF1182F682F65307(Any p0, Player p1) { invoke<Void>(0x102D720, p0, p1); } // 0xCF1182F682F65307
	static BOOL _DOES_CARGOBOB_HAVE_PICKUP_MAGNET(Vehicle cargobob) { return invoke<BOOL>(0x102D790, cargobob); } // 0x6E08BF5B3722BAC9
	static void _SET_CARGOBOB_PICKUP_MAGNET_ACTIVE(Vehicle cargobob, BOOL isActive) { invoke<Void>(0x102D830, cargobob, isActive); } // 0x9A665550F8DA349B
	static void _SET_CARGOBOB_PICKUP_MAGNET_STRENGTH(Vehicle cargobob, float strength) { invoke<Void>(0x102D850, cargobob, strength); } // 0xBCBFCD9D1DAC19E2
	static void _0xA17BAD153B51547E(Vehicle cargobob, float p1) { invoke<Void>(0x102D900, cargobob, p1); } // 0xA17BAD153B51547E
	static void _0x66979ACF5102FD2F(Vehicle cargobob, float p1) { invoke<Void>(0x102D9B0, cargobob, p1); } // 0x66979ACF5102FD2F
	static void _0x6D8EAC07506291FB(Vehicle cargobob, float p1) { invoke<Void>(0x102DA60, cargobob, p1); } // 0x6D8EAC07506291FB
	static void _0xED8286F71A819BAA(Vehicle cargobob, float p1) { invoke<Void>(0x102DB10, cargobob, p1); } // 0xED8286F71A819BAA
	static void _0x685D5561680D088B(Vehicle vehicle, float p1) { invoke<Void>(0x102DBC0, vehicle, p1); } // 0x685D5561680D088B
	static void _0xE301BD63E9E13CF0(Vehicle vehicle, Vehicle cargobob) { invoke<Void>(0x102DC70, vehicle, cargobob); } // 0xE301BD63E9E13CF0
	static void _0x9BDDC73CC6A115D4(Vehicle vehicle, BOOL p1, BOOL p2) { invoke<Void>(0x102DC80, vehicle, p1, p2); } // 0x9BDDC73CC6A115D4
	static void _0x56EB5E94318D3FB6(Vehicle vehicle, BOOL p1) { invoke<Void>(0x102DCA0, vehicle, p1); } // 0x56EB5E94318D3FB6
	static BOOL DOES_VEHICLE_HAVE_WEAPONS(Vehicle vehicle) { return invoke<BOOL>(0x102DD40, vehicle); } // 0x25ECB9F8017D98E0 0xB2E1E1FB
	static void _0x2C4A1590ABF43E8B(Vehicle vehicle, BOOL p1) { invoke<Void>(0x102DDC0, vehicle, p1); } // 0x2C4A1590ABF43E8B 0x2EC19A8B
	static void DISABLE_VEHICLE_WEAPON(BOOL disabled, Hash weaponHash, Vehicle vehicle, Ped owner) { invoke<Void>(0x102DE40, disabled, weaponHash, vehicle, owner); } // 0xF4FC6A6F67D8D856 0xA688B7D1
	static void _0xE05DD0E9707003A3(Any p0, BOOL p1) { invoke<Void>(0x102DE90, p0, p1); } // 0xE05DD0E9707003A3 0x123E5B90
	static void _0x21115BCD6E44656A(Any p0, BOOL p1) { invoke<Void>(0x102DF30, p0, p1); } // 0x21115BCD6E44656A 0xEBC225C1
	static int GET_VEHICLE_CLASS(Vehicle vehicle) { return invoke<int>(0x102DFF0, vehicle); } // 0x29439776AAA00A62 0xC025338E
	static int GET_VEHICLE_CLASS_FROM_NAME(Hash modelHash) { return invoke<int>(0x102E050, modelHash); } // 0xDEDF1C8BD47C2200 0xEA469980
	static void SET_PLAYERS_LAST_VEHICLE(Vehicle vehicle) { invoke<Void>(0x102E0C0, vehicle); } // 0xBCDF8BAF56C87B6A 0xDE86447D
	static void SET_VEHICLE_CAN_BE_USED_BY_FLEEING_PEDS(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x102E110, vehicle, toggle); } // 0x300504B23BD3B711 0x5130DB1E
	static void _0xE5810AC70602F2F5(Vehicle vehicle, float p1) { invoke<Void>(0x102E1C0, vehicle, p1); } // 0xE5810AC70602F2F5 0xB6BE07E0
	static void _SET_VEHICLE_CREATES_MONEY_PICKUPS_WHEN_EXPLODED(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x102E260, vehicle, toggle); } // 0x068F64F2470F9656 0x4BB5605D
	static void _SET_VEHICLE_JET_ENGINE_ON(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x102E2D0, vehicle, toggle); } // 0xB8FBC8B1330CA9B4 0x51E0064F
	static void _0x10655FAB9915623D(Any p0, Any p1) { invoke<Void>(0x102E370, p0, p1); } // 0x10655FAB9915623D
	static void _0x79DF7E806202CE01(Any p0, Any p1) { invoke<Void>(0x102E3C0, p0, p1); } // 0x79DF7E806202CE01 0xAEF9611C
	static void _0x9007A2F21DC108D4(Any p0, float p1) { invoke<Void>(0x102E410, p0, p1); } // 0x9007A2F21DC108D4 0x585E49B6
	static void _SET_HELICOPTER_ROLL_PITCH_YAW_MULT(Vehicle helicopter, float multiplier) { invoke<Void>(0x102E470, helicopter, multiplier); } // 0x6E0859B530A365CC 0x6E67FD35
	static void SET_VEHICLE_FRICTION_OVERRIDE(Vehicle vehicle, float friction) { invoke<Void>(0x102E4F0, vehicle, friction); } // 0x1837AF7C627009BA 0x32AFD42E
	static void SET_VEHICLE_WHEELS_CAN_BREAK_OFF_WHEN_BLOW_UP(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x102E540, vehicle, toggle); } // 0xA37B9A517B133349 0x670913A4
	static BOOL _0xF78F94D60248C737(Any p0, BOOL p1) { return invoke<BOOL>(0x102E5E0, p0, p1); } // 0xF78F94D60248C737
	static void SET_VEHICLE_CEILING_HEIGHT(Vehicle vehicle, float p1) { invoke<Void>(0x102E650, vehicle, p1); } // 0xA46413066687A328 0x98A10A86
	static void _0x5E569EC46EC21CAE(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x102E6C0, vehicle, toggle); } // 0x5E569EC46EC21CAE 0xBC649C49
	static void _0x6D6AF961B72728AE(Vehicle vehicle) { invoke<Void>(0x102E710, vehicle); } // 0x6D6AF961B72728AE 0x8DD9AA0C
	static BOOL DOES_VEHICLE_EXIST_WITH_DECORATOR(char* decorator) { return invoke<BOOL>(0x102E760, decorator); } // 0x956B409B984D9BF7 0x39E68EDD
	static void SET_VEHICLE_EXCLUSIVE_DRIVER(Vehicle vehicle, Ped ped) { invoke<Void>(0x102E790, vehicle, ped); } // 0x41062318F23ED854 0xAA8BD440
	static void _SET_VEHICLE_EXCLUSIVE_DRIVER_2(Vehicle vehicle, Ped ped, int p2) { invoke<Void>(0x102E830, vehicle, ped, p2); } // 0xB5C51B5502E85E83
	static void _0x500873A45724C863(Vehicle vehicle, Any p1) { invoke<Void>(0x102E910, vehicle, p1); } // 0x500873A45724C863
	static void _0xB055A34527CB8FD7(Vehicle vehicle, BOOL p1) { invoke<Void>(0x102E970, vehicle, p1); } // 0xB055A34527CB8FD7
	static void _DISPLAY_DISTANT_VEHICLES(BOOL toggle) { invoke<Void>(0x102EB60, toggle); } // 0xF796359A959DF65D 0xB5CC548B
	static void _SET_VEHICLE_NEON_LIGHTS_COLOUR(Vehicle vehicle, int r, int g, int b) { invoke<Void>(0x102EB80, vehicle, r, g, b); } // 0x8E0A582209A62695
	static void _GET_VEHICLE_NEON_LIGHTS_COLOUR(Vehicle vehicle, int* r, int* g, int* b) { invoke<Void>(0x102EC40, vehicle, r, g, b); } // 0x7619EEE8C886757F
	static void _SET_VEHICLE_NEON_LIGHT_ENABLED(Vehicle vehicle, int index, BOOL toggle) { invoke<Void>(0x102ECC0, vehicle, index, toggle); } // 0x2AA720E4287BF269
	static BOOL _IS_VEHICLE_NEON_LIGHT_ENABLED(Vehicle vehicle, int index) { return invoke<BOOL>(0x102ED70, vehicle, index); } // 0x8C4B92553E4766A5
	static void _0x35E0654F4BAD7971(BOOL p0) { invoke<Void>(0x102EE20, p0); } // 0x35E0654F4BAD7971
	static void _0xB088E9A47AE6EDD5(Vehicle vehicle, BOOL p1) { invoke<Void>(0x102EE90, vehicle, p1); } // 0xB088E9A47AE6EDD5
	static void _0xDBA3C090E3D74690(Vehicle vehicle) { invoke<Void>(0x102EF30, vehicle); } // 0xDBA3C090E3D74690
	static float GET_VEHICLE_BODY_HEALTH(Vehicle vehicle) { return invoke<float>(0x102EF80, vehicle); } // 0xF271147EB7B40F12 0x2B2FCC28
	static void SET_VEHICLE_BODY_HEALTH(Vehicle vehicle, float value) { invoke<Void>(0x102EFE0, vehicle, value); } // 0xB77D05AC8C78AADB 0x920C2517
	static void _0xDF7E3EEB29642C38(Vehicle vehicle, Vector3* out1, Vector3* out2) { invoke<Void>(0x102F070, vehicle, out1, out2); } // 0xDF7E3EEB29642C38
	static float _GET_VEHICLE_SUSPENSION_HEIGHT(Vehicle vehicle) { return invoke<float>(0x102F120, vehicle); } // 0x53952FD2BAA19F17 0xB73A1486
	static void _SET_CAR_HIGH_SPEED_BUMP_SEVERITY_MULTIPLIER(float multiplier) { invoke<Void>(0x102F190, multiplier); } // 0x84FD40F56075E816
	static void _0xA7DCDF4DED40A8F4(Vehicle vehicle, BOOL p1) { invoke<Void>(0x102F230, vehicle, p1); } // 0xA7DCDF4DED40A8F4
	static float _GET_VEHICLE_BODY_HEALTH_2(Vehicle vehicle) { return invoke<float>(0x102F2D0, vehicle); } // 0xB8EF61207C2393A9
	static BOOL _0xD4C4642CB7F50B5D(Vehicle vehicle) { return invoke<BOOL>(0x102F390, vehicle); } // 0xD4C4642CB7F50B5D
	static void _0xC361AA040D6637A8(Vehicle vehicle, BOOL p1) { invoke<Void>(0x102F3F0, vehicle, p1); } // 0xC361AA040D6637A8
	static void _SET_VEHICLE_HUD_SPECIAL_ABILITY_BAR_ACTIVE(Vehicle vehicle, BOOL active) { invoke<Void>(0x102F440, vehicle, active); } // 0x99C82F8A139F3E4E
	static void _0xE16142B94664DEFD(Vehicle vehicle, BOOL p1) { invoke<Void>(0x102F500, vehicle, p1); } // 0xE16142B94664DEFD
}

namespace OBJECT
{
	static Object CREATE_OBJECT(Object modelHash, float x, float y, float z, BOOL isNetwork, BOOL thisScriptCheck, BOOL dynamic) { return invoke<Object>(0xF770D0, modelHash, x, y, z, isNetwork, thisScriptCheck, dynamic); } // 0x509D5878EB39E842 0x2F7AA05C
	static Object CREATE_OBJECT_NO_OFFSET(Hash modelHash, float x, float y, float z, BOOL isNetwork, BOOL thisScriptCheck, BOOL dynamic) { return invoke<Object>(0xF77160, modelHash, x, y, z, isNetwork, thisScriptCheck, dynamic); } // 0x9A294B2138ABB884 0x58040420
	static void DELETE_OBJECT(Object* object) { invoke<Void>(0xF771F0, object); } // 0x539E0AE3E6634B9F 0xD6EF9DA7
	static BOOL PLACE_OBJECT_ON_GROUND_PROPERLY(Object object) { return invoke<BOOL>(0xF77200, object); } // 0x58A850EAEE20FAA3 0x8F95A20B
	static BOOL SLIDE_OBJECT(Object object, float toX, float toY, float toZ, float speedX, float speedY, float speedZ, BOOL collision) { return invoke<BOOL>(0xF77340, object, toX, toY, toZ, speedX, speedY, speedZ, collision); } // 0x2FDFF4107B8C1147 0x63BFA7A0
	static void SET_OBJECT_TARGETTABLE(Object object, BOOL targettable) { invoke<Void>(0xF77380, object, targettable); } // 0x8A7391690F5AFD81 0x3F88CD86
	static void _SET_OBJECT_SOMETHING(Object object, BOOL p1) { invoke<Void>(0xF77410, object, p1); } // 0x77F33F2CCF64B3AA 0x483C5C88
	static Object GET_CLOSEST_OBJECT_OF_TYPE(float x, float y, float z, float radius, Hash modelHash, BOOL isMission, BOOL p6, BOOL p7) { return invoke<Object>(0xF77490, x, y, z, radius, modelHash, isMission, p6, p7); } // 0xE143FA2249364369 0x45619B33
	static BOOL HAS_OBJECT_BEEN_BROKEN(Object object) { return invoke<BOOL>(0xF774E0, object); } // 0x8ABFB70C49CC43E2 0xFE21F891
	static BOOL HAS_CLOSEST_OBJECT_OF_TYPE_BEEN_BROKEN(float p0, float p1, float p2, float p3, Hash modelHash, Any p5) { return invoke<BOOL>(0xF77540, p0, p1, p2, p3, modelHash, p5); } // 0x761B0E69AC4D007E 0x6FC0353D
	static BOOL _0x46494A2475701343(float p0, float p1, float p2, float p3, Hash modelHash, BOOL p5) { return invoke<BOOL>(0xF77570, p0, p1, p2, p3, modelHash, p5); } // 0x46494A2475701343 0x7DB578DD
	static Vector3 _GET_OBJECT_OFFSET_FROM_COORDS(float xPos, float yPos, float zPos, float heading, float xOffset, float yOffset, float zOffset) { return invoke<Vector3>(0xF77610, xPos, yPos, zPos, heading, xOffset, yOffset, zOffset); } // 0x163E252DE035A133 0x87A42A12
	static Any _0x163F8B586BC95F2A(Any coords, float radius, Hash modelHash, float x, float y, float z, Vector3* p6, int p7) { return invoke<Any>(0xF776F0, coords, radius, modelHash, x, y, z, p6, p7); } // 0x163F8B586BC95F2A 0x65213FC3
	static void SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(Hash type, float x, float y, float z, BOOL locked, float heading, BOOL p6) { invoke<Void>(0xF777A0, type, x, y, z, locked, heading, p6); } // 0xF82D8F1926A02C3D 0x38C951A4
	static void GET_STATE_OF_CLOSEST_DOOR_OF_TYPE(Hash type, float x, float y, float z, BOOL* locked, float* heading) { invoke<Void>(0xF778A0, type, x, y, z, locked, heading); } // 0xEDC1A5B84AEF33FF 0x4B44A83D
	static void _DOOR_CONTROL(Hash doorHash, float x, float y, float z, BOOL locked, float xRotMult, float yRotMult, float zRotMult) { invoke<Void>(0xF778C0, doorHash, x, y, z, locked, xRotMult, yRotMult, zRotMult); } // 0x9B12F9A24FABEDB0 0x4E0A260B
	static void ADD_DOOR_TO_SYSTEM(Hash doorHash, Hash modelHash, float x, float y, float z, BOOL p5, BOOL p6, BOOL p7) { invoke<Void>(0xF779E0, doorHash, modelHash, x, y, z, p5, p6, p7); } // 0x6F8838D03D1DC226 0x9D2D778D
	static void REMOVE_DOOR_FROM_SYSTEM(Hash doorHash) { invoke<Void>(0xF77A20, doorHash); } // 0x464D8E1427156FE4 0x00253286
	static void _SET_DOOR_ACCELERATION_LIMIT(Hash doorHash, int limit, BOOL p2, BOOL p3) { invoke<Void>(0xF77A30, doorHash, limit, p2, p3); } // 0x6BAB9442830C7F53 0xDF83DB47
	static int _0x160AA1B32F6139B8(Hash doorHash) { return invoke<int>(0xF77A60, doorHash); } // 0x160AA1B32F6139B8 0xD42A41C2
	static int _0x4BC2854478F3A749(Hash doorHash) { return invoke<int>(0xF77A90, doorHash); } // 0x4BC2854478F3A749 0xD649B7E1
	static void _0x03C27E13B42A0E82(Hash doorHash, float p1, BOOL p2, BOOL p3) { invoke<Void>(0xF77AC0, doorHash, p1, p2, p3); } // 0x03C27E13B42A0E82 0x4F44AF21
	static void _0x9BA001CB45CBF627(Hash doorHash, float heading, BOOL p2, BOOL p3) { invoke<Void>(0xF77B60, doorHash, heading, p2, p3); } // 0x9BA001CB45CBF627 0x47531446
	static void _SET_DOOR_AJAR_ANGLE(Hash doorHash, float ajar, BOOL p2, BOOL p3) { invoke<Void>(0xF77C00, doorHash, ajar, p2, p3); } // 0xB6E6FBA95C7324AC 0x34883DE3
	static float _0x65499865FCA6E5EC(Hash doorHash) { return invoke<float>(0xF77CA0, doorHash); } // 0x65499865FCA6E5EC 0xB74C3BD7
	static void _0xC485E07E4F0B7958(Hash doorHash, BOOL p1, BOOL p2, BOOL p3) { invoke<Void>(0xF77CF0, doorHash, p1, p2, p3); } // 0xC485E07E4F0B7958 0xB4A9A558
	static void _0xD9B71952F78A2640(Hash doorHash, BOOL p1) { invoke<Void>(0xF77DA0, doorHash, p1); } // 0xD9B71952F78A2640 0xECE58AE0
	static void _0xA85A21582451E951(Hash doorHash, BOOL p1) { invoke<Void>(0xF77E00, doorHash, p1); } // 0xA85A21582451E951 0xF736227C
	static BOOL _DOES_DOOR_EXIST(Hash doorHash) { return invoke<BOOL>(0xF77EA0, doorHash); } // 0xC153C43EA202C8C1 0x5AFCD8A1
	static BOOL IS_DOOR_CLOSED(Hash door) { return invoke<BOOL>(0xF77ED0, door); } // 0xC531EE8A1145A149 0x48659CD7
	static void _0xC7F29CA00F46350E(BOOL p0) { invoke<Void>(0xF77F40, p0); } // 0xC7F29CA00F46350E 0x9BF33E41
	static void _0x701FDA1E82076BA4() { invoke<Void>(0xF77F60); } // 0x701FDA1E82076BA4 0xF592AD10
	static BOOL _0xDF97CDD4FC08FD34(Any p0) { return invoke<BOOL>(0xF77F70, p0); } // 0xDF97CDD4FC08FD34 0x17FF9393
	static BOOL _0x589F80B325CC82C5(float p0, float p1, float p2, Any p3, Any* p4) { return invoke<BOOL>(0xF77FB0, p0, p1, p2, p3, p4); } // 0x589F80B325CC82C5 0xE9AE494F
	static BOOL IS_GARAGE_EMPTY(Any garage, BOOL p1, int p2) { return invoke<BOOL>(0xF78040, garage, p1, p2); } // 0x90E47239EA1980B8 0xA8B37DEA
	static BOOL _0x024A60DEB0EA69F0(Any p0, Player player, float p2, int p3) { return invoke<BOOL>(0xF780D0, p0, player, p2, p3); } // 0x024A60DEB0EA69F0 0xC33ED360
	static BOOL _0x1761DC5D8471CBAA(Any p0, Player player, int p2) { return invoke<BOOL>(0xF78170, p0, player, p2); } // 0x1761DC5D8471CBAA 0x41924877
	static BOOL _0x85B6C850546FDDE2(Any p0, BOOL p1, BOOL p2, BOOL p3, Any p4) { return invoke<BOOL>(0xF781D0, p0, p1, p2, p3, p4); } // 0x85B6C850546FDDE2 0x4BD59750
	static BOOL _0x673ED815D6E323B7(Any p0, BOOL p1, BOOL p2, BOOL p3, Any p4) { return invoke<BOOL>(0xF78240, p0, p1, p2, p3, p4); } // 0x673ED815D6E323B7 0x7B44D659
	static BOOL _0x372EF6699146A1E4(Any p0, Entity entity, float p2, int p3) { return invoke<BOOL>(0xF782B0, p0, entity, p2, p3); } // 0x372EF6699146A1E4 0x142C8F76
	static BOOL _0xF0EED5A6BC7B237A(Any p0, Entity entity, int p2) { return invoke<BOOL>(0xF78370, p0, entity, p2); } // 0xF0EED5A6BC7B237A 0x95A9AB2B
	static void _0x190428512B240692(Any p0, BOOL p1, BOOL p2, BOOL p3, BOOL p4) { invoke<Void>(0xF78410, p0, p1, p2, p3, p4); } // 0x190428512B240692 0xA565E27E
	static void _0xF2E1A7133DD356A6(Hash hash, BOOL toggle) { invoke<Void>(0xF784B0, hash, toggle); } // 0xF2E1A7133DD356A6 0x43BB7E48
	static void _0x66A49D021870FE88() { invoke<Void>(0xF78510); } // 0x66A49D021870FE88 0x6158959E
	static BOOL DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(float x, float y, float z, float radius, Hash hash, BOOL p5) { return invoke<BOOL>(0xF78520, x, y, z, radius, hash, p5); } // 0xBFA48E2FF417213F 0x23FF2BA4
	static BOOL IS_POINT_IN_ANGLED_AREA(float p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, float p9, BOOL p10, BOOL p11) { return invoke<BOOL>(0xF78590, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); } // 0x2A70BAE8883E4C81 0x73BCFFDC
	static void _0x4D89D607CB3DD1D2(Object object, BOOL toggle) { invoke<Void>(0xF78670, object, toggle); } // 0x4D89D607CB3DD1D2 0x19B17769
	static void SET_OBJECT_PHYSICS_PARAMS(Object object, float weight, float p2, float p3, float p4, float p5, float gravity, float p7, float p8, float p9, float p10, float buoyancy) { invoke<Void>(0xF786D0, object, weight, p2, p3, p4, p5, gravity, p7, p8, p9, p10, buoyancy); } // 0xF6DF6E90DE7DF90F 0xE8D11C58
	static float GET_OBJECT_FRAGMENT_DAMAGE_HEALTH(Any p0, BOOL p1) { return invoke<float>(0xF78700, p0, p1); } // 0xB6FBFD079B8D0596 0xF0B330AD
	static void SET_ACTIVATE_OBJECT_PHYSICS_AS_SOON_AS_IT_IS_UNFROZEN(Object object, BOOL toggle) { invoke<Void>(0xF78770, object, toggle); } // 0x406137F8EF90EAF5 0x3E263AE1
	static BOOL IS_ANY_OBJECT_NEAR_POINT(float x, float y, float z, float range, BOOL p4) { return invoke<BOOL>(0xF787D0, x, y, z, range, p4); } // 0x397DC58FF00298D1 0xE9E46941
	static BOOL IS_OBJECT_NEAR_POINT(Hash objectHash, float x, float y, float z, float range) { return invoke<BOOL>(0xF788D0, objectHash, x, y, z, range); } // 0x8C90FE4B381BA60A 0x50A62C43
	static void _0x4A39DB43E47CF3AA(Any p0) { invoke<Void>(0xF78900, p0); } // 0x4A39DB43E47CF3AA 0xE3261B35
	static void _0xE7E4C198B0185900(Object p0, Any p1, BOOL p2) { invoke<Void>(0xF78930, p0, p1, p2); } // 0xE7E4C198B0185900 0x1E82C2AE
	static void _0xF9C1681347C8BD15(Object object) { invoke<Void>(0xF78970, object); } // 0xF9C1681347C8BD15
	static void TRACK_OBJECT_VISIBILITY(Any p0) { invoke<Void>(0xF789F0, p0); } // 0xB252BC036B525623 0x46D06B9A
	static BOOL IS_OBJECT_VISIBLE(Object object) { return invoke<BOOL>(0xF78A30, object); } // 0x8B32ACE6326A7546 0xF4FD8AE4
	static void _0xC6033D32241F6FB5(Any p0, BOOL p1) { invoke<Void>(0xF78AA0, p0, p1); } // 0xC6033D32241F6FB5 0xF4A1A14A
	static void _0xEB6F1A9B5510A5D2(Any p0, BOOL p1) { invoke<Void>(0xF78B00, p0, p1); } // 0xEB6F1A9B5510A5D2 0xAF016CC1
	static void _0xBCE595371A5FBAAF(Any p0, BOOL p1) { invoke<Void>(0xF78BA0, p0, p1); } // 0xBCE595371A5FBAAF 0x3A68AA46
	static int _GET_DES_OBJECT(float x, float y, float z, float rotation, char* name) { return invoke<int>(0xF78C10, x, y, z, rotation, name); } // 0xB48FCED898292E52 0xA286DE96
	static void _SET_DES_OBJECT_STATE(int handle, int state) { invoke<Void>(0xF78D20, handle, state); } // 0x5C29F698D404C5E1 0x21F51560
	static Any _GET_DES_OBJECT_STATE(int handle) { return invoke<Any>(0xF78D30, handle); } // 0x899BA936634A322E 0xF1B8817A
	static BOOL _DOES_DES_OBJECT_EXIST(int handle) { return invoke<BOOL>(0xF78D70, handle); } // 0x52AF537A0C5B8AAD 0xE08C834D
	static float _0x260EE4FDBDF4DB01(Any p0) { return invoke<float>(0xF78DB0, p0); } // 0x260EE4FDBDF4DB01 0x020497DE
	static Pickup CREATE_PICKUP(Hash pickupHash, float posX, float posY, float posZ, int p4, int value, BOOL p6, Hash modelHash) { return invoke<Pickup>(0xF78DE0, pickupHash, posX, posY, posZ, p4, value, p6, modelHash); } // 0xFBA08C503DD5FA58 0x5E14DF68
	static Pickup CREATE_PICKUP_ROTATE(Hash pickupHash, float posX, float posY, float posZ, float rotX, float rotY, float rotZ, int flag, int amount, Any p9, BOOL p10, Hash modelHash) { return invoke<Pickup>(0xF78E20, pickupHash, posX, posY, posZ, rotX, rotY, rotZ, flag, amount, p9, p10, modelHash); } // 0x891804727E0A98B7 0xF015BFE2
	static Pickup CREATE_AMBIENT_PICKUP(Hash pickupHash, float posX, float posY, float posZ, int p4, int value, Hash modelHash, BOOL returnHandle, BOOL p8) { return invoke<Pickup>(0xF78EC0, pickupHash, posX, posY, posZ, p4, value, modelHash, returnHandle, p8); } // 0x673966A0C0FD7171 0x17B99CE7
	static Pickup CREATE_PORTABLE_PICKUP(Hash pickupHash, float x, float y, float z, BOOL placeOnGround, Hash modelHash) { return invoke<Pickup>(0xF78F60, pickupHash, x, y, z, placeOnGround, modelHash); } // 0x2EAF1FDB2FB55698 0x8C886BE5
	static Pickup _CREATE_PORTABLE_PICKUP_2(Hash pickupHash, float x, float y, float z, BOOL placeOnGround, Hash modelHash) { return invoke<Pickup>(0xF78FA0, pickupHash, x, y, z, placeOnGround, modelHash); } // 0x125494B98A21AAF7 0x56A02502
	static void ATTACH_PORTABLE_PICKUP_TO_PED(Ped ped, Any p1) { invoke<Void>(0xF78FE0, ped, p1); } // 0x8DC39368BDD57755 0x184F6AB3
	static void DETACH_PORTABLE_PICKUP_FROM_PED(Ped ped) { invoke<Void>(0xF78FF0, ped); } // 0xCF463D1E9A0AECB1 0x1D094562
	static void _0x0BF3B3BD47D79C08(Hash hash, int p1) { invoke<Void>(0xF790D0, hash, p1); } // 0x0BF3B3BD47D79C08 0x7EFBA039
	static void _0x78857FC65CADB909(BOOL p0) { invoke<Void>(0xF79190, p0); } // 0x78857FC65CADB909 0xA3CDF152
	static Vector3 GET_SAFE_PICKUP_COORDS(float x, float y, float z, Any p3, Any p4) { return invoke<Vector3>(0xF791E0, x, y, z, p3, p4); } // 0x6E16BC2503FF1FF0 0x618B5F67
	static Vector3 GET_PICKUP_COORDS(Pickup pickup) { return invoke<Vector3>(0xF79370, pickup); } // 0x225B8B35C88029B3 0xC2E1E2C5
	static void REMOVE_ALL_PICKUPS_OF_TYPE(Hash pickupHash) { invoke<Void>(0xF79470, pickupHash); } // 0x27F9D613092159CF 0x40062C53
	static BOOL HAS_PICKUP_BEEN_COLLECTED(Pickup pickup) { return invoke<BOOL>(0xF79490, pickup); } // 0x80EC48E6679313F9 0x0BE5CCED
	static void REMOVE_PICKUP(Pickup pickup) { invoke<Void>(0xF794C0, pickup); } // 0x3288D8ACAECD2AB2 0x64A7A0E0
	static void CREATE_MONEY_PICKUPS(float x, float y, float z, int value, int amount, Hash model) { invoke<Void>(0xF794D0, x, y, z, value, amount, model); } // 0x0589B5E791CE9B2B 0x36C9A5EA
	static BOOL DOES_PICKUP_EXIST(Pickup pickup) { return invoke<BOOL>(0xF794F0, pickup); } // 0xAFC1CA75AD4074D1 0x9C6DA0B3
	static BOOL DOES_PICKUP_OBJECT_EXIST(Object pickupObject) { return invoke<BOOL>(0xF79540, pickupObject); } // 0xD9EFB6DBF7DAAEA3 0xE0B32108
	static Object GET_PICKUP_OBJECT(Pickup pickup) { return invoke<Object>(0xF79570, pickup); } // 0x5099BC55630B25AE 0x6052E62E
	static BOOL _0x0378C08504160D0D(Any p0) { return invoke<BOOL>(0xF795F0, p0); } // 0x0378C08504160D0D
	static BOOL _IS_PICKUP_WITHIN_RADIUS(Hash pickupHash, float x, float y, float z, float radius) { return invoke<BOOL>(0xF79660, pickupHash, x, y, z, radius); } // 0xF9C36251F6E48E33 0xF139681B
	static void SET_PICKUP_REGENERATION_TIME(Pickup pickup, int duration) { invoke<Void>(0xF79780, pickup, duration); } // 0x78015C9B4B3ECC9D 0xAB11267D
	static void _0x616093EC6B139DD9(Player player, Hash pickupHash, BOOL p2) { invoke<Void>(0xF79800, player, pickupHash, p2); } // 0x616093EC6B139DD9 0x7FADB4B9
	static void _0x88EAEC617CD26926(Hash p0, BOOL p1) { invoke<Void>(0xF79870, p0, p1); } // 0x88EAEC617CD26926 0x3A8F1BF7
	static void SET_TEAM_PICKUP_OBJECT(Object object, Any p1, BOOL p2) { invoke<Void>(0xF798B0, object, p1, p2); } // 0x53E0DF1A2A3CF0CA 0x77687DC5
	static void _0x92AEFB5F6E294023(Object object, BOOL p1, BOOL p2) { invoke<Void>(0xF79940, object, p1, p2); } // 0x92AEFB5F6E294023 0xCBB5F9B6
	static void _0xA08FE5E49BDC39DD(Any p0, float p1, BOOL p2) { invoke<Void>(0xF79A30, p0, p1, p2); } // 0xA08FE5E49BDC39DD 0x276A7807
	static Any _0xDB41D07A45A6D4B7(Any p0) { return invoke<Any>(0xF79B60, p0); } // 0xDB41D07A45A6D4B7 0x000E92DC
	static void _0x318516E02DE3ECE2(float p0) { invoke<Void>(0xF79BF0, p0); } // 0x318516E02DE3ECE2 0x9879AC51
	static void _0x31F924B53EADDF65(BOOL p0) { invoke<Void>(0xF79CA0, p0); } // 0x31F924B53EADDF65 0xDB18FA01
	static void _0xF92099527DB8E2A7(Any p0, Any p1) { invoke<Void>(0xF79FB0, p0, p1); } // 0xF92099527DB8E2A7 0xA7E936FD
	static void _0xA2C1F5E92AFE49ED() { invoke<Void>(0xF79FE0); } // 0xA2C1F5E92AFE49ED 0xB241806C
	static void _0x762DB2D380B48D04(Any p0) { invoke<Void>(0xF79FF0, p0); } // 0x762DB2D380B48D04 0xD1BAAFB7
	static void _HIGHLIGHT_PLACEMENT_COORDS(float x, float y, float z, int colorIndex) { invoke<Void>(0xF7A010, x, y, z, colorIndex); } // 0x3430676B11CDF21D 0x63B02FAD
	static void _0xB2D0BDE54F0E8E5A(Object object, BOOL toggle) { invoke<Void>(0xF7A0F0, object, toggle); } // 0xB2D0BDE54F0E8E5A 0x132B6D92
	static Hash _GET_WEAPON_HASH_FROM_PICKUP(Pickup pickupHash) { return invoke<Hash>(0xF7A140, pickupHash); } // 0x08F96CA6C551AD51 0xEDD01937
	static BOOL _0x11D1E53A726891FE(Object object) { return invoke<BOOL>(0xF7A260, object); } // 0x11D1E53A726891FE
	static void _SET_OBJECT_TEXTURE_VARIANT(Object object, int paintIndex) { invoke<Void>(0xF7A310, object, paintIndex); } // 0x971DA0055324D033
	static Hash _GET_PICKUP_HASH(Pickup pickupHash) { return invoke<Hash>(0xF7A470, pickupHash); } // 0x5EAAD83F8CFB4575 0x6AE36192
	static void SET_FORCE_OBJECT_THIS_FRAME(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xF7A490, p0, p1, p2, p3); } // 0xF538081986E49E9D 0x3DA41C1A
	static void _MARK_OBJECT_FOR_DELETION(Object object) { invoke<Void>(0xF7A4F0, object); } // 0xADBE4809F19F927A 0x2048A7DD
}

namespace AI
{
	static void TASK_PAUSE(Ped ped, int ms) { invoke<Void>(0xFFB170, ped, ms); } // 0xE73A266DB0CA9042 0x17A64668
	static void TASK_STAND_STILL(Ped ped, int time) { invoke<Void>(0xFFB1E0, ped, time); } // 0x919BE13EED931959 0x6F80965D
	static void TASK_JUMP(Ped ped, BOOL unused) { invoke<Void>(0xFFB270, ped, unused); } // 0x0AE4086104E067B1 0x0356E3CE
	static void TASK_COWER(Ped ped, int duration) { invoke<Void>(0xFFB2F0, ped, duration); } // 0x3EB1FE9E8E908E15 0x9CF1C19B
	static void TASK_HANDS_UP(Ped ped, int duration, Ped facingPed, int p3, BOOL p4) { invoke<Void>(0xFFB370, ped, duration, facingPed, p3, p4); } // 0xF2EAB31979A7F910 0x8DCC19C5
	static void UPDATE_TASK_HANDS_UP_DURATION(Ped ped, int duration) { invoke<Void>(0xFFB440, ped, duration); } // 0xA98FCAFD7893C834 0x3AA39BE9
	static void TASK_OPEN_VEHICLE_DOOR(Ped ped, Vehicle vehicle, int timeOut, int doorIndex, float speed) { invoke<Void>(0xFFB4A0, ped, vehicle, timeOut, doorIndex, speed); } // 0x965791A9A488A062 0x8EE06BF4
	static void TASK_ENTER_VEHICLE(Ped ped, Vehicle vehicle, int timeout, int seat, float speed, int flag, Any p6) { invoke<Void>(0xFFB4C0, ped, vehicle, timeout, seat, speed, flag, p6); } // 0xC20E50AA46D09CA8 0xB8689B4E
	static void TASK_LEAVE_VEHICLE(Ped ped, Vehicle vehicle, int flags) { invoke<Void>(0xFFB4F0, ped, vehicle, flags); } // 0xD3DBCE61A490BE02 0x7B1141C6
	static void _TASK_GET_OFF_BOAT(Ped ped, Vehicle boat) { invoke<Void>(0xFFB510, ped, boat); } // 0x9C00E77AF14B2DFF
	static void TASK_SKY_DIVE(Ped ped) { invoke<Void>(0xFFB590, ped); } // 0x601736CFE536B0A0 0xD3874AFA
	static void TASK_PARACHUTE(Ped ped, BOOL p1) { invoke<Void>(0xFFB5B0, ped, p1); } // 0xD2F1C53C97EE81AB 0xEC3060A2
	static void TASK_PARACHUTE_TO_TARGET(Ped ped, float x, float y, float z) { invoke<Void>(0xFFB630, ped, x, y, z); } // 0xB33E291AFA6BD03A 0xE0104D6C
	static void SET_PARACHUTE_TASK_TARGET(Ped ped, float x, float y, float z) { invoke<Void>(0xFFB6C0, ped, x, y, z); } // 0xC313379AF0FCEDA7 0x6ED3AD81
	static void SET_PARACHUTE_TASK_THRUST(Ped ped, float thrust) { invoke<Void>(0xFFB740, ped, thrust); } // 0x0729BAC1B8C64317 0xD07C8AAA
	static void TASK_RAPPEL_FROM_HELI(Ped ped, int unused) { invoke<Void>(0xFFB7B0, ped, unused); } // 0x09693B0312F91649 0x2C7ADB93
	static void TASK_VEHICLE_DRIVE_TO_COORD(Ped ped, Vehicle vehicle, float x, float y, float z, float speed, Any p6, Hash vehicleModel, int drivingMode, float stopRange, float p10) { invoke<Void>(0xFFB830, ped, vehicle, x, y, z, speed, p6, vehicleModel, drivingMode, stopRange, p10); } // 0xE2A2AA2F659D77A7 0xE4AC0387
	static void TASK_VEHICLE_DRIVE_TO_COORD_LONGRANGE(Ped ped, Vehicle vehicle, float x, float y, float z, float speed, int driveMode, float stopRange) { invoke<Void>(0xFFB8B0, ped, vehicle, x, y, z, speed, driveMode, stopRange); } // 0x158BB33F920D360C 0x1490182A
	static void TASK_VEHICLE_DRIVE_WANDER(Ped ped, Vehicle vehicle, float speed, int drivingStyle) { invoke<Void>(0xFFB8D0, ped, vehicle, speed, drivingStyle); } // 0x480142959D337D00 0x36EC0EB0
	static void TASK_FOLLOW_TO_OFFSET_OF_ENTITY(Ped ped, Entity entity, float offsetX, float offsetY, float offsetZ, float movementSpeed, int timeout, float stoppingRange, BOOL persistFollowing) { invoke<Void>(0xFFB9A0, ped, entity, offsetX, offsetY, offsetZ, movementSpeed, timeout, stoppingRange, persistFollowing); } // 0x304AE42E357B8C7E 0x2DF5A6AC
	static void TASK_GO_STRAIGHT_TO_COORD(Ped ped, float x, float y, float z, float speed, int timeout, float targetHeading, float distanceToSlide) { invoke<Void>(0xFFB9D0, ped, x, y, z, speed, timeout, targetHeading, distanceToSlide); } // 0xD76B57B44F1E6F8B 0x80A9E7A7
	static void TASK_GO_STRAIGHT_TO_COORD_RELATIVE_TO_ENTITY(Entity entity1, Entity entity2, float p2, float p3, float p4, float p5, Any p6) { invoke<Void>(0xFFBA00, entity1, entity2, p2, p3, p4, p5, p6); } // 0x61E360B7E040D12E 0xD26CAC68
	static void TASK_ACHIEVE_HEADING(Ped ped, float heading, int timeout) { invoke<Void>(0xFFBA20, ped, heading, timeout); } // 0x93B93A37987F1F3D 0x0A0E9B42
	static void TASK_FLUSH_ROUTE() { invoke<Void>(0xFFBA40); } // 0x841142A1376E9006 0x34219154
	static void TASK_EXTEND_ROUTE(float x, float y, float z) { invoke<Void>(0xFFBA50, x, y, z); } // 0x1E7889778264843A 0x43271F69
	static void TASK_FOLLOW_POINT_ROUTE(Ped ped, float speed, int unknown) { invoke<Void>(0xFFBA90, ped, speed, unknown); } // 0x595583281858626E 0xB837C816
	static void TASK_GO_TO_ENTITY(Entity entity, Entity target, int duration, float distance, float speed, float p5, int p6) { invoke<Void>(0xFFBAB0, entity, target, duration, distance, speed, p5, p6); } // 0x6A071245EB0D1882 0x374827C2
	static void TASK_SMART_FLEE_COORD(Ped ped, float x, float y, float z, float distance, int time, BOOL p6, BOOL p7) { invoke<Void>(0xFFBAE0, ped, x, y, z, distance, time, p6, p7); } // 0x94587F17E9C365D5 0xB2E686FC
	static void TASK_SMART_FLEE_PED(Ped ped, Ped fleeTarget, float distance, Any fleeTime, BOOL p4, BOOL p5) { invoke<Void>(0xFFBB10, ped, fleeTarget, distance, fleeTime, p4, p5); } // 0x22B0D0E37CCB840D 0xE52EB560
	static void TASK_REACT_AND_FLEE_PED(Ped ped, Ped fleeTarget) { invoke<Void>(0xFFBB40, ped, fleeTarget); } // 0x72C896464915D1B1 0x8A632BD8
	static void TASK_SHOCKING_EVENT_REACT(Ped ped, int eventHandle) { invoke<Void>(0xFFBB50, ped, eventHandle); } // 0x452419CBD838065B 0x9BD00ACF
	static void TASK_WANDER_IN_AREA(Ped ped, float x, float y, float z, float radius, float minimalLength, float timeBetweenWalks) { invoke<Void>(0xFFBB60, ped, x, y, z, radius, minimalLength, timeBetweenWalks); } // 0xE054346CA3A0F315 0xC6981FB9
	static void TASK_WANDER_STANDARD(Ped ped, float p1, int p2) { invoke<Void>(0xFFBC70, ped, p1, p2); } // 0xBB9CE077274F6A1B 0xAF59151A
	static void TASK_VEHICLE_PARK(Ped ped, Vehicle vehicle, float x, float y, float z, float heading, int mode, float radius, BOOL keepEngineOn) { invoke<Void>(0xFFBC90, ped, vehicle, x, y, z, heading, mode, radius, keepEngineOn); } // 0x0F3E34E968EA374E 0x5C85FF90
	static void TASK_STEALTH_KILL(Ped killer, Ped target, Hash actionType, float p3, Any p4) { invoke<Void>(0xFFBCC0, killer, target, actionType, p3, p4); } // 0xAA5DC05579D60BD9 0x0D64C2FA
	static void TASK_PLANT_BOMB(Ped ped, float x, float y, float z, float heading) { invoke<Void>(0xFFBCE0, ped, x, y, z, heading); } // 0x965FEC691D55E9BF 0x33457535
	static void TASK_FOLLOW_NAV_MESH_TO_COORD(Ped ped, float x, float y, float z, float speed, int timeout, float stoppingRange, BOOL persistFollowing, float unk) { invoke<Void>(0xFFBD00, ped, x, y, z, speed, timeout, stoppingRange, persistFollowing, unk); } // 0x15D3A79D4E44B913 0xFE4A10D9
	static void TASK_FOLLOW_NAV_MESH_TO_COORD_ADVANCED(Ped ped, float x, float y, float z, float speed, int timeout, float unkFloat, int unkInt, float unkX, float unkY, float unkZ, float unk_40000f) { invoke<Void>(0xFE7EE0, ped, x, y, z, speed, timeout, unkFloat, unkInt, unkX, unkY, unkZ, unk_40000f); } // 0x17F58B88D085DBAC 0x6BF6E296
	static void SET_PED_PATH_CAN_USE_CLIMBOVERS(Ped ped, BOOL Toggle) { invoke<Void>(0xFFBD30, ped, Toggle); } // 0x8E06A6FE76C9EFF4 0xB7B7D442
	static void SET_PED_PATH_CAN_USE_LADDERS(Ped ped, BOOL Toggle) { invoke<Void>(0xFFBD90, ped, Toggle); } // 0x77A5B103C87F476E 0x53A879EE
	static void SET_PED_PATH_CAN_DROP_FROM_HEIGHT(Ped ped, BOOL Toggle) { invoke<Void>(0xFFBDF0, ped, Toggle); } // 0xE361C5C71C431A4F 0x394B7AC9
	static void _0x88E32DB8C1A4AA4B(Ped ped, float p1) { invoke<Void>(0xFFBE50, ped, p1); } // 0x88E32DB8C1A4AA4B 0x55E06443
	static void SET_PED_PATHS_WIDTH_PLANT(Ped ped, BOOL mayEnterWater) { invoke<Void>(0xFFBEC0, ped, mayEnterWater); } // 0xF35425A4204367EC 0x9C606EE3
	static void SET_PED_PATH_PREFER_TO_AVOID_WATER(Ped ped, BOOL avoidWater) { invoke<Void>(0xFFBF20, ped, avoidWater); } // 0x38FE1EC73743793C 0x0EA39A29
	static void SET_PED_PATH_AVOID_FIRE(Ped ped, BOOL avoidFire) { invoke<Void>(0xFFBF80, ped, avoidFire); } // 0x4455517B28441E60 0xDCC5B934
	static void SET_GLOBAL_MIN_BIRD_FLIGHT_HEIGHT(float height) { invoke<Void>(0xFFBFE0, height); } // 0x6C6B148586F934F7 0x2AFB14B8
	static int GET_NAVMESH_ROUTE_DISTANCE_REMAINING(Ped ped, float* distRemaining, BOOL* isPathReady) { return invoke<int>(0xFFC010, ped, distRemaining, isPathReady); } // 0xC6F5C0BCDC74D62D 0xD9281778
	static int GET_NAVMESH_ROUTE_RESULT(Ped ped) { return invoke<int>(0xFFC0F0, ped); } // 0x632E831F382A0FA8 0x96491602
	static BOOL _0x3E38E28A1D80DDF6(Ped ped) { return invoke<BOOL>(0xFFC110, ped); } // 0x3E38E28A1D80DDF6
	static void TASK_GO_TO_COORD_ANY_MEANS(Ped ped, float x, float y, float z, float speed, Any p5, BOOL p6, int walkingStyle, float p8) { invoke<Void>(0xFFC190, ped, x, y, z, speed, p5, p6, walkingStyle, p8); } // 0x5BC448CB78FA3E88 0xF91DF93B
	static void TASK_GO_TO_COORD_ANY_MEANS_EXTRA_PARAMS(Ped ped, float x, float y, float z, float speed, Any p5, BOOL p6, int walkingStyle, float p8, Any p9, Any p10, Any p11) { invoke<Void>(0xFFC1C0, ped, x, y, z, speed, p5, p6, walkingStyle, p8, p9, p10, p11); } // 0x1DD45F9ECFDB1BC9 0x094B75EF
	static void TASK_GO_TO_COORD_ANY_MEANS_EXTRA_PARAMS_WITH_CRUISE_SPEED(Ped ped, float x, float y, float z, float speed, Any p5, BOOL p6, int walkingStyle, float p8, Any p9, Any p10, Any p11, Any p12) { invoke<Void>(0xFFC200, ped, x, y, z, speed, p5, p6, walkingStyle, p8, p9, p10, p11, p12); } // 0xB8ECD61F531A7B02 0x86DC03F9
	static void TASK_PLAY_ANIM(Ped ped, char* animDictionary, char* animationName, float speed, float speedMultiplier, int duration, int flag, float playbackRate, BOOL lockX, BOOL lockY, BOOL lockZ) { invoke<Void>(0xFFC250, ped, animDictionary, animationName, speed, speedMultiplier, duration, flag, playbackRate, lockX, lockY, lockZ); } // 0xEA47FE3719165B94 0x5AB552C6
	static void TASK_PLAY_ANIM_ADVANCED(Ped ped, char* animDict, char* animName, float posX, float posY, float posZ, float rotX, float rotY, float rotZ, float speed, float speedMultiplier, int duration, Any flag, float animTime, Any p14, Any p15) { invoke<Void>(0xFFC2E0, ped, animDict, animName, posX, posY, posZ, rotX, rotY, rotZ, speed, speedMultiplier, duration, flag, animTime, p14, p15); } // 0x83CDB10EA29B370B 0x3DDEB0E6
	static void STOP_ANIM_TASK(Ped ped, char* animDictionary, char* animationName, float p3) { invoke<Void>(0xFFC340, ped, animDictionary, animationName, p3); } // 0x97FF36A1D40EA00A 0x2B520A57
	static void TASK_SCRIPTED_ANIMATION(Ped ped, Any* p1, Any* p2, Any* p3, float p4, float p5) { invoke<Void>(0xFFC360, ped, p1, p2, p3, p4, p5); } // 0x126EF75F1E17ABE5 0xFC2DCF47
	static void PLAY_ENTITY_SCRIPTED_ANIM(Any p0, Any* p1, Any* p2, Any* p3, float p4, float p5) { invoke<Void>(0xFFC390, p0, p1, p2, p3, p4, p5); } // 0x77A1EEC547E7FCF1 0x02F72AE5
	static void STOP_ANIM_PLAYBACK(Ped ped, int p1, BOOL p2) { invoke<Void>(0xFFC3C0, ped, p1, p2); } // 0xEE08C992D238C5D1 0xE5F16398
	static void SET_ANIM_WEIGHT(Any p0, float p1, Any p2, Any p3, BOOL p4) { invoke<Void>(0xFFC460, p0, p1, p2, p3, p4); } // 0x207F1A47C0342F48 0x17229D98
	static void SET_ANIM_RATE(Any p0, float p1, Any p2, BOOL p3) { invoke<Void>(0xFFC480, p0, p1, p2, p3); } // 0x032D49C5E359C847 0x6DB46584
	static void SET_ANIM_LOOPED(Any p0, BOOL p1, Any p2, BOOL p3) { invoke<Void>(0xFFC530, p0, p1, p2, p3); } // 0x70033C3CC29A1FF4 0x095D61A4
	static void TASK_PLAY_PHONE_GESTURE_ANIMATION(Ped ped, char* animDict, char* animation, char* boneMaskType, float p4, float p5, BOOL p6, BOOL p7) { invoke<Void>(0xFFC560, ped, animDict, animation, boneMaskType, p4, p5, p6, p7); } // 0x8FBB6758B3B3E9EC 0x1582162C
	static void _TASK_STOP_PHONE_GESTURE_ANIMATION(Ped ped) { invoke<Void>(0xFFC5A0, ped); } // 0x3FA00D4F4641BFAE
	static BOOL IS_PLAYING_PHONE_GESTURE_ANIM(Ped ped) { return invoke<BOOL>(0xFFC630, ped); } // 0xB8EBB1E9D3588C10 0x500B6805
	static float GET_PHONE_GESTURE_ANIM_CURRENT_TIME(Ped ped) { return invoke<float>(0xFFC6C0, ped); } // 0x47619ABE8B268C60 0x7B72AFD1
	static float GET_PHONE_GESTURE_ANIM_TOTAL_TIME(Ped ped) { return invoke<float>(0xFFC760, ped); } // 0x1EE0F68A7C25DEC6 0xEF8C3959
	static void TASK_VEHICLE_PLAY_ANIM(Vehicle vehicle, char* animation_set, char* animation_name) { invoke<Void>(0xFFC800, vehicle, animation_set, animation_name); } // 0x69F5C3BD0F3EBD89 0x2B28F598
	static void TASK_LOOK_AT_COORD(Entity entity, float x, float y, float z, float duration, Any p5, Any p6) { invoke<Void>(0xFFC820, entity, x, y, z, duration, p5, p6); } // 0x6FA46612594F7973 0x7B784DD8
	static void TASK_LOOK_AT_ENTITY(Ped ped, Entity lookAt, int duration, int unknown1, int unknown2) { invoke<Void>(0xFFC840, ped, lookAt, duration, unknown1, unknown2); } // 0x69F4BE8C8CC4796C 0x991D6619
	static void TASK_CLEAR_LOOK_AT(Ped ped) { invoke<Void>(0xFFC860, ped); } // 0x0F804F1DB19B9689 0x60EB4054
	static void OPEN_SEQUENCE_TASK(Object* taskSequence) { invoke<Void>(0xFFC870, taskSequence); } // 0xE8854A4326B9E12B 0xABA6923E
	static void CLOSE_SEQUENCE_TASK(Object taskSequence) { invoke<Void>(0xFFC8E0, taskSequence); } // 0x39E72BC99E6360CB 0x1A7CEBD0
	static void TASK_PERFORM_SEQUENCE(Ped ped, Object taskSequence) { invoke<Void>(0xFFC930, ped, taskSequence); } // 0x5ABA3986D90D8A3B 0x4D9FBD11
	static void CLEAR_SEQUENCE_TASK(Object* taskSequence) { invoke<Void>(0xFFC950, taskSequence); } // 0x3841422E9C488D8C 0x47ED03CE
	static void SET_SEQUENCE_TO_REPEAT(Object taskSequence, BOOL repeat) { invoke<Void>(0xFFC990, taskSequence, repeat); } // 0x58C70CF3A41E4AE7 0xCDDF1508
	static int GET_SEQUENCE_PROGRESS(Ped ped) { return invoke<int>(0xFFCA00, ped); } // 0x00A9010CFE1E3533 0xA3419909
	static BOOL GET_IS_TASK_ACTIVE(Ped ped, int taskNumber) { return invoke<BOOL>(0xFFCA20, ped, taskNumber); } // 0xB0760331C7AA4155 0x86FDDF55
	static int GET_SCRIPT_TASK_STATUS(Ped targetPed, Hash taskHash) { return invoke<int>(0xFFCAC0, targetPed, taskHash); } // 0x77F1BEB8863288D5 0xB2477B23
	static int GET_ACTIVE_VEHICLE_MISSION_TYPE(Vehicle veh) { return invoke<int>(0xFFCB30, veh); } // 0x534AEBA6E5ED4CAB 0xAFA914EF
	static void TASK_LEAVE_ANY_VEHICLE(Ped ped, int p1, int p2) { invoke<Void>(0xFFCB50, ped, p1, p2); } // 0x504D54DF3F6F2247 0xDBDD79FA
	static void TASK_AIM_GUN_SCRIPTED(Ped ped, Hash scriptTask, BOOL p2, BOOL p3) { invoke<Void>(0xFFCB70, ped, scriptTask, p2, p3); } // 0x7A192BE16D373D00 0x9D296BCD
	static void TASK_AIM_GUN_SCRIPTED_WITH_TARGET(Any p0, Any p1, float p2, float p3, float p4, Any p5, BOOL p6, BOOL p7) { invoke<Void>(0xFFCBA0, p0, p1, p2, p3, p4, p5, p6, p7); } // 0x8605AF0DE8B3A5AC 0xFD517CE3
	static void UPDATE_TASK_AIM_GUN_SCRIPTED_TARGET(Ped p0, Ped p1, float p2, float p3, float p4, BOOL p5) { invoke<Void>(0xFFCBD0, p0, p1, p2, p3, p4, p5); } // 0x9724FB59A3E72AD0 0x67E73525
	static char* GET_CLIP_SET_FOR_SCRIPTED_GUN_TASK(int p0) { return invoke<char*>(0xFFCBF0, p0); } // 0x3A8CADC7D37AACC5 0x249EB4EB
	static void TASK_AIM_GUN_AT_ENTITY(Ped ped, Entity entity, int duration, BOOL p3) { invoke<Void>(0xFFCC30, ped, entity, duration, p3); } // 0x9B53BB6E8943AF53 0xBE32B3B6
	static void TASK_TURN_PED_TO_FACE_ENTITY(Ped ped, Entity entity, int duration) { invoke<Void>(0xFFCC50, ped, entity, duration); } // 0x5AD23D40115353AC 0x3C37C767
	static void TASK_AIM_GUN_AT_COORD(Ped ped, float x, float y, float z, int time, BOOL p5, BOOL p6) { invoke<Void>(0xFFCC70, ped, x, y, z, time, p5, p6); } // 0x6671F3EEC681BDA1 0xFBF44AD3
	static void TASK_SHOOT_AT_COORD(Ped ped, float x, float y, float z, int duration, Hash firingPattern) { invoke<Void>(0xFFCCA0, ped, x, y, z, duration, firingPattern); } // 0x46A6CC01E0826106 0x601C22E3
	static void TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT(Ped ped, Vehicle vehicle) { invoke<Void>(0xFFCCC0, ped, vehicle); } // 0x7AA80209BDA643EB 0xBEAF8F67
	static void CLEAR_PED_TASKS(Ped ped) { invoke<Void>(0xFFCCE0, ped); } // 0xE1EF3C1216AFF2CD 0xDE3316AB
	static void CLEAR_PED_SECONDARY_TASK(Ped ped) { invoke<Void>(0xFFCCF0, ped); } // 0x176CECF6F920D707 0xA635F451
	static void TASK_EVERYONE_LEAVE_VEHICLE(Vehicle vehicle) { invoke<Void>(0xFFCD40, vehicle); } // 0x7F93691AB4B92272 0xC1971F30
	static void TASK_GOTO_ENTITY_OFFSET(Ped ped, Any p1, Any p2, float x, float y, float z, int duration) { invoke<Void>(0xFFCD50, ped, p1, p2, x, y, z, duration); } // 0xE39B4FF4FDEBDE27 0x1A17A85E
	static void TASK_GOTO_ENTITY_OFFSET_XY(Ped ped, Entity entity, int duration, float xOffset, float yOffset, float zOffset, float moveBlendRatio, BOOL useNavmesh) { invoke<Void>(0xFFCD80, ped, entity, duration, xOffset, yOffset, zOffset, moveBlendRatio, useNavmesh); } // 0x338E7EF52B6095A9 0xBC1E3D0A
	static void TASK_TURN_PED_TO_FACE_COORD(Ped ped, float x, float y, float z, int duration) { invoke<Void>(0xFFCDB0, ped, x, y, z, duration); } // 0x1DDA930A0AC38571 0x30463D73
	static void TASK_VEHICLE_TEMP_ACTION(Ped driver, Vehicle vehicle, int action, int time) { invoke<Void>(0xFFCEA0, driver, vehicle, action, time); } // 0xC429DCEEB339E129 0x0679DFB8
	static void TASK_VEHICLE_MISSION(int p0, int p1, Vehicle veh, Any p3, float p4, Any p5, float p6, float p7, BOOL p8) { invoke<Void>(0xFFCEC0, p0, p1, veh, p3, p4, p5, p6, p7, p8); } // 0x659427E0EF36BCDE 0x20609E56
	static void TASK_VEHICLE_MISSION_PED_TARGET(Ped ped, Vehicle vehicle, Ped pedTarget, int mode, float maxSpeed, int drivingStyle, float minDistance, float p7, BOOL p8) { invoke<Void>(0xFFCF10, ped, vehicle, pedTarget, mode, maxSpeed, drivingStyle, minDistance, p7, p8); } // 0x9454528DF15D657A 0xC81C4677
	static void TASK_VEHICLE_MISSION_COORS_TARGET(Ped ped, Vehicle vehicle, float x, float y, float z, int p5, int p6, int p7, float p8, float p9, BOOL p10) { invoke<Void>(0xFFCF50, ped, vehicle, x, y, z, p5, p6, p7, p8, p9, p10); } // 0xF0AF20AA7731F8C3 0x6719C109
	static void TASK_VEHICLE_ESCORT(Ped ped, Vehicle vehicle, Vehicle targetVehicle, int mode, float speed, int drivingStyle, float minDistance, int p7, float noRoadsDistance) { invoke<Void>(0xFFCFE0, ped, vehicle, targetVehicle, mode, speed, drivingStyle, minDistance, p7, noRoadsDistance); } // 0x0FA6E4B75F302400 0x9FDCB250
	static void _TASK_VEHICLE_FOLLOW(Ped driver, Vehicle vehicle, Entity targetEntity, int drivingStyle, float speed, int minDistance) { invoke<Void>(0xFFD010, driver, vehicle, targetEntity, drivingStyle, speed, minDistance); } // 0xFC545A9F0626E3B6
	static void TASK_VEHICLE_CHASE(Ped driver, Entity targetEnt) { invoke<Void>(0xFFD030, driver, targetEnt); } // 0x3C08A8E30363B353 0x55634798
	static void TASK_VEHICLE_HELI_PROTECT(Ped pilot, Vehicle vehicle, Entity entityToFollow, float targetSpeed, int p4, float radius, int altitude, int p7) { invoke<Void>(0xFFD040, pilot, vehicle, entityToFollow, targetSpeed, p4, radius, altitude, p7); } // 0x1E09C32048FEFD1C 0x0CB415EE
	static void SET_TASK_VEHICLE_CHASE_BEHAVIOR_FLAG(Ped ped, int flag, BOOL set) { invoke<Void>(0xFFD070, ped, flag, set); } // 0xCC665AAC360D31E7 0x2A83083F
	static void SET_TASK_VEHICLE_CHASE_IDEAL_PURSUIT_DISTANCE(Ped ped, float distance) { invoke<Void>(0xFFD100, ped, distance); } // 0x639B642FACBE4EDD 0x04FD3EE7
	static void TASK_HELI_CHASE(Ped pilot, Entity entityToFollow, float x, float y, float z) { invoke<Void>(0xFFD180, pilot, entityToFollow, x, y, z); } // 0xAC83B1DB38D0ADA0 0xAC290A21
	static void TASK_PLANE_CHASE(Ped pilot, Entity entityToFollow, float x, float y, float z) { invoke<Void>(0xFFD1A0, pilot, entityToFollow, x, y, z); } // 0x2D2386F273FF7A25 0x12FA1C28
	static void TASK_PLANE_LAND(Ped pilot, Vehicle plane, float runwayStartX, float runwayStartY, float runwayStartZ, float runwayEndX, float runwayEndY, float runwayEndZ) { invoke<Void>(0xFFD1C0, pilot, plane, runwayStartX, runwayStartY, runwayStartZ, runwayEndX, runwayEndY, runwayEndZ); } // 0xBF19721FA34D32C0 0x5F7E23EA
	static void TASK_HELI_MISSION(Ped pilot, Vehicle aircraft, Vehicle targetVehicle, Ped targetPed, float destinationX, float destinationY, float destinationZ, int missionFlag, float maxSpeed, float landingRadius, float targetHeading, int unk1, int unk2, Hash unk3, int landingFlags) { invoke<Void>(0xFFD2F0, pilot, aircraft, targetVehicle, targetPed, destinationX, destinationY, destinationZ, missionFlag, maxSpeed, landingRadius, targetHeading, unk1, unk2, unk3, landingFlags); } // 0xDAD029E187A2BEB4 0x0C143E97
	static void TASK_PLANE_MISSION(Ped pilot, Vehicle aircraft, Vehicle targetVehicle, Ped targetPed, float destinationX, float destinationY, float destinationZ, int missionFlag, float angularDrag, float unk, float targetHeading, float maxZ, float minZ) { invoke<Void>(0xFFD370, pilot, aircraft, targetVehicle, targetPed, destinationX, destinationY, destinationZ, missionFlag, angularDrag, unk, targetHeading, maxZ, minZ); } // 0x23703CD154E83B88 0x1D007E65
	static void TASK_BOAT_MISSION(Ped pedDriver, Vehicle boat, Any p2, Any p3, float x, float y, float z, Any p7, float maxSpeed, int drivingStyle, float p10, Any p11) { invoke<Void>(0xFFD3F0, pedDriver, boat, p2, p3, x, y, z, p7, maxSpeed, drivingStyle, p10, p11); } // 0x15C86013127CE63F 0x5865B031
	static void TASK_DRIVE_BY(Ped driverPed, Ped targetPed, Vehicle targetVehicle, float targetX, float targetY, float targetZ, float distanceToShoot, int pedAccuracy, BOOL p8, Hash firingPattern) { invoke<Void>(0xFFD440, driverPed, targetPed, targetVehicle, targetX, targetY, targetZ, distanceToShoot, pedAccuracy, p8, firingPattern); } // 0x2F8AF0E82773A171 0x2B84D1C4
	static void SET_DRIVEBY_TASK_TARGET(Ped shootingPed, Ped targetPed, Vehicle targetVehicle, float x, float y, float z) { invoke<Void>(0xFFD480, shootingPed, targetPed, targetVehicle, x, y, z); } // 0xE5B302114D8162EE 0xDA6A6FC1
	static void CLEAR_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(Ped ped) { invoke<Void>(0xFFD4A0, ped); } // 0xC35B5CDB2824CF69 0x9B76F7E6
	static BOOL IS_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(Ped ped) { return invoke<BOOL>(0xFFD530, ped); } // 0x8785E6E40C7A8818 0xB23F46E6
	static BOOL CONTROL_MOUNTED_WEAPON(Ped ped) { return invoke<BOOL>(0xFFD5C0, ped); } // 0xDCFE42068FE0135A 0x500D9244
	static void SET_MOUNTED_WEAPON_TARGET(Ped shootingPed, Ped targetPed, Vehicle targetVehicle, float x, float y, float z) { invoke<Void>(0xFFD660, shootingPed, targetPed, targetVehicle, x, y, z); } // 0xCCD892192C6D2BB9 0x98713C68
	static BOOL IS_MOUNTED_WEAPON_TASK_UNDERNEATH_DRIVING_TASK(Ped ped) { return invoke<BOOL>(0xFFD690, ped); } // 0xA320EF046186FA3B 0x291E938C
	static void TASK_USE_MOBILE_PHONE(Ped ped, int p1) { invoke<Void>(0xFFD700, ped, p1); } // 0xBD2A8EC3AF4DE7DB 0x225A38C8
	static void TASK_USE_MOBILE_PHONE_TIMED(Ped ped, int duration) { invoke<Void>(0xFFD720, ped, duration); } // 0x5EE02954A14C69DB 0xC99C19F5
	static void TASK_CHAT_TO_PED(Ped ped, Ped target, Any p2, float p3, float p4, float p5, float p6, float p7) { invoke<Void>(0xFFD730, ped, target, p2, p3, p4, p5, p6, p7); } // 0x8C338E0263E4FD19 0xA2BE1821
	static void TASK_WARP_PED_INTO_VEHICLE(Ped ped, Vehicle vehicle, int seat) { invoke<Void>(0xFFD750, ped, vehicle, seat); } // 0x9A7D091411C5F684 0x65D4A35D
	static void TASK_SHOOT_AT_ENTITY(Entity entity, Entity target, int duration, Hash firingPattern) { invoke<Void>(0xFFD770, entity, target, duration, firingPattern); } // 0x08DA95E8298AE772 0xAC0631C9
	static void TASK_CLIMB(Ped ped, BOOL unused) { invoke<Void>(0xFFD790, ped, unused); } // 0x89D9FCC2435112F1 0x90847790
	static void TASK_CLIMB_LADDER(Ped ped, int p1) { invoke<Void>(0xFFD7F0, ped, p1); } // 0xB6C987F9285A3814 0x35BB4EE0
	static void CLEAR_PED_TASKS_IMMEDIATELY(Ped ped) { invoke<Void>(0xFFD860, ped); } // 0xAAA34F8A7CB32098 0xBC045625
	static void TASK_PERFORM_SEQUENCE_FROM_PROGRESS(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xFFD870, p0, p1, p2, p3); } // 0x89221B16730234F0 0xFA60601B
	static void SET_NEXT_DESIRED_MOVE_STATE(float p0) { invoke<Void>(0xFFD890, p0); } // 0xF1B9F16E89E2C93A 0x4E937D57
	static void SET_PED_DESIRED_MOVE_BLEND_RATIO(Ped ped, float p1) { invoke<Void>(0xFFD8A0, ped, p1); } // 0x1E982AC8716912C5 0xC65FC712
	static float GET_PED_DESIRED_MOVE_BLEND_RATIO(Ped ped) { return invoke<float>(0xFFD8B0, ped); } // 0x8517D4A6CA8513ED 0x5FEFAB72
	static void TASK_GOTO_ENTITY_AIMING(Ped ped, Entity target, float distanceToStopAt, float StartAimingDist) { invoke<Void>(0xFFD900, ped, target, distanceToStopAt, StartAimingDist); } // 0xA9DA48FAB8A76C12 0xF1C493CF
	static void TASK_SET_DECISION_MAKER(Ped p0, Hash p1) { invoke<Void>(0xFFD9B0, p0, p1); } // 0xEB8517DDA73720DA 0x830AD50C
	static void TASK_SET_SPHERE_DEFENSIVE_AREA(Any p0, float p1, float p2, float p3, float p4) { invoke<Void>(0xFFD9C0, p0, p1, p2, p3, p4); } // 0x933C06518B52A9A4 0x9F3C5D6A
	static void TASK_CLEAR_DEFENSIVE_AREA(Any p0) { invoke<Void>(0xFFD9E0, p0); } // 0x95A6C46A31D1917D 0x7A05BF0D
	static void TASK_PED_SLIDE_TO_COORD(Ped ped, float x, float y, float z, float heading, float duration) { invoke<Void>(0xFFD9F0, ped, x, y, z, heading, duration); } // 0xD04FE6765D990A06 0x225380EF
	static void TASK_PED_SLIDE_TO_COORD_HDG_RATE(Ped ped, float x, float y, float z, float heading, float p5, float p6) { invoke<Void>(0xFFDA10, ped, x, y, z, heading, p5, p6); } // 0x5A4A6A6D3DC64F52 0x38A995C1
	static ScrHandle ADD_COVER_POINT(float p0, float p1, float p2, float p3, Any p4, Any p5, Any p6, BOOL p7) { return invoke<ScrHandle>(0xFFDA30, p0, p1, p2, p3, p4, p5, p6, p7); } // 0xD5C12A75C7B9497F 0xA0AF0B98
	static void REMOVE_COVER_POINT(ScrHandle coverpoint) { invoke<Void>(0xFFDAE0, coverpoint); } // 0xAE287C923D891715 0x0776888B
	static BOOL DOES_SCRIPTED_COVER_POINT_EXIST_AT_COORDS(float x, float y, float z) { return invoke<BOOL>(0xFFDB20, x, y, z); } // 0xA98B8E3C088E5A31 0x29F97A71
	static Vector3 GET_SCRIPTED_COVER_POINT_COORDS(ScrHandle coverpoint) { return invoke<Vector3>(0xFFDBB0, coverpoint); } // 0x594A1028FC2A3E85 0xC6B6CCC1
	static void TASK_COMBAT_PED(Ped ped, Ped targetPed, int p2, int p3) { invoke<Void>(0xFFDC80, ped, targetPed, p2, p3); } // 0xF166E48407BAC484 0xCB0D8932
	static void TASK_COMBAT_PED_TIMED(Any p0, Ped ped, int p2, Any p3) { invoke<Void>(0xFFDCA0, p0, ped, p2, p3); } // 0x944F30DCB7096BDE 0xF5CA2A45
	static void TASK_SEEK_COVER_FROM_POS(Ped ped, float x, float y, float z, int duration, BOOL p5) { invoke<Void>(0xFFDCC0, ped, x, y, z, duration, p5); } // 0x75AC2B60386D89F2 0x83F18EE9
	static void TASK_SEEK_COVER_FROM_PED(Ped ped, Ped target, int duration, BOOL p3) { invoke<Void>(0xFFDCE0, ped, target, duration, p3); } // 0x84D32B3BEC531324 0xC1EC907E
	static void TASK_SEEK_COVER_TO_COVER_POINT(Any p0, Any p1, float p2, float p3, float p4, Any p5, BOOL p6) { invoke<Void>(0xFFDD00, p0, p1, p2, p3, p4, p5, p6); } // 0xD43D95C7A869447F 0x3D026B29
	static void TASK_SEEK_COVER_TO_COORDS(Ped ped, float x1, float y1, float z1, float x2, float y2, float z2, Any p7, BOOL p8) { invoke<Void>(0xFFDD20, ped, x1, y1, z1, x2, y2, z2, p7, p8); } // 0x39246A6958EF072C 0xFFFE754E
	static void TASK_PUT_PED_DIRECTLY_INTO_COVER(Ped ped, float x, float y, float z, Any timeout, BOOL p5, float p6, BOOL p7, BOOL p8, Any p9, BOOL p10) { invoke<Void>(0xFFDD50, ped, x, y, z, timeout, p5, p6, p7, p8, p9, p10); } // 0x4172393E6BE1FECE 0xC9F00E68
	static void TASK_EXIT_COVER(Any p0, Any p1, float p2, float p3, float p4) { invoke<Void>(0xFFDE60, p0, p1, p2, p3, p4); } // 0x79B258E397854D29 0xC829FAC9
	static void TASK_PUT_PED_DIRECTLY_INTO_MELEE(Ped ped, Ped meleeTarget, float p2, float p3, float p4, BOOL p5) { invoke<Void>(0xFFDE80, ped, meleeTarget, p2, p3, p4, p5); } // 0x1C6CD14A876FFE39 0x79E1D27D
	static void TASK_TOGGLE_DUCK(BOOL p0, BOOL p1) { invoke<Void>(0xFFDEA0, p0, p1); } // 0xAC96609B9995EDF8 0x61CFBCBF
	static void TASK_GUARD_CURRENT_POSITION(Ped p0, float p1, float p2, BOOL p3) { invoke<Void>(0xFFDF30, p0, p1, p2, p3); } // 0x4A58A47A72E3FCB4 0x2FB099E9
	static void TASK_GUARD_ASSIGNED_DEFENSIVE_AREA(Any p0, float p1, float p2, float p3, float p4, float p5, Any p6) { invoke<Void>(0xFFDF50, p0, p1, p2, p3, p4, p5, p6); } // 0xD2A207EEBDF9889B 0x7AF0133D
	static void TASK_GUARD_SPHERE_DEFENSIVE_AREA(Ped p0, float p1, float p2, float p3, float p4, float p5, Any p6, float p7, float p8, float p9, float p10) { invoke<Void>(0xFFDF70, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); } // 0xC946FE14BE0EB5E2 0x86B76CB7
	static void TASK_STAND_GUARD(Ped ped, float x, float y, float z, float heading, char* scenarioName) { invoke<Void>(0xFFDFA0, ped, x, y, z, heading, scenarioName); } // 0xAE032F8BBA959E90 0xD130F636
	static void SET_DRIVE_TASK_CRUISE_SPEED(Ped driver, float cruiseSpeed) { invoke<Void>(0xFFDFC0, driver, cruiseSpeed); } // 0x5C9B84BD7D31D908 0x3CEC07B1
	static void SET_DRIVE_TASK_MAX_CRUISE_SPEED(Any p0, float p1) { invoke<Void>(0xFFDFD0, p0, p1); } // 0x404A5AA9B9F0B746 0x7FDF6131
	static void SET_DRIVE_TASK_DRIVING_STYLE(Ped ped, int drivingStyle) { invoke<Void>(0xFFE070, ped, drivingStyle); } // 0xDACE1BE37D88AF67 0x59C5FAD7
	static void ADD_COVER_BLOCKING_AREA(float playerX, float playerY, float playerZ, float radiusX, float radiusY, float radiusZ, BOOL p6, BOOL p7, BOOL p8, BOOL p9) { invoke<Void>(0xFFE100, playerX, playerY, playerZ, radiusX, radiusY, radiusZ, p6, p7, p8, p9); } // 0x45C597097DD7CB81 0x3536946F
	static void REMOVE_ALL_COVER_BLOCKING_AREAS() { invoke<Void>(0xFFE1B0); } // 0xDB6708C0B46F56D8 0xCF9221A7
	static void TASK_START_SCENARIO_IN_PLACE(Ped ped, char* scenarioName, int unkDelay, BOOL playEnterAnim) { invoke<Void>(0xFFE280, ped, scenarioName, unkDelay, playEnterAnim); } // 0x142A02425FF02BD9 0xE50D6DDE
	static void TASK_START_SCENARIO_AT_POSITION(Ped ped, char* scenarioName, float x, float y, float z, float heading, int duration, BOOL sittingScenario, BOOL teleport) { invoke<Void>(0xFFE2A0, ped, scenarioName, x, y, z, heading, duration, sittingScenario, teleport); } // 0xFA4EFC79F69D4F07 0xAA2C4AC2
	static void TASK_USE_NEAREST_SCENARIO_TO_COORD(Ped ped, float x, float y, float z, float distance, int duration) { invoke<Void>(0xFFE2E0, ped, x, y, z, distance, duration); } // 0x277F471BA9DB000B 0x9C50FBF0
	static void TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(Ped ped, float x, float y, float z, float radius, Any p5) { invoke<Void>(0xFFE390, ped, x, y, z, radius, p5); } // 0x58E2E0F23F6B76C3 0x1BE9D65C
	static void TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(Any p0, float p1, float p2, float p3, float p4, Any p5) { invoke<Void>(0xFFE440, p0, p1, p2, p3, p4, p5); } // 0x9FDA1B3D7E7028B3 0xE32FFB22
	static void TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD_WARP(Any p0, float p1, float p2, float p3, float p4, Any p5) { invoke<Void>(0xFFE460, p0, p1, p2, p3, p4, p5); } // 0x97A28E63F0BA5631 0xBAB4C0AE
	static BOOL DOES_SCENARIO_EXIST_IN_AREA(float x, float y, float z, float radius, BOOL b) { return invoke<BOOL>(0xFFE480, x, y, z, radius, b); } // 0x5A59271FFADD33C1 0xFA7F5047
	static BOOL DOES_SCENARIO_OF_TYPE_EXIST_IN_AREA(float p0, float p1, float p2, Any* p3, float p4, BOOL p5) { return invoke<BOOL>(0xFFE520, p0, p1, p2, p3, p4, p5); } // 0x0A9D0C2A3BBC86C1 0x0FB138A5
	static BOOL IS_SCENARIO_OCCUPIED(float p0, float p1, float p2, float p3, BOOL p4) { return invoke<BOOL>(0xFFE5E0, p0, p1, p2, p3, p4); } // 0x788756D73AC2E07C 0x697FC008
	static BOOL PED_HAS_USE_SCENARIO_TASK(Ped ped) { return invoke<BOOL>(0xFFE610, ped); } // 0x295E3CCEC879CCD7 0x9BE9C691
	static void PLAY_ANIM_ON_RUNNING_SCENARIO(Ped ped, char* animDict, char* animName) { invoke<Void>(0xFFE680, ped, animDict, animName); } // 0x748040460F8DF5DC 0x1984A5D1
	static BOOL DOES_SCENARIO_GROUP_EXIST(char* scenarioGroup) { return invoke<BOOL>(0xFFE6A0, scenarioGroup); } // 0xF9034C136C9E00D3 0x5F072EB9
	static BOOL IS_SCENARIO_GROUP_ENABLED(char* scenarioGroup) { return invoke<BOOL>(0xFFE720, scenarioGroup); } // 0x367A09DED4E05B99 0x90991122
	static void SET_SCENARIO_GROUP_ENABLED(char* scenarioGroup, BOOL p1) { invoke<Void>(0xFFE7C0, scenarioGroup, p1); } // 0x02C8E5B49848664E 0x116997B1
	static void RESET_SCENARIO_GROUPS_ENABLED() { invoke<Void>(0xFFE850); } // 0xDD902D0349AFAD3A 0xBF55025D
	static void SET_EXCLUSIVE_SCENARIO_GROUP(char* scenarioGroup) { invoke<Void>(0xFFE860, scenarioGroup); } // 0x535E97E1F7FC0C6A 0x59DB8F26
	static void RESET_EXCLUSIVE_SCENARIO_GROUP() { invoke<Void>(0xFFE8E0); } // 0x4202BBCB8684563D 0x17F9DFE8
	static BOOL IS_SCENARIO_TYPE_ENABLED(char* scenarioType) { return invoke<BOOL>(0xFFE900, scenarioType); } // 0x3A815DB3EA088722 0xAE37E969
	static void SET_SCENARIO_TYPE_ENABLED(char* scenarioType, BOOL toggle) { invoke<Void>(0xFFE990, scenarioType, toggle); } // 0xEB47EC4E34FB7EE1 0xDB18E5DE
	static void RESET_SCENARIO_TYPES_ENABLED() { invoke<Void>(0xFFEA20); } // 0x0D40EE2A7F2B2D6D 0xF58FDEB4
	static BOOL IS_PED_ACTIVE_IN_SCENARIO(Ped ped) { return invoke<BOOL>(0xFFEA30, ped); } // 0xAA135F9482C82CC3 0x05038F1A
	static BOOL _0x621C6E4729388E41(Ped ped) { return invoke<BOOL>(0xFFEAB0, ped); } // 0x621C6E4729388E41
	static void _0x8FD89A6240813FD0(Ped ped, BOOL p1, BOOL p2) { invoke<Void>(0xFFEAE0, ped, p1, p2); } // 0x8FD89A6240813FD0
	static void TASK_COMBAT_HATED_TARGETS_IN_AREA(Ped ped, float x, float y, float z, float radius, Any p5) { invoke<Void>(0xFFEB60, ped, x, y, z, radius, p5); } // 0x4CF5F55DAC3280A0 0xDF099E18
	static void TASK_COMBAT_HATED_TARGETS_AROUND_PED(Ped ped, float radius, int p2) { invoke<Void>(0xFFEC60, ped, radius, p2); } // 0x7BF835BB9E2698C8 0x2E7064E4
	static void TASK_COMBAT_HATED_TARGETS_AROUND_PED_TIMED(Any p0, float p1, Any p2, Any p3) { invoke<Void>(0xFFED50, p0, p1, p2, p3); } // 0x2BBA30B854534A0C 0xF127AD6A
	static void TASK_THROW_PROJECTILE(int ped, float x, float y, float z) { invoke<Void>(0xFFEE50, ped, x, y, z); } // 0x7285951DBF6B5A51 0xF65C20A7
	static void TASK_SWAP_WEAPON(Ped ped, BOOL p1) { invoke<Void>(0xFFEE70, ped, p1); } // 0xA21C51255B205245 0xDAF4F8FC
	static void TASK_RELOAD_WEAPON(Ped ped, BOOL unused) { invoke<Void>(0xFFEEF0, ped, unused); } // 0x62D2916F56B9CD2D 0xCA6E91FD
	static BOOL IS_PED_GETTING_UP(Ped ped) { return invoke<BOOL>(0xFFEF10, ped); } // 0x2A74E1D5F2F00EEC 0x320813E6
	static void TASK_WRITHE(Ped ped, Ped target, int time, int p3) { invoke<Void>(0xFFEF70, ped, target, time, p3); } // 0xCDDC2B77CE54AC6E 0x0FDC54FC
	static BOOL IS_PED_IN_WRITHE(Ped ped) { return invoke<BOOL>(0xFFEFA0, ped); } // 0xDEB6D52126E7D640 0x09E61921
	static void OPEN_PATROL_ROUTE(char* patrolRoute) { invoke<Void>(0xFFF000, patrolRoute); } // 0xA36BFB5EE89F3D82 0xF33F83CA
	static void CLOSE_PATROL_ROUTE() { invoke<Void>(0xFFF020); } // 0xB043ECA801B8CBC1 0x67305E59
	static void ADD_PATROL_ROUTE_NODE(int p0, char* p1, float x1, float y1, float z1, float x2, float y2, float z2, int p8) { invoke<Void>(0xFFF030, p0, p1, x1, y1, z1, x2, y2, z2, p8); } // 0x8EDF950167586B7C 0x21B48F10
	static void ADD_PATROL_ROUTE_LINK(Any p0, Any p1) { invoke<Void>(0xFFF0C0, p0, p1); } // 0x23083260DEC3A551 0xD8761BB3
	static void CREATE_PATROL_ROUTE() { invoke<Void>(0xFFF0E0); } // 0xAF8A443CCC8018DC 0x0A6C7864
	static void DELETE_PATROL_ROUTE(char* patrolRoute) { invoke<Void>(0xFFF0F0, patrolRoute); } // 0x7767DD9D65E91319 0x2A4E6706
	static void TASK_PATROL(Ped ped, char* p1, Any p2, BOOL p3, BOOL p4) { invoke<Void>(0xFFF130, ped, p1, p2, p3, p4); } // 0xBDA5DF49D080FE4E 0xB92E5AF6
	static void TASK_STAY_IN_COVER(Ped ped) { invoke<Void>(0xFFF1D0, ped); } // 0xE5DA8615A6180789 0xA27A9413
	static void ADD_VEHICLE_SUBTASK_ATTACK_COORD(Ped ped, float x, float y, float z) { invoke<Void>(0xFFF230, ped, x, y, z); } // 0x5CF0D8F9BBA0DD75 0x50779A2C
	static void ADD_VEHICLE_SUBTASK_ATTACK_PED(Ped ped, Ped ped2) { invoke<Void>(0xFFF240, ped, ped2); } // 0x85F462BADC7DA47F 0x80461113
	static void TASK_VEHICLE_SHOOT_AT_PED(Ped ped, Ped target, float p2) { invoke<Void>(0xFFF250, ped, target, p2); } // 0x10AB107B887214D8 0x59677BA0
	static void TASK_VEHICLE_AIM_AT_PED(Ped ped, Ped target) { invoke<Void>(0xFFF270, ped, target); } // 0xE41885592B08B097 0x920AE6DB
	static void TASK_VEHICLE_SHOOT_AT_COORD(Ped ped, float x, float y, float z, float p4) { invoke<Void>(0xFFF280, ped, x, y, z, p4); } // 0x5190796ED39C9B6D 0xA7AAA4D6
	static void TASK_VEHICLE_AIM_AT_COORD(Ped ped, float x, float y, float z) { invoke<Void>(0xFFF2A0, ped, x, y, z); } // 0x447C1E9EF844BC0F 0x010F47CE
	static void TASK_VEHICLE_GOTO_NAVMESH(Ped ped, Vehicle vehicle, float x, float y, float z, float speed, int behaviorFlag, float stoppingRange) { invoke<Void>(0xFFF2B0, ped, vehicle, x, y, z, speed, behaviorFlag, stoppingRange); } // 0x195AEEB13CEFE2EE 0x55CF3BCD
	static void TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(Ped ped, float x, float y, float z, float aimAtX, float aimAtY, float aimAtZ, float moveSpeed, BOOL p8, float p9, float p10, BOOL p11, Any flags, BOOL p13, Hash firingPattern) { invoke<Void>(0xFFF2D0, ped, x, y, z, aimAtX, aimAtY, aimAtZ, moveSpeed, p8, p9, p10, p11, flags, p13, firingPattern); } // 0x11315AB3385B8AC0 0x1552DC91
	static void TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(Any p0, float p1, float p2, float p3, Any p4, float p5, BOOL p6, float p7, float p8, BOOL p9, Any p10, BOOL p11, Any p12, Any p13) { invoke<Void>(0xFFF330, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13); } // 0xB2A16444EAD9AE47 0x9BD52ABD
	static void TASK_GO_TO_COORD_AND_AIM_AT_HATED_ENTITIES_NEAR_COORD(Ped pedHandle, float goToLocationX, float goToLocationY, float goToLocationZ, float focusLocationX, float focusLocationY, float focusLocationZ, float speed, BOOL shootAtEnemies, float distanceToStopAt, float noRoadsDistance, BOOL unkTrue, int unkFlag, int aimingFlag, Hash firingPattern) { invoke<Void>(0xFFF3A0, pedHandle, goToLocationX, goToLocationY, goToLocationZ, focusLocationX, focusLocationY, focusLocationZ, speed, shootAtEnemies, distanceToStopAt, noRoadsDistance, unkTrue, unkFlag, aimingFlag, firingPattern); } // 0xA55547801EB331FC 0x3F91358E
	static void TASK_GO_TO_ENTITY_WHILE_AIMING_AT_COORD(Any p0, Any p1, float p2, float p3, float p4, float p5, BOOL p6, float p7, float p8, BOOL p9, BOOL p10, Any p11) { invoke<Void>(0xFFF400, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); } // 0x04701832B739DCE5 0xD896CD82
	static void TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(Ped ped, Entity entityToWalkTo, Entity entityToAimAt, float speed, BOOL shootatEntity, float p5, float p6, BOOL p7, BOOL p8, Hash firingPattern) { invoke<Void>(0xFFF460, ped, entityToWalkTo, entityToAimAt, speed, shootatEntity, p5, p6, p7, p8, firingPattern); } // 0x97465886D35210E9 0x68E36B7A
	static void SET_HIGH_FALL_TASK(Ped ped, Any p1, Any p2, Any p3) { invoke<Void>(0xFFF4C0, ped, p1, p2, p3); } // 0x8C825BDC7741D37C 0xBBB26172
	static void REQUEST_WAYPOINT_RECORDING(char* name) { invoke<Void>(0xFFF4E0, name); } // 0x9EEFB62EB27B5792 0xAFABFB5D
	static BOOL GET_IS_WAYPOINT_RECORDING_LOADED(char* name) { return invoke<BOOL>(0xFFF520, name); } // 0xCB4E8BE8A0063C5D 0x87125F5D
	static void REMOVE_WAYPOINT_RECORDING(char* name) { invoke<Void>(0xFFF560, name); } // 0xFF1B8B4AA1C25DC8 0x624530B0
	static BOOL WAYPOINT_RECORDING_GET_NUM_POINTS(char* name, int* points) { return invoke<BOOL>(0xFFF5A0, name, points); } // 0x5343532C01A07234 0xF5F9B71E
	static BOOL WAYPOINT_RECORDING_GET_COORD(char* name, int point, Vector3* coord) { return invoke<BOOL>(0xFFF600, name, point, coord); } // 0x2FB897405C90B361 0x19266913
	static float WAYPOINT_RECORDING_GET_SPEED_AT_POINT(char* name, int point) { return invoke<float>(0xFFF670, name, point); } // 0x005622AEBC33ACA9 0xC765633A
	static BOOL WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(char* name, float x, float y, float z, int* point) { return invoke<BOOL>(0xFFF710, name, x, y, z, point); } // 0xB629A298081F876F 0xC4CD35AF
	static void TASK_FOLLOW_WAYPOINT_RECORDING(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0xFFF7C0, p0, p1, p2, p3, p4); } // 0x0759591819534F7B 0xADF9904D
	static BOOL IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Any p0) { return invoke<BOOL>(0xFFF880, p0); } // 0xE03B3F2D3DC59B64 0x85B7725F
	static int GET_PED_WAYPOINT_PROGRESS(Ped ped) { return invoke<int>(0xFFF900, ped); } // 0x2720AAA75001E094 0x3595B104
	static float GET_PED_WAYPOINT_DISTANCE(Any p0) { return invoke<float>(0xFFF980, p0); } // 0xE6A877C64CAF1BC5 0x084B35B0
	static Any SET_PED_WAYPOINT_ROUTE_OFFSET(Any p0, Any p1, Any p2, Any p3) { return invoke<Any>(0xFFFA10, p0, p1, p2, p3); } // 0xED98E10B0AFCE4B4 0xF867F747
	static float GET_WAYPOINT_DISTANCE_ALONG_ROUTE(char* p0, int p1) { return invoke<float>(0xFFFAC0, p0, p1); } // 0xA5B769058763E497 0xE8422AC4
	static BOOL WAYPOINT_PLAYBACK_GET_IS_PAUSED(Any p0) { return invoke<BOOL>(0xFFFB20, p0); } // 0x701375A7D43F01CB 0xA6BB5717
	static void WAYPOINT_PLAYBACK_PAUSE(Any p0, BOOL p1, BOOL p2) { invoke<Void>(0xFFFBB0, p0, p1, p2); } // 0x0F342546AA06FED5 0xFE39ECF8
	static void WAYPOINT_PLAYBACK_RESUME(Any p0, BOOL p1, Any p2, Any p3) { invoke<Void>(0xFFFC50, p0, p1, p2, p3); } // 0x244F70C84C547D2D 0x50F392EF
	static void WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Any p0, float p1, BOOL p2) { invoke<Void>(0xFFFCF0, p0, p1, p2); } // 0x7D7D2B47FA788E85 0x23E6BA96
	static void WAYPOINT_PLAYBACK_USE_DEFAULT_SPEED(Any p0) { invoke<Void>(0xFFFDB0, p0); } // 0x6599D834B12D0800 0x1BBB2CAC
	static void USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE(Any* p0, BOOL p1, float p2, float p3) { invoke<Void>(0xFFFE30, p0, p1, p2, p3); } // 0x5A353B8E6B1095B5 0x4DFD5FEC
	static void WAYPOINT_PLAYBACK_START_AIMING_AT_PED(Any p0, Any p1, BOOL p2) { invoke<Void>(0xFFFE50, p0, p1, p2); } // 0x20E330937C399D29 0x75E60CF6
	static void WAYPOINT_PLAYBACK_START_AIMING_AT_COORD(Any p0, float p1, float p2, float p3, BOOL p4) { invoke<Void>(0xFFFF20, p0, p1, p2, p3, p4); } // 0x8968400D900ED8B3 0xF120A34E
	static void _0xE70BA7B90F8390DC(Any p0, Any p1, BOOL p2, Any p3) { invoke<Void>(0xFFFFF0, p0, p1, p2, p3); } // 0xE70BA7B90F8390DC
	static void WAYPOINT_PLAYBACK_START_SHOOTING_AT_COORD(Any p0, float p1, float p2, float p3, BOOL p4, Any p5) { invoke<Void>(0x1000010, p0, p1, p2, p3, p4, p5); } // 0x057A25CFCC9DB671 0xCDDB44D5
	static void WAYPOINT_PLAYBACK_STOP_AIMING_OR_SHOOTING(Any p0) { invoke<Void>(0x1000030, p0); } // 0x47EFA040EBB8E2EA 0x6D7CF40C
	static void ASSISTED_MOVEMENT_REQUEST_ROUTE(char* route) { invoke<Void>(0x10000B0, route); } // 0x817268968605947A 0x48262EDA
	static void ASSISTED_MOVEMENT_REMOVE_ROUTE(char* route) { invoke<Void>(0x10000C0, route); } // 0x3548536485DD792B 0xB3CEC06F
	static BOOL ASSISTED_MOVEMENT_IS_ROUTE_LOADED(char* route) { return invoke<BOOL>(0x1000100, route); } // 0x60F9A4393A21F741 0x79B067AF
	static void ASSISTED_MOVEMENT_SET_ROUTE_PROPERTIES(char* route, int props) { invoke<Void>(0x1000180, route, props); } // 0xD5002D78B7162E1B 0x01CAAFCC
	static void ASSISTED_MOVEMENT_OVERRIDE_LOAD_DISTANCE_THIS_FRAME(float dist) { invoke<Void>(0x1000190, dist); } // 0x13945951E16EF912 0x8FB923EC
	static void TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(Ped ped, Vehicle vehicle, char* WPRecording, int p3, int p4, int p5, int p6, float p7, BOOL p8, float p9) { invoke<Void>(0x10001B0, ped, vehicle, WPRecording, p3, p4, p5, p6, p7, p8, p9); } // 0x3123FAA6DB1CF7ED 0x959818B6
	static BOOL IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(Any p0) { return invoke<BOOL>(0x1000200, p0); } // 0xF5134943EA29868C 0x80DD15DB
	static int GET_VEHICLE_WAYPOINT_PROGRESS(Vehicle vehicle) { return invoke<int>(0x1000280, vehicle); } // 0x9824CFF8FC66E159 0xD3CCF64E
	static Any GET_VEHICLE_WAYPOINT_TARGET_POINT(Any p0) { return invoke<Any>(0x1000300, p0); } // 0x416B62AC8B9E5BBD 0x81049608
	static void VEHICLE_WAYPOINT_PLAYBACK_PAUSE(Any p0) { invoke<Void>(0x1000390, p0); } // 0x8A4E6AC373666BC5 0x7C00B415
	static void VEHICLE_WAYPOINT_PLAYBACK_RESUME(Any p0) { invoke<Void>(0x1000400, p0); } // 0xDC04FCAA7839D492 0xBEB14C82
	static void VEHICLE_WAYPOINT_PLAYBACK_USE_DEFAULT_SPEED(Any p0) { invoke<Void>(0x1000470, p0); } // 0x5CEB25A7D2848963 0x923C3AA4
	static void VEHICLE_WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Any p0, float p1) { invoke<Void>(0x10004E0, p0, p1); } // 0x121F0593E0A431D7 0xBE1E7BB4
	static void TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Ped ped, BOOL toggle) { invoke<Void>(0x1000560, ped, toggle); } // 0x90D2156198831D69 0x1B54FB6B
	static void TASK_FORCE_MOTION_STATE(Ped ped, Hash state, BOOL p2) { invoke<Void>(0x10005E0, ped, state, p2); } // 0x4F056E1AFFEF17AB 0xCAD2EF77
	static void _TASK_MOVE_NETWORK(Ped ped, char* task, float multiplier, BOOL p3, char* animDict, int flags) { invoke<Void>(0x1000600, ped, task, multiplier, p3, animDict, flags); } // 0x2D537BA194896636 0x6F5D215F
	static void _TASK_MOVE_NETWORK_ADVANCED(Ped ped, char* p1, float p2, float p3, float p4, float p5, float p6, float p7, Any p8, float p9, BOOL p10, char* animDict, int flags) { invoke<Void>(0x1000630, ped, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, animDict, flags); } // 0xD5B35BEA41919ACB 0x71A5C5DB
	static BOOL _0x921CE12C489C4C41(int PlayerID) { return invoke<BOOL>(0x1000680, PlayerID); } // 0x921CE12C489C4C41 0x902656EB
	static BOOL _0x30ED88D5E0C56A37(Any p0) { return invoke<BOOL>(0x1000710, p0); } // 0x30ED88D5E0C56A37 0x92FDBAE6
	static Any _0xD01015C7316AE176(Ped ped, char* p1) { return invoke<Any>(0x10007C0, ped, p1); } // 0xD01015C7316AE176 0x885724DE
	static Any _0xAB13A5565480B6D9(Any p0, Any p1) { return invoke<Any>(0x10007D0, p0, p1); } // 0xAB13A5565480B6D9
	static char* _0x717E4D1F2048376D(Ped ped) { return invoke<char*>(0x10007E0, ped); } // 0x717E4D1F2048376D 0x96C0277B
	static void _0xD5BB4025AE449A4E(Ped ped, char* p1, float p2) { invoke<Void>(0x1000890, ped, p1, p2); } // 0xD5BB4025AE449A4E 0xA79BE783
	static void _0xB0A6CFD2C69C1088(Ped ped, char* p1, BOOL p2) { invoke<Void>(0x10008B0, ped, p1, p2); } // 0xB0A6CFD2C69C1088 0xF3538041
	static BOOL _0xA7FFBA498E4AAF67(Ped ped, char* p1) { return invoke<BOOL>(0x10008D0, ped, p1); } // 0xA7FFBA498E4AAF67 0x1EBB6F3D
	static BOOL _0xB4F47213DF45A64C(Ped ped, char* p1) { return invoke<BOOL>(0x1000980, ped, p1); } // 0xB4F47213DF45A64C 0x72FA5EF2
	static BOOL IS_MOVE_BLEND_RATIO_STILL(Ped ped) { return invoke<BOOL>(0x1000A30, ped); } // 0x349CE7B56DAFD95C 0xE9DAF877
	static BOOL IS_MOVE_BLEND_RATIO_WALKING(Ped ped) { return invoke<BOOL>(0x1000A50, ped); } // 0xF133BBBE91E1691F 0xD21639A8
	static BOOL IS_MOVE_BLEND_RATIO_RUNNING(Ped ped) { return invoke<BOOL>(0x1000A90, ped); } // 0xD4D8636C0199A939 0xE76A2353
	static BOOL IS_MOVE_BLEND_RATIO_SPRINTING(Ped ped) { return invoke<BOOL>(0x1000AD0, ped); } // 0x24A2AD74FA9814E2 0xDD616893
	static BOOL IS_PED_STILL(Ped ped) { return invoke<BOOL>(0x1000AF0, ped); } // 0xAC29253EEF8F0180 0x09E3418D
	static BOOL IS_PED_WALKING(Ped ped) { return invoke<BOOL>(0x1000BA0, ped); } // 0xDE4C184B2B9B071A 0x4B865C4A
	static BOOL IS_PED_RUNNING(Ped ped) { return invoke<BOOL>(0x1000C60, ped); } // 0xC5286FFC176F28A2 0xE9A5578F
	static BOOL IS_PED_SPRINTING(Ped ped) { return invoke<BOOL>(0x1000D20, ped); } // 0x57E457CD2C0FC168 0x4F3E0633
	static BOOL IS_PED_STRAFING(Ped ped) { return invoke<BOOL>(0x1000DD0, ped); } // 0xE45B7F222DE47E09 0xEFEED13C
	static void TASK_SYNCHRONIZED_SCENE(Ped ped, int scene, char* animDictionary, char* animationName, float speed, float speedMultiplier, int duration, int flag, float playbackRate, Any p9) { invoke<Void>(0x1000E30, ped, scene, animDictionary, animationName, speed, speedMultiplier, duration, flag, playbackRate, p9); } // 0xEEA929141F699854 0x4F217E7B
	static void TASK_SWEEP_AIM_ENTITY(Ped ped, char* anim, char* p2, char* p3, char* p4, int p5, Vehicle vehicle, float p7, float p8) { invoke<Void>(0x1000E90, ped, anim, p2, p3, p4, p5, vehicle, p7, p8); } // 0x2047C02158D6405A 0x4D210467
	static void UPDATE_TASK_SWEEP_AIM_ENTITY(Ped ped, Entity entity) { invoke<Void>(0x1000ED0, ped, entity); } // 0xE4973DBDBE6E44B3 0xF65F0F4F
	static void TASK_SWEEP_AIM_POSITION(Any p0, Any* p1, Any* p2, Any* p3, Any* p4, Any p5, float p6, float p7, float p8, float p9, float p10) { invoke<Void>(0x1000EE0, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); } // 0x7AFE8FDC10BC07D2 0x1683FE66
	static void UPDATE_TASK_SWEEP_AIM_POSITION(Any p0, float p1, float p2, float p3) { invoke<Void>(0x1000F20, p0, p1, p2, p3); } // 0xBB106883F5201FC4 0x6345EC80
	static void TASK_ARREST_PED(Ped ped, Ped target) { invoke<Void>(0x1000FB0, ped, target); } // 0xF3B9A78A178572B1 0xBC0F153D
	static BOOL IS_PED_RUNNING_ARREST_TASK(Ped ped) { return invoke<BOOL>(0x1000FC0, ped); } // 0x3DC52677769B4AE0 0x6942DB7A
	static BOOL IS_PED_BEING_ARRESTED(Ped ped) { return invoke<BOOL>(0x1001050, ped); } // 0x90A09F3A45FED688 0x5FF6C2ED
	static void UNCUFF_PED(Ped ped) { invoke<Void>(0x1001060, ped); } // 0x67406F2C8F87FC4F 0xA23A1D61
	static BOOL IS_PED_CUFFED(Ped ped) { return invoke<BOOL>(0x10010B0, ped); } // 0x74E559B3BC910685 0x511CE741
}

namespace GAMEPLAY
{
	static int GET_ALLOCATED_STACK_SIZE() { return invoke<int>(0xF2AA90); } // 0x8B3CA62B1EF19B62 0x4E9CA30A
	static int _GET_FREE_STACK_SLOTS_COUNT(int threadId) { return invoke<int>(0xF2AAC0, threadId); } // 0xFEAD16FC8F9DFC0F 0x11A178B8
	static void SET_RANDOM_SEED(int time) { invoke<Void>(0xF2AAE0, time); } // 0x444D98F98C11F3EC 0xDB3FEB5C
	static void SET_TIME_SCALE(float time) { invoke<Void>(0xF2AB10, time); } // 0x1D408577D440E81E 0xA7F84694
	static void SET_MISSION_FLAG(BOOL toggle) { invoke<Void>(0xF2AB50, toggle); } // 0xC4301E5121A0ED73 0x57592D52
	static BOOL GET_MISSION_FLAG() { return invoke<BOOL>(0xF2ABA0); } // 0xA33CDCCDA663159E 0x95115F97
	static void SET_RANDOM_EVENT_FLAG(Any p0) { invoke<Void>(0xF2ABC0, p0); } // 0x971927086CFD2158 0xA77F31E8
	static Any GET_RANDOM_EVENT_FLAG() { return invoke<Any>(0xF2AC20); } // 0xD2D57F1D764117B1 0x794CC92C
	static char* _GET_GLOBAL_CHAR_BUFFER() { return invoke<char*>(0xF2AC30); } // 0x24DA7D7667FD7B09
	static void _0x4DCDF92BF64236CD(char* p0, char* p1) { invoke<Void>(0xF2AC80, p0, p1); } // 0x4DCDF92BF64236CD
	static void _0x31125FD509D9043F(Any* p0) { invoke<Void>(0xF2AC90, p0); } // 0x31125FD509D9043F
	static void _0xEBD3205A207939ED(Any* p0) { invoke<Void>(0xF2ACA0, p0); } // 0xEBD3205A207939ED
	static void _0x97E7E2C04245115B(Any p0) { invoke<Void>(0xF2ACB0, p0); } // 0x97E7E2C04245115B
	static void _0xEB078CA2B5E82ADD(Any p0, Any p1) { invoke<Void>(0xF2ACD0, p0, p1); } // 0xEB078CA2B5E82ADD
	static void _0x703CC7F60CBB2B57(Any p0) { invoke<Void>(0xF2ACE0, p0); } // 0x703CC7F60CBB2B57
	static void _0x8951EB9C6906D3C8() { invoke<Void>(0xF2AD00); } // 0x8951EB9C6906D3C8
	static void _0xBA4B8D83BDC75551(Any p0) { invoke<Void>(0xF2AD20, p0); } // 0xBA4B8D83BDC75551
	static BOOL _0xE8B9C0EC9E183F35() { return invoke<BOOL>(0xF2AD30); } // 0xE8B9C0EC9E183F35
	static void _0x65D2EBB47E1CEC21(BOOL p0) { invoke<Void>(0xF2AD60, p0); } // 0x65D2EBB47E1CEC21
	static void _0x6F2135B6129620C1(BOOL p0) { invoke<Void>(0xF2AD90, p0); } // 0x6F2135B6129620C1 0x8B2DE971
	static void _0x8D74E26F54B4E5C3(char* p0) { invoke<Void>(0xF2ADC0, p0); } // 0x8D74E26F54B4E5C3 0xE77199F7
	static BOOL _0xB335F761606DB47C(Any* p1, Any* p2, Any p3, BOOL p4) { return invoke<BOOL>(0xF2ADD0, p1, p2, p3, p4); } // 0xB335F761606DB47C
	static Hash GET_PREV_WEATHER_TYPE_HASH_NAME() { return invoke<Hash>(0xF2AE70); } // 0x564B884A05EC45A3 0xA8171E9E
	static Hash GET_NEXT_WEATHER_TYPE_HASH_NAME() { return invoke<Hash>(0xF2AE90); } // 0x711327CD09C8F162 0x353E8056
	static BOOL IS_PREV_WEATHER_TYPE(char* weatherType) { return invoke<BOOL>(0xF2AEB0, weatherType); } // 0x44F28F86433B10A9 0x250ADA61
	static BOOL IS_NEXT_WEATHER_TYPE(char* weatherType) { return invoke<BOOL>(0xF2AF00, weatherType); } // 0x2FAA3A30BEC0F25D 0x99CB167F
	static void SET_WEATHER_TYPE_PERSIST(char* weatherType) { invoke<Void>(0xF2AF50, weatherType); } // 0x704983DF373B198F 0xC6C04C75
	static void SET_WEATHER_TYPE_NOW_PERSIST(char* weatherType) { invoke<Void>(0xF2AF90, weatherType); } // 0xED712CA327900C8A 0xC869FE97
	static void SET_WEATHER_TYPE_NOW(char* weatherType) { invoke<Void>(0xF2AFE0, weatherType); } // 0x29B487C359E19889 0x361E9EAC
	static void _SET_WEATHER_TYPE_OVER_TIME(char* weatherType, float time) { invoke<Void>(0xF2B030, weatherType, time); } // 0xFB5045B7C42B75BF 0x386F0D25
	static void SET_RANDOM_WEATHER_TYPE() { invoke<Void>(0xF2B080); } // 0x8B05F884CF7E8020 0xE7AA1BC9
	static void CLEAR_WEATHER_TYPE_PERSIST() { invoke<Void>(0xF2B0A0); } // 0xCCC39339BEF76CF5 0x6AB757D8
	static void _GET_WEATHER_TYPE_TRANSITION(Hash* weatherType1, Hash* weatherType2, float* percentWeather2) { invoke<Void>(0xF2B0E0, weatherType1, weatherType2, percentWeather2); } // 0xF3BBE884A14BB413 0x9A5C1D56
	static void _SET_WEATHER_TYPE_TRANSITION(Hash weatherType1, Hash weatherType2, float percentWeather2) { invoke<Void>(0xF2B130, weatherType1, weatherType2, percentWeather2); } // 0x578C752848ECFA0C 0x5CA74040
	static void SET_OVERRIDE_WEATHER(char* weatherType) { invoke<Void>(0xF2B1C0, weatherType); } // 0xA43D5C6FE51ADBEF 0xD9082BB5
	static void CLEAR_OVERRIDE_WEATHER() { invoke<Void>(0xF2B210); } // 0x338D2E3477711050 0x7740EA4E
	static void _0xB8F87EAD7533B176(float p0) { invoke<Void>(0xF2B220, p0); } // 0xB8F87EAD7533B176 0x625181DC
	static void _0xC3EAD29AB273ECE8(float p0) { invoke<Void>(0xF2B240, p0); } // 0xC3EAD29AB273ECE8 0xBEBBFDC8
	static void _0xA7A1127490312C36(float p0) { invoke<Void>(0xF2B260, p0); } // 0xA7A1127490312C36 0x6926AB03
	static void _0x31727907B2C43C55(float p0) { invoke<Void>(0xF2B280, p0); } // 0x31727907B2C43C55 0xD447439D
	static void _0x405591EC8FD9096D(float p0) { invoke<Void>(0xF2B2A0, p0); } // 0x405591EC8FD9096D 0x584E9C59
	static void _0xF751B16FB32ABC1D(float p0) { invoke<Void>(0xF2B2C0, p0); } // 0xF751B16FB32ABC1D 0x5656D578
	static void _0xB3E6360DDE733E82(float p0) { invoke<Void>(0xF2B2E0, p0); } // 0xB3E6360DDE733E82 0x0DE40C28
	static void _0x7C9C0B1EEB1F9072(float p0) { invoke<Void>(0xF2B300, p0); } // 0x7C9C0B1EEB1F9072 0x98C9138B
	static void _0x6216B116083A7CB4(float p0) { invoke<Void>(0xF2B320, p0); } // 0x6216B116083A7CB4 0xFB1A9CDE
	static void _0x9F5E6BB6B34540DA(float p0) { invoke<Void>(0xF2B340, p0); } // 0x9F5E6BB6B34540DA 0x1C0CAE89
	static void _0xB9854DFDE0D833D6(float p0) { invoke<Void>(0xF2B360, p0); } // 0xB9854DFDE0D833D6 0x4671AC2E
	static void _0xC54A08C85AE4D410(float p0) { invoke<Void>(0xF2B380, p0); } // 0xC54A08C85AE4D410 0xDA02F415
	static void _0xA8434F1DFF41D6E7(float p0) { invoke<Void>(0xF2B3A0, p0); } // 0xA8434F1DFF41D6E7 0x5F3DDEC0
	static void _0xC3C221ADDDE31A11(float p0) { invoke<Void>(0xF2B3C0, p0); } // 0xC3C221ADDDE31A11 0x63A89684
	static void SET_WIND(float speed) { invoke<Void>(0xF2B3E0, speed); } // 0xAC3A74E8384A9919 0xC6294698
	static void SET_WIND_SPEED(float speed) { invoke<Void>(0xF2B400, speed); } // 0xEE09ECEDBABE47FC 0x45705F94
	static float GET_WIND_SPEED() { return invoke<float>(0xF2B430); } // 0xA8CF1CC0AFCD3F12 0x098F0F3C
	static void SET_WIND_DIRECTION(float direction) { invoke<Void>(0xF2B450, direction); } // 0xEB0F4468467B4528 0x381AEEE9
	static Vector3 GET_WIND_DIRECTION() { return invoke<Vector3>(0xF2B470); } // 0x1F400FEF721170DA 0x89499A0D
	static void _SET_RAIN_FX_INTENSITY(float intensity) { invoke<Void>(0xF2B4E0, intensity); } // 0x643E26EA6E024D92
	static Any* GET_RAIN_LEVEL() { return invoke<Any*>(0xF2B500); } // 0x96695E368AD855F3 0xC9F67F28
	static Any GET_SNOW_LEVEL() { return invoke<Any>(0xF2B520); } // 0xC5868A966E5BE3AE 0x1B09184F
	static void _CREATE_LIGHTNING_THUNDER() { invoke<Void>(0xF2B540); } // 0xF6062E089251C898 0xDF38165E
	static void _0x02DEAAC8F8EA7FE7(char* p0) { invoke<Void>(0xF2B550, p0); } // 0x02DEAAC8F8EA7FE7
	static void _0x11B56FBBF7224868(char* p0) { invoke<Void>(0xF2B5A0, p0); } // 0x11B56FBBF7224868 0x8727A4C5
	static void _SET_CLOUD_HAT_TRANSITION(char* type, float transitionTime) { invoke<Void>(0xF2B5C0, type, transitionTime); } // 0xFC4842A34657BFCB 0xED88FC61
	static void _0xA74802FB8D0B7814(char* p0, float p1) { invoke<Void>(0xF2B5E0, p0, p1); } // 0xA74802FB8D0B7814 0xC9FA6E07
	static void _CLEAR_CLOUD_HAT() { invoke<Void>(0xF2B600); } // 0x957E790EA1727B64 0x2D7787BC
	static void _SET_CLOUD_HAT_OPACITY(float opacity) { invoke<Void>(0xF2B610, opacity); } // 0xF36199225D6D8C86
	static float _GET_CLOUD_HAT_OPACITY() { return invoke<float>(0xF2B630); } // 0x20AC25E781AE4A84
	static int GET_GAME_TIMER() { return invoke<int>(0xF2B650); } // 0x9CD27B0045628463 0xA4EA0691
	static float GET_FRAME_TIME() { return invoke<float>(0xF2B660); } // 0x15C40837039FFAF7 0x96374262
	static float _GET_BENCHMARK_TIME() { return invoke<float>(0xF2B680); } // 0xE599A503B3837E1B
	static int GET_FRAME_COUNT() { return invoke<int>(0xF2B6A0); } // 0xFC8202EFC642E6F2 0xB477A015
	static float GET_RANDOM_FLOAT_IN_RANGE(float startRange, float endRange) { return invoke<float>(0xF2B6B0, startRange, endRange); } // 0x313CE5879CEB6FCD 0x0562C4D0
	static int GET_RANDOM_INT_IN_RANGE(int startRange, int endRange) { return invoke<int>(0xF2B710, startRange, endRange); } // 0xD53343AA4FB7DD28 0x4051115B
	static BOOL GET_GROUND_Z_FOR_3D_COORD(float x, float y, float z, float* groundZ, BOOL unk) { return invoke<BOOL>(0xF2B760, x, y, z, groundZ, unk); } // 0xC906A7DAB05C8D2B 0xA1BFD5E0
	static BOOL _GET_GROUND_Z_COORD_WITH_OFFSETS(float x, float y, float z, float* groundZ, Vector3* offsets) { return invoke<BOOL>(0xF2B7A0, x, y, z, groundZ, offsets); } // 0x8BDC7BFC57A81E76 0x64D91CED
	static float ASIN(float p0) { return invoke<float>(0xF2B8E0, p0); } // 0xC843060B5765DCE7 0x998E5CAD
	static float ACOS(float p0) { return invoke<float>(0xF2B930, p0); } // 0x1D08B970013C34B6 0xF4038776
	static float TAN(float p0) { return invoke<float>(0xF2B980, p0); } // 0x632106CC96E82E91 0xD320CE5E
	static float ATAN(float p0) { return invoke<float>(0xF2B9B0, p0); } // 0xA9D1795CD5043663 0x7A03CC8E
	static float ATAN2(float p0, float p1) { return invoke<float>(0xF2B9F0, p0, p1); } // 0x8927CBF9D22261A4 0x2508AC81
	static float GET_DISTANCE_BETWEEN_COORDS(float x1, float y1, float z1, float x2, float y2, float z2, BOOL useZ) { return invoke<float>(0xF2BA30, x1, y1, z1, x2, y2, z2, useZ); } // 0xF1B760881820C952 0xF698765E
	static float GET_ANGLE_BETWEEN_2D_VECTORS(float x1, float y1, float x2, float y2) { return invoke<float>(0xF2BA90, x1, y1, x2, y2); } // 0x186FC4BE848E1C92 0xDBF75E58
	static float GET_HEADING_FROM_VECTOR_2D(float dx, float dy) { return invoke<float>(0xF2BB50, dx, dy); } // 0x2FFB6B224F4B2926 0xD209D52B
	static float _0x7F8F6405F4777AF6(float p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, BOOL p9) { return invoke<float>(0xF2BBD0, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 0x7F8F6405F4777AF6 0x89459F0A
	static Vector3 _0x21C235BC64831E5A(float p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, BOOL p9) { return invoke<Vector3>(0xF2BCF0, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 0x21C235BC64831E5A 0xCAECF37E
	static BOOL _0xF56DFB7B61BE7276(float p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, float p9, float p10, float p11, Any* p12) { return invoke<BOOL>(0xF2BE40, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12); } // 0xF56DFB7B61BE7276 0xC6CC812C
	static void SET_BIT(int* address, int offset) { invoke<Void>(0xF2BF20, address, offset); } // 0x933D6A9EEC1BACD0 0x4EFE7E6B
	static void CLEAR_BIT(int* address, int offset) { invoke<Void>(0xF2BF40, address, offset); } // 0xE80492A9AC099A93 0x8BC9E618
	static Hash GET_HASH_KEY(char* string) { return invoke<Hash>(0xF2BF60, string); } // 0xD24D37CC275948CC 0x98EFF6F1
	static void _0xF2F6A2FA49278625(float p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, Any* p9, Any* p10, Any* p11, Any* p12) { invoke<Void>(0xF2BF90, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12); } // 0xF2F6A2FA49278625 0x87B92190
	static BOOL IS_AREA_OCCUPIED(float p0, float p1, float p2, float p3, float p4, float p5, BOOL p6, BOOL p7, BOOL p8, BOOL p9, BOOL p10, Any p11, BOOL p12) { return invoke<BOOL>(0xF2BFF0, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12); } // 0xA61B4DF533DCB56E 0xC013972F
	static BOOL IS_POSITION_OCCUPIED(float x, float y, float z, float range, BOOL p4, BOOL p5, BOOL p6, BOOL p7, BOOL p8, Any p9, BOOL p10) { return invoke<BOOL>(0xF2C1D0, x, y, z, range, p4, p5, p6, p7, p8, p9, p10); } // 0xADCDE75E1C60F32D 0x452E8D9E
	static BOOL IS_POINT_OBSCURED_BY_A_MISSION_ENTITY(float p0, float p1, float p2, float p3, float p4, float p5, Any p6) { return invoke<BOOL>(0xF2C250, p0, p1, p2, p3, p4, p5, p6); } // 0xE54E209C35FFA18D 0xC161558D
	static void CLEAR_AREA(float X, float Y, float Z, float radius, BOOL p4, BOOL ignoreCopCars, BOOL ignoreObjects, BOOL p7) { invoke<Void>(0xF2C3F0, X, Y, Z, radius, p4, ignoreCopCars, ignoreObjects, p7); } // 0xA56F01F3765B93A0 0x854E9AB8
	static void _CLEAR_AREA_OF_EVERYTHING(float x, float y, float z, float radius, BOOL p4, BOOL p5, BOOL p6, BOOL p7) { invoke<Void>(0xF2C430, x, y, z, radius, p4, p5, p6, p7); } // 0x957838AAF91BD12D 0x20E4FFD9
	static void CLEAR_AREA_OF_VEHICLES(float x, float y, float z, float radius, BOOL p4, BOOL p5, BOOL p6, BOOL p7, BOOL p8) { invoke<Void>(0xF2C470, x, y, z, radius, p4, p5, p6, p7, p8); } // 0x01C7B9B38428AEB6 0x63320F3C
	static void CLEAR_ANGLED_AREA_OF_VEHICLES(float p0, float p1, float p2, float p3, float p4, float p5, float p6, BOOL p7, BOOL p8, BOOL p9, BOOL p10, BOOL p11) { invoke<Void>(0xF2C4E0, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); } // 0x11DB3500F042A8AA 0xF11A3018
	static void CLEAR_AREA_OF_OBJECTS(float x, float y, float z, float radius, int flags) { invoke<Void>(0xF2C5B0, x, y, z, radius, flags); } // 0xDD9B9B385AAC7F5B 0xBB720FE7
	static void CLEAR_AREA_OF_PEDS(float x, float y, float z, float radius, int flags) { invoke<Void>(0xF2C5D0, x, y, z, radius, flags); } // 0xBE31FD6CE464AC59 0x25BE7FA8
	static void CLEAR_AREA_OF_COPS(float x, float y, float z, float radius, int flags) { invoke<Void>(0xF2C5F0, x, y, z, radius, flags); } // 0x04F8FC8FCF58F88D 0x95C53824
	static void CLEAR_AREA_OF_PROJECTILES(float x, float y, float z, float radius, BOOL isNetworkGame) { invoke<Void>(0xF2C610, x, y, z, radius, isNetworkGame); } // 0x0A1CB9094635D1A6 0x18DB5434
	static void _0x7EC6F9A478A6A512() { invoke<Void>(0xF2C630); } // 0x7EC6F9A478A6A512
	static void SET_SAVE_MENU_ACTIVE(BOOL unk) { invoke<Void>(0xF2C640, unk); } // 0xC9BF75D28165FF77 0xF5CCF164
	static int _0x397BAA01068BAA96() { return invoke<int>(0xF2C720); } // 0x397BAA01068BAA96 0x39771F21
	static void SET_CREDITS_ACTIVE(BOOL toggle) { invoke<Void>(0xF2C730, toggle); } // 0xB938B7E6D3C0620C 0xEC2A0ECF
	static void _0xB51B9AB9EF81868C(BOOL toggle) { invoke<Void>(0xF2C750, toggle); } // 0xB51B9AB9EF81868C 0x75B06B5A
	static Any _0x075F1D57402C93BA() { return invoke<Any>(0xF2C770); } // 0x075F1D57402C93BA 0x2569C9A7
	static void TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME(char* scriptName) { invoke<Void>(0xF2C780, scriptName); } // 0x9DC711BC69C548DF 0x9F861FD4
	static void NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME() { invoke<Void>(0xF2C7C0); } // 0x9243BAC96D64C050 0x878486CE
	static int ADD_HOSPITAL_RESTART(float x, float y, float z, float p3, Any p4) { return invoke<int>(0xF2C7E0, x, y, z, p3, p4); } // 0x1F464EF988465A81 0x4F3E3104
	static void DISABLE_HOSPITAL_RESTART(int hospitalIndex, BOOL toggle) { invoke<Void>(0xF2C940, hospitalIndex, toggle); } // 0xC8535819C450EBA8 0x09F49C72
	static Any ADD_POLICE_RESTART(float p0, float p1, float p2, float p3, Any p4) { return invoke<Any>(0xF2C960, p0, p1, p2, p3, p4); } // 0x452736765B31FC4B 0xE96C29FE
	static void DISABLE_POLICE_RESTART(int policeIndex, BOOL toggle) { invoke<Void>(0xF2CAC0, policeIndex, toggle); } // 0x23285DED6EBD7EA3 0x0A280324
	static void _SET_CUSTOM_RESPAWN_POSITION(float x, float y, float z, float heading) { invoke<Void>(0xF2CAE0, x, y, z, heading); } // 0x706B5EDCAA7FA663
	static void _SET_NEXT_RESPAWN_TO_CUSTOM() { invoke<Void>(0xF2CC00); } // 0xA2716D40842EAF79
	static void _DISABLE_AUTOMATIC_RESPAWN(BOOL disableRespawn) { invoke<Void>(0xF2CC10, disableRespawn); } // 0x2C2B3493FBF51C71 0x296574AE
	static void IGNORE_NEXT_RESTART(BOOL toggle) { invoke<Void>(0xF2CC30, toggle); } // 0x21FFB63D8C615361 0xDA13A4B6
	static void SET_FADE_OUT_AFTER_DEATH(BOOL toggle) { invoke<Void>(0xF2CC50, toggle); } // 0x4A18E01DF2C87B86 0xC9F6F0BC
	static void SET_FADE_OUT_AFTER_ARREST(BOOL toggle) { invoke<Void>(0xF2CC70, toggle); } // 0x1E0B4DC0D990A4E7 0xCB074B9D
	static void SET_FADE_IN_AFTER_DEATH_ARREST(BOOL toggle) { invoke<Void>(0xF2CC90, toggle); } // 0xDA66D2796BA33F12 0xACDE6985
	static void SET_FADE_IN_AFTER_LOAD(BOOL toggle) { invoke<Void>(0xF2CCB0, toggle); } // 0xF3D78F59DFE18D79 0x6E00EB0B
	static Any REGISTER_SAVE_HOUSE(float p0, float p1, float p2, float p3, Any* p4, Any p5, Any p6) { return invoke<Any>(0xF2CCD0, p0, p1, p2, p3, p4, p5, p6); } // 0xC0714D0A7EEECA54 0x39C1849A
	static void SET_SAVE_HOUSE(Any p0, BOOL p1, BOOL p2) { invoke<Void>(0xF2CD50, p0, p1, p2); } // 0x4F548CABEAE553BC 0xC3240BB4
	static BOOL OVERRIDE_SAVE_HOUSE(BOOL p0, float p1, float p2, float p3, float p4, BOOL p5, float p6, float p7) { return invoke<BOOL>(0xF2CD70, p0, p1, p2, p3, p4, p5, p6, p7); } // 0x1162EA8AE9D24EEA 0x47436C12
	static Any _0xA4A0065E39C9F25C(Any p0, Any p1, Any p2, Any p3) { return invoke<Any>(0xF2CE50, p0, p1, p2, p3); } // 0xA4A0065E39C9F25C 0xC4D71AB4
	static void DO_AUTO_SAVE() { invoke<Void>(0xF2CF20); } // 0x50EEAAD86232EE55 0x54C44B1A
	static Any _0x6E04F06094C87047() { return invoke<Any>(0xF2CFA0); } // 0x6E04F06094C87047 0xA8546914
	static BOOL IS_AUTO_SAVE_IN_PROGRESS() { return invoke<BOOL>(0xF2CFC0); } // 0x69240733738C19A0 0x36F75399
	static Any _0x2107A3773771186D() { return invoke<Any>(0xF2CFF0); } // 0x2107A3773771186D 0x78350773
	static void _0x06462A961E94B67C() { invoke<Void>(0xF2D000); } // 0x06462A961E94B67C 0x5A45B11A
	static void BEGIN_REPLAY_STATS(Any p0, Any p1) { invoke<Void>(0xF2D010, p0, p1); } // 0xE0E500246FF73D66 0x17F4F44D
	static void _0x69FE6DC87BD2A5E9(Any p0) { invoke<Void>(0xF2D030, p0); } // 0x69FE6DC87BD2A5E9 0x81216EE0
	static void END_REPLAY_STATS() { invoke<Void>(0xF2D050); } // 0xA23E821FBDF8A5F2 0xCB570185
	static Any _0xD642319C54AADEB6() { return invoke<Any>(0xF2D060); } // 0xD642319C54AADEB6 0xC58250F1
	static Any _0x5B1F2E327B6B6FE1() { return invoke<Any>(0xF2D070); } // 0x5B1F2E327B6B6FE1 0x50C39926
	static Any _0x2B626A0150E4D449() { return invoke<Any>(0xF2D080); } // 0x2B626A0150E4D449 0x710E5D1E
	static Any _0xDC9274A7EF6B2867() { return invoke<Any>(0xF2D090); } // 0xDC9274A7EF6B2867 0xC7BD1AF0
	static Any _0x8098C8D6597AAE18(Any p0) { return invoke<Any>(0xF2D0C0, p0); } // 0x8098C8D6597AAE18 0x22BE2423
	static void CLEAR_REPLAY_STATS() { invoke<Void>(0xF2D0F0); } // 0x1B1AB132A16FDA55 0xC47DFF02
	static Any _0x72DE52178C291CB5() { return invoke<Any>(0xF2D100); } // 0x72DE52178C291CB5 0xF62B3C48
	static Any _0x44A0BDC559B35F6E() { return invoke<Any>(0xF2D120); } // 0x44A0BDC559B35F6E 0x3589452B
	static Any _0xEB2104E905C6F2E9() { return invoke<Any>(0xF2D140); } // 0xEB2104E905C6F2E9
	static Any _0x2B5E102E4A42F2BF() { return invoke<Any>(0xF2D170); } // 0x2B5E102E4A42F2BF 0x144AAF22
	static BOOL IS_MEMORY_CARD_IN_USE() { return invoke<BOOL>(0xF2D190); } // 0x8A75CE2956274ADD 0x40CE4DFD
	static void SHOOT_SINGLE_BULLET_BETWEEN_COORDS(float x1, float y1, float z1, float x2, float y2, float z2, int damage, BOOL p7, Hash weaponHash, Ped ownerPed, BOOL isAudible, BOOL isInvisible, float speed) { invoke<Void>(0xF2D1B0, x1, y1, z1, x2, y2, z2, damage, p7, weaponHash, ownerPed, isAudible, isInvisible, speed); } // 0x867654CBC7606F2C 0xCB7415AC
	static void _SHOOT_SINGLE_BULLET_BETWEEN_COORDS_PRESET_PARAMS(float x1, float y1, float z1, float x2, float y2, float z2, int damage, BOOL p7, Hash weaponHash, Ped ownerPed, BOOL isAudible, BOOL isInvisible, float speed, Entity entity) { invoke<Void>(0xF2D240, x1, y1, z1, x2, y2, z2, damage, p7, weaponHash, ownerPed, isAudible, isInvisible, speed, entity); } // 0xE3A7742E0B7A2F8B 0x52ACCB7B
	static void _SHOOT_SINGLE_BULLET_BETWEEN_COORDS_WITH_EXTRA_PARAMS(float x1, float y1, float z1, float x2, float y2, float z2, int damage, BOOL p7, Hash weaponHash, Ped ownerPed, BOOL isAudible, BOOL isInvisible, float speed, Entity entity, BOOL p14, BOOL p15, BOOL p16, BOOL p17) { invoke<Void>(0xF2D2D0, x1, y1, z1, x2, y2, z2, damage, p7, weaponHash, ownerPed, isAudible, isInvisible, speed, entity, p14, p15, p16, p17); } // 0xBFE5756E7407064A
	static void GET_MODEL_DIMENSIONS(Hash modelHash, Vector3* minimum, Vector3* maximum) { invoke<Void>(0xF2D3B0, modelHash, minimum, maximum); } // 0x03E8D3D5F549087A 0x91ABB8E0
	static void SET_FAKE_WANTED_LEVEL(int fakeWantedLevel) { invoke<Void>(0xF2D4B0, fakeWantedLevel); } // 0x1454F2448DE30163 0x85B1C9FA
	static int GET_FAKE_WANTED_LEVEL() { return invoke<int>(0xF2D550); } // 0x4C9296CBCD1B971E 0x0022A430
	static BOOL IS_BIT_SET(int address, int offset) { return invoke<BOOL>(0xF2D560, address, offset); } // 0xA921AA820C25702F 0x902E26AC
	static void USING_MISSION_CREATOR(BOOL toggle) { invoke<Void>(0xF2D580, toggle); } // 0xF14878FC50BEC6EE 0x20AB0B6B
	static void _0xDEA36202FC3382DF(BOOL p0) { invoke<Void>(0xF2D5E0, p0); } // 0xDEA36202FC3382DF 0x082BA6F2
	static void SET_MINIGAME_IN_PROGRESS(BOOL toggle) { invoke<Void>(0xF2D630, toggle); } // 0x19E00D7322C6F85B 0x348B9046
	static BOOL IS_MINIGAME_IN_PROGRESS() { return invoke<BOOL>(0xF2D650); } // 0x2B4A15E44DE0F478 0x53A95E13
	static BOOL IS_THIS_A_MINIGAME_SCRIPT() { return invoke<BOOL>(0xF2D670); } // 0x7B30F65D7B710098 0x7605EF6F
	static BOOL IS_SNIPER_INVERTED() { return invoke<BOOL>(0xF2D6B0); } // 0x61A23B7EDA9BDA24 0x5C3BF51B
	static BOOL _0xD3D15555431AB793() { return invoke<BOOL>(0xF2D6C0); } // 0xD3D15555431AB793 0xBAF17315
	static int GET_PROFILE_SETTING(int profileSetting) { return invoke<int>(0xF2D6E0, profileSetting); } // 0xC488FF2356EA7791 0xD374BEBC
	static BOOL ARE_STRINGS_EQUAL(char* string1, char* string2) { return invoke<BOOL>(0xF2D710, string1, string2); } // 0x0C515FAB3FF9EA92 0x877C0BC5
	static int COMPARE_STRINGS(char* str1, char* str2, BOOL matchCase, int maxLength) { return invoke<int>(0xF2D750, str1, str2, matchCase, maxLength); } // 0x1E34710ECD4AB0EB 0xFE25A58F
	static int ABSI(int value) { return invoke<int>(0xF2D7A0, value); } // 0xF0D31AD191A74F87 0xB44677C5
	static float ABSF(float value) { return invoke<float>(0xF2D7C0, value); } // 0x73D57CFFDD12C355 0xAF6F6E0B
	static BOOL IS_SNIPER_BULLET_IN_AREA(float x1, float y1, float z1, float x2, float y2, float z2) { return invoke<BOOL>(0xF2D7F0, x1, y1, z1, x2, y2, z2); } // 0xFEFCF11B01287125 0x0483715C
	static BOOL IS_PROJECTILE_IN_AREA(float x1, float y1, float z1, float x2, float y2, float z2, BOOL ownedByPlayer) { return invoke<BOOL>(0xF2D8B0, x1, y1, z1, x2, y2, z2, ownedByPlayer); } // 0x5270A8FBC098C3F8 0x78E1A557
	static BOOL IS_PROJECTILE_TYPE_IN_AREA(float x1, float y1, float z1, float x2, float y2, float z2, int type, BOOL p7) { return invoke<BOOL>(0xF2D9B0, x1, y1, z1, x2, y2, z2, type, p7); } // 0x2E0DC353342C4A6D 0x2B73BCF6
	static BOOL IS_PROJECTILE_TYPE_IN_ANGLED_AREA(float p0, float p1, float p2, float p3, float p4, float p5, float p6, Any p7, BOOL p8) { return invoke<BOOL>(0xF2DA10, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0xF0BC12401061DEA0 0xD1AE2681
	static BOOL _IS_PROJECTILE_TYPE_IN_RADIUS(float x, float y, float z, Hash projHash, float radius, BOOL ownedByPlayer) { return invoke<BOOL>(0xF2DA70, x, y, z, projHash, radius, ownedByPlayer); } // 0x34318593248C8FB2 0xBE81F1E2
	static BOOL _GET_IS_PROJECTILE_TYPE_IN_AREA(float x1, float y1, float z1, float x2, float y2, float z2, Hash projHash, Vector3* projPos, BOOL ownedByPlayer) { return invoke<BOOL>(0xF2DAB0, x1, y1, z1, x2, y2, z2, projHash, projPos, ownedByPlayer); } // 0x8D7A43EC6A5FEA45 0x1A40454B
	static BOOL _GET_PROJECTILE_NEAR_PED_COORDS(Ped ped, Hash projHash, float radius, Vector3* projPos, BOOL ownedByPlayer) { return invoke<BOOL>(0xF2DB40, ped, projHash, radius, projPos, ownedByPlayer); } // 0xDFB4138EEFED7B81 0x6BDE5CE4
	static BOOL _GET_PROJECTILE_NEAR_PED(Ped ped, Hash projHash, float radius, Vector3* projPos, Entity* projEnt, BOOL ownedByPlayer) { return invoke<BOOL>(0xF2DBF0, ped, projHash, radius, projPos, projEnt, ownedByPlayer); } // 0x82FDE6A57EE4EE44 0x507BC6F7
	static BOOL IS_BULLET_IN_ANGLED_AREA(float p0, float p1, float p2, float p3, float p4, float p5, float p6, BOOL p7) { return invoke<BOOL>(0xF2DCA0, p0, p1, p2, p3, p4, p5, p6, p7); } // 0x1A8B5F3C01E2B477 0xE2DB58F7
	static BOOL IS_BULLET_IN_AREA(float p0, float p1, float p2, float p3, BOOL p4) { return invoke<BOOL>(0xF2DD60, p0, p1, p2, p3, p4); } // 0x3F2023999AD51C1F 0xB54F46CA
	static BOOL IS_BULLET_IN_BOX(float p0, float p1, float p2, float p3, float p4, float p5, BOOL p6) { return invoke<BOOL>(0xF2DE00, p0, p1, p2, p3, p4, p5, p6); } // 0xDE0F6D7450D37351 0xAB73ED26
	static BOOL HAS_BULLET_IMPACTED_IN_AREA(float x, float y, float z, float p3, BOOL p4, BOOL p5) { return invoke<BOOL>(0xF2DEF0, x, y, z, p3, p4, p5); } // 0x9870ACFB89A90995 0x902BC7D9
	static BOOL HAS_BULLET_IMPACTED_IN_BOX(float p0, float p1, float p2, float p3, float p4, float p5, BOOL p6, BOOL p7) { return invoke<BOOL>(0xF2DF90, p0, p1, p2, p3, p4, p5, p6, p7); } // 0xDC8C5D7CFEAB8394 0x2C2618CC
	static BOOL IS_ORBIS_VERSION() { return invoke<BOOL>(0xF2E080); } // 0xA72BC0B675B1519E 0x40282018
	static BOOL IS_DURANGO_VERSION() { return invoke<BOOL>(0xF2E090); } // 0x4D982ADB1978442D 0x46FB06A5
	static BOOL IS_XBOX360_VERSION() { return invoke<BOOL>(0xF2E0A0); } // 0xF6201B4DAF662A9D 0x24005CC8
	static BOOL IS_PS3_VERSION() { return invoke<BOOL>(0xF2E0B0); } // 0xCCA1072C29D096C2 0x4C0D5303
	static BOOL IS_PC_VERSION() { return invoke<BOOL>(0xF2E0C0); } // 0x48AF36444B965238 0x4D5D9EE3
	static BOOL IS_AUSSIE_VERSION() { return invoke<BOOL>(0xF2E0D0); } // 0x9F1935CA1F724008 0x944BA1DC
	static BOOL IS_STRING_NULL(char* string) { return invoke<BOOL>(0xF2E0E0, string); } // 0xF22B6C47C6EAB066 0x8E71E00F
	static BOOL IS_STRING_NULL_OR_EMPTY(char* string) { return invoke<BOOL>(0xF2E100, string); } // 0xCA042B6957743895 0x42E9F2CA
	static BOOL STRING_TO_INT(char* string, int* outInteger) { return invoke<BOOL>(0xF2E120, string, outInteger); } // 0x5A5F40FE637EB584 0x590A8160
	static void SET_BITS_IN_RANGE(int* var, int rangeStart, int rangeEnd, int p3) { invoke<Void>(0xF2E1C0, var, rangeStart, rangeEnd, p3); } // 0x8EF07E15701D61ED 0x32094719
	static int GET_BITS_IN_RANGE(int var, int rangeStart, int rangeEnd) { return invoke<int>(0xF2E210, var, rangeStart, rangeEnd); } // 0x53158863FCC0893A 0xCA03A1E5
	static int ADD_STUNT_JUMP(float p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, float p9, float p10, float p11, float p12, float p13, float p14, Any p15, Any p16) { return invoke<int>(0xF2E250, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16); } // 0x1A992DA297A4630C 0xB630E5FF
	static int ADD_STUNT_JUMP_ANGLED(float p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, float p9, float p10, float p11, float p12, float p13, float p14, float p15, float p16, Any p17, Any p18) { return invoke<int>(0xF2E330, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16, p17, p18); } // 0xBBE5D803A5360CBF 0xB9B7E777
	static void DELETE_STUNT_JUMP(int p0) { invoke<Void>(0xF2E440, p0); } // 0xDC518000E39DAE1F 0x840CB5DA
	static void ENABLE_STUNT_JUMP_SET(int p0) { invoke<Void>(0xF2E460, p0); } // 0xE369A5783B866016 0x9D1E7785
	static void DISABLE_STUNT_JUMP_SET(int p0) { invoke<Void>(0xF2E480, p0); } // 0xA5272EBEDD4747F6 0x644C9FA4
	static void _0xD79185689F8FD5DF(BOOL p0) { invoke<Void>(0xF2E4A0, p0); } // 0xD79185689F8FD5DF 0x3C806A2D
	static BOOL IS_STUNT_JUMP_IN_PROGRESS() { return invoke<BOOL>(0xF2E4D0); } // 0x7A3F19700A4D0525 0xF477D0B1
	static BOOL IS_STUNT_JUMP_MESSAGE_SHOWING() { return invoke<BOOL>(0xF2E500); } // 0x2272B0A1343129F4 0x021636EE
	static int _0x996DD1E1E02F1008() { return invoke<int>(0xF2E530); } // 0x996DD1E1E02F1008 0x006F9BA2
	static int _0x6856EC3D35C81EA4() { return invoke<int>(0xF2E560); } // 0x6856EC3D35C81EA4
	static void CANCEL_STUNT_JUMP() { invoke<Void>(0xF2E590); } // 0xE6B7B0ACD4E4B75E 0xF43D9821
	static void SET_GAME_PAUSED(BOOL toggle) { invoke<Void>(0xF2E5B0, toggle); } // 0x577D1284D6873711 0x8230FF6C
	static void SET_THIS_SCRIPT_CAN_BE_PAUSED(BOOL toggle) { invoke<Void>(0xF2E5E0, toggle); } // 0xAA391C728106F7AF 0xA0C3CE29
	static void SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(BOOL toggle) { invoke<Void>(0xF2E610, toggle); } // 0xB98236CAAECEF897 0xD06F1720
	static BOOL _HAS_BUTTON_COMBINATION_JUST_BEEN_ENTERED(Hash hash, int amount) { return invoke<BOOL>(0xF2E640, hash, amount); } // 0x071E2A839DE82D90 0xFF6191E1
	static BOOL _HAS_CHEAT_STRING_JUST_BEEN_ENTERED(Hash hash) { return invoke<BOOL>(0xF2E670, hash); } // 0x557E43C447E700A8
	static void _USE_FREEMODE_MAP_BEHAVIOR(BOOL toggle) { invoke<Void>(0xF2E680, toggle); } // 0x9BAE5AD2508DF078 0x721B2492
	static void _SET_UNK_MAP_FLAG(int flag) { invoke<Void>(0xF2E690, flag); } // 0xC5F0A8EBD3F361CE 0xE202879D
	static BOOL IS_FRONTEND_FADING() { return invoke<BOOL>(0xF2E6A0); } // 0x7EA2B6AF97ECA6ED 0x8FF6232C
	static void POPULATE_NOW() { invoke<Void>(0xF2E6B0); } // 0x7472BB270D7B4F3E 0x72C20700
	static int GET_INDEX_OF_CURRENT_LEVEL() { return invoke<int>(0xF2E6C0); } // 0xCBAD6729F7B1F4FC 0x6F203C6E
	static void SET_GRAVITY_LEVEL(int level) { invoke<Void>(0xF2E6F0, level); } // 0x740E14FAD5842351 0x2D833F4A
	static void START_SAVE_DATA(Any* p0, Any p1, BOOL p2) { invoke<Void>(0xF2E710, p0, p1, p2); } // 0xA9575F812C6A7997 0x881A694D
	static void STOP_SAVE_DATA() { invoke<Void>(0xF2E750); } // 0x74E20C9145FB66FD 0x3B1C07C8
	static int _0xA09F896CE912481F(BOOL p0) { return invoke<int>(0xF2E770, p0); } // 0xA09F896CE912481F 0x9EF0BC64
	static void REGISTER_INT_TO_SAVE(Any* p0, char* name) { invoke<Void>(0xF2E7A0, p0, name); } // 0x34C9EE5986258415 0xB930956F
	static void _0xA735353C77334EA0(Any* p0, Any* p1) { invoke<Void>(0xF2E7D0, p0, p1); } // 0xA735353C77334EA0
	static void REGISTER_ENUM_TO_SAVE(Any* p0, char* name) { invoke<Void>(0xF2E800, p0, name); } // 0x10C2FA78D0E128A1 0x9B38374A
	static void REGISTER_FLOAT_TO_SAVE(Any* p0, char* name) { invoke<Void>(0xF2E830, p0, name); } // 0x7CAEC29ECB5DFEBB 0xDB06F7AD
	static void REGISTER_BOOL_TO_SAVE(Any* p0, char* name) { invoke<Void>(0xF2E860, p0, name); } // 0xC8F4131414C835A1 0x5417E0E0
	static void REGISTER_TEXT_LABEL_TO_SAVE(Any* p0, char* name) { invoke<Void>(0xF2E890, p0, name); } // 0xEDB1232C5BEAE62F 0x284352C4
	static void _0x6F7794F28C6B2535(Any* p0, char* name) { invoke<Void>(0xF2E8C0, p0, name); } // 0x6F7794F28C6B2535 0xE2089749
	static void _0x48F069265A0E4BEC(Any* p0, char* name) { invoke<Void>(0xF2E8F0, p0, name); } // 0x48F069265A0E4BEC 0xF91B8C33
	static void _0x8269816F6CFD40F8(Any* p0, char* name) { invoke<Void>(0xF2E920, p0, name); } // 0x8269816F6CFD40F8 0x74E8FAD9
	static void _0xFAA457EF263E8763(Any* p0, char* name) { invoke<Void>(0xF2E950, p0, name); } // 0xFAA457EF263E8763 0x6B4335DD
	static void _START_SAVE_STRUCT(Any* p0, int p1, char* structName) { invoke<Void>(0xF2E980, p0, p1, structName); } // 0xBF737600CDDBEADD 0xFB45728E
	static void STOP_SAVE_STRUCT() { invoke<Void>(0xF2E9C0); } // 0xEB1774DF12BB9F12 0xC2624A28
	static void _START_SAVE_ARRAY(Any* p0, int p1, char* arrayName) { invoke<Void>(0xF2E9E0, p0, p1, arrayName); } // 0x60FE567DF1B1AF9D 0x893A342C
	static void STOP_SAVE_ARRAY() { invoke<Void>(0xF2EA20); } // 0x04456F95153C6BE4 0x0CAD8217
	static void ENABLE_DISPATCH_SERVICE(int dispatchService, BOOL toggle) { invoke<Void>(0xF2EA60, dispatchService, toggle); } // 0xDC0F817884CDD856 0x0B710A51
	static void _0x9B2BD3773123EA2F(int type, BOOL toggle) { invoke<Void>(0xF2EA90, type, toggle); } // 0x9B2BD3773123EA2F 0xE0F0684F
	static int _GET_NUMBER_OF_DISPATCHED_UNITS_FOR_PLAYER(int dispatchService) { return invoke<int>(0xF2EAC0, dispatchService); } // 0xEB4A0C2D56441717 0x3CE5BF6B
	static BOOL CREATE_INCIDENT(int incidentType, float x, float y, float z, int p5, float radius, int* outIncidentID) { return invoke<BOOL>(0xF2EB10, incidentType, x, y, z, p5, radius, outIncidentID); } // 0x3F892CAF67444AE7 0xFC5FF7B3
	static BOOL CREATE_INCIDENT_WITH_ENTITY(int incidentType, Ped ped, int amountOfPeople, float radius, int* outIncidentID) { return invoke<BOOL>(0xF2EB50, incidentType, ped, amountOfPeople, radius, outIncidentID); } // 0x05983472F0494E60 0xBBC35B03
	static void DELETE_INCIDENT(int incidentId) { invoke<Void>(0xF2EB90, incidentId); } // 0x556C1AA270D5A207 0x212BD0DC
	static BOOL IS_INCIDENT_VALID(int incidentId) { return invoke<BOOL>(0xF2EBD0, incidentId); } // 0xC8BC6461E629BEAA 0x31FD0BA4
	static void _0xB08B85D860E7BA3C(Any p0, Any p1, Any p2) { invoke<Void>(0xF2EC10, p0, p1, p2); } // 0xB08B85D860E7BA3C 0x0242D88E
	static void _0xD261BA3E7E998072(Any p0, float p1) { invoke<Void>(0xF2EC70, p0, p1); } // 0xD261BA3E7E998072 0x1F38102E
	static BOOL FIND_SPAWN_POINT_IN_DIRECTION(float x1, float y1, float z1, float x2, float y2, float z2, float distance, Vector3* spawnPoint) { return invoke<BOOL>(0xF2ECC0, x1, y1, z1, x2, y2, z2, distance, spawnPoint); } // 0x6874E2190B0C1972 0x71AEFD77
	static Any _0x67F6413D3220E18D(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { return invoke<Any>(0xF2ED70, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0x67F6413D3220E18D 0x42BF09B3
	static BOOL _0x1327E2FE9746BAEE(Any p0) { return invoke<BOOL>(0xF2EE30, p0); } // 0x1327E2FE9746BAEE
	static void _0xB129E447A2EDA4BF(Any p0, BOOL p1) { invoke<Void>(0xF2EE70, p0, p1); } // 0xB129E447A2EDA4BF 0xFBDBE374
	static Any _0x32C7A7E8C43A1F80(float p0, float p1, float p2, float p3, float p4, float p5, BOOL p6, BOOL p7) { return invoke<Any>(0xF2EEC0, p0, p1, p2, p3, p4, p5, p6, p7); } // 0x32C7A7E8C43A1F80
	static void _0xE6869BECDD8F2403(Any p0, BOOL p1) { invoke<Void>(0xF2EFA0, p0, p1); } // 0xE6869BECDD8F2403
	static void ENABLE_TENNIS_MODE(Ped ped, BOOL toggle, BOOL p2) { invoke<Void>(0xF2EFC0, ped, toggle, p2); } // 0x28A04B411933F8A6 0x0BD3F9EC
	static BOOL IS_TENNIS_MODE(Ped ped) { return invoke<BOOL>(0xF2EFE0, ped); } // 0x5D5479D115290C3F 0x04A947BA
	static void _0xE266ED23311F24D4(Any p0, Any* p1, Any* p2, float p3, float p4, BOOL p5) { invoke<Void>(0xF2F060, p0, p1, p2, p3, p4, p5); } // 0xE266ED23311F24D4 0xC20A7D2B
	static BOOL _0x17DF68D720AA77F8(Any p0) { return invoke<BOOL>(0xF2F110, p0); } // 0x17DF68D720AA77F8 0x8501E727
	static BOOL _0x19BFED045C647C49(Any p0) { return invoke<BOOL>(0xF2F190, p0); } // 0x19BFED045C647C49 0x1A332D2D
	static BOOL _0xE95B0C7D5BA3B96B(Any p0) { return invoke<BOOL>(0xF2F210, p0); } // 0xE95B0C7D5BA3B96B
	static void _0x8FA9C42FC5D7C64B(Any p0, Any p1, float p2, float p3, float p4, BOOL p5) { invoke<Void>(0xF2F290, p0, p1, p2, p3, p4, p5); } // 0x8FA9C42FC5D7C64B 0x0C8865DF
	static void _0x54F157E0336A3822(Any p0, char* p1, float p2) { invoke<Void>(0xF2F350, p0, p1, p2); } // 0x54F157E0336A3822 0x49F977A9
	static void _0xD10F442036302D50(Any p0, Any p1, Any p2) { invoke<Void>(0xF2F410, p0, p1, p2); } // 0xD10F442036302D50 0x6F009E33
	static void RESET_DISPATCH_IDEAL_SPAWN_DISTANCE() { invoke<Void>(0xF2F450); } // 0x77A84429DD9F0A15 0xDA65ECAA
	static void SET_DISPATCH_IDEAL_SPAWN_DISTANCE(float p0) { invoke<Void>(0xF2F470, p0); } // 0x6FE601A64180D423 0x6283BE32
	static void SET_DISPATCH_TIME_BETWEEN_SPAWN_ATTEMPTS(Any p0, float p1) { invoke<Void>(0xF2F510, p0, p1); } // 0x44F7CBC1BEB3327D 0xABADB709
	static void SET_DISPATCH_TIME_BETWEEN_SPAWN_ATTEMPTS_MULTIPLIER(Any p0, float p1) { invoke<Void>(0xF2F520, p0, p1); } // 0x48838ED9937A15D1 0x1C996BCD
	static Any _0x918C7B2D2FF3928B(float p0, float p1, float p2, float p3, float p4, float p5, float p6) { return invoke<Any>(0xF2F530, p0, p1, p2, p3, p4, p5, p6); } // 0x918C7B2D2FF3928B 0xF557BAF9
	static Any _0x2D4259F1FEB81DA9(float p0, float p1, float p2, float p3) { return invoke<Any>(0xF2F5B0, p0, p1, p2, p3); } // 0x2D4259F1FEB81DA9
	static void REMOVE_DISPATCH_SPAWN_BLOCKING_AREA(Any p0) { invoke<Void>(0xF2F620, p0); } // 0x264AC28B01B353A5 0xA8D2FB92
	static void RESET_DISPATCH_SPAWN_BLOCKING_AREAS() { invoke<Void>(0xF2F650); } // 0xAC7BFD5C1D83EA75 0x9A17F835
	static void _0xD9F692D349249528() { invoke<Void>(0xF2F670); } // 0xD9F692D349249528 0xE0C9307E
	static void _0xE532EC1A63231B4F(Any p0, Any p1) { invoke<Void>(0xF2F690, p0, p1); } // 0xE532EC1A63231B4F 0xA0D8C749
	static void _0xB8721407EE9C3FF6(Any p0, Any p1, Any p2) { invoke<Void>(0xF2F6C0, p0, p1, p2); } // 0xB8721407EE9C3FF6 0x24A4E0B2
	static void _0xB3CD58CCA6CDA852() { invoke<Void>(0xF2F6F0); } // 0xB3CD58CCA6CDA852 0x66C3C59C
	static void _0x2587A48BC88DFADF(BOOL p0) { invoke<Void>(0xF2F700, p0); } // 0x2587A48BC88DFADF 0xD9660339
	static void _DISPLAY_ONSCREEN_KEYBOARD_2(int p0, char* windowTitle, Any* p2, char* defaultText, char* defaultConcat1, char* defaultConcat2, char* defaultConcat3, char* defaultConcat4, char* defaultConcat5, char* defaultConcat6, char* defaultConcat7, int maxInputLength) { invoke<Void>(0xF2F720, p0, windowTitle, p2, defaultText, defaultConcat1, defaultConcat2, defaultConcat3, defaultConcat4, defaultConcat5, defaultConcat6, defaultConcat7, maxInputLength); } // 0xCA78CFA0366592FE 0xD2688412
	static void DISPLAY_ONSCREEN_KEYBOARD(int p0, char* windowTitle, char* p2, char* defaultText, char* defaultConcat1, char* defaultConcat2, char* defaultConcat3, int maxInputLength) { invoke<Void>(0xF2F790, p0, windowTitle, p2, defaultText, defaultConcat1, defaultConcat2, defaultConcat3, maxInputLength); } // 0x00DC833F2568DBF6 0xAD99F2CE
	static int UPDATE_ONSCREEN_KEYBOARD() { return invoke<int>(0xF2F7F0); } // 0x0CF2B696BBF945AE 0x23D0A1CE
	static char* GET_ONSCREEN_KEYBOARD_RESULT() { return invoke<char*>(0xF2F810); } // 0x8362B09B91893647 0x44828FB3
	static void _0x3ED1438C1F5C6612(int p0) { invoke<Void>(0xF2F850, p0); } // 0x3ED1438C1F5C6612 0x3301EA47
	static void _REMOVE_STEALTH_KILL(Hash hash, BOOL p1) { invoke<Void>(0xF2F860, hash, p1); } // 0xA6A12939F16D85BE 0x42B484ED
	static void _0x1EAE0A6E978894A2(int p0, BOOL p1) { invoke<Void>(0xF2F890, p0, p1); } // 0x1EAE0A6E978894A2 0x8F60366E
	static void SET_EXPLOSIVE_AMMO_THIS_FRAME(Player player) { invoke<Void>(0xF2F8B0, player); } // 0xA66C71C98D5F2CFB 0x2EAFA1D1
	static void SET_FIRE_AMMO_THIS_FRAME(Player player) { invoke<Void>(0xF2F8C0, player); } // 0x11879CDD803D30F4 0x7C18FC8A
	static void SET_EXPLOSIVE_MELEE_THIS_FRAME(Player player) { invoke<Void>(0xF2F8D0, player); } // 0xFF1BED81BFDC0FE0 0x96663D56
	static void SET_SUPER_JUMP_THIS_FRAME(Player player) { invoke<Void>(0xF2F8E0, player); } // 0x57FFF03E423A4C0B 0x86745EF3
	static BOOL _0x6FDDF453C0C756EC() { return invoke<BOOL>(0xF2F970); } // 0x6FDDF453C0C756EC 0xC3C10FCC
	static void _0xFB00CA71DA386228() { invoke<Void>(0xF2F980); } // 0xFB00CA71DA386228 0x054EC103
	static Any _0x5AA3BEFA29F03AD4() { return invoke<Any>(0xF2F9D0); } // 0x5AA3BEFA29F03AD4 0x46B5A15C
	static void _0xE3D969D2785FFB5E() { invoke<Void>(0xF2F9F0); } // 0xE3D969D2785FFB5E
	static void _RESET_LOCALPLAYER_STATE() { invoke<Void>(0xF2FA00); } // 0xC0AA53F866B3134D 0x5D209F25
	static void _0x0A60017F841A54F2(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xF2FA30, p0, p1, p2, p3); } // 0x0A60017F841A54F2 0x2D33F15A
	static void _0x1FF6BF9A63E5757F() { invoke<Void>(0xF2FA50); } // 0x1FF6BF9A63E5757F 0xDF99925C
	static void _0x1BB299305C3E8C13(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xF2FA60, p0, p1, p2, p3); } // 0x1BB299305C3E8C13 0xA27F4472
	static BOOL _0x8EF5573A1F801A5C(Any p0, Any* p1, Any* p2) { return invoke<BOOL>(0xF2FA80, p0, p1, p2); } // 0x8EF5573A1F801A5C 0x07FF553F
	static void _0x92790862E36C2ADA() { invoke<Void>(0xF2FAB0); } // 0x92790862E36C2ADA
	static void _0xC7DB36C24634F52B() { invoke<Void>(0xF2FAC0); } // 0xC7DB36C24634F52B
	static void _0x437138B6A830166A() { invoke<Void>(0xF2FAD0); } // 0x437138B6A830166A
	static void _0x37DEB0AA183FB6D8() { invoke<Void>(0xF2FAE0); } // 0x37DEB0AA183FB6D8
	static Any _0xEA2F2061875EED90() { return invoke<Any>(0xF2FAF0); } // 0xEA2F2061875EED90
	static Any _0x3BBBD13E5041A79E() { return invoke<Any>(0xF2FB00); } // 0x3BBBD13E5041A79E
	static BOOL _0xA049A5BE0F04F2F8() { return invoke<BOOL>(0xF2FB10); } // 0xA049A5BE0F04F2F8
	static Any _0x4750FC27570311EC() { return invoke<Any>(0xF2FB20); } // 0x4750FC27570311EC
	static Any _0x1B2366C3F2A5C8DF() { return invoke<Any>(0xF2FB30); } // 0x1B2366C3F2A5C8DF
	static void _FORCE_SOCIAL_CLUB_UPDATE() { invoke<Void>(0xF2FB50); } // 0xEB6891F03362FB12
	static Any _0x14832BF2ABA53FC5() { return invoke<Any>(0xF2FB60); } // 0x14832BF2ABA53FC5
	static void _0xC79AE21974B01FB2() { invoke<Void>(0xF2FB80); } // 0xC79AE21974B01FB2
	static BOOL _0x684A41975F077262() { return invoke<BOOL>(0xF2FB90); } // 0x684A41975F077262
	static Any _0xABB2FA71C83A1B72() { return invoke<Any>(0xF2FBC0); } // 0xABB2FA71C83A1B72
	static void _SHOW_PED_IN_PAUSE_MENU(BOOL toggle) { invoke<Void>(0xF2FBF0, toggle); } // 0x4EBB7E87AA0DBED4
	static BOOL _0x9689123E3F213AA5() { return invoke<BOOL>(0xF2FC10); } // 0x9689123E3F213AA5
	static void _0x9D8D44ADBBA61EF2(BOOL p0) { invoke<Void>(0xF2FC20, p0); } // 0x9D8D44ADBBA61EF2
	static void _0x23227DF0B2115469() { invoke<Void>(0xF2FC40); } // 0x23227DF0B2115469
	static Any _0xD10282B6E3751BA0() { return invoke<Any>(0xF2FC50); } // 0xD10282B6E3751BA0
}

namespace AUDIO
{
	static void PLAY_PED_RINGTONE(char* ringtoneName, Ped ped, BOOL p2) { invoke<Void>(0xEC1D30, ringtoneName, ped, p2); } // 0xF9E56683CA8E11A5 0x1D530E47
	static BOOL IS_PED_RINGTONE_PLAYING(Ped ped) { return invoke<BOOL>(0xEC1D50, ped); } // 0x1E8E5E20937E3137 0xFE576EE4
	static void STOP_PED_RINGTONE(Ped ped) { invoke<Void>(0xEC1DC0, ped); } // 0x6C5AE23EFA885092 0xFEEA107C
	static BOOL IS_MOBILE_PHONE_CALL_ONGOING() { return invoke<BOOL>(0xEC1E10); } // 0x7497D2CE2C30D24C 0x4ED1400A
	static Any _0xC8B1B2425604CDD0() { return invoke<Any>(0xEC1E50); } // 0xC8B1B2425604CDD0 0x16FB88B5
	static void CREATE_NEW_SCRIPTED_CONVERSATION() { invoke<Void>(0xEC1E70); } // 0xD2C91A0B572AAE56 0xB2BC25F8
	static void ADD_LINE_TO_CONVERSATION(int p0, char* p1, char* p2, int p3, int p4, BOOL p5, BOOL p6, BOOL p7, BOOL p8, int p9, BOOL p10, BOOL p11, BOOL p12) { invoke<Void>(0xEC1E90, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12); } // 0xC5EF963405593646 0x96CD0513
	static void ADD_PED_TO_CONVERSATION(Any p0, Any ped, char* p2) { invoke<Void>(0xEC1F80, p0, ped, p2); } // 0x95D9F4BC443956E7 0xF8D5EB86
	static void _0x33E3C6C6F2F0B506(Any p0, float p1, float p2, float p3) { invoke<Void>(0xEC2000, p0, p1, p2, p3); } // 0x33E3C6C6F2F0B506 0x73C6F979
	static void _0x892B6AB8F33606F5(Any p0, Any p1) { invoke<Void>(0xEC2070, p0, p1); } // 0x892B6AB8F33606F5 0x88203DDA
	static void SET_MICROPHONE_POSITION(BOOL p0, float x1, float y1, float z1, float x2, float y2, float z2, float x3, float y3, float z3) { invoke<Void>(0xEC20D0, p0, x1, y1, z1, x2, y2, z2, x3, y3, z3); } // 0xB6AE90EDDE95C762 0xAD7BB191
	static void _0x0B568201DD99F0EB(BOOL p0) { invoke<Void>(0xEC21C0, p0); } // 0x0B568201DD99F0EB 0x1193ED6E
	static void _0x61631F5DF50D1C34(BOOL p0) { invoke<Void>(0xEC21E0, p0); } // 0x61631F5DF50D1C34
	static void START_SCRIPT_PHONE_CONVERSATION(BOOL p0, BOOL p1) { invoke<Void>(0xEC2200, p0, p1); } // 0x252E5F915EABB675 0x38E42D07
	static void PRELOAD_SCRIPT_PHONE_CONVERSATION(BOOL p0, BOOL p1) { invoke<Void>(0xEC2250, p0, p1); } // 0x6004BCB0E226AAEA 0x9ACB213A
	static void START_SCRIPT_CONVERSATION(BOOL p0, BOOL p1, BOOL p2, BOOL p3) { invoke<Void>(0xEC22A0, p0, p1, p2, p3); } // 0x6B17C62C9635D2DC 0xE5DE7D9D
	static void PRELOAD_SCRIPT_CONVERSATION(BOOL p0, BOOL p1, BOOL p2, BOOL p3) { invoke<Void>(0xEC2300, p0, p1, p2, p3); } // 0x3B3CAD6166916D87 0xDDF5C579
	static void START_PRELOADED_CONVERSATION() { invoke<Void>(0xEC2360); } // 0x23641AFE870AF385 0xA170261B
	static Any _0xE73364DB90778FFA() { return invoke<Any>(0xEC2380); } // 0xE73364DB90778FFA 0x336F3D35
	static BOOL IS_SCRIPTED_CONVERSATION_ONGOING() { return invoke<BOOL>(0xEC23B0); } // 0x16754C556D2EDE3D 0xCB8FD96F
	static BOOL IS_SCRIPTED_CONVERSATION_LOADED() { return invoke<BOOL>(0xEC23F0); } // 0xDF0D54BE7A776737 0xE1870EA9
	static Any GET_CURRENT_SCRIPTED_CONVERSATION_LINE() { return invoke<Any>(0xEC2420); } // 0x480357EE890C295A 0x9620E41F
	static void PAUSE_SCRIPTED_CONVERSATION(BOOL p0) { invoke<Void>(0xEC2450, p0); } // 0x8530AD776CD72B12 0xE2C9C6F8
	static void RESTART_SCRIPTED_CONVERSATION() { invoke<Void>(0xEC2480); } // 0x9AEB285D1818C9AC 0x6CB24B56
	static Any STOP_SCRIPTED_CONVERSATION(BOOL p0) { return invoke<Any>(0xEC24A0, p0); } // 0xD79DEEFB53455EBA 0xAB77DA7D
	static void SKIP_TO_NEXT_SCRIPTED_CONVERSATION_LINE() { invoke<Void>(0xEC24D0); } // 0x9663FE6B7A61EB00 0x85C98304
	static void INTERRUPT_CONVERSATION(Any p0, Any* p1, Any* p2) { invoke<Void>(0xEC24E0, p0, p1, p2); } // 0xA018A12E5C5C2FA6 0xF3A67AF3
	static void _0x8A694D7A68F8DC38(Ped p0, char* p1, char* p2) { invoke<Void>(0xEC2560, p0, p1, p2); } // 0x8A694D7A68F8DC38
	static Any _0xAA19F5572C38B564(Any* p0) { return invoke<Any>(0xEC25E0, p0); } // 0xAA19F5572C38B564 0xB58B8FF3
	static void _0xB542DE8C3D1CB210(BOOL p0) { invoke<Void>(0xEC2640, p0); } // 0xB542DE8C3D1CB210 0x789D8C6C
	static void REGISTER_SCRIPT_WITH_AUDIO(int p0) { invoke<Void>(0xEC2660, p0); } // 0xC6ED9D5092438D91 0xA6203643
	static void UNREGISTER_SCRIPT_WITH_AUDIO() { invoke<Void>(0xEC2670); } // 0xA8638BE228D4751A 0x66728EFE
	static BOOL REQUEST_MISSION_AUDIO_BANK(char* p0, BOOL p1) { return invoke<BOOL>(0xEC2680, p0, p1); } // 0x7345BDD95E62E0F2 0x916E37CA
	static BOOL REQUEST_AMBIENT_AUDIO_BANK(char* p0, BOOL p1) { return invoke<BOOL>(0xEC26C0, p0, p1); } // 0xFE02FFBED8CA9D99 0x23C88BC7
	static BOOL REQUEST_SCRIPT_AUDIO_BANK(char* p0, BOOL p1) { return invoke<BOOL>(0xEC2700, p0, p1); } // 0x2F844A8B08D76685 0x21322887
	static Any HINT_AMBIENT_AUDIO_BANK(Any p0, Any p1) { return invoke<Any>(0xEC2760, p0, p1); } // 0x8F8C0E370AE62F5C 0xF1850DDC
	static Any HINT_SCRIPT_AUDIO_BANK(Any p0, Any p1) { return invoke<Any>(0xEC2780, p0, p1); } // 0xFB380A29641EC31A 0x41FA0E51
	static void RELEASE_MISSION_AUDIO_BANK() { invoke<Void>(0xEC27A0); } // 0x0EC92A1BF0857187 0x8E8824C7
	static void RELEASE_AMBIENT_AUDIO_BANK() { invoke<Void>(0xEC27B0); } // 0x65475A218FFAA93D 0x8C938784
	static void RELEASE_NAMED_SCRIPT_AUDIO_BANK(char* audioBank) { invoke<Void>(0xEC27C0, audioBank); } // 0x77ED170667F50170 0x16707ABC
	static void RELEASE_SCRIPT_AUDIO_BANK() { invoke<Void>(0xEC27E0); } // 0x7A2D8AD0A9EB9C3F 0x22F865E5
	static void _0x19AF7ED9B9D23058() { invoke<Void>(0xEC27F0); } // 0x19AF7ED9B9D23058 0xA58BBF4F
	static void _0x9AC92EED5E4793AB() { invoke<Void>(0xEC2800); } // 0x9AC92EED5E4793AB
	static int GET_SOUND_ID() { return invoke<int>(0xEC2830); } // 0x430386FE9BF80B45 0x6AE0AD56
	static void RELEASE_SOUND_ID(int soundId) { invoke<Void>(0xEC2860, soundId); } // 0x353FC880830B88FA 0x9C080899
	static void PLAY_SOUND(Player soundId, char* audioName, char* audioRef, BOOL p3, Any p4, BOOL p5) { invoke<Void>(0xEC2880, soundId, audioName, audioRef, p3, p4, p5); } // 0x7FF4944CC209192D 0xB6E1917F
	static void PLAY_SOUND_FRONTEND(int soundId, char* audioName, char* audioRef, BOOL p3) { invoke<Void>(0xEC28D0, soundId, audioName, audioRef, p3); } // 0x67C540AA08E4A6F5 0x2E458F74
	static void _0xCADA5A0D0702381E(char* p0, char* soundset) { invoke<Void>(0xEC2900, p0, soundset); } // 0xCADA5A0D0702381E 0xC70E6CFA
	static void PLAY_SOUND_FROM_ENTITY(int soundId, char* audioName, Entity entity, char* audioRef, BOOL p4, Any p5) { invoke<Void>(0xEC2960, soundId, audioName, entity, audioRef, p4, p5); } // 0xE65F427EB70AB1ED 0x95AE00F8
	static void PLAY_SOUND_FROM_COORD(int soundId, char* audioName, float x, float y, float z, char* audioRef, BOOL p6, int range, BOOL p8) { invoke<Void>(0xEC2A80, soundId, audioName, x, y, z, audioRef, p6, range, p8); } // 0x8D8686B622B88120 0xCAD3E2D5
	static void STOP_SOUND(int soundId) { invoke<Void>(0xEC2B80, soundId); } // 0xA3B0C41BA5CC0BB5 0xCD7F4030
	static int GET_NETWORK_ID_FROM_SOUND_ID(int soundId) { return invoke<int>(0xEC2BA0, soundId); } // 0x2DE3F0A134FFBC0D 0x2576F610
	static int GET_SOUND_ID_FROM_NETWORK_ID(int netId) { return invoke<int>(0xEC2BD0, netId); } // 0x75262FD12D0A1C84 0xD064D4DC
	static void SET_VARIABLE_ON_SOUND(int soundId, char* variableName, float value) { invoke<Void>(0xEC2C00, soundId, variableName, value); } // 0xAD6B3148A78AE9B6 0x606EE5FA
	static void SET_VARIABLE_ON_STREAM(char* p0, float p1) { invoke<Void>(0xEC2C20, p0, p1); } // 0x2F9D3834AEB9EF79 0xF67BB44C
	static void OVERRIDE_UNDERWATER_STREAM(Any* p0, BOOL p1) { invoke<Void>(0xEC2C40, p0, p1); } // 0xF2A9CDABCEA04BD6 0x9A083B7E
	static void _0x733ADF241531E5C2(char* name, float p1) { invoke<Void>(0xEC2C60, name, p1); } // 0x733ADF241531E5C2 0x62D026BE
	static BOOL HAS_SOUND_FINISHED(int soundId) { return invoke<BOOL>(0xEC2C80, soundId); } // 0xFCBDCE714A7C88E5 0xE85AEC2E
	static void _PLAY_AMBIENT_SPEECH1(Ped ped, char* speechName, char* speechParam) { invoke<Void>(0xEC2CB0, ped, speechName, speechParam); } // 0x8E04FEDD28D42462 0x5C57B85D
	static void _PLAY_AMBIENT_SPEECH2(Ped ped, char* speechName, char* speechParam) { invoke<Void>(0xEC2CD0, ped, speechName, speechParam); } // 0xC6941B4A3A8FBBB9 0x444180DB
	static void _PLAY_AMBIENT_SPEECH_WITH_VOICE(Ped p0, char* speechName, char* voiceName, char* speechParam, BOOL p4) { invoke<Void>(0xEC2CF0, p0, speechName, voiceName, speechParam, p4); } // 0x3523634255FC3318 0x8386AE28
	static void _PLAY_AMBIENT_SPEECH_AT_COORDS(char* p0, char* p1, float p2, float p3, float p4, char* p5) { invoke<Void>(0xEC2D20, p0, p1, p2, p3, p4, p5); } // 0xED640017ED337E45 0xA1A1402E
	static void OVERRIDE_TREVOR_RAGE(Any* p0) { invoke<Void>(0xEC2DB0, p0); } // 0x13AD665062541A7E 0x05B9B5CF
	static void RESET_TREVOR_RAGE() { invoke<Void>(0xEC2DD0); } // 0xE78503B10C4314E0 0xE80CF0D4
	static void SET_PLAYER_ANGRY(Ped playerPed, BOOL disabled) { invoke<Void>(0xEC2DE0, playerPed, disabled); } // 0xEA241BB04110F091 0x782CA58D
	static void PLAY_PAIN(Ped ped, int painID, int p1) { invoke<Void>(0xEC2E50, ped, painID, p1); } // 0xBC9AE166038A5CEC 0x874BD6CB
	static void _0xD01005D2BA2EB778(char* p0) { invoke<Void>(0xEC2E80, p0); } // 0xD01005D2BA2EB778 0x59A3A17D
	static void _0xDDC635D5B3262C56(char* p0) { invoke<Void>(0xEC2EC0, p0); } // 0xDDC635D5B3262C56 0x0E387BFE
	static void SET_AMBIENT_VOICE_NAME(Ped ped, char* name) { invoke<Void>(0xEC2F00, ped, name); } // 0x6C8065A3B780185B 0xBD2EA1A1
	static void _SET_PED_SCREAM(Ped ped) { invoke<Void>(0xEC3040, ped); } // 0x40CF0D12D142A9E8
	static void _0x7CDC8C3B89F661B3(Ped playerPed, Hash p1) { invoke<Void>(0xEC3110, playerPed, p1); } // 0x7CDC8C3B89F661B3
	static void _0xA5342D390CDA41D6(Any p0, BOOL p1) { invoke<Void>(0xEC3170, p0, p1); } // 0xA5342D390CDA41D6
	static void _SET_PED_MUTE(Ped ped) { invoke<Void>(0xEC31D0, ped); } // 0x7A73D05A607734C7
	static void STOP_CURRENT_PLAYING_AMBIENT_SPEECH(Ped ped) { invoke<Void>(0xEC3230, ped); } // 0xB8BEC0CA6F0EDB0F 0xBB8E64BF
	static BOOL IS_AMBIENT_SPEECH_PLAYING(Ped p0) { return invoke<BOOL>(0xEC3290, p0); } // 0x9072C8B49907BFAD 0x1972E8AA
	static BOOL IS_SCRIPTED_SPEECH_PLAYING(Any p0) { return invoke<BOOL>(0xEC3300, p0); } // 0xCC9AA18DCC7084F4 0x2C653904
	static BOOL IS_ANY_SPEECH_PLAYING(Ped ped) { return invoke<BOOL>(0xEC3370, ped); } // 0x729072355FA39EC9 0x2B74A6D6
	static BOOL _CAN_PED_SPEAK(Ped ped, char* speechName, BOOL unk) { return invoke<BOOL>(0xEC3400, ped, speechName, unk); } // 0x49B99BF3FDA89A7A 0x8BD5F11E
	static BOOL IS_PED_IN_CURRENT_CONVERSATION(Ped ped) { return invoke<BOOL>(0xEC34E0, ped); } // 0x049E937F18F4020C 0x7B2F0743
	static void SET_PED_IS_DRUNK(Ped ped, BOOL toggle) { invoke<Void>(0xEC3550, ped, toggle); } // 0x95D2D383D5396B8A 0xD2EA77A3
	static void _0xEE066C7006C49C0A(Any p0, Any p1, Any* p2) { invoke<Void>(0xEC35B0, p0, p1, p2); } // 0xEE066C7006C49C0A 0x498849F3
	static BOOL _0xC265DF9FB44A9FBD(Any p0) { return invoke<BOOL>(0xEC3620, p0); } // 0xC265DF9FB44A9FBD 0x0CBAF2EF
	static void SET_ANIMAL_MOOD(Ped animal, int mood) { invoke<Void>(0xEC3690, animal, mood); } // 0xCC97B29285B1DC3B 0x3EA7C6CB
	static BOOL IS_MOBILE_PHONE_RADIO_ACTIVE() { return invoke<BOOL>(0xEC36F0); } // 0xB35CE999E8EF317E 0x6E502A5B
	static void SET_MOBILE_PHONE_RADIO_STATE(BOOL state) { invoke<Void>(0xEC3700, state); } // 0xBF286C554784F3DF 0xE1E0ED34
	static int GET_PLAYER_RADIO_STATION_INDEX() { return invoke<int>(0xEC3720); } // 0xE8AF77C4C06ADC93 0x1C4946AC
	static char* GET_PLAYER_RADIO_STATION_NAME() { return invoke<char*>(0xEC3760); } // 0xF6D733C32076AD03 0xD909C107
	static char* GET_RADIO_STATION_NAME(int radioStation) { return invoke<char*>(0xEC3790, radioStation); } // 0xB28ECA15046CA8B9 0x3DF493BC
	static Any GET_PLAYER_RADIO_STATION_GENRE() { return invoke<Any>(0xEC37D0); } // 0xA571991A7FE6CCEB 0x872CF0EA
	static BOOL IS_RADIO_RETUNING() { return invoke<BOOL>(0xEC3800); } // 0xA151A7394A214E65 0xCF29097B
	static Any _0x0626A247D2405330() { return invoke<Any>(0xEC3830); } // 0x0626A247D2405330
	static void _0xFF266D1D0EB1195D() { invoke<Void>(0xEC3860); } // 0xFF266D1D0EB1195D 0x53DB6994
	static void _0xDD6BCF9E94425DF9() { invoke<Void>(0xEC3880); } // 0xDD6BCF9E94425DF9 0xD70ECC80
	static void SET_RADIO_TO_STATION_NAME(char* stationName) { invoke<Void>(0xEC38A0, stationName); } // 0xC69EDA28699D5107 0x7B36E35E
	static void SET_VEH_RADIO_STATION(Vehicle vehicle, char* radioStation) { invoke<Void>(0xEC38C0, vehicle, radioStation); } // 0x1B9C0099CB942AC6 0xE391F55F
	static void _0xC1805D05E6D4FE10(Vehicle vehicle) { invoke<Void>(0xEC3940, vehicle); } // 0xC1805D05E6D4FE10 0x7ABB89D2
	static void SET_EMITTER_RADIO_STATION(char* emitterName, char* radioStation) { invoke<Void>(0xEC3990, emitterName, radioStation); } // 0xACF57305B12AF907 0x87431585
	static void SET_STATIC_EMITTER_ENABLED(char* emitterName, BOOL toggle) { invoke<Void>(0xEC39B0, emitterName, toggle); } // 0x399D2D3B33F1B8EB 0x91F72E92
	static void SET_RADIO_TO_STATION_INDEX(int radioStation) { invoke<Void>(0xEC3A40, radioStation); } // 0xA619B168B8A8570F 0x1D82766D
	static void SET_FRONTEND_RADIO_ACTIVE(BOOL active) { invoke<Void>(0xEC3A60, active); } // 0xF7F26C6E9CC9EBB8 0xB1172075
	static void UNLOCK_MISSION_NEWS_STORY(int newsStory) { invoke<Void>(0xEC3AB0, newsStory); } // 0xB165AB7C248B2DC1 0xCCD9ABE4
	static int GET_NUMBER_OF_PASSENGER_VOICE_VARIATIONS(Any p0) { return invoke<int>(0xEC3AC0, p0); } // 0x66E49BF55B4B1874 0x27305D37
	static int GET_AUDIBLE_MUSIC_TRACK_TEXT_ID() { return invoke<int>(0xEC3AE0); } // 0x50B196FC9ED6545B 0xA2B88CA7
	static void PLAY_END_CREDITS_MUSIC(BOOL play) { invoke<Void>(0xEC3B10, play); } // 0xCD536C4D33DCC900 0x8E88B3CC
	static void SKIP_RADIO_FORWARD() { invoke<Void>(0xEC3B40); } // 0x6DDBBDD98E2E9C25 0x10D36630
	static void FREEZE_RADIO_STATION(char* radioStation) { invoke<Void>(0xEC3B50, radioStation); } // 0x344F393B027E38C3 0x286BF543
	static void UNFREEZE_RADIO_STATION(char* radioStation) { invoke<Void>(0xEC3B90, radioStation); } // 0xFC00454CF60B91DD 0x4D46202C
	static void SET_RADIO_AUTO_UNFREEZE(BOOL toggle) { invoke<Void>(0xEC3BB0, toggle); } // 0xC1AA9F53CE982990 0xA40196BF
	static void SET_INITIAL_PLAYER_STATION(char* radioStation) { invoke<Void>(0xEC3BD0, radioStation); } // 0x88795F13FACDA88D 0x9B069233
	static void SET_USER_RADIO_CONTROL_ENABLED(BOOL toggle) { invoke<Void>(0xEC3C00, toggle); } // 0x19F21E63AE6EAE4E 0x52E054CE
	static void SET_RADIO_TRACK(char* radioStation, char* radioTrack) { invoke<Void>(0xEC3C50, radioStation, radioTrack); } // 0xB39786F201FEE30B 0x76E96212
	static void SET_VEHICLE_RADIO_LOUD(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xEC3C90, vehicle, toggle); } // 0xBB6F1CAEC68B0BCE 0x8D9EDD99
	static BOOL _IS_VEHICLE_RADIO_LOUD(Vehicle vehicle) { return invoke<BOOL>(0xEC3CF0, vehicle); } // 0x032A116663A4D5AC 0xCBA99F4A
	static void SET_MOBILE_RADIO_ENABLED_DURING_GAMEPLAY(BOOL Toggle) { invoke<Void>(0xEC3D70, Toggle); } // 0x1098355A16064BB3 0x990085F0
	static BOOL _0x109697E2FFBAC8A1() { return invoke<BOOL>(0xEC3DC0); } // 0x109697E2FFBAC8A1 0x46B0C696
	static BOOL _IS_PLAYER_VEHICLE_RADIO_ENABLED() { return invoke<BOOL>(0xEC3E00); } // 0x5F43D83FD6738741 0x2A3E5E8B
	static void SET_VEHICLE_RADIO_ENABLED(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xEC3E40, vehicle, toggle); } // 0x3B988190C0AA6C0B 0x6F812CAB
	static void _0x4E404A9361F75BB2(char* radioStation, char* p1, BOOL p2) { invoke<Void>(0xEC3EE0, radioStation, p1, p2); } // 0x4E404A9361F75BB2 0x128C3873
	static void _0x1654F24A88A8E3FE(char* radioStation) { invoke<Void>(0xEC3F60, radioStation); } // 0x1654F24A88A8E3FE 0x1D766976
	static int _MAX_RADIO_STATION_INDEX() { return invoke<int>(0xEC3F80); } // 0xF1620ECB50E01DE7 0xCC91FCF5
	static int FIND_RADIO_STATION_INDEX(int station) { return invoke<int>(0xEC3F90, station); } // 0x8D67489793FF428B 0xECA1512F
	static void _0x774BD811F656A122(char* radioStation, BOOL p1) { invoke<Void>(0xEC3FD0, radioStation, p1); } // 0x774BD811F656A122 0xB1FF7137
	static void _0x2C96CDB04FCA358E(float p0) { invoke<Void>(0xEC4000, p0); } // 0x2C96CDB04FCA358E 0xC8B514E2
	static void _0x031ACB6ABA18C729(char* radioStation, char* p1) { invoke<Void>(0xEC4020, radioStation, p1); } // 0x031ACB6ABA18C729 0xBE998184
	static void _0xF3365489E0DD50F9(Any p0, BOOL p1) { invoke<Void>(0xEC4060, p0, p1); } // 0xF3365489E0DD50F9 0x8AFC488D
	static void SET_AMBIENT_ZONE_STATE(Any* p0, BOOL p1, BOOL p2) { invoke<Void>(0xEC40D0, p0, p1, p2); } // 0xBDA07E5950085E46 0x2849CAC9
	static void CLEAR_AMBIENT_ZONE_STATE(char* zoneName, BOOL p1) { invoke<Void>(0xEC4110, zoneName, p1); } // 0x218DD44AAAC964FF 0xCDFF3C82
	static void SET_AMBIENT_ZONE_LIST_STATE(char* p0, BOOL p1, BOOL p2) { invoke<Void>(0xEC4150, p0, p1, p2); } // 0x9748FA4DE50CCE3E 0xBF80B412
	static void CLEAR_AMBIENT_ZONE_LIST_STATE(Any* p0, BOOL p1) { invoke<Void>(0xEC41E0, p0, p1); } // 0x120C48C614909FA4 0x38B9B8D4
	static void SET_AMBIENT_ZONE_STATE_PERSISTENT(char* ambientZone, BOOL p1, BOOL p2) { invoke<Void>(0xEC4260, ambientZone, p1, p2); } // 0x1D6650420CEC9D3B 0xC1FFB672
	static void SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT(char* ambientZone, BOOL p1, BOOL p2) { invoke<Void>(0xEC42A0, ambientZone, p1, p2); } // 0xF3638DAE8C4045E1 0x5F5A2605
	static BOOL IS_AMBIENT_ZONE_ENABLED(char* ambientZone) { return invoke<BOOL>(0xEC4330, ambientZone); } // 0x01E2817A479A7F9B 0xBFABD872
	static void SET_CUTSCENE_AUDIO_OVERRIDE(char* p0) { invoke<Void>(0xEC43B0, p0); } // 0x3B4BF5F0859204D9 0xCE1332B7
	static void GET_PLAYER_HEADSET_SOUND_ALTERNATE(char* p0, float p1) { invoke<Void>(0xEC43E0, p0, p1); } // 0xBCC29F935ED07688 0xD63CF33A
	static Any PLAY_POLICE_REPORT(char* name, float p1) { return invoke<Any>(0xEC4420, name, p1); } // 0xDFEBD56D9BD1EB16 0x3F277B62
	static void _DISABLE_POLICE_REPORTS() { invoke<Void>(0xEC4450); } // 0xB4F90FAF7670B16F
	static void BLIP_SIREN(Vehicle vehicle) { invoke<Void>(0xEC4460, vehicle); } // 0x1B9025BDA76822B6 0xC0EB6924
	static void OVERRIDE_VEH_HORN(Vehicle vehicle, BOOL mute, int p2) { invoke<Void>(0xEC44B0, vehicle, mute, p2); } // 0x3CDC1E622CCE0356 0x2ACAB783
	static BOOL IS_HORN_ACTIVE(Vehicle vehicle) { return invoke<BOOL>(0xEC4550, vehicle); } // 0x9D6BFC12B05C6121 0x20E2BDD0
	static void SET_AGGRESSIVE_HORNS(BOOL toggle) { invoke<Void>(0xEC45B0, toggle); } // 0x395BF71085D1B1D9 0x01D6EABE
	static void _0x02E93C796ABD3A97(BOOL p0) { invoke<Void>(0xEC45D0, p0); } // 0x02E93C796ABD3A97 0x3C395AEE
	static void _0x58BB377BEC7CD5F4(BOOL p0, BOOL p1) { invoke<Void>(0xEC45E0, p0, p1); } // 0x58BB377BEC7CD5F4 0x8CE63FA1
	static BOOL IS_STREAM_PLAYING() { return invoke<BOOL>(0xEC4640); } // 0xD11FA52EB849D978 0xF1F51A14
	static int GET_STREAM_PLAY_TIME() { return invoke<int>(0xEC4670); } // 0x4E72BBDBCA58A3DB 0xB4F0AD56
	static BOOL LOAD_STREAM(char* streamName, char* soundSet) { return invoke<BOOL>(0xEC46A0, streamName, soundSet); } // 0x1F1F957154EC51DF 0x0D89599D
	static BOOL LOAD_STREAM_WITH_START_OFFSET(char* streamName, int startOffset, char* soundSet) { return invoke<BOOL>(0xEC46E0, streamName, startOffset, soundSet); } // 0x59C16B79F53B3712 0xE5B5745C
	static void PLAY_STREAM_FROM_PED(Ped ped) { invoke<Void>(0xEC4720, ped); } // 0x89049DD63C08B5D1 0xA1D7FABE
	static void PLAY_STREAM_FROM_VEHICLE(Vehicle vehicle) { invoke<Void>(0xEC4770, vehicle); } // 0xB70374A758007DFA 0xF8E4BDA2
	static void PLAY_STREAM_FROM_OBJECT(Object object) { invoke<Void>(0xEC47C0, object); } // 0xEBAA9B64D76356FD 0xC5266BF7
	static void PLAY_STREAM_FRONTEND() { invoke<Void>(0xEC4810); } // 0x58FCE43488F9F5F4 0x2C2A16BC
	static void SPECIAL_FRONTEND_EQUAL(float x, float y, float z) { invoke<Void>(0xEC4820, x, y, z); } // 0x21442F412E8DE56B 0x6FE5D865
	static void STOP_STREAM() { invoke<Void>(0xEC4880); } // 0xA4718A1419D18151 0xD1E364DE
	static void STOP_PED_SPEAKING(Ped ped, BOOL shaking) { invoke<Void>(0xEC4890, ped, shaking); } // 0x9D64D7405520E3D3 0xFF92B49D
	static void DISABLE_PED_PAIN_AUDIO(Ped ped, BOOL toggle) { invoke<Void>(0xEC48F0, ped, toggle); } // 0xA9A41C1E940FB0E8 0x3B8E2D5F
	static BOOL IS_AMBIENT_SPEECH_DISABLED(Ped ped) { return invoke<BOOL>(0xEC4950, ped); } // 0x932C2D096A2C3FFF 0x109D1F89
	static void SET_SIREN_WITH_NO_DRIVER(Object* vehicle, ScrHandle* toggle) { invoke<Void>(0xEC49C0, vehicle, toggle); } // 0x1FEF0683B96EBCF2 0x77182D58
	static void _SOUND_VEHICLE_HORN_THIS_FRAME(Vehicle vehicle) { invoke<Void>(0xEC4AA0, vehicle); } // 0x9C11908013EA4715 0xDE8BA3CD
	static void SET_HORN_ENABLED(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xEC4B00, vehicle, toggle); } // 0x76D683C108594D0E 0x6EB92D05
	static void SET_AUDIO_VEHICLE_PRIORITY(Vehicle vehicle, Any p1) { invoke<Void>(0xEC4B90, vehicle, p1); } // 0xE5564483E407F914 0x271A9766
	static void _0x9D3AF56E94C9AE98(Any p0, float p1) { invoke<Void>(0xEC4BF0, p0, p1); } // 0x9D3AF56E94C9AE98 0x2F0A16D1
	static void USE_SIREN_AS_HORN(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xEC4C70, vehicle, toggle); } // 0xFA932DE350266EF8 0xC6BC16F3
	static void _FORCE_VEHICLE_ENGINE_AUDIO(Vehicle vehicle, char* audioName) { invoke<Void>(0xEC4D00, vehicle, audioName); } // 0x4F0C413926060B38 0x33B0B007
	static void _0xF1F8157B8C3F171C(Any p0, char* p1, char* p2) { invoke<Void>(0xEC4D80, p0, p1, p2); } // 0xF1F8157B8C3F171C 0x1C0C5E4C
	static void _0xD2DCCD8E16E20997(Any p0) { invoke<Void>(0xEC4DA0, p0); } // 0xD2DCCD8E16E20997
	static BOOL _0x5DB8010EE71FDEF2(Vehicle vehicle) { return invoke<BOOL>(0xEC4E00, vehicle); } // 0x5DB8010EE71FDEF2 0x6E660D3F
	static void _0x59E7B488451F4D3A(Any p0, float p1) { invoke<Void>(0xEC4E80, p0, p1); } // 0x59E7B488451F4D3A 0x23BE6432
	static void _0x01BB4D577D38BD9E(Any p0, float p1) { invoke<Void>(0xEC4EE0, p0, p1); } // 0x01BB4D577D38BD9E 0xE81FAC68
	static void _0x1C073274E065C6D2(Any p0, BOOL p1) { invoke<Void>(0xEC4F40, p0, p1); } // 0x1C073274E065C6D2 0x9365E042
	static void _0x2BE4BC731D039D5A(Any p0, BOOL p1) { invoke<Void>(0xEC4FC0, p0, p1); } // 0x2BE4BC731D039D5A 0x2A60A90E
	static void SET_VEHICLE_BOOST_ACTIVE(Vehicle vehicle, BOOL Toggle) { invoke<Void>(0xEC5050, vehicle, Toggle); } // 0x4A04DE7CAB2739A1 0x072F15F2
	static void _0x6FDDAD856E36988A(Any p0, BOOL p1) { invoke<Void>(0xEC50E0, p0, p1); } // 0x6FDDAD856E36988A 0x934BE749
	static void _0x06C0023BED16DD6B(Any p0, BOOL p1) { invoke<Void>(0xEC5150, p0, p1); } // 0x06C0023BED16DD6B 0xE61110A2
	static void PLAY_VEHICLE_DOOR_OPEN_SOUND(Vehicle vehicle, int p1) { invoke<Void>(0xEC51A0, vehicle, p1); } // 0x3A539D52857EA82D 0x84930330
	static void PLAY_VEHICLE_DOOR_CLOSE_SOUND(Vehicle vehicle, int p1) { invoke<Void>(0xEC5230, vehicle, p1); } // 0x62A456AA4769EF34 0xBA2CF407
	static void _0xC15907D667F7CFB2(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xEC52C0, vehicle, toggle); } // 0xC15907D667F7CFB2 0x563B635D
	static BOOL IS_GAME_IN_CONTROL_OF_MUSIC() { return invoke<BOOL>(0xEC5330); } // 0x6D28DC1671E334FD 0x7643170D
	static void SET_GPS_ACTIVE(BOOL active) { invoke<Void>(0xEC5360, active); } // 0x3BD3F52BA9B1E4E8 0x0FC3379A
	static void PLAY_MISSION_COMPLETE_AUDIO(char* audioName) { invoke<Void>(0xEC5380, audioName); } // 0xB138AAB8A70D3C69 0x3033EA1D
	static BOOL IS_MISSION_COMPLETE_PLAYING() { return invoke<BOOL>(0xEC53A0); } // 0x19A30C23F5827F8A 0x939982A1
	static Any _0x6F259F82D873B8B8() { return invoke<Any>(0xEC53D0); } // 0x6F259F82D873B8B8 0xCBE09AEC
	static void _0xF154B8D1775B2DEC(BOOL p0) { invoke<Void>(0xEC53F0, p0); } // 0xF154B8D1775B2DEC 0xD2858D8A
	static BOOL START_AUDIO_SCENE(char* scene) { return invoke<BOOL>(0xEC5410, scene); } // 0x013A80FC08F6E4F2 0xE48D757B
	static void STOP_AUDIO_SCENE(char* scene) { invoke<Void>(0xEC5450, scene); } // 0xDFE8422B3B94E688 0xA08D8C58
	static void STOP_AUDIO_SCENES() { invoke<Void>(0xEC5480); } // 0xBAC7FC81A75EC1A1 0xF6C7342A
	static BOOL IS_AUDIO_SCENE_ACTIVE(char* scene) { return invoke<BOOL>(0xEC5490, scene); } // 0xB65B60556E2A9225 0xACBED05C
	static void SET_AUDIO_SCENE_VARIABLE(char* scene, char* variable, float value) { invoke<Void>(0xEC54D0, scene, variable, value); } // 0xEF21A9EF089A2668 0x19BB3CE8
	static void _0xA5F377B175A699C5(Any p0) { invoke<Void>(0xEC54F0, p0); } // 0xA5F377B175A699C5 0xE812925D
	static void _DYNAMIC_MIXER_RELATED_FN(Entity p0, char* p1, float p2) { invoke<Void>(0xEC5510, p0, p1, p2); } // 0x153973AB99FE8980 0x2BC93264
	static void _0x18EB48CFC41F2EA0(Any p0, float p1) { invoke<Void>(0xEC55A0, p0, p1); } // 0x18EB48CFC41F2EA0 0x308ED0EC
	static Any AUDIO_IS_SCRIPTED_MUSIC_PLAYING() { return invoke<Any>(0xEC5650); } // 0x845FFC3A4FEEFA3E 0x86E995D1
	static BOOL PREPARE_MUSIC_EVENT(char* eventName) { return invoke<BOOL>(0xEC5680, eventName); } // 0x1E5185B72EF5158A 0x534A5C1C
	static BOOL CANCEL_MUSIC_EVENT(char* eventName) { return invoke<BOOL>(0xEC56F0, eventName); } // 0x5B17A90291133DA5 0x89FF942D
	static BOOL TRIGGER_MUSIC_EVENT(char* eventName) { return invoke<BOOL>(0xEC5730, eventName); } // 0x706D57B0F50DA710 0xB6094948
	static Any _0xA097AB275061FB21() { return invoke<Any>(0xEC5770); } // 0xA097AB275061FB21 0x2705C4D5
	static Any GET_MUSIC_PLAYTIME() { return invoke<Any>(0xEC5790); } // 0xE7A0D23DC414507B 0xD633C809
	static void _0xFBE20329593DEC9D(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xEC57D0, p0, p1, p2, p3); } // 0xFBE20329593DEC9D 0x53FC3FEC
	static void CLEAR_ALL_BROKEN_GLASS() { invoke<Void>(0xEC5830); } // 0xB32209EFFDC04913 0xE6B033BF
	static void _0x70B8EC8FC108A634(BOOL p0, Any p1) { invoke<Void>(0xEC5850, p0, p1); } // 0x70B8EC8FC108A634 0x95050CAD
	static void _0x149AEE66F0CB3A99(float p0, float p1) { invoke<Void>(0xEC58B0, p0, p1); } // 0x149AEE66F0CB3A99 0xE64F97A0
	static void _0x8BF907833BE275DE(float p0, float p1) { invoke<Void>(0xEC58D0, p0, p1); } // 0x8BF907833BE275DE
	static void _0x062D5EAD4DA2FA6A() { invoke<Void>(0xEC58F0); } // 0x062D5EAD4DA2FA6A 0xD87AF337
	static BOOL PREPARE_ALARM(char* alarmName) { return invoke<BOOL>(0xEC5900, alarmName); } // 0x9D74AE343DB65533 0x084932E8
	static void START_ALARM(char* alarmName, BOOL p2) { invoke<Void>(0xEC5930, alarmName, p2); } // 0x0355EF116C4C97B2 0x703F524B
	static void STOP_ALARM(char* alarmName, BOOL toggle) { invoke<Void>(0xEC5950, alarmName, toggle); } // 0xA1CADDCD98415A41 0xF987BE8C
	static void STOP_ALL_ALARMS(BOOL stop) { invoke<Void>(0xEC5970, stop); } // 0x2F794A877ADD4C92 0xC3CB9DC6
	static BOOL IS_ALARM_PLAYING(char* alarmName) { return invoke<BOOL>(0xEC5990, alarmName); } // 0x226435CB96CCFC8C 0x9D8E1D23
	static Hash GET_VEHICLE_DEFAULT_HORN(Vehicle vehicle) { return invoke<Hash>(0xEC59F0, vehicle); } // 0x02165D55000219AC 0xE84ABC19
	static Hash _GET_VEHICLE_HORN_HASH(Vehicle vehicle) { return invoke<Hash>(0xEC5A60, vehicle); } // 0xACB5DCCA1EC76840 0xFD4B5B3B
	static void RESET_PED_AUDIO_FLAGS(Ped ped) { invoke<Void>(0xEC5AD0, ped); } // 0xF54BB7B61036F335 0xDF720C86
	static void _0xD2CC78CD3D0B50F9(Any p0, BOOL p1) { invoke<Void>(0xEC5B20, p0, p1); } // 0xD2CC78CD3D0B50F9 0xC307D531
	static void _0xBF4DC1784BE94DFA(Any p0, BOOL p1, Any p2) { invoke<Void>(0xEC5B90, p0, p1, p2); } // 0xBF4DC1784BE94DFA
	static void _0x75773E11BA459E90(Any p0, BOOL p1) { invoke<Void>(0xEC5C20, p0, p1); } // 0x75773E11BA459E90
	static void _0xD57AAAE0E2214D11() { invoke<Void>(0xEC5C90); } // 0xD57AAAE0E2214D11
	static void _FORCE_AMBIENT_SIREN(BOOL value) { invoke<Void>(0xEC5CD0, value); } // 0x552369F549563AD5 0x13EB5861
	static void _0x43FA0DFC5DF87815(Vehicle vehicle, BOOL p1) { invoke<Void>(0xEC5D70, vehicle, p1); } // 0x43FA0DFC5DF87815 0x7BED1872
	static void SET_AUDIO_FLAG(char* flagName, BOOL toggle) { invoke<Void>(0xEC5EC0, flagName, toggle); } // 0xB9EFD5C25018725A 0x1C09C9E0
	static Any PREPARE_SYNCHRONIZED_AUDIO_EVENT(char* p0, Any p1) { return invoke<Any>(0xEC5F20, p0, p1); } // 0xC7ABCACA4985A766 0xE1D91FD0
	static BOOL PREPARE_SYNCHRONIZED_AUDIO_EVENT_FOR_SCENE(Any p0, Any* p1) { return invoke<BOOL>(0xEC5F50, p0, p1); } // 0x029FE7CD1B7E2E75 0x7652DD49
	static BOOL PLAY_SYNCHRONIZED_AUDIO_EVENT(Any p0) { return invoke<BOOL>(0xEC5FA0, p0); } // 0x8B2FD4560E55DD2D 0x507F3241
	static BOOL STOP_SYNCHRONIZED_AUDIO_EVENT(Any p0) { return invoke<BOOL>(0xEC5FE0, p0); } // 0x92D6A88E64A94430 0xADEED2B4
	static void _0xC8EDE9BDBCCBA6D4(Any* p0, float p1, float p2, float p3) { invoke<Void>(0xEC6020, p0, p1, p2, p3); } // 0xC8EDE9BDBCCBA6D4 0x55A21772
	static void _SET_SYNCHRONIZED_AUDIO_EVENT_POSITION_THIS_FRAME(char* p0, Entity p1) { invoke<Void>(0xEC6090, p0, p1); } // 0x950A154B8DAB6185 0xA17F9AB0
	static void _0x12561FCBB62D5B9C(int p0) { invoke<Void>(0xEC6110, p0); } // 0x12561FCBB62D5B9C 0x62B43677
	static void _0x044DBAD7A7FA2BE5(char* p0, char* p1) { invoke<Void>(0xEC6190, p0, p1); } // 0x044DBAD7A7FA2BE5 0x8AD670EC
	static void _0xB4BBFD9CD8B3922B(char* p0) { invoke<Void>(0xEC61A0, p0); } // 0xB4BBFD9CD8B3922B 0xD24B4D0C
	static void _0xE4E6DD5566D28C82() { invoke<Void>(0xEC61B0); } // 0xE4E6DD5566D28C82 0x7262B5BA
	static Any _0x3A48AB4445D499BE() { return invoke<Any>(0xEC61C0); } // 0x3A48AB4445D499BE 0x93A44A1F
	static void _SET_PED_TALK(Ped ped) { invoke<Void>(0xEC61F0, ped); } // 0x4ADA3F19BE4A6047 0x13777A0B
	static void _0x0150B6FF25A9E2E5() { invoke<Void>(0xEC6240); } // 0x0150B6FF25A9E2E5 0x1134F68B
	static void _0xBEF34B1D9624D5DD(BOOL p0) { invoke<Void>(0xEC6250, p0); } // 0xBEF34B1D9624D5DD 0xE0047BFD
	static void _0x806058BBDC136E06() { invoke<Void>(0xEC6270); } // 0x806058BBDC136E06
	static Any _0x544810ED9DB6BBE6() { return invoke<Any>(0xEC6280); } // 0x544810ED9DB6BBE6
	static Any _0x5B50ABB1FE3746F4() { return invoke<Any>(0xEC62A0); } // 0x5B50ABB1FE3746F4
}

namespace CUTSCENE
{
	static void REQUEST_CUTSCENE(char* cutsceneName, int p1) { invoke<Void>(0xED62C0, cutsceneName, p1); } // 0x7A86743F475D9E09 0xB5977853
	static void _REQUEST_CUTSCENE_EX(char* cutsceneName, int p1, int p2) { invoke<Void>(0xED6320, cutsceneName, p1, p2); } // 0xC23DE0E91C30B58C 0xD98F656A
	static void REMOVE_CUTSCENE() { invoke<Void>(0xED63A0); } // 0x440AF51A3462B86F 0x8052F533
	static BOOL HAS_CUTSCENE_LOADED() { return invoke<BOOL>(0xED63D0); } // 0xC59F528E9AB9F339 0xF9998582
	static BOOL HAS_THIS_CUTSCENE_LOADED(char* cutsceneName) { return invoke<BOOL>(0xED6400, cutsceneName); } // 0x228D3D94F8A11C3C 0x3C5619F2
	static void _0x8D9DF6ECA8768583(int p0) { invoke<Void>(0xED6450, p0); } // 0x8D9DF6ECA8768583 0x25A2CABC
	static BOOL _0xB56BBBCC2955D9CB() { return invoke<BOOL>(0xED6470); } // 0xB56BBBCC2955D9CB 0xDD8878E9
	static BOOL _0x71B74D2AE19338D0(int p0) { return invoke<BOOL>(0xED64B0, p0); } // 0x71B74D2AE19338D0 0x7B93CDAA
	static void _0x4C61C75BEE8184C2(char* p0, Any p1, Any p2) { invoke<Void>(0xED64F0, p0, p1, p2); } // 0x4C61C75BEE8184C2 0x47DB08A9
	static void _0x06A3524161C502BA(Any* p0) { invoke<Void>(0xED6510, p0); } // 0x06A3524161C502BA
	static BOOL _0xA1C996C2A744262E(Any* p0) { return invoke<BOOL>(0xED65C0, p0); } // 0xA1C996C2A744262E
	static void _0xD00D76A7DFC9D852(Any* p0) { invoke<Void>(0xED65F0, p0); } // 0xD00D76A7DFC9D852
	static Any _0x0ABC54DE641DC0FC(Any* p0) { return invoke<Any>(0xED6600, p0); } // 0x0ABC54DE641DC0FC
	static void START_CUTSCENE(int p0) { invoke<Void>(0xED6630, p0); } // 0x186D5CB5E7B0FF7B 0x210106F6
	static void START_CUTSCENE_AT_COORDS(float x, float y, float z, int p3) { invoke<Void>(0xED6660, x, y, z, p3); } // 0x1C9ADDA3244A1FBF 0x58BEA436
	static void STOP_CUTSCENE(BOOL p0) { invoke<Void>(0xED6670, p0); } // 0xC7272775B4DC786E 0x5EE84DC7
	static void STOP_CUTSCENE_IMMEDIATELY() { invoke<Void>(0xED66B0); } // 0xD220BDD222AC4A1E 0xF528A2AD
	static void SET_CUTSCENE_ORIGIN(float x, float y, float z, float p3, int p4) { invoke<Void>(0xED66E0, x, y, z, p3, p4); } // 0xB812B3FD1C01CF27 0xB0AD7792
	static void _0x011883F41211432A(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { invoke<Void>(0xED6700, p0, p1, p2, p3, p4, p5, p6); } // 0x011883F41211432A
	static int GET_CUTSCENE_TIME() { return invoke<int>(0xED6710); } // 0xE625BEABBAFFDAB9 0x53F5B5AB
	static int GET_CUTSCENE_TOTAL_DURATION() { return invoke<int>(0xED6740); } // 0xEE53B14A19E480D4 0x0824EBE8
	static BOOL WAS_CUTSCENE_SKIPPED() { return invoke<BOOL>(0xED6790); } // 0x40C8656EDAEDD569 0xC9B6949D
	static BOOL HAS_CUTSCENE_FINISHED() { return invoke<BOOL>(0xED67C0); } // 0x7C0A893088881D57 0x5DED14B4
	static BOOL IS_CUTSCENE_ACTIVE() { return invoke<BOOL>(0xED67F0); } // 0x991251AFC3981F84 0xCCE2FE9D
	static BOOL IS_CUTSCENE_PLAYING() { return invoke<BOOL>(0xED6820); } // 0xD3C2E180A40F031E 0xA3A78392
	static int GET_CUTSCENE_SECTION_PLAYING() { return invoke<int>(0xED6850); } // 0x49010A6A396553D8 0x1026F0D6
	static Entity GET_ENTITY_INDEX_OF_CUTSCENE_ENTITY(char* cutsceneEntName, Hash modelHash) { return invoke<Entity>(0xED6870, cutsceneEntName, modelHash); } // 0x0A2E9FDB9A8C62F6 0x1D09ABC7
	static int _0x583DF8E3D4AFBD98() { return invoke<int>(0xED6920); } // 0x583DF8E3D4AFBD98 0x5AE68AE6
	static BOOL _0x4CEBC1ED31E8925E(char* cutsceneName) { return invoke<BOOL>(0xED6950, cutsceneName); } // 0x4CEBC1ED31E8925E
	static void REGISTER_ENTITY_FOR_CUTSCENE(Ped cutscenePed, char* cutsceneEntName, int p2, Hash modelHash, int p4) { invoke<Void>(0xED6A00, cutscenePed, cutsceneEntName, p2, modelHash, p4); } // 0xE40C1C56DF95C2E8 0x7CBC3EC7
	static Entity GET_ENTITY_INDEX_OF_REGISTERED_ENTITY(char* cutsceneEntName, Hash modelHash) { return invoke<Entity>(0xED6A20, cutsceneEntName, modelHash); } // 0xC0741A26499654CD 0x46D18755
	static void _0x7F96F23FA9B73327(Hash modelHash) { invoke<Void>(0xED6A50, modelHash); } // 0x7F96F23FA9B73327
	static void SET_CUTSCENE_TRIGGER_AREA(float p0, float p1, float p2, float p3, float p4, float p5) { invoke<Void>(0xED6A70, p0, p1, p2, p3, p4, p5); } // 0x9896CE4721BE84BA 0x9D76D9DE
	static BOOL CAN_SET_ENTER_STATE_FOR_REGISTERED_ENTITY(char* cutsceneEntName, Hash modelHash) { return invoke<BOOL>(0xED6B10, cutsceneEntName, modelHash); } // 0x645D0B458D8E17B5 0x55C30B26
	static BOOL CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY(char* cutsceneEntName, Hash modelHash) { return invoke<BOOL>(0xED6B90, cutsceneEntName, modelHash); } // 0x4C6A6451C79E4662 0x8FF5D3C4
	static BOOL CAN_SET_EXIT_STATE_FOR_CAMERA(BOOL p0) { return invoke<BOOL>(0xED6C10, p0); } // 0xB2CBCD0930DFB420 0xEDAE6C02
	static void _0xC61B86C9F61EB404(BOOL toggle) { invoke<Void>(0xED6C50, toggle); } // 0xC61B86C9F61EB404 0x35721A08
	static void SET_CUTSCENE_FADE_VALUES(BOOL p0, BOOL p1, BOOL p2, BOOL p3) { invoke<Void>(0xED6C90, p0, p1, p2, p3); } // 0x8093F23ABACCC7D4 0xD19EF0DD
	static void _0x20746F7B1032A3C7(BOOL p0, BOOL p1, BOOL p2, BOOL p3) { invoke<Void>(0xED6D40, p0, p1, p2, p3); } // 0x20746F7B1032A3C7
	static void _0x06EE9048FD080382(BOOL p0) { invoke<Void>(0xED6D50, p0); } // 0x06EE9048FD080382
	static int _0xA0FE76168A189DDB() { return invoke<int>(0xED6D60); } // 0xA0FE76168A189DDB
	static void _0x2F137B508DE238F2(BOOL p0) { invoke<Void>(0xED6D70, p0); } // 0x2F137B508DE238F2 0x8338DA1D
	static void _0xE36A98D8AB3D3C66(BOOL p0) { invoke<Void>(0xED6DB0, p0); } // 0xE36A98D8AB3D3C66 0x04377C10
	static BOOL _0x5EDEF0CF8C1DAB3C() { return invoke<BOOL>(0xED6DF0); } // 0x5EDEF0CF8C1DAB3C 0xDBD88708
	static void _0x41FAA8FB2ECE8720(BOOL p0) { invoke<Void>(0xED6E40, p0); } // 0x41FAA8FB2ECE8720 0x28D54A7F
	static void REGISTER_SYNCHRONISED_SCRIPT_SPEECH() { invoke<Void>(0xED6E80); } // 0x2131046957F31B04 0xB60CFBB9
	static void SET_CUTSCENE_PED_COMPONENT_VARIATION(char* cutsceneEntName, int p1, int p2, int p3, Hash modelHash) { invoke<Void>(0xED6EB0, cutsceneEntName, p1, p2, p3, modelHash); } // 0xBA01E7B6DEEFBBC9 0x6AF994A1
	static void _0x2A56C06EBEF2B0D9(char* cutsceneEntName, Ped ped, Hash modelHash) { invoke<Void>(0xED6ED0, cutsceneEntName, ped, modelHash); } // 0x2A56C06EBEF2B0D9 0x1E7DA95E
	static BOOL DOES_CUTSCENE_ENTITY_EXIST(char* cutsceneEntName, Hash modelHash) { return invoke<BOOL>(0xED6EF0, cutsceneEntName, modelHash); } // 0x499EF20C5DB25C59 0x58E67409
	static void SET_CUTSCENE_PED_PROP_VARIATION(char* cutsceneEntName, int p1, int p2, int p3, Hash modelHash) { invoke<Void>(0xED6F90, cutsceneEntName, p1, p2, p3, modelHash); } // 0x0546524ADE2E9723 0x22E9A9DE
	static Hash* _0x708BDD8CD795B043() { return invoke<Hash*>(0xED7050); } // 0x708BDD8CD795B043 0x4315A7C5
}

namespace INTERIOR
{
	static int GET_INTERIOR_GROUP_ID(int interiorID) { return invoke<int>(0xF1E4A0, interiorID); } // 0xE4A84ABF135EF91A 0x09D6376F
	static Vector3 GET_OFFSET_FROM_INTERIOR_IN_WORLD_COORDS(int interiorID, float x, float y, float z) { return invoke<Vector3>(0xF1E4E0, interiorID, x, y, z); } // 0x9E3B3E6D66F6E22F 0x7D8F26A1
	static BOOL IS_INTERIOR_SCENE() { return invoke<BOOL>(0xF1E5B0); } // 0xBC72B5D7A1CBD54D 0x55226C13
	static BOOL IS_VALID_INTERIOR(int interiorID) { return invoke<BOOL>(0xF1E5C0, interiorID); } // 0x26B0E73D7EAAF4D3 0x39C0B635
	static void CLEAR_ROOM_FOR_ENTITY(Entity entity) { invoke<Void>(0xF1E5E0, entity); } // 0xB365FC0C4E27FFA7 0x7DDADB92
	static void FORCE_ROOM_FOR_ENTITY(Entity entity, int interiorID, Hash roomHashKey) { invoke<Void>(0xF1E670, entity, interiorID, roomHashKey); } // 0x52923C4710DD9907 0x10BD4435
	static Hash GET_ROOM_KEY_FROM_ENTITY(Entity entity) { return invoke<Hash>(0xF1E690, entity); } // 0x47C2A06D4F5F424B 0xE4ACF8C3
	static Hash GET_KEY_FOR_ENTITY_IN_ROOM(Entity entity) { return invoke<Hash>(0xF1E6B0, entity); } // 0x399685DB942336BC 0x91EA80EF
	static int GET_INTERIOR_FROM_ENTITY(Entity entity) { return invoke<int>(0xF1E740, entity); } // 0x2107BA504071A6BB 0x5C644614
	static void _0x82EBB79E258FA2B7(Entity entity, int interiorID) { invoke<Void>(0xF1E760, entity, interiorID); } // 0x82EBB79E258FA2B7 0xE645E162
	static void _0x920D853F3E17F1DA(int interiorID, Hash roomHashKey) { invoke<Void>(0xF1E7C0, interiorID, roomHashKey); } // 0x920D853F3E17F1DA 0xD79803B5
	static void _0xAF348AFCB575A441(char* roomName) { invoke<Void>(0xF1E7D0, roomName); } // 0xAF348AFCB575A441 0x1F6B4B13
	static void _0x405DC2AEF6AF95B9(Hash roomHashKey) { invoke<Void>(0xF1E7E0, roomHashKey); } // 0x405DC2AEF6AF95B9 0x0E9529CC
	static Hash _GET_ROOM_KEY_FROM_GAMEPLAY_CAM() { return invoke<Hash>(0xF1E910); } // 0xA6575914D2A0B450 0x4FF3D3F5
	static void _0x23B59D8912F94246() { invoke<Void>(0xF1E970); } // 0x23B59D8912F94246 0x617DC75D
	static int GET_INTERIOR_AT_COORDS(float x, float y, float z) { return invoke<int>(0xF1EA20, x, y, z); } // 0xB0F7F8663821D9C3 0xA17FBF37
	static void ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME(Pickup pickup, char* roomName) { invoke<Void>(0xF1EA90, pickup, roomName); } // 0x3F6167F351168730 0xA2A73564
	static void _LOAD_INTERIOR(int interiorID) { invoke<Void>(0xF1EAE0, interiorID); } // 0x2CA429C029CCF247 0x3ADA414E
	static void UNPIN_INTERIOR(int interiorID) { invoke<Void>(0xF1EB50, interiorID); } // 0x261CCE7EED010641 0xFCFF792A
	static BOOL IS_INTERIOR_READY(int interiorID) { return invoke<BOOL>(0xF1EB90, interiorID); } // 0x6726BDCCC1932F0E 0xE1EF6450
	static Any _0x4C2330E61D3DEB56(int interiorID) { return invoke<Any>(0xF1EBE0, interiorID); } // 0x4C2330E61D3DEB56
	static int GET_INTERIOR_AT_COORDS_WITH_TYPE(float x, float y, float z, char* interiorType) { return invoke<int>(0xF1EC20, x, y, z, interiorType); } // 0x05B7A89BD78797FC 0x96525B06
	static int _UNK_GET_INTERIOR_AT_COORDS(float x, float y, float z, int unk) { return invoke<int>(0xF1ECC0, x, y, z, unk); } // 0xF0F77ADB9F67E79D
	static BOOL _ARE_COORDS_COLLIDING_WITH_EXTERIOR(float x, float y, float z) { return invoke<BOOL>(0xF1ED40, x, y, z); } // 0xEEA5AC2EDA7C33E8 0x7762249C
	static int GET_INTERIOR_FROM_COLLISION(float x, float y, float z) { return invoke<int>(0xF1EDD0, x, y, z); } // 0xEC4CF9FCB29A4424 0x7ED33DC1
	static void _ENABLE_INTERIOR_PROP(int interiorID, char* propName) { invoke<Void>(0xF1EE80, interiorID, propName); } // 0x55E86AF2712B36A1 0xC80A5DDF
	static void _DISABLE_INTERIOR_PROP(int interiorID, char* propName) { invoke<Void>(0xF1EF00, interiorID, propName); } // 0x420BD37289EEE162 0xDBA768A1
	static BOOL _IS_INTERIOR_PROP_ENABLED(int interiorID, char* propName) { return invoke<BOOL>(0xF1EF80, interiorID, propName); } // 0x35F7DD45E8C0A16D 0x39A3CC6F
	static void REFRESH_INTERIOR(int interiorID) { invoke<Void>(0xF1F0C0, interiorID); } // 0x41F37C3427C75AE0 0x9A29ACE6
	static void _HIDE_MAP_OBJECT_THIS_FRAME(Hash mapObjectHash) { invoke<Void>(0xF1F130, mapObjectHash); } // 0xA97F257D0151A6AB 0x1F375B4C
	static void DISABLE_INTERIOR(int interiorID, BOOL toggle) { invoke<Void>(0xF1F150, interiorID, toggle); } // 0x6170941419D7D8EC 0x093ADEA5
	static BOOL IS_INTERIOR_DISABLED(int interiorID) { return invoke<BOOL>(0xF1F1E0, interiorID); } // 0xBC5115A5A939DD15 0x81F34C71
	static void CAP_INTERIOR(int interiorID, BOOL toggle) { invoke<Void>(0xF1F220, interiorID, toggle); } // 0xD9175F941610DB54 0x34E735A6
	static BOOL IS_INTERIOR_CAPPED(int interiorID) { return invoke<BOOL>(0xF1F2B0, interiorID); } // 0x92BAC8ACF88CEC26 0x18B17C80
	static void _0x9E6542F0CE8E70A3(BOOL toggle) { invoke<Void>(0xF1F2F0, toggle); } // 0x9E6542F0CE8E70A3 0x5EF9C5C2
}

namespace CAM
{
	static void RENDER_SCRIPT_CAMS(BOOL render, BOOL ease, int easeTime, BOOL p3, BOOL p4) { invoke<Void>(0xECEAC0, render, ease, easeTime, p3, p4); } // 0x07E5B515DB0636FC 0x74337969
	static void _RENDER_FIRST_PERSON_CAM(BOOL render, float p1, int p2) { invoke<Void>(0xECEB70, render, p1, p2); } // 0xC819F3CBB62BF692 0xD3C08183
	static Cam CREATE_CAM(char* Gippo, BOOL p1) { return invoke<Cam>(0xECEBF0, Gippo, p1); } // 0xC3981DCE61D9E13F 0xE9BF2A7D
	static Cam CREATE_CAM_WITH_PARAMS(char* camName, float posX, float posY, float posZ, float rotX, float rotY, float rotZ, float fov, BOOL p8, int p9) { return invoke<Cam>(0xECEC70, camName, posX, posY, posZ, rotX, rotY, rotZ, fov, p8, p9); } // 0xB51194800B257161 0x23B02F15
	static Cam CREATE_CAMERA(Hash camHash, BOOL p1) { return invoke<Cam>(0xECEDD0, camHash, p1); } // 0x5E3CF89C6BCCA67D 0x5D6739AE
	static Cam CREATE_CAMERA_WITH_PARAMS(Hash camHash, float posX, float posY, float posZ, float rotX, float rotY, float rotZ, float fov, BOOL p8, Any p9) { return invoke<Cam>(0xECEE50, camHash, posX, posY, posZ, rotX, rotY, rotZ, fov, p8, p9); } // 0x6ABFA3E16460F22D 0x0688BE9A
	static void DESTROY_CAM(Cam cam, BOOL thisScriptCheck) { invoke<Void>(0xECEFB0, cam, thisScriptCheck); } // 0x865908C81A2C22E9 0xC39302BD
	static void DESTROY_ALL_CAMS(BOOL thisScriptCheck) { invoke<Void>(0xECF010, thisScriptCheck); } // 0x8E5FB15663F79120 0x10C151CE
	static BOOL DOES_CAM_EXIST(Cam cam) { return invoke<BOOL>(0xECF050, cam); } // 0xA7A932170592B50E 0x1EF89DC0
	static void SET_CAM_ACTIVE(Cam cam, BOOL active) { invoke<Void>(0xECF090, cam, active); } // 0x026FB97D0A425F84 0x064659C2
	static BOOL IS_CAM_ACTIVE(Cam cam) { return invoke<BOOL>(0xECF100, cam); } // 0xDFB2B516207D3534 0x4B58F177
	static BOOL IS_CAM_RENDERING(Cam cam) { return invoke<BOOL>(0xECF150, cam); } // 0x02EC0AF5C5A49B7A 0x6EC6B5B2
	static Cam GET_RENDERING_CAM() { return invoke<Cam>(0xECF1C0); } // 0x5234F9F10919EABA 0x0FCF4DF1
	static Vector3 GET_CAM_COORD(Cam cam) { return invoke<Vector3>(0xECF210, cam); } // 0xBAC038F7459AE5AE 0x7C40F09C
	static Vector3 GET_CAM_ROT(Cam cam, int rotationOrder) { return invoke<Vector3>(0xECF2B0, cam, rotationOrder); } // 0x7D304C1C955E3E12 0xDAC84C9F
	static float GET_CAM_FOV(Cam cam) { return invoke<float>(0xECF390, cam); } // 0xC3330A45CCCDB26A 0xD6E9FCF5
	static float GET_CAM_NEAR_CLIP(Cam cam) { return invoke<float>(0xECF3F0, cam); } // 0xC520A34DAFBF24B1 0xCFCD35EE
	static float GET_CAM_FAR_CLIP(Cam cam) { return invoke<float>(0xECF450, cam); } // 0xB60A9CFEB21CA6AA 0x09F119B8
	static float GET_CAM_FAR_DOF(Cam cam) { return invoke<float>(0xECF4B0, cam); } // 0x255F8DAFD540D397 0x98C5CCE9
	static void SET_CAM_PARAMS(Cam cam, float posX, float posY, float posZ, float rotX, float rotY, float rotZ, float fieldOfView, Any p8, int p9, int p10, int p11) { invoke<Void>(0xECF510, cam, posX, posY, posZ, rotX, rotY, rotZ, fieldOfView, p8, p9, p10, p11); } // 0xBFD8727AEA3CCEBA 0x2167CEBF
	static void SET_CAM_COORD(Cam cam, float posX, float posY, float posZ) { invoke<Void>(0xECF550, cam, posX, posY, posZ); } // 0x4D41783FB745E42E 0x7A8053AF
	static void SET_CAM_ROT(Cam cam, float rotX, float rotY, float rotZ, int rotationOrder) { invoke<Void>(0xECF5F0, cam, rotX, rotY, rotZ, rotationOrder); } // 0x85973643155D0B07 0xEE38B3C1
	static void SET_CAM_FOV(Cam cam, float fieldOfView) { invoke<Void>(0xECF610, cam, fieldOfView); } // 0xB13C14F66A00D047 0xD3D5D74F
	static void SET_CAM_NEAR_CLIP(Cam cam, float nearClip) { invoke<Void>(0xECF6C0, cam, nearClip); } // 0xC7848EFCCC545182 0x46DB13B1
	static void SET_CAM_FAR_CLIP(Cam cam, float farClip) { invoke<Void>(0xECF730, cam, farClip); } // 0xAE306F2A904BF86E 0x0D23E381
	static void SET_CAM_MOTION_BLUR_STRENGTH(Cam cam, float strength) { invoke<Void>(0xECF7C0, cam, strength); } // 0x6F0F77FBA9A8F2E6 0xFD6E0D67
	static void SET_CAM_NEAR_DOF(Cam cam, float nearDOF) { invoke<Void>(0xECF840, cam, nearDOF); } // 0x3FA4BF0A7AB7DE2C 0xF28254DF
	static void SET_CAM_FAR_DOF(Cam cam, float farDOF) { invoke<Void>(0xECF8B0, cam, farDOF); } // 0xEDD91296CD01AEE0 0x58515E8E
	static void SET_CAM_DOF_STRENGTH(Cam cam, float dofStrength) { invoke<Void>(0xECF920, cam, dofStrength); } // 0x5EE29B4D7D5DF897 0x3CC4EB3F
	static void SET_CAM_DOF_PLANES(Cam cam, float p1, float p2, float p3, float p4) { invoke<Void>(0xECF9A0, cam, p1, p2, p3, p4); } // 0x3CF48F6F96E749DC 0xAD6C2B8F
	static void SET_CAM_USE_SHALLOW_DOF_MODE(Cam cam, BOOL toggle) { invoke<Void>(0xECFA50, cam, toggle); } // 0x16A96863A17552BB 0x8306C256
	static void SET_USE_HI_DOF() { invoke<Void>(0xECFAC0); } // 0xA13B0222F3D94A94 0x8BBF2950
	static void _0xF55E4046F6F831DC(Any p0, float p1) { invoke<Void>(0xECFAE0, p0, p1); } // 0xF55E4046F6F831DC
	static void _0xE111A7C0D200CBC5(Any p0, float p1) { invoke<Void>(0xECFBB0, p0, p1); } // 0xE111A7C0D200CBC5
	static void _SET_CAM_DOF_FNUMBER_OF_LENS(Cam camera, float p1) { invoke<Void>(0xECFC80, camera, p1); } // 0x7DD234D6F3914C5B
	static void _SET_CAM_DOF_FOCUS_DISTANCE_BIAS(Cam camera, float p1) { invoke<Void>(0xECFE00, camera, p1); } // 0xC669EEA5D031B7DE
	static void _SET_CAM_DOF_MAX_NEAR_IN_FOCUS_DISTANCE(Cam camera, float p1) { invoke<Void>(0xECFEC0, camera, p1); } // 0xC3654A441402562D
	static void _SET_CAM_DOF_MAX_NEAR_IN_FOCUS_DISTANCE_BLEND_LEVEL(Cam camera, float p1) { invoke<Void>(0xECFF80, camera, p1); } // 0x2C654B4943BDDF7C
	static void ATTACH_CAM_TO_ENTITY(Cam cam, Entity entity, float xOffset, float yOffset, float zOffset, BOOL isRelative) { invoke<Void>(0xED0040, cam, entity, xOffset, yOffset, zOffset, isRelative); } // 0xFEDB7D269E8C60E3 0xAD7C45F6
	static void ATTACH_CAM_TO_PED_BONE(Cam cam, Ped ped, int boneIndex, float x, float y, float z, BOOL heading) { invoke<Void>(0xED0060, cam, ped, boneIndex, x, y, z, heading); } // 0x61A3DBA14AB7F411 0x506BB35C
	static void DETACH_CAM(Cam cam) { invoke<Void>(0xED0100, cam); } // 0xA2FABBE87F4BAD82 0xF4FBF14A
	static void SET_CAM_INHERIT_ROLL_VEHICLE(Cam cam, BOOL p1) { invoke<Void>(0xED0170, cam, p1); } // 0x45F1DE9C34B93AE6 0xE4BD5342
	static void POINT_CAM_AT_COORD(Cam cam, float x, float y, float z) { invoke<Void>(0xED0180, cam, x, y, z); } // 0xF75497BB865F0803 0x914BC21A
	static void POINT_CAM_AT_ENTITY(Cam cam, Entity entity, float p2, float p3, float p4, BOOL p5) { invoke<Void>(0xED0240, cam, entity, p2, p3, p4, p5); } // 0x5640BFF86B16E8DC 0x7597A0F7
	static void POINT_CAM_AT_PED_BONE(Cam cam, int ped, int boneIndex, float x, float y, float z, BOOL p6) { invoke<Void>(0xED0260, cam, ped, boneIndex, x, y, z, p6); } // 0x68B2B5F33BA63C41 0x09F47049
	static void STOP_CAM_POINTING(Cam cam) { invoke<Void>(0xED0280, cam); } // 0xF33AB75780BA57DE 0x5435F6A5
	static void SET_CAM_AFFECTS_AIMING(Cam cam, BOOL toggle) { invoke<Void>(0xED02F0, cam, toggle); } // 0x8C1DC7770C51DC8D 0x0C74F9AF
	static void _0x661B5C8654ADD825(Any p0, BOOL p1) { invoke<Void>(0xED0380, p0, p1); } // 0x661B5C8654ADD825 0xE1A0B2F1
	static void _0xA2767257A320FC82(Any p0, BOOL p1) { invoke<Void>(0xED0430, p0, p1); } // 0xA2767257A320FC82
	static void _0x271017B9BA825366(Any p0, BOOL p1) { invoke<Void>(0xED04C0, p0, p1); } // 0x271017B9BA825366 0x43220969
	static void SET_CAM_DEBUG_NAME(Cam camera, char* name) { invoke<Void>(0xED0550, camera, name); } // 0x1B93E0107865DD40 0x9B00DF3F
	static void ADD_CAM_SPLINE_NODE(Cam camera, float x, float y, float z, float xRot, float yRot, float zRot, int length, int p8, int p9) { invoke<Void>(0xED0560, camera, x, y, z, xRot, yRot, zRot, length, p8, p9); } // 0x8609C75EC438FB3B 0xAD3C7EAA
	static void _0x0A9F2A468B328E74(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xED0580, p0, p1, p2, p3); } // 0x0A9F2A468B328E74 0x30510511
	static void _0x0FB82563989CF4FB(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xED05A0, p0, p1, p2, p3); } // 0x0FB82563989CF4FB 0xBA6C085B
	static void _0x609278246A29CA34(Any p0, Any p1, Any p2) { invoke<Void>(0xED05C0, p0, p1, p2); } // 0x609278246A29CA34 0xB4737F03
	static void SET_CAM_SPLINE_PHASE(Cam cam, float p1) { invoke<Void>(0xED0650, cam, p1); } // 0x242B5874F0A4E052 0xF0AED233
	static float GET_CAM_SPLINE_PHASE(Cam cam) { return invoke<float>(0xED06E0, cam); } // 0xB5349E36C546509A 0x39784DD9
	static float GET_CAM_SPLINE_NODE_PHASE(Cam cam) { return invoke<float>(0xED0770, cam); } // 0xD9D0E694C8282C96 0x7B9522F6
	static void SET_CAM_SPLINE_DURATION(int cam, int timeDuration) { invoke<Void>(0xED0800, cam, timeDuration); } // 0x1381539FEE034CDA 0x3E91FC8A
	static void _0xD1B0F412F109EA5D(Any p0, Any p1) { invoke<Void>(0xED0870, p0, p1); } // 0xD1B0F412F109EA5D 0x15E141CE
	static BOOL GET_CAM_SPLINE_NODE_INDEX(Cam cam) { return invoke<BOOL>(0xED08E0, cam); } // 0xB22B17DF858716A6 0xF8AEB6BD
	static void _0x83B8201ED82A9A2D(Any p0, Any p1, Any p2, float p3) { invoke<Void>(0xED0960, p0, p1, p2, p3); } // 0x83B8201ED82A9A2D 0x21D275DA
	static void _0xA6385DEB180F319F(Any p0, Any p1, float p2) { invoke<Void>(0xED0A10, p0, p1, p2); } // 0xA6385DEB180F319F 0xA3BD9E94
	static void OVERRIDE_CAM_SPLINE_VELOCITY(Cam cam, int p1, float p2, float p3) { invoke<Void>(0xED0AD0, cam, p1, p2, p3); } // 0x40B62FA033EB0346 0x326A17E2
	static void OVERRIDE_CAM_SPLINE_MOTION_BLUR(Cam cam, int p1, float p2, float p3) { invoke<Void>(0xED0B90, cam, p1, p2, p3); } // 0x7DCF7C708D292D55 0x633179E6
	static void _0x7BF1A54AE67AC070(Any p0, Any p1, Any p2) { invoke<Void>(0xED0C50, p0, p1, p2); } // 0x7BF1A54AE67AC070 0xC90B2DDC
	static BOOL IS_CAM_SPLINE_PAUSED(Any p0) { return invoke<BOOL>(0xED0C70, p0); } // 0x0290F35C0AD97864 0x60B34FF5
	static void SET_CAM_ACTIVE_WITH_INTERP(Cam camTo, Cam camFrom, int duration, int easeLocation, int easeRotation) { invoke<Void>(0xED0D00, camTo, camFrom, duration, easeLocation, easeRotation); } // 0x9FBDA379383A52A4 0x7983E7F0
	static BOOL IS_CAM_INTERPOLATING(Cam cam) { return invoke<BOOL>(0xED0D20, cam); } // 0x036F97C908C2B52C 0x7159CB5D
	static void SHAKE_CAM(Cam cam, char* type, float amplitude) { invoke<Void>(0xED0D50, cam, type, amplitude); } // 0x6A25241C340D3822 0x1D4211B0
	static void ANIMATED_SHAKE_CAM(Cam cam, char* p1, char* p2, char* p3, float amplitude) { invoke<Void>(0xED0DE0, cam, p1, p2, p3, amplitude); } // 0xA2746EEAE3E577CD 0xE1168767
	static BOOL IS_CAM_SHAKING(Cam cam) { return invoke<BOOL>(0xED0E80, cam); } // 0x6B24BFE83A2BE47B 0x0961FD9B
	static void SET_CAM_SHAKE_AMPLITUDE(Cam cam, float amplitude) { invoke<Void>(0xED0EF0, cam, amplitude); } // 0xD93DB43B82BC0D00 0x60FF6382
	static void STOP_CAM_SHAKING(Cam cam, BOOL p1) { invoke<Void>(0xED0F60, cam, p1); } // 0xBDECF64367884AC3 0x40D0EB87
	static void _0xF4C8CF9E353AFECA(char* p0, float p1) { invoke<Void>(0xED0FD0, p0, p1); } // 0xF4C8CF9E353AFECA 0x2B0F05CD
	static void _0xC2EAE3FB8CDBED31(char* p0, char* p1, char* p2, float p3) { invoke<Void>(0xED1010, p0, p1, p2, p3); } // 0xC2EAE3FB8CDBED31 0xCB75BD9C
	static BOOL IS_SCRIPT_GLOBAL_SHAKING() { return invoke<BOOL>(0xED1060); } // 0xC912AF078AF19212 0x6AEFE6A5
	static void STOP_SCRIPT_GLOBAL_SHAKING(BOOL p0) { invoke<Void>(0xED1090, p0); } // 0x1C9D7949FA533490 0x26FCFB96
	static BOOL PLAY_CAM_ANIM(Cam cam, char* animName, char* animDictionary, float x, float y, float z, float xRot, float yRot, float zRot, BOOL p9, int p10) { return invoke<BOOL>(0xED10C0, cam, animName, animDictionary, x, y, z, xRot, yRot, zRot, p9, p10); } // 0x9A2D0FB2E7852392 0xBCEFB87E
	static BOOL IS_CAM_PLAYING_ANIM(Cam cam, char* animName, char* animDictionary) { return invoke<BOOL>(0xED1100, cam, animName, animDictionary); } // 0xC90621D8A0CEECF2 0xB998CB49
	static void SET_CAM_ANIM_CURRENT_PHASE(Cam cam, float phase) { invoke<Void>(0xED11B0, cam, phase); } // 0x4145A4C44FF3B5A6 0x3CB1D17F
	static float GET_CAM_ANIM_CURRENT_PHASE(Cam cam) { return invoke<float>(0xED1220, cam); } // 0xA10B2DB49E92A6B0 0x345F72D0
	static BOOL PLAY_SYNCHRONIZED_CAM_ANIM(Any p0, Any p1, char* animName, char* animDictionary) { return invoke<BOOL>(0xED1270, p0, p1, animName, animDictionary); } // 0xE32EFE9AB4A9AA0C 0x9458459E
	static void _0x503F5920162365B2(Any p0, float p1, float p2, float p3) { invoke<Void>(0xED12A0, p0, p1, p2, p3); } // 0x503F5920162365B2 0x56F9ED27
	static void _SET_CAMERA_RANGE(Cam cam, float range) { invoke<Void>(0xED1400, cam, range); } // 0xF9D02130ECDD1D77 0x71570DBA
	static void _0xC91C6C55199308CA(Any p0, float p1, float p2, float p3) { invoke<Void>(0xED1480, p0, p1, p2, p3); } // 0xC91C6C55199308CA 0x60B345DE
	static void _0xC8B5C4A79CC18B94(Cam p0) { invoke<Void>(0xED1520, p0); } // 0xC8B5C4A79CC18B94 0x44473EFC
	static BOOL _0x5C48A1D6E3B33179(Any p0) { return invoke<BOOL>(0xED1590, p0); } // 0x5C48A1D6E3B33179 0xDA931D65
	static BOOL IS_SCREEN_FADED_OUT() { return invoke<BOOL>(0xED1610); } // 0xB16FCE9DDC7BA182 0x9CAA05FA
	static BOOL IS_SCREEN_FADED_IN() { return invoke<BOOL>(0xED1630); } // 0x5A859503B0C08678 0x4F37276D
	static BOOL IS_SCREEN_FADING_OUT() { return invoke<BOOL>(0xED1650); } // 0x797AC7CB535BA28F 0x79275A57
	static BOOL IS_SCREEN_FADING_IN() { return invoke<BOOL>(0xED1670); } // 0x5C544BC6C57AC575 0xC7C82800
	static void DO_SCREEN_FADE_IN(int duration) { invoke<Void>(0xED1690, duration); } // 0xD4E8E24955024033 0x66C1BDEE
	static void DO_SCREEN_FADE_OUT(int duration) { invoke<Void>(0xED16D0, duration); } // 0x891B5B39AC6302AF 0x89D01805
	static void SET_WIDESCREEN_BORDERS(BOOL p0, int p1) { invoke<Void>(0xED1710, p0, p1); } // 0xDCD4EA924F42D01A 0x1A75DC9A
	static Vector3 GET_GAMEPLAY_CAM_COORD() { return invoke<Vector3>(0xED1750); } // 0x14D6F5678D8F1B37 0x9388CF79
	static Vector3 GET_GAMEPLAY_CAM_ROT(int rotationOrder) { return invoke<Vector3>(0xED1790, rotationOrder); } // 0x837765A25378F0BB 0x13A010B5
	static float GET_GAMEPLAY_CAM_FOV() { return invoke<float>(0xED1830); } // 0x65019750A0324133 0x4D6B3BFA
	static void CUSTOM_MENU_COORDINATES(float p0) { invoke<Void>(0xED1860, p0); } // 0x487A82C650EB7799 0xA6E73135
	static void _0x0225778816FDC28C(float p0) { invoke<Void>(0xED18A0, p0); } // 0x0225778816FDC28C 0x1126E37C
	static float GET_GAMEPLAY_CAM_RELATIVE_HEADING() { return invoke<float>(0xED18F0); } // 0x743607648ADD4587 0xCAF839C2
	static void SET_GAMEPLAY_CAM_RELATIVE_HEADING(float heading) { invoke<Void>(0xED1920, heading); } // 0xB4EC2312F4E5B1F1 0x20C6217C
	static float GET_GAMEPLAY_CAM_RELATIVE_PITCH() { return invoke<float>(0xED1930); } // 0x3A6867B4845BEDA2 0xFC5A4946
	static void SET_GAMEPLAY_CAM_RELATIVE_PITCH(float x, float Value2) { invoke<Void>(0xED1960, x, Value2); } // 0x6D0858B8EDFD2B7D 0x6381B963
	static void _SET_GAMEPLAY_CAM_RAW_YAW(float yaw) { invoke<Void>(0xED19F0, yaw); } // 0x103991D4A307D472
	static void _SET_GAMEPLAY_CAM_RAW_PITCH(float pitch) { invoke<Void>(0xED1A30, pitch); } // 0x759E13EBC1C15C5A
	static void _0x469F2ECDEC046337(BOOL p0) { invoke<Void>(0xED1A90, p0); } // 0x469F2ECDEC046337
	static void SHAKE_GAMEPLAY_CAM(char* shakeName, float intensity) { invoke<Void>(0xED1AB0, shakeName, intensity); } // 0xFD55E49555E017CF 0xF2EFE660
	static BOOL IS_GAMEPLAY_CAM_SHAKING() { return invoke<BOOL>(0xED1AF0); } // 0x016C090630DF1F89 0x3457D681
	static void SET_GAMEPLAY_CAM_SHAKE_AMPLITUDE(float amplitude) { invoke<Void>(0xED1B20, amplitude); } // 0xA87E00932DB4D85D 0x9219D44A
	static void STOP_GAMEPLAY_CAM_SHAKING(BOOL p0) { invoke<Void>(0xED1B50, p0); } // 0x0EF93E9F3D08C178 0xFD569E4E
	static void _0x8BBACBF51DA047A8(Any p0) { invoke<Void>(0xED1B80, p0); } // 0x8BBACBF51DA047A8 0x7D3007A2
	static BOOL IS_GAMEPLAY_CAM_RENDERING() { return invoke<BOOL>(0xED1BF0); } // 0x39B5D1B10383F0C8 0x0EF276DA
	static BOOL _0x3044240D2E0FA842() { return invoke<BOOL>(0xED1C20); } // 0x3044240D2E0FA842 0xC0B00C20
	static BOOL _0x705A276EBFF3133D() { return invoke<BOOL>(0xED1C60); } // 0x705A276EBFF3133D 0x60C23785
	static void _0xDB90C6CCA48940F1(BOOL p0) { invoke<Void>(0xED1CA0, p0); } // 0xDB90C6CCA48940F1 0x20BFF6E5
	static void _ENABLE_CROSSHAIR_THIS_FRAME() { invoke<Void>(0xED1CD0); } // 0xEA7F0AD7E9BA676F 0xA61FF9AC
	static BOOL IS_GAMEPLAY_CAM_LOOKING_BEHIND() { return invoke<BOOL>(0xED1CF0); } // 0x70FDA869F3317EA9 0x33C83F17
	static void _0x2AED6301F67007D5(Entity entity) { invoke<Void>(0xED1D20, entity); } // 0x2AED6301F67007D5 0x2701A9AD
	static void _0x49482F9FCD825AAA(Entity entity) { invoke<Void>(0xED1D90, entity); } // 0x49482F9FCD825AAA 0xC4736ED3
	static void _0xFD3151CD37EA2245(Any p0) { invoke<Void>(0xED1DF0, p0); } // 0xFD3151CD37EA2245
	static void _0xDD79DF9F4D26E1C9() { invoke<Void>(0xED1E80); } // 0xDD79DF9F4D26E1C9 0x6B0E9D57
	static BOOL IS_SPHERE_VISIBLE(float x, float y, float z, float radius) { return invoke<BOOL>(0xED1EA0, x, y, z, radius); } // 0xE33D59DA70B58FDF 0xDD1329E2
	static BOOL IS_FOLLOW_PED_CAM_ACTIVE() { return invoke<BOOL>(0xED1F10); } // 0xC6D3D26810C8E0F9 0x9F9E856C
	static BOOL SET_FOLLOW_PED_CAM_CUTSCENE_CHAT(char* p0, int p1) { return invoke<BOOL>(0xED1F40, p0, p1); } // 0x44A113DD6FFC48D1 0x1425F6AC
	static void _0x271401846BD26E92(BOOL p0, BOOL p1) { invoke<Void>(0xED1FD0, p0, p1); } // 0x271401846BD26E92 0x8DC53629
	static void _0xC8391C309684595A() { invoke<Void>(0xED2020); } // 0xC8391C309684595A 0x1F9DE6E4
	static void _CLAMP_GAMEPLAY_CAM_YAW(float minimum, float maximum) { invoke<Void>(0xED2050, minimum, maximum); } // 0x8F993D26E0CA5E8E 0x749909AC
	static void _CLAMP_GAMEPLAY_CAM_PITCH(float minimum, float maximum) { invoke<Void>(0xED20F0, minimum, maximum); } // 0xA516C198B7DCA1E1 0xFA3A16E7
	static void _ANIMATE_GAMEPLAY_CAM_ZOOM(float p0, float distance) { invoke<Void>(0xED2190, p0, distance); } // 0xDF2E1F7742402E81 0x77340650
	static void _0xE9EA16D6E54CDCA4(Vehicle p0, int p1) { invoke<Void>(0xED21C0, p0, p1); } // 0xE9EA16D6E54CDCA4 0x4B22C5CB
	static void _DISABLE_FIRST_PERSON_CAM_THIS_FRAME() { invoke<Void>(0xED2230); } // 0xDE2EF5DA284CC8DF
	static void _0x59424BD75174C9B1() { invoke<Void>(0xED2250); } // 0x59424BD75174C9B1
	static int GET_FOLLOW_PED_CAM_ZOOM_LEVEL() { return invoke<int>(0xED2260); } // 0x33E6C8EFD0CD93E9 0x57583DF1
	static int GET_FOLLOW_PED_CAM_VIEW_MODE() { return invoke<int>(0xED2280); } // 0x8D4D46230B2C353A 0xA65FF946
	static void SET_FOLLOW_PED_CAM_VIEW_MODE(int viewMode) { invoke<Void>(0xED22A0, viewMode); } // 0x5A4F9EDF1673F704 0x495DBE8D
	static BOOL IS_FOLLOW_VEHICLE_CAM_ACTIVE() { return invoke<BOOL>(0xED22B0); } // 0xCBBDE6D335D6D496 0x8DD49B77
	static void _0x91EF6EE6419E5B97(BOOL p0) { invoke<Void>(0xED22E0, p0); } // 0x91EF6EE6419E5B97 0x9DB5D391
	static void SET_TIME_IDLE_DROP(BOOL p0, BOOL p1) { invoke<Void>(0xED2310, p0, p1); } // 0x9DFE13ECDC1EC196 0x92302899
	static int GET_FOLLOW_VEHICLE_CAM_ZOOM_LEVEL() { return invoke<int>(0xED2340); } // 0xEE82280AB767B690 0x8CD67DE3
	static void SET_FOLLOW_VEHICLE_CAM_ZOOM_LEVEL(int zoomLevel) { invoke<Void>(0xED2360, zoomLevel); } // 0x19464CB6E4078C8A 0x8F55EBBE
	static int GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() { return invoke<int>(0xED2370); } // 0xA4FF579AC0E3AAAE 0xA4B4DB03
	static void SET_FOLLOW_VEHICLE_CAM_VIEW_MODE(int viewMode) { invoke<Void>(0xED2390, viewMode); } // 0xAC253D7842768F48 0xC4FBBBD3
	static Any _0xEE778F8C7E1142E2(Any p0) { return invoke<Any>(0xED23A0, p0); } // 0xEE778F8C7E1142E2 0xF3B148A6
	static void _0x2A2173E46DAECD12(Any p0, Any p1) { invoke<Void>(0xED23C0, p0, p1); } // 0x2A2173E46DAECD12 0x1DEBCB45
	static Any _0x19CAFA3C87F7C2FF() { return invoke<Any>(0xED23D0); } // 0x19CAFA3C87F7C2FF
	static BOOL IS_AIM_CAM_ACTIVE() { return invoke<BOOL>(0xED2490); } // 0x68EDDA28A5976D07 0xC24B4F6F
	static BOOL _0x74BD83EA840F6BC9() { return invoke<BOOL>(0xED24F0); } // 0x74BD83EA840F6BC9 0x8F320DE4
	static BOOL IS_FIRST_PERSON_AIM_CAM_ACTIVE() { return invoke<BOOL>(0xED2530); } // 0x5E346D934122613F 0xD6280468
	static void DISABLE_AIM_CAM_THIS_UPDATE() { invoke<Void>(0xED2560); } // 0x1A31FE0049E542F6 0x1BAA7182
	static float _GET_GAMEPLAY_CAM_ZOOM() { return invoke<float>(0xED25A0); } // 0x7EC52CC40597D170 0x33951005
	static void _0x70894BD0915C5BCA(float p0) { invoke<Void>(0xED25C0, p0); } // 0x70894BD0915C5BCA 0x9F4AF763
	static void _0xCED08CBE8EBB97C7(float p0, float p1) { invoke<Void>(0xED25E0, p0, p1); } // 0xCED08CBE8EBB97C7 0x68BA0730
	static void _0x2F7F2B26DD3F18EE(float p0, float p1) { invoke<Void>(0xED2600, p0, p1); } // 0x2F7F2B26DD3F18EE 0x2F29F0D5
	static void _SET_FIRST_PERSON_CAM_PITCH_RANGE(float minAngle, float maxAngle) { invoke<Void>(0xED2770, minAngle, maxAngle); } // 0xBCFC632DB7673BF0 0x76DAC96C
	static void _SET_FIRST_PERSON_CAM_NEAR_CLIP(float distance) { invoke<Void>(0xED2810, distance); } // 0x0AF7B437918103B3 0x0E21069D
	static void _SET_THIRD_PERSON_AIM_CAM_NEAR_CLIP(float distance) { invoke<Void>(0xED2850, distance); } // 0x42156508606DE65E 0x71E9C63E
	static void _0x4008EDF7D6E48175(BOOL p0) { invoke<Void>(0xED2890, p0); } // 0x4008EDF7D6E48175 0xD1EEBC45
	static Vector3 _GET_GAMEPLAY_CAM_COORDS() { return invoke<Vector3>(0xED28E0); } // 0xA200EB1EE790F448 0x9C84BDA0
	static Vector3 _GET_GAMEPLAY_CAM_ROT(int rotationOrder) { return invoke<Vector3>(0xED2920, rotationOrder); } // 0x5B4E4C817FCC2DFB 0x1FFBEFC5
	static Vector3 _0x26903D9CD1175F2C(Any p0, Any p1) { return invoke<Vector3>(0xED29B0, p0, p1); } // 0x26903D9CD1175F2C 0xACADF916
	static float _0x80EC114669DAEFF4() { return invoke<float>(0xED2AB0); } // 0x80EC114669DAEFF4 0x721B763B
	static float _0x5F35F6732C3FBBA0(Any p0) { return invoke<float>(0xED2AD0, p0); } // 0x5F35F6732C3FBBA0 0x23E3F106
	static float _0xD0082607100D7193() { return invoke<float>(0xED2B20); } // 0xD0082607100D7193 0x457AE195
	static float _GET_GAMEPLAY_CAM_FAR_CLIP() { return invoke<float>(0xED2B40); } // 0xDFC8CBC606FDB0FC 0x46CB3A49
	static float _GET_GAMEPLAY_CAM_NEAR_DOF() { return invoke<float>(0xED2B60); } // 0xA03502FC581F7D9B 0x19297A7A
	static float _GET_GAMEPLAY_CAM_FAR_DOF() { return invoke<float>(0xED2B80); } // 0x9780F32BCAF72431 0xF24777CA
	static float _0x162F9D995753DC19() { return invoke<float>(0xED2BA0); } // 0x162F9D995753DC19 0x38992E83
	static void SET_GAMEPLAY_COORD_HINT(float x, float y, float z, int duration, int blendOutDuration, int blendInDuration, int unk) { invoke<Void>(0xED2BC0, x, y, z, duration, blendOutDuration, blendInDuration, unk); } // 0xD51ADCD2D8BC0FB3 0xF27483C9
	static void SET_GAMEPLAY_PED_HINT(Ped p0, float x1, float y1, float z1, BOOL p4, Any p5, Any p6, Any p7) { invoke<Void>(0xED2C50, p0, x1, y1, z1, p4, p5, p6, p7); } // 0x2B486269ACD548D3 0x7C27343E
	static void SET_GAMEPLAY_VEHICLE_HINT(Any p0, float p1, float p2, float p3, BOOL p4, Any p5, Any p6, Any p7) { invoke<Void>(0xED2D20, p0, p1, p2, p3, p4, p5, p6, p7); } // 0xA2297E18F3E71C2E 0x2C9A11D8
	static void SET_GAMEPLAY_OBJECT_HINT(Any p0, float p1, float p2, float p3, BOOL p4, Any p5, Any p6, Any p7) { invoke<Void>(0xED2DF0, p0, p1, p2, p3, p4, p5, p6, p7); } // 0x83E87508A2CA2AC6 0x2ED5E2F8
	static void SET_GAMEPLAY_ENTITY_HINT(Entity entity, float xOffset, float yOffset, float zOffset, BOOL p4, int p5, int p6, int p7, Any p8) { invoke<Void>(0xED2EC0, entity, xOffset, yOffset, zOffset, p4, p5, p6, p7, p8); } // 0x189E955A8313E298 0x66C32306
	static BOOL IS_GAMEPLAY_HINT_ACTIVE() { return invoke<BOOL>(0xED2F90); } // 0xE520FF1AD2785B40 0xAD8DA205
	static void STOP_GAMEPLAY_HINT(BOOL p0) { invoke<Void>(0xED2FD0, p0); } // 0xF46C581C61718916 0x1BC28B7B
	static void _0xCCD078C2665D2973(BOOL p0) { invoke<Void>(0xED3010, p0); } // 0xCCD078C2665D2973 0xCAFEE798
	static void _0x247ACBC4ABBC9D1C(BOOL p0) { invoke<Void>(0xED3020, p0); } // 0x247ACBC4ABBC9D1C
	static Any _0xBF72910D0F26F025() { return invoke<Any>(0xED3060); } // 0xBF72910D0F26F025
	static void SET_GAMEPLAY_HINT_FOV(float FOV) { invoke<Void>(0xED3090, FOV); } // 0x513403FB9C56211F 0x96FD173B
	static void _0xF8BDBF3D573049A1(float p0) { invoke<Void>(0xED30E0, p0); } // 0xF8BDBF3D573049A1 0x72E8CD3A
	static void _0xD1F8363DFAD03848(float p0) { invoke<Void>(0xED3120, p0); } // 0xD1F8363DFAD03848 0x79472AE3
	static void _0x5D7B620DAE436138(float p0) { invoke<Void>(0xED3160, p0); } // 0x5D7B620DAE436138 0xFC7464A0
	static void _0xC92717EF615B6704(float p0) { invoke<Void>(0xED31A0, p0); } // 0xC92717EF615B6704 0x3554AA0E
	static void GET_IS_MULTIPLAYER_BRIEF(BOOL p0) { invoke<Void>(0xED31E0, p0); } // 0xE3433EADAAF7EE40 0x2F0CE859
	static void SET_CINEMATIC_BUTTON_ACTIVE(BOOL p0) { invoke<Void>(0xED3210, p0); } // 0x51669F7D1FB53D9F 0x3FBC5D00
	static BOOL IS_CINEMATIC_CAM_RENDERING() { return invoke<BOOL>(0xED3270); } // 0xB15162CB5826E9E8 0x80471AD9
	static void SHAKE_CINEMATIC_CAM(char* p0, float p1) { invoke<Void>(0xED32A0, p0, p1); } // 0xDCE214D9ED58F3CF 0x61815F31
	static BOOL IS_CINEMATIC_CAM_SHAKING() { return invoke<BOOL>(0xED32E0); } // 0xBBC08F6B4CB8FF0A 0x8376D939
	static void SET_CINEMATIC_CAM_SHAKE_AMPLITUDE(float p0) { invoke<Void>(0xED3310, p0); } // 0xC724C701C30B2FE7 0x67510C4B
	static void STOP_CINEMATIC_CAM_SHAKING(BOOL p0) { invoke<Void>(0xED3340, p0); } // 0x2238E588E588A6D7 0x71C12904
	static void _DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME() { invoke<Void>(0xED3370); } // 0xADFF1B2A555F5FBA 0x5AC6DAC9
	static void _0x62ECFCFDEE7885D6() { invoke<Void>(0xED3390); } // 0x62ECFCFDEE7885D6 0x837F8581
	static void _0x9E4CFFF989258472() { invoke<Void>(0xED33B0); } // 0x9E4CFFF989258472 0x65DDE8AF
	static void _0xF4F2C0D4EE209E20() { invoke<Void>(0xED33D0); } // 0xF4F2C0D4EE209E20 0xD75CDD75
	static BOOL _0xCA9D2AA3E326D720() { return invoke<BOOL>(0xED33F0); } // 0xCA9D2AA3E326D720 0x96A07066
	static BOOL _IS_IN_VEHICLE_CAM_DISABLED() { return invoke<BOOL>(0xED3420); } // 0x4F32C0D5A90A9B40
	static void CREATE_CINEMATIC_SHOT(Any p0, int p1, Any p2, Entity entity) { invoke<Void>(0xED3450, p0, p1, p2, entity); } // 0x741B0129D4560F31 0xAC494E35
	static BOOL IS_CINEMATIC_SHOT_ACTIVE(Any p0) { return invoke<BOOL>(0xED3470, p0); } // 0xCC9F3371A7C28BC9 0xA4049042
	static void STOP_CINEMATIC_SHOT(Any p0) { invoke<Void>(0xED34E0, p0); } // 0x7660C6E75D3A078E 0xD78358C5
	static void _0xA41BCD7213805AAC(BOOL p0) { invoke<Void>(0xED3540, p0); } // 0xA41BCD7213805AAC 0xFBB85E02
	static void _0xDC9DA9E8789F5246() { invoke<Void>(0xED35A0); } // 0xDC9DA9E8789F5246 0x4938C82F
	static void SET_CINEMATIC_MODE_ACTIVE(BOOL p0) { invoke<Void>(0xED35C0, p0); } // 0xDCF0754AC3D6FD4E 0x2009E747
	static Any _0x1F2300CB7FA7B7F6() { return invoke<Any>(0xED3620); } // 0x1F2300CB7FA7B7F6 0x6739AD55
	static Any _0x17FCA7199A530203() { return invoke<Any>(0xED3640); } // 0x17FCA7199A530203
	static void STOP_CUTSCENE_CAM_SHAKING() { invoke<Void>(0xED36B0); } // 0xDB629FFD9285FA06 0xF07D603D
	static void _0x12DED8CA53D47EA5(float p0) { invoke<Void>(0xED3700, p0); } // 0x12DED8CA53D47EA5 0x067BA6F5
	static Entity _0x89215EC747DF244A(float p0, int p1, float p2, float p3, float p4, float p5, float p6, int p7, int p8) { return invoke<Entity>(0xED3740, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0x89215EC747DF244A 0xFD99BE2B
	static void _0x5A43C76F7FC7BA5F() { invoke<Void>(0xED37A0); } // 0x5A43C76F7FC7BA5F 0xE206C450
	static void _SET_CAM_EFFECT(int p0) { invoke<Void>(0xED37B0, p0); } // 0x80C8B1846639BB19 0xB06CCD38
	static void _0x5C41E6BABC9E2112(Any p0) { invoke<Void>(0xED37C0, p0); } // 0x5C41E6BABC9E2112
	static void _0x21E253A7F8DA5DFB(char* vehicleName) { invoke<Void>(0xED37F0, vehicleName); } // 0x21E253A7F8DA5DFB
	static void _0x11FA5D3479C7DD47(Any p0) { invoke<Void>(0xED3820, p0); } // 0x11FA5D3479C7DD47
	static Any _0xEAF0FA793D05C592() { return invoke<Any>(0xED3850); } // 0xEAF0FA793D05C592
	static Any _0x8BFCEB5EA1B161B6() { return invoke<Any>(0xED3890); } // 0x8BFCEB5EA1B161B6
}

namespace WEAPON
{
	static void ENABLE_LASER_SIGHT_RENDERING(BOOL toggle) { invoke<Void>(0x103A3B0, toggle); } // 0xC8B46D7727D864AA 0xE3438955
	static Hash GET_WEAPON_COMPONENT_TYPE_MODEL(Hash componentHash) { return invoke<Hash>(0x103A3D0, componentHash); } // 0x0DB57B41EC1DB083 0x324FA47A
	static Hash GET_WEAPONTYPE_MODEL(Hash weaponHash) { return invoke<Hash>(0x103A490, weaponHash); } // 0xF46CDC33180FDA94 0x44E1C269
	static Hash GET_WEAPONTYPE_SLOT(Hash weaponHash) { return invoke<Hash>(0x103A560, weaponHash); } // 0x4215460B9B8B7FA0 0x2E3759AF
	static Hash GET_WEAPONTYPE_GROUP(Hash weaponHash) { return invoke<Hash>(0x103A5D0, weaponHash); } // 0xC3287EE3050FB74C 0x5F2DE833
	static void SET_CURRENT_PED_WEAPON(Ped ped, Hash weaponHash, BOOL equipNow) { invoke<Void>(0x103A7B0, ped, weaponHash, equipNow); } // 0xADF692B254977C0C 0xB8278882
	static BOOL GET_CURRENT_PED_WEAPON(Ped ped, Hash* weaponHash, BOOL p2) { return invoke<BOOL>(0x103A7D0, ped, weaponHash, p2); } // 0x3A87E44BB9A01D54 0xB0237302
	static Entity GET_CURRENT_PED_WEAPON_ENTITY_INDEX(Ped ped) { return invoke<Entity>(0x103A870, ped); } // 0x3B390A939AF0B5FC 0x5D73CD20
	static Hash GET_BEST_PED_WEAPON(Ped ped, BOOL p1) { return invoke<Hash>(0x103A8E0, ped, p1); } // 0x8483E98E8B888AE2 0xB998D444
	static BOOL SET_CURRENT_PED_VEHICLE_WEAPON(Ped ped, Hash weaponHash) { return invoke<BOOL>(0x103A950, ped, weaponHash); } // 0x75C55983C2C39DAA 0x8E6F2AF1
	static BOOL GET_CURRENT_PED_VEHICLE_WEAPON(Ped ped, Hash* weaponHash) { return invoke<BOOL>(0x103A980, ped, weaponHash); } // 0x1017582BCD3832DC 0xF26C5D65
	static BOOL IS_PED_ARMED(Ped ped, int p1) { return invoke<BOOL>(0x103AA00, ped, p1); } // 0x475768A975D5AD17 0x0BFC892C
	static BOOL IS_WEAPON_VALID(Hash weaponHash) { return invoke<BOOL>(0x103AA30, weaponHash); } // 0x937C71165CF334B3 0x38CA2954
	static BOOL HAS_PED_GOT_WEAPON(Ped ped, Hash weaponHash, BOOL p2) { return invoke<BOOL>(0x103AAA0, ped, weaponHash, p2); } // 0x8DECB02F88F428BC 0x43D2FA82
	static BOOL IS_PED_WEAPON_READY_TO_SHOOT(Ped ped) { return invoke<BOOL>(0x103AAD0, ped); } // 0xB80CA294F2F26749 0x02A32CB0
	static Hash GET_PED_WEAPONTYPE_IN_SLOT(Ped ped, Hash weaponSlot) { return invoke<Hash>(0x103AB40, ped, weaponSlot); } // 0xEFFED78E9011134D 0x9BC64E16
	static int GET_AMMO_IN_PED_WEAPON(Ped ped, Hash weaponhash) { return invoke<int>(0x103AC00, ped, weaponhash); } // 0x015A522136D7F951 0x0C755733
	static void ADD_AMMO_TO_PED(Ped ped, Hash weaponHash, int ammo) { invoke<Void>(0x103AC30, ped, weaponHash, ammo); } // 0x78F0424C34306220 0x7F0580C7
	static void SET_PED_AMMO(Ped ped, Hash weaponHash, int ammo) { invoke<Void>(0x103ACA0, ped, weaponHash, ammo); } // 0x14E56BC5B5DB6A19 0xBF90DF1A
	static void SET_PED_INFINITE_AMMO(Ped ped, BOOL toggle, Hash weaponHash) { invoke<Void>(0x103ACC0, ped, toggle, weaponHash); } // 0x3EDCB0505123623B 0x9CB8D278
	static void SET_PED_INFINITE_AMMO_CLIP(Ped ped, BOOL toggle) { invoke<Void>(0x103ACE0, ped, toggle); } // 0x183DADC6AA953186 0x5A5E3B67
	static void GIVE_WEAPON_TO_PED(Ped ped, Hash weaponHash, int ammoCount, BOOL isHidden, BOOL equipNow) { invoke<Void>(0x103AD50, ped, weaponHash, ammoCount, isHidden, equipNow); } // 0xBF0FD6E56C964FCB 0xC4D88A85
	static void GIVE_DELAYED_WEAPON_TO_PED(Ped ped, Hash weaponHash, int ammoCount, BOOL equipNow) { invoke<Void>(0x103AD80, ped, weaponHash, ammoCount, equipNow); } // 0xB282DC6EBD803C75 0x5868D20D
	static void REMOVE_ALL_PED_WEAPONS(Ped ped, BOOL p1) { invoke<Void>(0x103ADA0, ped, p1); } // 0xF25DF915FA38C5F3 0xA44CE817
	static void REMOVE_WEAPON_FROM_PED(Ped ped, Hash weaponHash) { invoke<Void>(0x103AE30, ped, weaponHash); } // 0x4899CB088EDF59B8 0x9C37F220
	static void HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(Ped ped, BOOL toggle) { invoke<Void>(0x103AEC0, ped, toggle); } // 0x6F6981D2253C208F 0x00CFD6E9
	static void SET_PED_CURRENT_WEAPON_VISIBLE(Ped ped, BOOL visible, BOOL deselectWeapon, BOOL p3, BOOL p4) { invoke<Void>(0x103AF50, ped, visible, deselectWeapon, p3, p4); } // 0x0725A4CCFDED9A70 0x00BECD77
	static void SET_PED_DROPS_WEAPONS_WHEN_DEAD(Ped ped, BOOL toggle) { invoke<Void>(0x103AF90, ped, toggle); } // 0x476AE72C1D19D1A8 0x8A444056
	static BOOL HAS_PED_BEEN_DAMAGED_BY_WEAPON(Ped ped, Hash weaponHash, int weaponType) { return invoke<BOOL>(0x103AFF0, ped, weaponHash, weaponType); } // 0x2D343D2219CD027A 0xCDFBBCC6
	static void CLEAR_PED_LAST_WEAPON_DAMAGE(Ped ped) { invoke<Void>(0x103B070, ped); } // 0x0E98F88A24C5F4B8 0x52C68832
	static BOOL HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(Entity entity, Hash weaponHash, int weaponType) { return invoke<BOOL>(0x103B0D0, entity, weaponHash, weaponType); } // 0x131D401334815E94 0x6DAABB39
	static void CLEAR_ENTITY_LAST_WEAPON_DAMAGE(Entity entity) { invoke<Void>(0x103B160, entity); } // 0xAC678E40BE7C74D2 0xCEC2732B
	static void SET_PED_DROPS_WEAPON(Ped ped) { invoke<Void>(0x103B1C0, ped); } // 0x6B7513D9966FBEC0 0x3D3329FA
	static void SET_PED_DROPS_INVENTORY_WEAPON(Ped ped, Hash weaponHash, float xOffset, float yOffset, float zOffset, int ammoCount) { invoke<Void>(0x103B1D0, ped, weaponHash, xOffset, yOffset, zOffset, ammoCount); } // 0x208A1888007FC0E6 0x81FFB874
	static int GET_MAX_AMMO_IN_CLIP(Ped ped, Hash weaponHash, BOOL p2) { return invoke<int>(0x103B1F0, ped, weaponHash, p2); } // 0xA38DCFFCEA8962FA 0x6961E2A4
	static BOOL GET_AMMO_IN_CLIP(Ped ped, Hash weaponHash, int* ammo) { return invoke<BOOL>(0x103B220, ped, weaponHash, ammo); } // 0x2E1202248937775C 0x73C100C3
	static BOOL SET_AMMO_IN_CLIP(Ped ped, Hash weaponHash, int ammo) { return invoke<BOOL>(0x103B2D0, ped, weaponHash, ammo); } // 0xDCD2A934D65CB497 0xA54B0B10
	static BOOL GET_MAX_AMMO(Ped ped, Hash weaponHash, int* ammo) { return invoke<BOOL>(0x103B300, ped, weaponHash, ammo); } // 0xDC16122C7A20C933 0x0B294796
	static void SET_PED_AMMO_BY_TYPE(Ped ped, Any ammoType, int ammo) { invoke<Void>(0x103B4F0, ped, ammoType, ammo); } // 0x5FD1E1F011E76D7E 0x311C52BB
	static int GET_PED_AMMO_BY_TYPE(Ped ped, Any ammoType) { return invoke<int>(0x103B560, ped, ammoType); } // 0x39D22031557946C1 0x54077C4D
	static void SET_PED_AMMO_TO_DROP(Any p0, Any p1) { invoke<Void>(0x103B5D0, p0, p1); } // 0xA4EFEF9440A5B0EF 0x2386A307
	static void _0xE620FD3512A04F18(float p0) { invoke<Void>(0x103B630, p0); } // 0xE620FD3512A04F18 0xD6460EA2
	static Hash GET_PED_AMMO_TYPE_FROM_WEAPON(Ped ped, Hash weaponHash) { return invoke<Hash>(0x103B650, ped, weaponHash); } // 0x7FEAD38B326B9F74 0x09337863
	static BOOL GET_PED_LAST_WEAPON_IMPACT_COORD(Ped ped, Vector3* coords) { return invoke<BOOL>(0x103B730, ped, coords); } // 0x6C4D0409BA1A2BC2 0x9B266079
	static void SET_PED_GADGET(Ped ped, Hash gadgetHash, BOOL p2) { invoke<Void>(0x103B830, ped, gadgetHash, p2); } // 0xD0D7B1E680ED4A1A 0x8A256D0A
	static BOOL GET_IS_PED_GADGET_EQUIPPED(Ped ped, Hash gadgetHash) { return invoke<BOOL>(0x103B850, ped, gadgetHash); } // 0xF731332072F5156C 0x8DDD0B5B
	static Hash GET_SELECTED_PED_WEAPON(Ped ped) { return invoke<Hash>(0x103B8C0, ped); } // 0x0A6DB4965674D243 0xD240123E
	static void EXPLODE_PROJECTILES(Ped ped, Hash weaponHash, BOOL p2) { invoke<Void>(0x103B920, ped, weaponHash, p2); } // 0xFC4BD125DE7611E4 0x35A0B955
	static void REMOVE_ALL_PROJECTILES_OF_TYPE(Hash weaponHash, BOOL p1) { invoke<Void>(0x103B940, weaponHash, p1); } // 0xFC52E0F37E446528 0xA5F89919
	static float _GET_LOCKON_RANGE_OF_CURRENT_PED_WEAPON(Ped ped) { return invoke<float>(0x103B9D0, ped); } // 0x840F03E9041E2C9C 0x3612110D
	static float GET_MAX_RANGE_OF_CURRENT_PED_WEAPON(Ped ped) { return invoke<float>(0x103BA00, ped); } // 0x814C9D19DFD69679 0xB2B2BBAA
	static BOOL HAS_VEHICLE_GOT_PROJECTILE_ATTACHED(Ped driver, Vehicle vehicle, Hash weaponHash, Any p3) { return invoke<BOOL>(0x103BA30, driver, vehicle, weaponHash, p3); } // 0x717C8481234E3B88 0xA57E2E80
	static void GIVE_WEAPON_COMPONENT_TO_PED(Ped ped, Hash weaponHash, Hash componentHash) { invoke<Void>(0x103BA60, ped, weaponHash, componentHash); } // 0xD966D51AA5B28BB9 0x3E1E286D
	static void REMOVE_WEAPON_COMPONENT_FROM_PED(Ped ped, Hash weaponHash, Hash componentHash) { invoke<Void>(0x103BAD0, ped, weaponHash, componentHash); } // 0x1E8BE90C74FB4C09 0x412AA00D
	static BOOL HAS_PED_GOT_WEAPON_COMPONENT(Ped ped, Hash weaponHash, Hash componentHash) { return invoke<BOOL>(0x103BB40, ped, weaponHash, componentHash); } // 0xC593212475FAE340 0xDC0FC145
	static BOOL IS_PED_WEAPON_COMPONENT_ACTIVE(Ped ped, Hash weaponHash, Hash componentHash) { return invoke<BOOL>(0x103BB70, ped, weaponHash, componentHash); } // 0x0D78DE0572D3969E 0x7565FB19
	static BOOL _PED_SKIP_NEXT_RELOADING(Ped ped) { return invoke<BOOL>(0x103BBA0, ped); } // 0x8C0D57EA686FAD87 0x82EEAF0F
	static BOOL MAKE_PED_RELOAD(Ped ped) { return invoke<BOOL>(0x103BC00, ped); } // 0x20AE33F3AC9C0033 0x515292C2
	static void REQUEST_WEAPON_ASSET(Hash weaponHash, int p1, int p2) { invoke<Void>(0x103BC90, weaponHash, p1, p2); } // 0x5443438F033E29C3 0x65D139A5
	static BOOL HAS_WEAPON_ASSET_LOADED(Hash weaponHash) { return invoke<BOOL>(0x103BD50, weaponHash); } // 0x36E353271F0E90EE 0x1891D5BB
	static void REMOVE_WEAPON_ASSET(Hash weaponHash) { invoke<Void>(0x103BD80, weaponHash); } // 0xAA08EF13F341C8FC 0x2C0DFE3C
	static Object CREATE_WEAPON_OBJECT(Hash weaponHash, int ammoCount, float x, float y, float z, BOOL showWorldModel, float heading, Any p7) { return invoke<Object>(0x103BE10, weaponHash, ammoCount, x, y, z, showWorldModel, heading, p7); } // 0x9541D3CF0D398F36 0x62F5987F
	static void GIVE_WEAPON_COMPONENT_TO_WEAPON_OBJECT(Object weaponObject, Hash addonHash) { invoke<Void>(0x103BE70, weaponObject, addonHash); } // 0x33E179436C0B31DB 0xF7612A37
	static void REMOVE_WEAPON_COMPONENT_FROM_WEAPON_OBJECT(Any p0, Any p1) { invoke<Void>(0x103BEC0, p0, p1); } // 0xF7D82B0D66777611 0xA6E7ED3C
	static BOOL HAS_WEAPON_GOT_WEAPON_COMPONENT(Object weapon, Hash addonHash) { return invoke<BOOL>(0x103BF40, weapon, addonHash); } // 0x76A18844E743BF91 0x1D368510
	static void GIVE_WEAPON_OBJECT_TO_PED(Object weaponObject, Ped ped) { invoke<Void>(0x103BFD0, weaponObject, ped); } // 0xB1FA61371AF7C4B7 0x639AF3EF
	static BOOL DOES_WEAPON_TAKE_WEAPON_COMPONENT(Hash weaponHash, Hash componentHash) { return invoke<BOOL>(0x103BFE0, weaponHash, componentHash); } // 0x5CEE3DF569CECAB0 0xB1817BAA
	static Object GET_WEAPON_OBJECT_FROM_PED(Ped ped, BOOL p1) { return invoke<Object>(0x103C010, ped, p1); } // 0xCAE1DC9A0E22A16D 0xDF939A38
	static void SET_PED_WEAPON_TINT_INDEX(Ped ped, Hash weaponHash, int tintIndex) { invoke<Void>(0x103C090, ped, weaponHash, tintIndex); } // 0x50969B9B89ED5738 0xEB2A7B23
	static int GET_PED_WEAPON_TINT_INDEX(Ped ped, Hash weaponHash) { return invoke<int>(0x103C0B0, ped, weaponHash); } // 0x2B9EEDC07BD06B9F 0x3F9C90A7
	static void SET_WEAPON_OBJECT_TINT_INDEX(Object weapon, int tintIndex) { invoke<Void>(0x103C0E0, weapon, tintIndex); } // 0xF827589017D4E4A9 0x44ACC1DA
	static int GET_WEAPON_OBJECT_TINT_INDEX(Object weapon) { return invoke<int>(0x103C140, weapon); } // 0xCD183314F7CD2E57 0xD91D9576
	static int GET_WEAPON_TINT_COUNT(Hash weaponHash) { return invoke<int>(0x103C1B0, weaponHash); } // 0x5DCF6C5CAB2E9BF7 0x99E4EAAB
	static BOOL GET_WEAPON_HUD_STATS(Hash weaponHash, Any* outData) { return invoke<BOOL>(0x103C430, weaponHash, outData); } // 0xD92C739EE34C9EBA 0xA9AD3D98
	static BOOL GET_WEAPON_COMPONENT_HUD_STATS(Hash componentHash, int* outData) { return invoke<BOOL>(0x103C4E0, componentHash, outData); } // 0xB3CAF387AE12E9F8 0xBB5498F4
	static float _0x3133B907D8B32053(Any p0, Any p1) { return invoke<float>(0x103C580, p0, p1); } // 0x3133B907D8B32053
	static int GET_WEAPON_CLIP_SIZE(Hash weaponHash) { return invoke<int>(0x103C5B0, weaponHash); } // 0x583BE370B1EC6EB4 0x8D515E66
	static void SET_PED_CHANCE_OF_FIRING_BLANKS(Ped ped, float xBias, float yBias) { invoke<Void>(0x103C690, ped, xBias, yBias); } // 0x8378627201D5497D 0xB4F44C6E
	static Entity _0xB4C8D77C80C0421E(Ped ped, float p1) { return invoke<Entity>(0x103C700, ped, p1); } // 0xB4C8D77C80C0421E 0xEC2E5304
	static void REQUEST_WEAPON_HIGH_DETAIL_MODEL(Entity weaponObject) { invoke<Void>(0x103C730, weaponObject); } // 0x48164DBB970AC3F0 0xE3BD00F9
	static BOOL IS_PED_CURRENT_WEAPON_SILENCED(Ped ped) { return invoke<BOOL>(0x103C7E0, ped); } // 0x65F0C5AE05943EC7 0xBAF7BFBE
	static BOOL SET_WEAPON_SMOKEGRENADE_ASSIGNED(Ped ped) { return invoke<BOOL>(0x103C850, ped); } // 0x4B7620C47217126C 0x76876154
	static Any SET_FLASH_LIGHT_FADE_DISTANCE(float distance) { return invoke<Any>(0x103C8D0, distance); } // 0xCEA66DAD478CD39B 0xB0127EA7
	static void SET_WEAPON_ANIMATION_OVERRIDE(Ped ped, Hash animStyle) { invoke<Void>(0x103C8E0, ped, animStyle); } // 0x1055AC3A667F09D9 0xA5DF7484
	static int GET_WEAPON_DAMAGE_TYPE(Hash weaponHash) { return invoke<int>(0x103C970, weaponHash); } // 0x3BE0BB12D25FB305 0x013AFC13
	static void _0xE4DCEC7FD5B739A5(Ped ped) { invoke<Void>(0x103C9E0, ped); } // 0xE4DCEC7FD5B739A5 0x64646F1D
	static BOOL CAN_USE_WEAPON_ON_PARACHUTE(Hash weaponHash) { return invoke<BOOL>(0x103CA40, weaponHash); } // 0xBC7BE5ABC0879F74 0x135E7AD4
}

namespace ITEMSET
{
	static Vehicle CREATE_ITEMSET(Vehicle distri) { return invoke<Vehicle>(0xF1F720, distri); } // 0x35AD299F50D91B24 0x0A113B2C
	static void DESTROY_ITEMSET(Any p0) { invoke<Void>(0xF1F7A0, p0); } // 0xDE18220B1C183EDA 0x83CE1A4C
	static BOOL IS_ITEMSET_VALID(Any p0) { return invoke<BOOL>(0xF1F7E0, p0); } // 0xB1B1EA596344DFAB 0xD201FC29
	static BOOL ADD_TO_ITEMSET(Any p0, Any p1) { return invoke<BOOL>(0xF1F820, p0, p1); } // 0xE3945201F14637DD 0x6B0FE61B
	static void REMOVE_FROM_ITEMSET(Any p0, Any p1) { invoke<Void>(0xF1F890, p0, p1); } // 0x25E68244B0177686 0xA9565228
	static Any GET_ITEMSET_SIZE(ScrHandle x) { return invoke<Any>(0xF1F8F0, x); } // 0xD9127E83ABF7C631 0x2B31F41A
	static Any GET_INDEXED_ITEM_IN_ITEMSET(Any p0, Any p1) { return invoke<Any>(0xF1F940, p0, p1); } // 0x7A197E2521EE2BAB 0x3F712874
	static BOOL IS_IN_ITEMSET(Any p0, Any p1) { return invoke<BOOL>(0xF1F990, p0, p1); } // 0x2D0FC594D1E9C107 0x0D4B9730
	static void CLEAN_ITEMSET(Any p0) { invoke<Void>(0xF1FA00, p0); } // 0x41BC0D722FC04221 0x919A4858
}

namespace STREAMING
{
	static void LOAD_ALL_OBJECTS_NOW() { invoke<Void>(0xFE2E30); } // 0xBD6E84632DD4CB3F 0xC9DBDA90
	static void LOAD_SCENE(float x, float y, float z) { invoke<Void>(0xFE2E50, x, y, z); } // 0x4448EB75B4904BDB 0xB72403F5
	static Vector3* NETWORK_UPDATE_LOAD_SCENE() { return invoke<Vector3*>(0xFE2ED0); } // 0xC4582015556D1C46 0xC76E023C
	static BOOL IS_NETWORK_LOADING_SCENE() { return invoke<BOOL>(0xFE2F00); } // 0x41CA5A33160EA4AB 0x6DCFC021
	static void SET_INTERIOR_ACTIVE(int interiorID, BOOL toggle) { invoke<Void>(0xFE2F20, interiorID, toggle); } // 0xE37B76C387BE28ED 0xE1013910
	static void REQUEST_MODEL(Hash model) { invoke<Void>(0xFE2F40, model); } // 0x963D27A58DF860AC 0xFFF1B500
	static void REQUEST_MENU_PED_MODEL(Hash model) { invoke<Void>(0xFE2F50, model); } // 0xA0261AEF7ACFC51E 0x48CEB6B4
	static BOOL HAS_MODEL_LOADED(Hash model) { return invoke<BOOL>(0xFE2F70, model); } // 0x98A4EB5D89A0C952 0x62BFDB37
	static void _REQUEST_INTERIOR_ROOM_BY_NAME(int interiorID, char* roomName) { invoke<Void>(0xFE3030, interiorID, roomName); } // 0x8A7A40100EDFEC58 0x939243FB
	static void SET_MODEL_AS_NO_LONGER_NEEDED(Hash model) { invoke<Void>(0xFE30A0, model); } // 0xE532F5D78798DAAB 0xAE0F069E
	static BOOL IS_MODEL_IN_CDIMAGE(Hash model) { return invoke<BOOL>(0xFE3110, model); } // 0x35B9E0803292B641 0x1094782F
	static BOOL IS_MODEL_VALID(Hash model) { return invoke<BOOL>(0xFE3180, model); } // 0xC0296A2EDF545E92 0xAF8F8E9D
	static BOOL IS_MODEL_A_VEHICLE(Hash model) { return invoke<BOOL>(0xFE3260, model); } // 0x19AAC8F07BFEC53E 0xFFFC85D4
	static void REQUEST_COLLISION_AT_COORD(float x, float y, float z) { invoke<Void>(0xFE32D0, x, y, z); } // 0x07503F7948F491A7 0xCD9805E7
	static void REQUEST_COLLISION_FOR_MODEL(Hash model) { invoke<Void>(0xFE3310, model); } // 0x923CB32A3B874FCB 0x3930C042
	static BOOL HAS_COLLISION_FOR_MODEL_LOADED(Hash model) { return invoke<BOOL>(0xFE3320, model); } // 0x22CCA434E368F03A 0x41A094F8
	static void REQUEST_ADDITIONAL_COLLISION_AT_COORD(float x, float y, float z) { invoke<Void>(0xFE33C0, x, y, z); } // 0xC9156DC11411A9EA 0xC2CC1DF2
	static BOOL DOES_ANIM_DICT_EXIST(char* animDict) { return invoke<BOOL>(0xFE3400, animDict); } // 0x2DA49C3B79856961 0xCD31C872
	static void REQUEST_ANIM_DICT(char* animDict) { invoke<Void>(0xFE3460, animDict); } // 0xD3BD40951412FEF6 0xDCA96950
	static BOOL HAS_ANIM_DICT_LOADED(char* animDict) { return invoke<BOOL>(0xFE3470, animDict); } // 0xD031A9162D01088C 0x05E6763C
	static void REMOVE_ANIM_DICT(char* animDict) { invoke<Void>(0xFE34F0, animDict); } // 0xF66A602F829E2A06 0x0AE050B5
	static void REQUEST_ANIM_SET(char* animSet) { invoke<Void>(0xFE3570, animSet); } // 0x6EA47DAE7FAD0EED 0x2988B3FC
	static BOOL HAS_ANIM_SET_LOADED(char* animSet) { return invoke<BOOL>(0xFE3580, animSet); } // 0xC4EA073D86FB29B0 0x4FFF397D
	static void REMOVE_ANIM_SET(char* animSet) { invoke<Void>(0xFE3610, animSet); } // 0x16350528F93024B3 0xD04A817A
	static void REQUEST_CLIP_SET(char* clipSet) { invoke<Void>(0xFE36A0, clipSet); } // 0xD2A71E1A77418A49 0x546C627A
	static BOOL HAS_CLIP_SET_LOADED(char* clipSet) { return invoke<BOOL>(0xFE36B0, clipSet); } // 0x318234F4F3738AF3 0x230D5455
	static void REMOVE_CLIP_SET(char* clipSet) { invoke<Void>(0xFE3740, clipSet); } // 0x01F73A131C18CD94 0x1E21F7AA
	static void REQUEST_IPL(char* iplName) { invoke<Void>(0xFE37D0, iplName); } // 0x41B4893843BBDB74 0x3B70D1DB
	static void REMOVE_IPL(char* iplName) { invoke<Void>(0xFE3830, iplName); } // 0xEE6C5AD3ECE0A82D 0xDF7CBD36
	static BOOL IS_IPL_ACTIVE(char* iplName) { return invoke<BOOL>(0xFE3840, iplName); } // 0x88A741E44A2B3495 0xB2C33714
	static void SET_STREAMING(BOOL toggle) { invoke<Void>(0xFE3890, toggle); } // 0x6E0C692677008888 0x27EF6CB2
	static void SET_GAME_PAUSES_FOR_STREAMING(BOOL toggle) { invoke<Void>(0xFE38B0, toggle); } // 0x717CD6E6FAEBBEDC 0x9211A28A
	static void SET_REDUCE_PED_MODEL_BUDGET(BOOL toggle) { invoke<Void>(0xFE38D0, toggle); } // 0x77B5F9A36BF96710 0xAFCB2B86
	static void SET_REDUCE_VEHICLE_MODEL_BUDGET(BOOL toggle) { invoke<Void>(0xFE38F0, toggle); } // 0x80C527893080CCF3 0xCDB4FB7E
	static void SET_DITCH_POLICE_MODELS(BOOL toggle) { invoke<Void>(0xFE3910, toggle); } // 0x42CBE54462D92634 0x3EA7FCE4
	static int GET_NUMBER_OF_STREAMING_REQUESTS() { return invoke<int>(0xFE3920); } // 0x4060057271CEBC89 0xC2EE9A02
	static void REQUEST_PTFX_ASSET() { invoke<Void>(0xFE3940); } // 0x944955FB2A3935C8 0x2C649263
	static BOOL HAS_PTFX_ASSET_LOADED() { return invoke<BOOL>(0xFE3950); } // 0xCA7D9B86ECA7481B 0x3EFF96BE
	static void REMOVE_PTFX_ASSET() { invoke<Void>(0xFE3970); } // 0x88C6814073DD4A73 0xC10F178C
	static void REQUEST_NAMED_PTFX_ASSET(char* assetName) { invoke<Void>(0xFE3980, assetName); } // 0xB80D8756B4668AB6 0xCFEA19A9
	static BOOL HAS_NAMED_PTFX_ASSET_LOADED(char* assetName) { return invoke<BOOL>(0xFE3990, assetName); } // 0x8702416E512EC454 0x9ACC6446
	static void _REMOVE_NAMED_PTFX_ASSET(char* assetName) { invoke<Void>(0xFE39C0, assetName); } // 0x5F61EBBE1A00F96D
	static void SET_VEHICLE_POPULATION_BUDGET(int p0) { invoke<Void>(0xFE39D0, p0); } // 0xCB9E1EB3BE2AF4E9 0x1D56993C
	static void SET_PED_POPULATION_BUDGET(int p0) { invoke<Void>(0xFE39F0, p0); } // 0x8C95333CFC3340F3 0xD2D026CD
	static void CLEAR_FOCUS() { invoke<Void>(0xFE3A10); } // 0x31B73D1EA9F01DA2 0x34D91E7A
	static void _SET_FOCUS_AREA(float x, float y, float z, float offsetX, float offsetY, float offsetZ) { invoke<Void>(0xFE3A20, x, y, z, offsetX, offsetY, offsetZ); } // 0xBB7454BAFF08FE25 0x14680A60
	static void SET_FOCUS_ENTITY(Entity entity) { invoke<Void>(0xFE3A30, entity); } // 0x198F77705FA0931D 0x18DB04AC
	static BOOL IS_ENTITY_FOCUS(Entity entity) { return invoke<BOOL>(0xFE3A40, entity); } // 0x2DDFF3FB9075D747 0xB456D707
	static void _0x0811381EF5062FEC(Entity p0) { invoke<Void>(0xFE3AA0, p0); } // 0x0811381EF5062FEC
	static void _0xAF12610C644A35C9(char* p0, BOOL p1) { invoke<Void>(0xFE3B20, p0, p1); } // 0xAF12610C644A35C9 0x403CD434
	static void _0x4E52E752C76E7E7A(Any p0) { invoke<Void>(0xFE3B50, p0); } // 0x4E52E752C76E7E7A 0xA07BAEB9
	static Any FORMAT_FOCUS_HEADING(float x, float y, float z, float rad, Any p4, Any p5) { return invoke<Any>(0xFE3B60, x, y, z, rad, p4, p5); } // 0x219C7B8D53E429FD 0x10B6AB36
	static Any _0x1F3F018BC3AFA77C(float p0, float p1, float p2, float p3, float p4, float p5, float p6, Any p7, Any p8) { return invoke<Any>(0xFE3C60, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0x1F3F018BC3AFA77C 0x72344191
	static Any _0x0AD9710CEE2F590F(float p0, float p1, float p2, float p3, float p4, float p5, Any p6) { return invoke<Any>(0xFE3D40, p0, p1, p2, p3, p4, p5, p6); } // 0x0AD9710CEE2F590F 0xC0157255
	static void _0x1EE7D8DF4425F053(Any p0) { invoke<Void>(0xFE3DF0, p0); } // 0x1EE7D8DF4425F053 0xE80F8ABE
	static Any _0x7D41E9D2D17C5B2D(Any p0) { return invoke<Any>(0xFE3E10, p0); } // 0x7D41E9D2D17C5B2D 0x1B3521F4
	static Any _0x07C313F94746702C(Any p0) { return invoke<Any>(0xFE3E40, p0); } // 0x07C313F94746702C 0x42CFE9C0
	static Any _0xBC9823AB80A3DCAC() { return invoke<Any>(0xFE3E50); } // 0xBC9823AB80A3DCAC 0x56253356
	static BOOL NEW_LOAD_SCENE_START(float p0, float p1, float p2, float p3, float p4, float p5, float p6, Any p7) { return invoke<BOOL>(0xFE3E60, p0, p1, p2, p3, p4, p5, p6, p7); } // 0x212A8D0D2BABFAC2 0xDF9C38B6
	static BOOL NEW_LOAD_SCENE_START_SPHERE(float x, float y, float z, float radius, Any p4) { return invoke<BOOL>(0xFE3F10, x, y, z, radius, p4); } // 0xACCFB4ACF53551B0 0xFA037FEB
	static void NEW_LOAD_SCENE_STOP() { invoke<Void>(0xFE3FA0); } // 0xC197616D221FF4A4 0x7C05B1F6
	static BOOL IS_NEW_LOAD_SCENE_ACTIVE() { return invoke<BOOL>(0xFE3FB0); } // 0xA41A05B6CB741B85 0xAD234B7F
	static BOOL IS_NEW_LOAD_SCENE_LOADED() { return invoke<BOOL>(0xFE3FD0); } // 0x01B8247A7A8B9AD1 0x3ECD839F
	static Any _0x71E7B2E657449AAD() { return invoke<Any>(0xFE4000); } // 0x71E7B2E657449AAD 0xEAA51103
	static void START_PLAYER_SWITCH(Ped from, Ped to, int flags, int switchType) { invoke<Void>(0xFE4050, from, to, flags, switchType); } // 0xFAA23F2CBA159D67 0x0829E975
	static void STOP_PLAYER_SWITCH() { invoke<Void>(0xFE4110); } // 0x95C0A5BBDC189AA1 0x2832C010
	static BOOL IS_PLAYER_SWITCH_IN_PROGRESS() { return invoke<BOOL>(0xFE4140); } // 0xD9D2CFFF49FAB35F 0x56135ACC
	static int GET_PLAYER_SWITCH_TYPE() { return invoke<int>(0xFE4170); } // 0xB3C94A90D9FC9E62 0x280DC015
	static int GET_IDEAL_PLAYER_SWITCH_TYPE(float x1, float y1, float z1, float x2, float y2, float z2) { return invoke<int>(0xFE4180, x1, y1, z1, x2, y2, z2); } // 0xB5D7B26B45720E05 0xD5A450F1
	static int GET_PLAYER_SWITCH_STATE() { return invoke<int>(0xFE41E0); } // 0x470555300D10B2A5 0x39A0E1F2
	static int GET_PLAYER_SHORT_SWITCH_STATE() { return invoke<int>(0xFE4200); } // 0x20F898A5D9782800 0x9B7BA38F
	static void _0x5F2013F8BC24EE69(int p0) { invoke<Void>(0xFE4220, p0); } // 0x5F2013F8BC24EE69 0xF0BD420D
	static Any _0x78C0D93253149435() { return invoke<Any>(0xFE4240); } // 0x78C0D93253149435 0x02BA7AC2
	static void SET_PLAYER_SWITCH_OUTRO(float p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, Any p8) { invoke<Void>(0xFE4260, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0xC208B673CE446B61 0x47352E14
	static void _0x0FDE9DBFC0A6BC65(Any* p0) { invoke<Void>(0xFE4350, p0); } // 0x0FDE9DBFC0A6BC65 0x279077B0
	static void _0x43D1680C6D19A8E9() { invoke<Void>(0xFE43B0); } // 0x43D1680C6D19A8E9 0x55CB21F9
	static void _0x74DE2E8739086740() { invoke<Void>(0xFE43F0); } // 0x74DE2E8739086740 0x1084F2F4
	static void _0x8E2A065ABDAE6994() { invoke<Void>(0xFE4430); } // 0x8E2A065ABDAE6994 0x5B1E995D
	static void _0xAD5FDF34B81BFE79() { invoke<Void>(0xFE4470); } // 0xAD5FDF34B81BFE79 0x4B4B9A13
	static Any _0xDFA80CB25D0A19B3() { return invoke<Any>(0xFE44B0); } // 0xDFA80CB25D0A19B3 0x408F7148
	static void _0xD4793DFF3AF2ABCD() { invoke<Void>(0xFE44F0); } // 0xD4793DFF3AF2ABCD
	static void _0xBD605B8E0E18B3BB() { invoke<Void>(0xFE4530); } // 0xBD605B8E0E18B3BB
	static void _SWITCH_OUT_PLAYER(Ped ped, int flags, int unknown) { invoke<Void>(0xFE4580, ped, flags, unknown); } // 0xAAB3200ED59016BC 0xFB4D062D
	static void _0xD8295AF639FD9CB8(Any p0) { invoke<Void>(0xFE4600, p0); } // 0xD8295AF639FD9CB8 0x2349373B
	static Any _0x933BBEEB8C61B5F4() { return invoke<Any>(0xFE4660); } // 0x933BBEEB8C61B5F4 0x74C16879
	static int SET_PLAYER_INVERTED_UP() { return invoke<int>(0xFE4680); } // 0x08C2D6C52A3104BB 0x569847E3
	static Any _0x5B48A06DD0E792A5() { return invoke<Any>(0xFE46A0); } // 0x5B48A06DD0E792A5 0xC7A3D279
	static Any DESTROY_PLAYER_IN_PAUSE_MENU() { return invoke<Any>(0xFE46E0); } // 0x5B74EA8CFD5E3E7E 0x90F64284
	static void _0x1E9057A74FD73E23() { invoke<Void>(0xFE4720); } // 0x1E9057A74FD73E23
	static Any _0x0C15B0E443B2349D() { return invoke<Any>(0xFE4730); } // 0x0C15B0E443B2349D 0x7154B6FD
	static void _0xA76359FC80B2438E(float p0) { invoke<Void>(0xFE4750, p0); } // 0xA76359FC80B2438E 0xE5612C1A
	static void _0xBED8CA5FF5E04113(float p0, float p1, float p2, float p3) { invoke<Void>(0xFE4770, p0, p1, p2, p3); } // 0xBED8CA5FF5E04113 0x9CD6A451
	static void _0x472397322E92A856() { invoke<Void>(0xFE47A0); } // 0x472397322E92A856 0x4267DA87
	static void _0x40AEFD1A244741F2(BOOL p0) { invoke<Void>(0xFE47B0, p0); } // 0x40AEFD1A244741F2 0x9FA4AF99
	static void _0x03F1A106BDA7DD3E() { invoke<Void>(0xFE47F0); } // 0x03F1A106BDA7DD3E
	static void _0x95A7DABDDBB78AE7(Any* p0, Any* p1) { invoke<Void>(0xFE4800, p0, p1); } // 0x95A7DABDDBB78AE7 0x9EF0A9CF
	static void _0x63EB2B972A218CAC() { invoke<Void>(0xFE4810); } // 0x63EB2B972A218CAC 0xF2CDD6A8
	static Any _0xFB199266061F820A() { return invoke<Any>(0xFE4830); } // 0xFB199266061F820A 0x17B0A1CD
	static void _0xF4A0DADB70F57FA6() { invoke<Void>(0xFE4860); } // 0xF4A0DADB70F57FA6 0x3DA7AA5D
	static Any _0x5068F488DDB54DD8() { return invoke<Any>(0xFE4880); } // 0x5068F488DDB54DD8 0xDAB4BAC0
	static void PREFETCH_SRL(char* srl) { invoke<Void>(0xFE48A0, srl); } // 0x3D245789CE12982C 0x37BE2FBB
	static BOOL IS_SRL_LOADED() { return invoke<BOOL>(0xFE48C0); } // 0xD0263801A4C5B0BB 0x670FA2A6
	static void BEGIN_SRL() { invoke<Void>(0xFE48F0); } // 0x9BADDC94EF83B823 0x24F49427
	static void END_SRL() { invoke<Void>(0xFE4900); } // 0x0A41540E63C9EE17 0x1977C56A
	static void SET_SRL_TIME(float p0) { invoke<Void>(0xFE4910, p0); } // 0xA74A541C6884E7B8 0x30F8A487
	static void _0xEF39EE20C537E98C(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoke<Void>(0xFE4930, p0, p1, p2, p3, p4, p5); } // 0xEF39EE20C537E98C 0x814D0752
	static void _0xBEB2D9A1D9A8F55A(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xFE4980, p0, p1, p2, p3); } // 0xBEB2D9A1D9A8F55A 0x62F02485
	static void _0x20C6C7E4EB082A7F(BOOL p0) { invoke<Void>(0xFE49A0, p0); } // 0x20C6C7E4EB082A7F 0xA6459CAA
	static void _0xF8155A7F03DDFC8E(Any p0) { invoke<Void>(0xFE49C0, p0); } // 0xF8155A7F03DDFC8E 0xF8F515E4
	static void SET_HD_AREA(float x, float y, float z, float radius) { invoke<Void>(0xFE49E0, x, y, z, radius); } // 0xB85F26619073E775 0x80BAA035
	static void CLEAR_HD_AREA() { invoke<Void>(0xFE4A30); } // 0xCE58B1CFB9290813 0x7CAC6FA0
	static void _LOAD_MISSION_CREATOR_DATA() { invoke<Void>(0xFE4A40); } // 0xB5A4DB34FE89B88A 0xE243B2AF
	static void SHUTDOWN_CREATOR_BUDGET() { invoke<Void>(0xFE4A50); } // 0xCCE26000E9A6FAD7 0x897A510F
	static BOOL _0x0BC3144DEB678666(Hash modelHash) { return invoke<BOOL>(0xFE4A60, modelHash); } // 0x0BC3144DEB678666 0xC0E83320
	static void _0xF086AD9354FAC3A3(Any p0) { invoke<Void>(0xFE4B10, p0); } // 0xF086AD9354FAC3A3 0x1C576388
	static Any _0x3D3D8B3BE5A83D35() { return invoke<Any>(0xFE4BB0); } // 0x3D3D8B3BE5A83D35 0x3E9C4CBE
}

namespace SCRIPT
{
	static void REQUEST_SCRIPT(char* scriptName) { invoke<Void>(0xFC2FD0, scriptName); } // 0x6EB5F71AA68F2E8E 0xE26B2666
	static void SET_SCRIPT_AS_NO_LONGER_NEEDED(char* scriptName) { invoke<Void>(0xFC3050, scriptName); } // 0xC90D2DCACD56184C 0x6FCB7795
	static BOOL HAS_SCRIPT_LOADED(char* scriptName) { return invoke<BOOL>(0xFC30B0, scriptName); } // 0xE6CC9F3BA0FB9EF1 0x5D67F751
	static BOOL DOES_SCRIPT_EXIST(char* scriptName) { return invoke<BOOL>(0xFC3100, scriptName); } // 0xFC04745FBE67C19A 0xDEAB87AB
	static void REQUEST_SCRIPT_WITH_NAME_HASH(Hash scriptHash) { invoke<Void>(0xFC3140, scriptHash); } // 0xD62A67D26D9653E6 0x1C68D9DC
	static void SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(Hash scriptHash) { invoke<Void>(0xFC3230, scriptHash); } // 0xC5BC038960E9DB27 0x96C26F66
	static BOOL HAS_SCRIPT_WITH_NAME_HASH_LOADED(Hash scriptHash) { return invoke<BOOL>(0xFC32E0, scriptHash); } // 0x5F0F0C783EB16C04 0x06674818
	static BOOL _DOES_SCRIPT_WITH_NAME_HASH_EXIST(Hash scriptHash) { return invoke<BOOL>(0xFC3380, scriptHash); } // 0xF86AA3C56BA31381
	static void TERMINATE_THREAD(int threadId) { invoke<Void>(0xFC3410, threadId); } // 0xC8B189ED9138BCD4 0x253FD520
	static BOOL IS_THREAD_ACTIVE(int threadId) { return invoke<BOOL>(0xFC3420, threadId); } // 0x46E9AE36D8FA6417 0x78D7A5A0
	static char* _GET_NAME_OF_THREAD(int threadId) { return invoke<char*>(0xFC3460, threadId); } // 0x05A42BA9FC8DA96B 0xBE7ACD89
	static void _BEGIN_ENUMERATING_THREADS() { invoke<Void>(0xFC34E0); } // 0xDADFADA5A20143A8 0xBB4E2F66
	static int _GET_ID_OF_NEXT_THREAD_IN_ENUMERATION() { return invoke<int>(0xFC34F0); } // 0x30B4FA1C82DD4B9F 0x1E28B28F
	static int GET_ID_OF_THIS_THREAD() { return invoke<int>(0xFC3510); } // 0xC30338E8088E2E21 0xDE524830
	static void TERMINATE_THIS_THREAD() { invoke<Void>(0xFC3530); } // 0x1090044AD1DA76FA 0x3CD9CBB7
	static int _GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(Hash scriptHash) { return invoke<int>(0xFC3550, scriptHash); } // 0x2C83A9DA6BFFC4F9 0x029D3841
	static char* GET_THIS_SCRIPT_NAME() { return invoke<char*>(0xFC3570); } // 0x442E0A7EDE4A738A 0xA40FD5D9
	static Hash GET_HASH_OF_THIS_SCRIPT_NAME() { return invoke<Hash>(0xFC35A0); } // 0x8A1C8B1738FFE87E 0x2BEE1F45
	static int GET_NUMBER_OF_EVENTS(int eventGroup) { return invoke<int>(0xFC35C0, eventGroup); } // 0x5F92A689A06620AA 0xA3525D60
	static BOOL GET_EVENT_EXISTS(int eventGroup, int eventIndex) { return invoke<BOOL>(0xFC3610, eventGroup, eventIndex); } // 0x936E6168A9BCEDB5 0xA1B447B5
	static int GET_EVENT_AT_INDEX(int eventGroup, int eventIndex) { return invoke<int>(0xFC3640, eventGroup, eventIndex); } // 0xD8F66A3A60C62153 0xB49C1442
	static BOOL GET_EVENT_DATA(int eventGroup, int eventIndex, int* argStruct, int argStructSize) { return invoke<BOOL>(0xFC3680, eventGroup, eventIndex, argStruct, argStructSize); } // 0x2902843FCD2B2D79 0x4280F92F
	static void TRIGGER_SCRIPT_EVENT(int eventGroup, int* args, int argCount, int bit) { invoke<Void>(0xFC3950, eventGroup, args, argCount, bit); } // 0x5AE99C571D5BBE5D 0x54763B35
	static void SHUTDOWN_LOADING_SCREEN() { invoke<Void>(0xFC36F0); } // 0x078EBE9809CCD637 0xA2826D17
	static void SET_NO_LOADING_SCREEN(BOOL toggle) { invoke<Void>(0xFC3700, toggle); } // 0x5262CC1995D07E09 0xC8055034
	static BOOL _GET_NO_LOADING_SCREEN() { return invoke<BOOL>(0xFC3720); } // 0x18C1270EA7F199BC
	static void _0xB1577667C3708F9B() { invoke<Void>(0xFC3730); } // 0xB1577667C3708F9B 0xB03BCCDF
}

namespace UI
{
	static void _BEGIN_TEXT_COMMAND_BUSY_STRING(char* string) { invoke<Void>(0xF16310, string); } // 0xABA17D7CE615ADBF 0xCB7C8994
	static void _END_TEXT_COMMAND_BUSY_STRING(int busySpinnerType) { invoke<Void>(0xF16320, busySpinnerType); } // 0xBD12F8228410D9B4 0x903F5EE4
	static void _REMOVE_LOADING_PROMPT() { invoke<Void>(0xF16330); } // 0x10D373323E5B9C0D 0x94119534
	static void _0xC65AB383CD91DF98() { invoke<Void>(0xF16340); } // 0xC65AB383CD91DF98 0x71077FBD
	static char* _IS_LOADING_PROMPT_BEING_DISPLAYED() { return invoke<char*>(0xF16350); } // 0xD422FCC5F239A915 0xB8B3A5D0
	static Pickup _0xB2A592B04648A9CB() { return invoke<Pickup>(0xF16370); } // 0xB2A592B04648A9CB
	static void _0x9245E81072704B8A(BOOL p0) { invoke<Void>(0xF16390, p0); } // 0x9245E81072704B8A
	static void _SHOW_CURSOR_THIS_FRAME() { invoke<Void>(0xF163A0); } // 0xAAE7CE1D63167423
	static void _SET_CURSOR_SPRITE(int spriteId) { invoke<Void>(0xF163B0, spriteId); } // 0x8DB8CFFD58B62552
	static void _0x98215325A695E78A(BOOL p0) { invoke<Void>(0xF163C0, p0); } // 0x98215325A695E78A
	static Any _0x3D9ACB1EB139E702() { return invoke<Any>(0xF163D0); } // 0x3D9ACB1EB139E702
	static BOOL _0x632B2940C67F4EA9(int scaleformHandle, Any* p1, Any* p2, Any* p3) { return invoke<BOOL>(0xF163E0, scaleformHandle, p1, p2, p3); } // 0x632B2940C67F4EA9
	static void _0x6F1554B0CC2089FA(BOOL p0) { invoke<Void>(0xF163F0, p0); } // 0x6F1554B0CC2089FA 0xA7C8594B
	static void _CLEAR_NOTIFICATIONS_POS(float pos) { invoke<Void>(0xF16440, pos); } // 0x55598D21339CB998 0x1DA7E41A
	static void _0x25F87B30C382FCA7() { invoke<Void>(0xF16490); } // 0x25F87B30C382FCA7 0x1E63088A
	static void _0xA8FDB297A8D25FBA() { invoke<Void>(0xF164D0); } // 0xA8FDB297A8D25FBA 0x5205C6F5
	static void _REMOVE_NOTIFICATION(int notificationId) { invoke<Void>(0xF164F0, notificationId); } // 0xBE4390CB40B3E627 0xECA8ACB9
	static void _0xA13C11E1B5C06BFC() { invoke<Void>(0xF16520); } // 0xA13C11E1B5C06BFC 0x520FCB6D
	static void _0x583049884A2EEE3C() { invoke<Void>(0xF16540); } // 0x583049884A2EEE3C 0xC8BAB2F2
	static void _0xFDB423997FA30340() { invoke<Void>(0xF16560); } // 0xFDB423997FA30340 0x4D0449C6
	static void _0xE1CD1E48E025E661() { invoke<Void>(0xF16580); } // 0xE1CD1E48E025E661 0xD3F40140
	static Any _0xA9CBFD40B3FA3010() { return invoke<Any>(0xF165A0); } // 0xA9CBFD40B3FA3010 0xC5223796
	static void _0xD4438C0564490E63() { invoke<Void>(0xF165C0); } // 0xD4438C0564490E63 0x709B4BCB
	static void _0xB695E2CD0A2DA9EE() { invoke<Void>(0xF165E0); } // 0xB695E2CD0A2DA9EE 0x4A4A40A4
	static int _GET_CURRENT_NOTIFICATION() { return invoke<int>(0xF16600); } // 0x82352748437638CA 0x294405D4
	static void _0x56C8B608CFD49854() { invoke<Void>(0xF16630); } // 0x56C8B608CFD49854 0xF881AB87
	static void _0xADED7F5748ACAFE6() { invoke<Void>(0xF16650); } // 0xADED7F5748ACAFE6 0x1D6859CA
	static void _SET_NOTIFICATION_BACKGROUND_COLOR(int hudIndex) { invoke<Void>(0xF16670, hudIndex); } // 0x92F0DA1E27DB96DC
	static void _SET_NOTIFICATION_FLASH_COLOR(int red, int green, int blue, int alpha) { invoke<Void>(0xF166A0, red, green, blue, alpha); } // 0x17430B918701C342 0xCF14D7F2
	static void _0x17AD8C9706BDD88A(Any p0) { invoke<Void>(0xF16700, p0); } // 0x17AD8C9706BDD88A 0x24A97AF8
	static void _0x4A0C7C9BB10ABB36(BOOL p0) { invoke<Void>(0xF16730, p0); } // 0x4A0C7C9BB10ABB36 0x44018EDB
	static void _0xFDD85225B2DEA55E() { invoke<Void>(0xF16760); } // 0xFDD85225B2DEA55E 0xA4524B23
	static void _0xFDEC055AB549E328() { invoke<Void>(0xF16780); } // 0xFDEC055AB549E328 0xAFA1148B
	static void _0x80FE4F3AB4E1B62A() { invoke<Void>(0xF167A0); } // 0x80FE4F3AB4E1B62A 0x3CD4307C
	static void _0xBAE4F9B97CD43B30(BOOL p0) { invoke<Void>(0xF167C0, p0); } // 0xBAE4F9B97CD43B30
	static void _0x317EBA71D7543F52(Any* p0, Any* p1, Any* p2, Any* p3) { invoke<Void>(0xF167F0, p0, p1, p2, p3); } // 0x317EBA71D7543F52
	static void _SET_NOTIFICATION_TEXT_ENTRY(char* text) { invoke<Void>(0xF16840, text); } // 0x202709F4C58A0424 0x574EE85C
	static int _SET_NOTIFICATION_MESSAGE(char* picName1, int picName2, BOOL flash, int iconType, BOOL p4, char* sender, char* subject) { return invoke<int>(0xF16850, picName1, picName2, flash, iconType, p4, sender, subject); } // 0x2B7E9A4EAAA93C89 0xED130FA1
	static int _SET_NOTIFICATION_MESSAGE_2(char* picName1, char* picName2, BOOL flash, int iconType, char* sender, char* subject) { return invoke<int>(0xF16890, picName1, picName2, flash, iconType, sender, subject); } // 0x1CCD9A37359072CF 0xE7E3C98B
	static int _SET_NOTIFICATION_MESSAGE_3(char* picName1, char* picName2, BOOL p2, Any p3, char* p4, char* p5) { return invoke<int>(0xF16900, picName1, picName2, p2, p3, p4, p5); } // 0xC6F580E4C94926AC
	static int _SET_NOTIFICATION_MESSAGE_4(char* picName1, char* picName2, BOOL flash, int iconType, char* sender, char* subject, float duration) { return invoke<int>(0xF169B0, picName1, picName2, flash, iconType, sender, subject, duration); } // 0x1E6611149DB3DB6B 0x0EB382B7
	static int _SET_NOTIFICATION_MESSAGE_CLAN_TAG(char* picName1, char* picName2, BOOL flash, int iconType, char* sender, char* subject, float duration, char* clanTag) { return invoke<int>(0xF16A20, picName1, picName2, flash, iconType, sender, subject, duration, clanTag); } // 0x5CBF7BADE20DB93E 0x3E807FE3
	static int _SET_NOTIFICATION_MESSAGE_CLAN_TAG_2(char* picName1, char* picName2, BOOL flash, int iconType1, char* sender, char* subject, float duration, char* clanTag, int iconType2, int p9) { return invoke<int>(0xF16A90, picName1, picName2, flash, iconType1, sender, subject, duration, clanTag, iconType2, p9); } // 0x531B84E7DA981FB6 0xDEB491C8
	static int _DRAW_NOTIFICATION(BOOL blink, BOOL p1) { return invoke<int>(0xF16B00, blink, p1); } // 0x2ED7843F8F801023 0x08F7AF78
	static int _DRAW_NOTIFICATION_2(BOOL blink, BOOL p1) { return invoke<int>(0xF16B40, blink, p1); } // 0x44FA03975424A0EE 0x57B8D0D4
	static int _DRAW_NOTIFICATION_3(BOOL blink, BOOL p1) { return invoke<int>(0xF16BB0, blink, p1); } // 0x378E809BF61EC840 0x02BCAF9B
	static int _DRAW_NOTIFICATION_AWARD(char* p0, char* p1, int p2, int p3, char* p4) { return invoke<int>(0xF16BF0, p0, p1, p2, p3, p4); } // 0xAA295B6F28BD587D 0x02DED2B8
	static int _DRAW_NOTIFICATION_APARTMENT_INVITE(BOOL p0, BOOL p1, int* p2, int p3, BOOL isLeader, BOOL unk0, int clanDesc, int R, int G, int B) { return invoke<int>(0xF16C20, p0, p1, p2, p3, isLeader, unk0, clanDesc, R, G, B); } // 0x97C9E4E7024A8F2C 0xA9CCEF66
	static int _DRAW_NOTIFICATION_CLAN_INVITE(BOOL p0, BOOL p1, int* p2, int p3, BOOL isLeader, BOOL unk0, int clanDesc, char* playerName, int R, int G, int B) { return invoke<int>(0xF16CA0, p0, p1, p2, p3, isLeader, unk0, clanDesc, playerName, R, G, B); } // 0x137BC35589E34E1E 0x88B9B909
	static Any _0x33EE12743CCD6343(Any p0, Any p1, Any p2) { return invoke<Any>(0xF16D30, p0, p1, p2); } // 0x33EE12743CCD6343 0xE05E7052
	static Any _0xC8F3AAF93D0600BF(Any p0, Any p1, Any p2, Any p3) { return invoke<Any>(0xF16D60, p0, p1, p2, p3); } // 0xC8F3AAF93D0600BF 0x4FA43BA4
	static Any _0x7AE0589093A2E088(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return invoke<Any>(0xF16DA0, p0, p1, p2, p3, p4, p5); } // 0x7AE0589093A2E088 0x8C90D22F
	static int _DRAW_NOTIFICATION_4(BOOL blink, BOOL p1) { return invoke<int>(0xF16DE0, blink, p1); } // 0xF020C96915705B3A 0x8E319AB8
	static Any _0x8EFCCF6EC66D85E4(Any* p0, Any* p1, Any* p2, BOOL p3, BOOL p4) { return invoke<Any>(0xF16E20, p0, p1, p2, p3, p4); } // 0x8EFCCF6EC66D85E4
	static Any _0xB6871B0555B02996(Any* p0, Any* p1, Any p2, Any* p3, Any* p4, Any p5) { return invoke<Any>(0xF16E60, p0, p1, p2, p3, p4, p5); } // 0xB6871B0555B02996 0x5E93FBFA
	static int _DRAW_NOTIFICATION_WITH_ICON(int type, int image, char* text) { return invoke<int>(0xF16EB0, type, image, text); } // 0xD202B92CBF1D816F
	static int _DRAW_NOTIFICATION_WITH_BUTTON(int type, char* button, char* text) { return invoke<int>(0xF16EE0, type, button, text); } // 0xDD6CB2CCE7C2735C
	static void BEGIN_TEXT_COMMAND_PRINT(char* GxtEntry) { invoke<Void>(0xF16F10, GxtEntry); } // 0xB87A37EEB7FAA67D 0xF42C43C7
	static void END_TEXT_COMMAND_PRINT(int duration, BOOL drawImmediately) { invoke<Void>(0xF16F20, duration, drawImmediately); } // 0x9D77056A530643F6 0x38F82261
	static void BEGIN_TEXT_COMMAND_IS_MESSAGE_DISPLAYED(char* text) { invoke<Void>(0xF16F40, text); } // 0x853648FD1063A213 0xDD524A11
	static BOOL END_TEXT_COMMAND_IS_MESSAGE_DISPLAYED() { return invoke<BOOL>(0xF16F50); } // 0x8A9BA1AB3E237613 0x672EFB45
	static void BEGIN_TEXT_COMMAND_DISPLAY_TEXT(char* text) { invoke<Void>(0xF16F70, text); } // 0x25FBB336DF1804CB 0x3E35563E
	static void END_TEXT_COMMAND_DISPLAY_TEXT(float x, float y) { invoke<Void>(0xF16FA0, x, y); } // 0xCD015E5BB0D96A57 0x6F8350CE
	static void _BEGIN_TEXT_COMMAND_WIDTH(char* text) { invoke<Void>(0xF16FF0, text); } // 0x54CE8AC98E120CAB 0x51E7A037
	static float _END_TEXT_COMMAND_GET_WIDTH(BOOL p0) { return invoke<float>(0xF17000, p0); } // 0x85F061DA64ED2F67 0xD12A643A
	static void _BEGIN_TEXT_COMMAND_LINE_COUNT(char* entry) { invoke<Void>(0xF17030, entry); } // 0x521FB041D93DD0E4 0x94B82066
	static int _GET_TEXT_SCREEN_LINE_COUNT(float x, float y) { return invoke<int>(0xF17040, x, y); } // 0x9040DFB09BE75706 0xAA318785
	static void BEGIN_TEXT_COMMAND_DISPLAY_HELP(char* inputType) { invoke<Void>(0xF17070, inputType); } // 0x8509B634FBE7DA11 0xB245FC10
	static void END_TEXT_COMMAND_DISPLAY_HELP(Any p0, BOOL loop, BOOL beep, int shape) { invoke<Void>(0xF17080, p0, loop, beep, shape); } // 0x238FFE5C7B0498A6 0xB59B530D
	static void BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(char* labelName) { invoke<Void>(0xF170B0, labelName); } // 0x0A24DA3A41B718F5 0x00E20F2D
	static BOOL END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(int p0) { return invoke<BOOL>(0xF170C0, p0); } // 0x10BDDBFC529428DD 0xF63A13EC
	static void BEGIN_TEXT_COMMAND_SET_BLIP_NAME(char* gxtentry) { invoke<Void>(0xF170F0, gxtentry); } // 0xF9113A30DE5C6670 0xF4C211F6
	static void END_TEXT_COMMAND_SET_BLIP_NAME(Blip blip) { invoke<Void>(0xF17100, blip); } // 0xBC38B49BCB83BC9B 0xE8E59820
	static void _BEGIN_TEXT_COMMAND_OBJECTIVE(char* p0) { invoke<Void>(0xF17110, p0); } // 0x23D69E0465570028 0x0E103475
	static void _END_TEXT_COMMAND_OBJECTIVE(BOOL p0) { invoke<Void>(0xF17120, p0); } // 0xCFDBDF5AE59BA0F4 0x2944A6C5
	static void BEGIN_TEXT_COMMAND_CLEAR_PRINT(char* text) { invoke<Void>(0xF17140, text); } // 0xE124FA80A759019C 0x550665AE
	static void END_TEXT_COMMAND_CLEAR_PRINT() { invoke<Void>(0xF17150); } // 0xFCC75460ABA29378 0x67785AF2
	static void _BEGIN_TEXT_COMMAND_TIMER(char* p0) { invoke<Void>(0xF17160, p0); } // 0x8F9EE5687F8EECCD 0xBF855650
	static void _END_TEXT_COMMAND_TIMER(BOOL p0) { invoke<Void>(0xF17170, p0); } // 0xA86911979638106F 0x6E7FDA1C
	static void ADD_TEXT_COMPONENT_INTEGER(int value) { invoke<Void>(0xF17180, value); } // 0x03B504CF259931BC 0xFE272A57
	static void ADD_TEXT_COMPONENT_FLOAT(float value, int decimalPlaces) { invoke<Void>(0xF17190, value, decimalPlaces); } // 0xE7DCB5B874BCD96E 0x24D78013
	static void ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(char* labelName) { invoke<Void>(0xF171A0, labelName); } // 0xC63CD5D2920ACBE7 0xDCE05406
	static void ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL_HASH_KEY(Hash gxtEntryHash) { invoke<Void>(0xF171B0, gxtEntryHash); } // 0x17299B63C7683A2B 0x150E03B6
	static void ADD_TEXT_COMPONENT_SUBSTRING_BLIP_NAME(Blip blip) { invoke<Void>(0xF171C0, blip); } // 0x80EAD8E2E1D5D52E 0x5DE98F0A
	static void ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(char* text) { invoke<Void>(0xF171D0, text); } // 0x6C188BE134E074AA 0x27A244D8
	static void ADD_TEXT_COMPONENT_SUBSTRING_TIME(int timestamp, int flags) { invoke<Void>(0xF171E0, timestamp, flags); } // 0x1115F16B8AB9E8BF 0x135B3CD0
	static void ADD_TEXT_COMPONENT_FORMATTED_INTEGER(int value, BOOL commaSeparated) { invoke<Void>(0xF171F0, value, commaSeparated); } // 0x0E4C749FF9DE9CC4 0x12929BDF
	static void _ADD_TEXT_COMPONENT_APP_TITLE(char* p0, int p1) { invoke<Void>(0xF17200, p0, p1); } // 0x761B77454205A61D 0x65E1D404
	static void ADD_TEXT_COMPONENT_SUBSTRING_WEBSITE(char* website) { invoke<Void>(0xF17290, website); } // 0x94CF4AC034C9C986 0xC736999E
	static void _ADD_TEXT_COMPONENT_SCALEFORM(char* p0) { invoke<Void>(0xF172A0, p0); } // 0x5F68520888E69014 0x0829A799
	static void _SET_NOTIFICATION_COLOR_NEXT(int hudIndex) { invoke<Void>(0xF172B0, hudIndex); } // 0x39BBF623FC803EAC 0x6F1A1901
	static char* _GET_TEXT_SUBSTRING(char* text, int position, int length) { return invoke<char*>(0xF172C0, text, position, length); } // 0x169BD9382084C8C0 0x34A396EE
	static char* _GET_TEXT_SUBSTRING_SAFE(char* text, int position, int length, int maxLength) { return invoke<char*>(0xF172F0, text, position, length, maxLength); } // 0xB2798643312205C5 0x0183A66C
	static char* _GET_TEXT_SUBSTRING_SLICE(char* text, int startPosition, int endPosition) { return invoke<char*>(0xF17320, text, startPosition, endPosition); } // 0xCE94AEBA5D82908A 0xFA6373BB
	static char* _GET_LABEL_TEXT(char* labelName) { return invoke<char*>(0xF17360, labelName); } // 0x7B5280EBA9840C72 0x95C4B5AD
	static void CLEAR_PRINTS() { invoke<Void>(0xF173F0); } // 0xCC33FA791322B9D9 0x216CB1C5
	static void CLEAR_BRIEF() { invoke<Void>(0xF17400); } // 0x9D292F73ADBD9313 0x9F75A929
	static void CLEAR_ALL_HELP_MESSAGES() { invoke<Void>(0xF17420); } // 0x6178F68A87A4D3A0 0x9E5D9198
	static void CLEAR_THIS_PRINT(char* p0) { invoke<Void>(0xF17430, p0); } // 0xCF708001E1E536DD 0x06878327
	static void CLEAR_SMALL_PRINTS() { invoke<Void>(0xF175B0); } // 0x2CEA2839313C09AC 0xA869A238
	static BOOL DOES_TEXT_BLOCK_EXIST(char* gxt) { return invoke<BOOL>(0xF175C0, gxt); } // 0x1C7302E725259789 0x96F74838
	static void REQUEST_ADDITIONAL_TEXT(char* gxt, int slot) { invoke<Void>(0xF17600, gxt, slot); } // 0x71A78003C8E71424 0x9FA9175B
	static void _REQUEST_ADDITIONAL_TEXT_2(char* gxt, int slot) { invoke<Void>(0xF17620, gxt, slot); } // 0x6009F9F1AE90D8A6 0xF4D27EBE
	static BOOL HAS_ADDITIONAL_TEXT_LOADED(int slot) { return invoke<BOOL>(0xF17640, slot); } // 0x02245FE4BED318B8 0xB0E56045
	static void CLEAR_ADDITIONAL_TEXT(int p0, BOOL p1) { invoke<Void>(0xF17670, p0, p1); } // 0x2A179DF17CCF04CD 0x518141E0
	static BOOL IS_STREAMING_ADDITIONAL_TEXT(int p0) { return invoke<BOOL>(0xF17690, p0); } // 0x8B6817B71B85EBF0 0xF079E4EB
	static BOOL HAS_THIS_ADDITIONAL_TEXT_LOADED(char* gxt, int slot) { return invoke<BOOL>(0xF176C0, gxt, slot); } // 0xADBF060E2B30C5BC 0x80A52040
	static BOOL IS_MESSAGE_BEING_DISPLAYED() { return invoke<BOOL>(0xF176F0); } // 0x7984C03AA5CC2F41 0x6A77FE8D
	static BOOL DOES_TEXT_LABEL_EXIST(char* gxt) { return invoke<BOOL>(0xF17710, gxt); } // 0xAC09CA973C564252 0x6ECAE560
	static int GET_LENGTH_OF_STRING_WITH_THIS_TEXT_LABEL(char* gxt) { return invoke<int>(0xF177B0, gxt); } // 0x801BD273D3A23F74 0xA4CA7BE5
	static int GET_LENGTH_OF_LITERAL_STRING(char* string) { return invoke<int>(0xF17800, string); } // 0xF030907CCBB8A9FD 0x99379D55
	static int _GET_LENGTH_OF_STRING(char* STRING) { return invoke<int>(0xF17830, STRING); } // 0x43E4111189E54F0E 0x7DBC0764
	static char* GET_STREET_NAME_FROM_HASH_KEY(Hash hash) { return invoke<char*>(0xF17860, hash); } // 0xD0EF8A959B8A4CB9 0x1E8E310C
	static BOOL IS_HUD_PREFERENCE_SWITCHED_ON() { return invoke<BOOL>(0xF17920); } // 0x1930DFA731813EC4 0xC3BC1B4F
	static BOOL IS_RADAR_PREFERENCE_SWITCHED_ON() { return invoke<BOOL>(0xF17940); } // 0x9EB6522EA68F22FE 0x14AEAA28
	static BOOL IS_SUBTITLE_PREFERENCE_SWITCHED_ON() { return invoke<BOOL>(0xF17960); } // 0xAD6DACA4BA53E0A4 0x63BA19F5
	static void DISPLAY_HUD(BOOL toggle) { invoke<Void>(0xF17980, toggle); } // 0xA6294919E56FF02A 0xD10E4E31
	static void _0x7669F9E39DC17063() { invoke<Void>(0xF179B0); } // 0x7669F9E39DC17063 0xC380AC85
	static void _0x402F9ED62087E898() { invoke<Void>(0xF179D0); } // 0x402F9ED62087E898 0xC47AB1B0
	static void DISPLAY_RADAR(BOOL Toggle) { invoke<Void>(0xF179F0, Toggle); } // 0xA0EBB943C300E693 0x52816BD4
	static BOOL IS_HUD_HIDDEN() { return invoke<BOOL>(0xF17A50); } // 0xA86478C6958735C5 0x40BADA1D
	static BOOL IS_RADAR_HIDDEN() { return invoke<BOOL>(0xF17A70); } // 0x157F93B036700462 0x1AB3B954
	static BOOL _IS_RADAR_ENABLED() { return invoke<BOOL>(0xF17A90); } // 0xAF754F20EB5CD51A
	static void SET_BLIP_ROUTE(Blip blip, BOOL enabled) { invoke<Void>(0xF17BB0, blip, enabled); } // 0x4F7D8A9BFB0B43E9 0x3E160C90
	static void SET_BLIP_ROUTE_COLOUR(Blip blip, int colour) { invoke<Void>(0xF17BE0, blip, colour); } // 0x837155CD2F63DA09 0xDDE7C65C
	static void ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS(BOOL p0) { invoke<Void>(0xF17C60, p0); } // 0x60296AF4BA14ABC5 0xB58B25BD
	static void _0x57D760D55F54E071(BOOL p0) { invoke<Void>(0xF17C80, p0); } // 0x57D760D55F54E071 0x9854485F
	static void RESPONDING_AS_TEMP(float p0) { invoke<Void>(0xF17CA0, p0); } // 0xBD12C5EEE184C337 0xDCA3F423
	static void SET_RADAR_ZOOM(int zoomLevel) { invoke<Void>(0xF17CE0, zoomLevel); } // 0x096EF57A0C999BBA 0x2A50D1A6
	static void _0xF98E4B3E56AFC7B1(Any p0, float p1) { invoke<Void>(0xF17D90, p0, p1); } // 0xF98E4B3E56AFC7B1 0x25EC28C0
	static void _SET_RADAR_ZOOM_LEVEL_THIS_FRAME(float zoomLevel) { invoke<Void>(0xF17E60, zoomLevel); } // 0xCB7CC0D58405AD41 0x09CF1CE5
	static void _0xD2049635DEB9C375() { invoke<Void>(0xF17EA0); } // 0xD2049635DEB9C375 0xE8D3A910
	static void GET_HUD_COLOUR(int hudColorIndex, int* r, int* g, int* b, int* a) { invoke<Void>(0xF17EB0, hudColorIndex, r, g, b, a); } // 0x7C9C91AB74A0360F 0x63F66A0B
	static void _0xD68A5FF8A3A89874(int r, int g, int b, int a) { invoke<Void>(0xF17F10, r, g, b, a); } // 0xD68A5FF8A3A89874 0x0E41E45C
	static void _0x16A304E6CB2BFAB9(int r, int g, int b, int a) { invoke<Void>(0xF17F30, r, g, b, a); } // 0x16A304E6CB2BFAB9 0x6BE3ACA8
	static void _SET_HUD_COLOURS_SWITCH(int hudColorIndex, int hudColorIndex2) { invoke<Void>(0xF17F50, hudColorIndex, hudColorIndex2); } // 0x1CCC708F0F850613 0x3B216749
	static void _SET_HUD_COLOUR(int hudColorIndex, int r, int g, int b, int a) { invoke<Void>(0xF17F80, hudColorIndex, r, g, b, a); } // 0xF314CF4F0211894E 0xF6E7E92B
	static void FLASH_ABILITY_BAR(BOOL toggle) { invoke<Void>(0xF17FA0, toggle); } // 0x02CFBA0C9E9275CE 0x3648960D
	static void SET_ABILITY_BAR_VALUE(float value, float maxValue) { invoke<Void>(0xF17FB0, value, maxValue); } // 0x9969599CCFF5D85E 0x24E53FD8
	static void FLASH_WANTED_DISPLAY(BOOL p0) { invoke<Void>(0xF17FD0, p0); } // 0xA18AFB39081B6A1F 0x629F866B
	static void _0xBA8D65C1C65702E5(BOOL p0) { invoke<Void>(0xF17FF0, p0); } // 0xBA8D65C1C65702E5
	static float _GET_TEXT_SCALE_HEIGHT(float size, int font) { return invoke<float>(0xF18010, size, font); } // 0xDB88A37483346780 0x3330175B
	static void SET_TEXT_SCALE(float scale, float size) { invoke<Void>(0xF180D0, scale, size); } // 0x07C837F9A01C34C9 0xB6E15B23
	static void SET_TEXT_COLOUR(int red, int green, int blue, int alpha) { invoke<Void>(0xF180F0, red, green, blue, alpha); } // 0xBE6B23FFA53FB442 0xE54DD2C8
	static void SET_TEXT_CENTRE(BOOL align) { invoke<Void>(0xF18130, align); } // 0xC02F4DBFB51D988B 0xE26D39A1
	static void SET_TEXT_RIGHT_JUSTIFY(BOOL toggle) { invoke<Void>(0xF18150, toggle); } // 0x6B3C4650BC8BEE47 0x45B60520
	static void SET_TEXT_JUSTIFICATION(int justifyType) { invoke<Void>(0xF18170, justifyType); } // 0x4E096588B13FFECA 0x68CDFA60
	static void SET_TEXT_WRAP(float start, float end) { invoke<Void>(0xF18190, start, end); } // 0x63145D9C883A1A70 0x6F60AB54
	static void SET_TEXT_LEADING(BOOL p0) { invoke<Void>(0xF181B0, p0); } // 0xA50ABC31E3CDFAFF 0x98CE21D4
	static void SET_TEXT_PROPORTIONAL(BOOL p0) { invoke<Void>(0xF181D0, p0); } // 0x038C1F517D7FDCF8 0xF49D8A08
	static void SET_TEXT_FONT(int fontType) { invoke<Void>(0xF181E0, fontType); } // 0x66E0276CC5F6B9DA 0x80BC530D
	static void SET_TEXT_DROP_SHADOW() { invoke<Void>(0xF18200); } // 0x1CA3E9EAC9D93E5E 0xE2A11511
	static void SET_TEXT_DROPSHADOW(int distance, int r, int g, int b, int a) { invoke<Void>(0xF18210, distance, r, g, b, a); } // 0x465C84BC39F1C351 0xE6587517
	static void SET_TEXT_OUTLINE() { invoke<Void>(0xF18230); } // 0x2513DFB0FB8400FE 0xC753412F
	static void SET_TEXT_EDGE(int p0, int r, int g, int b, int a) { invoke<Void>(0xF18240, p0, r, g, b, a); } // 0x441603240D202FA6 0x3F1A5DAB
	static void SET_TEXT_RENDER_ID(int renderId) { invoke<Void>(0xF18250, renderId); } // 0x5F15302936E07111 0xC5C3B7F3
	static int GET_DEFAULT_SCRIPT_RENDERTARGET_RENDER_ID() { return invoke<int>(0xF182C0); } // 0x52F0982D7FD156B6 0x8188935F
	static BOOL REGISTER_NAMED_RENDERTARGET(char* p0, BOOL p1) { return invoke<BOOL>(0xF182D0, p0, p1); } // 0x57D9C12635E25CE3 0xFAE5D6F0
	static BOOL IS_NAMED_RENDERTARGET_REGISTERED(char* p0) { return invoke<BOOL>(0xF18390, p0); } // 0x78DCDC15C9F116B4 0x284057F5
	static BOOL RELEASE_NAMED_RENDERTARGET(Any* p0) { return invoke<BOOL>(0xF183D0, p0); } // 0xE9F6FFE837354DD4 0xD3F6C892
	static void LINK_NAMED_RENDERTARGET(Hash hash) { invoke<Void>(0xF18410, hash); } // 0xF6C09E276AEB3F2D 0x6844C4B9
	static Any GET_NAMED_RENDERTARGET_RENDER_ID(char* p0) { return invoke<Any>(0xF184C0, p0); } // 0x1A6478B61C6BDC3B 0xF9D7A401
	static BOOL IS_NAMED_RENDERTARGET_LINKED(Hash hash) { return invoke<BOOL>(0xF18500, hash); } // 0x113750538FA31298 0x8B52601F
	static void CLEAR_HELP(BOOL toggle) { invoke<Void>(0xF185C0, toggle); } // 0x8DFCED7A656F8802 0xE6D85741
	static BOOL IS_HELP_MESSAGE_ON_SCREEN() { return invoke<BOOL>(0xF185E0); } // 0xDAD37F45428801AE 0x4B3C9CA9
	static BOOL _0x214CD562A939246A() { return invoke<BOOL>(0xF18650); } // 0x214CD562A939246A 0x812CBE0E
	static BOOL IS_HELP_MESSAGE_BEING_DISPLAYED() { return invoke<BOOL>(0xF18670); } // 0x4D79439A6B55AC67 0xA65F262A
	static BOOL IS_HELP_MESSAGE_FADING_OUT() { return invoke<BOOL>(0xF18690); } // 0x327EDEEEAC55C369 0x3E50AE92
	static BOOL _0x4A9923385BDB9DAD() { return invoke<BOOL>(0xF186D0); } // 0x4A9923385BDB9DAD 0x87871CE0
	static int _GET_BLIP_INFO_ID_ITERATOR() { return invoke<int>(0xF186E0); } // 0x186E5D252FA50E7D 0xB9827942
	static int GET_NUMBER_OF_ACTIVE_BLIPS() { return invoke<int>(0xF186F0); } // 0x9A3FF3DE163034E8 0x144020FA
	static Blip GET_NEXT_BLIP_INFO_ID(int blipSprite) { return invoke<Blip>(0xF18760, blipSprite); } // 0x14F96AA50D6FBEA7 0x9356E92F
	static Blip GET_FIRST_BLIP_INFO_ID(int blipSprite) { return invoke<Blip>(0xF18780, blipSprite); } // 0x1BEDE233E6CD2A1F 0x64C0273D
	static Vector3 GET_BLIP_INFO_ID_COORD(Blip blip) { return invoke<Vector3>(0xF187D0, blip); } // 0xFA7C7F0AADF25D09 0xB7374A66
	static int GET_BLIP_INFO_ID_DISPLAY(Blip blip) { return invoke<int>(0xF18880, blip); } // 0x1E314167F701DC3B 0xD0FC19F4
	static int GET_BLIP_INFO_ID_TYPE(Blip blip) { return invoke<int>(0xF188C0, blip); } // 0xBE9B0959FFD0779B 0x501D7B4E
	static Entity GET_BLIP_INFO_ID_ENTITY_INDEX(Blip blip) { return invoke<Entity>(0xF18900, blip); } // 0x4BA4E2553AFEDC2C 0xA068C40B
	static Pickup GET_BLIP_INFO_ID_PICKUP_INDEX(Blip blip) { return invoke<Pickup>(0xF18970, blip); } // 0x9B6786E4C03DD382 0x86913D37
	static Blip GET_BLIP_FROM_ENTITY(Entity entity) { return invoke<Blip>(0xF18980, entity); } // 0xBC8DBDCA2436F7E8 0x005A2A47
	static Blip ADD_BLIP_FOR_RADIUS(float posX, float posY, float posZ, float radius) { return invoke<Blip>(0xF189A0, posX, posY, posZ, radius); } // 0x46818D79B1F7499A 0x4626756C
	static Blip ADD_BLIP_FOR_ENTITY(Entity entity) { return invoke<Blip>(0xF18A90, entity); } // 0x5CDE92C702A8FCE7 0x30822554
	static Blip ADD_BLIP_FOR_PICKUP(Pickup pickup) { return invoke<Blip>(0xF18AB0, pickup); } // 0xBE339365C863BD36 0x16693C3A
	static Blip ADD_BLIP_FOR_COORD(float x, float y, float z) { return invoke<Blip>(0xF18AD0, x, y, z); } // 0x5A039BB0BCA604B6 0xC6F43D0E
	static void _0x72DD432F3CDFC0EE(float posX, float posY, float posZ, float radius, int p4) { invoke<Void>(0xF18B80, posX, posY, posZ, radius, p4); } // 0x72DD432F3CDFC0EE 0xBF25E7B2
	static void _0x60734CC207C9833C(BOOL p0) { invoke<Void>(0xF18BF0, p0); } // 0x60734CC207C9833C 0xE7E1E32B
	static void SET_BLIP_COORDS(Blip blip, float posX, float posY, float posZ) { invoke<Void>(0xF18C10, blip, posX, posY, posZ); } // 0xAE2AF67E9D9AF65D 0x680A34D4
	static Vector3 GET_BLIP_COORDS(Blip blip) { return invoke<Vector3>(0xF18CB0, blip); } // 0x586AFE3FF72D996E 0xEF6FF47B
	static void SET_BLIP_SPRITE(Blip blip, int spriteId) { invoke<Void>(0xF18D60, blip, spriteId); } // 0xDF735600A4696DAF 0x8DBBB0B9
	static int GET_BLIP_SPRITE(Blip blip) { return invoke<int>(0xF18D80, blip); } // 0x1FC877464A04FC4F 0x72FF2E73
	static void SET_BLIP_NAME_FROM_TEXT_FILE(Blip blip, char* gxtEntry) { invoke<Void>(0xF18DC0, blip, gxtEntry); } // 0xEAA0FFE120D92784 0xAC8A5461
	static void SET_BLIP_NAME_TO_PLAYER_NAME(Blip blip, Player player) { invoke<Void>(0xF18E00, blip, player); } // 0x127DE7B20C60A6A3 0x03A0B8F9
	static void SET_BLIP_ALPHA(Blip blip, int alpha) { invoke<Void>(0xF18E40, blip, alpha); } // 0x45FF974EEE1C8734 0xA791FCCD
	static int GET_BLIP_ALPHA(Blip blip) { return invoke<int>(0xF18E80, blip); } // 0x970F608F0EE6C885 0x297AF6C8
	static void SET_BLIP_FADE(Blip blip, int opacity, int duration) { invoke<Void>(0xF18EC0, blip, opacity, duration); } // 0x2AEE8F8390D2298C 0xA5999031
	static void SET_BLIP_ROTATION(Blip blip, int rotation) { invoke<Void>(0xF18F20, blip, rotation); } // 0xF87683CDF73C3F6E 0x6B8F44FE
	static void SET_BLIP_FLASH_TIMER(Blip blip, int duration) { invoke<Void>(0xF18F60, blip, duration); } // 0xD3CD6FD297AE87CC 0x8D5DF611
	static void SET_BLIP_FLASH_INTERVAL(Blip blip, Any p1) { invoke<Void>(0xF18F80, blip, p1); } // 0xAA51DB313C010A7E 0xEAF67377
	static void SET_BLIP_COLOUR(Blip blip, int color) { invoke<Void>(0xF18FA0, blip, color); } // 0x03D7FB09E75D6B7E 0xBB3C5A41
	static void SET_BLIP_SECONDARY_COLOUR(Blip blip, float r, float g, float b) { invoke<Void>(0xF18FC0, blip, r, g, b); } // 0x14892474891E09EB 0xC6384D32
	static int GET_BLIP_COLOUR(Blip blip) { return invoke<int>(0xF19040, blip); } // 0xDF729E8D20CF7327 0xDD6A1E54
	static int GET_BLIP_HUD_COLOUR(Blip blip) { return invoke<int>(0xF19080, blip); } // 0x729B5F1EFBC0AAEE 0xE88B4BC2
	static BOOL IS_BLIP_SHORT_RANGE(Blip blip) { return invoke<BOOL>(0xF19120, blip); } // 0xDA5F8727EB75B926 0x1226765A
	static BOOL IS_BLIP_ON_MINIMAP(Blip blip) { return invoke<BOOL>(0xF19160, blip); } // 0xE41CA53051197A27 0x258CBA3A
	static BOOL _0xDD2238F57B977751(Any p0) { return invoke<BOOL>(0xF191A0, p0); } // 0xDD2238F57B977751 0x3E47F357
	static void _0x54318C915D27E4CE(Any p0, BOOL p1) { invoke<Void>(0xF191E0, p0, p1); } // 0x54318C915D27E4CE 0x43996428
	static void SET_BLIP_HIGH_DETAIL(Blip blip, BOOL toggle) { invoke<Void>(0xF19200, blip, toggle); } // 0xE2590BC29220CEBB 0xD5842BFF
	static void SET_BLIP_AS_MISSION_CREATOR_BLIP(Blip blip, BOOL toggle) { invoke<Void>(0xF19220, blip, toggle); } // 0x24AC0137444F9FD5 0x802FB686
	static BOOL IS_MISSION_CREATOR_BLIP(Blip blip) { return invoke<BOOL>(0xF19240, blip); } // 0x26F49BF3381D933D 0x24ACC4E9
	static Blip DISABLE_BLIP_NAME_FOR_VAR() { return invoke<Blip>(0xF19280); } // 0x5C90988E7C8E1AF4 0xFFD7476C
	static BOOL _0x4167EFE0527D706E() { return invoke<BOOL>(0xF192C0); } // 0x4167EFE0527D706E 0xC5EB849A
	static void _0xF1A6C18B35BCADE6(BOOL p0) { invoke<Void>(0xF19310, p0); } // 0xF1A6C18B35BCADE6 0xA2CAAB4F
	static void SET_BLIP_FLASHES(Blip blip, BOOL toggle) { invoke<Void>(0xF193A0, blip, toggle); } // 0xB14552383D39CE3E 0xC0047F15
	static void SET_BLIP_FLASHES_ALTERNATE(Blip blip, BOOL toggle) { invoke<Void>(0xF193C0, blip, toggle); } // 0x2E8D9498C56DD0D1 0x1A81202B
	static BOOL IS_BLIP_FLASHING(Blip blip) { return invoke<BOOL>(0xF193E0, blip); } // 0xA5E41FD83AD6CEF0 0x52E111D7
	static void SET_BLIP_AS_SHORT_RANGE(Blip blip, BOOL toggle) { invoke<Void>(0xF19420, blip, toggle); } // 0xBE8BE4FE60E27B72 0x5C67725E
	static void SET_BLIP_SCALE(Blip blip, float scale) { invoke<Void>(0xF19440, blip, scale); } // 0xD38744167B2FA257 0x1E6EC434
	static void SET_BLIP_PRIORITY(Blip blip, int priority) { invoke<Void>(0xF19460, blip, priority); } // 0xAE9FC9EF6A9FAC79 0xCE87DA6F
	static void SET_BLIP_DISPLAY(Blip blip, int displayId) { invoke<Void>(0xF19480, blip, displayId); } // 0x9029B2F3DA924928 0x2B521F91
	static void SET_BLIP_CATEGORY(Blip blip, int index) { invoke<Void>(0xF194A0, blip, index); } // 0x234CDD44D996FD9A 0xEF72F533
	static void REMOVE_BLIP(Blip* blip) { invoke<Void>(0xF194C0, blip); } // 0x86A652570E5F25DD 0xD8C3C1CD
	static void SET_BLIP_AS_FRIENDLY(Blip blip, BOOL toggle) { invoke<Void>(0xF19530, blip, toggle); } // 0x6F6F290102C02AB4 0xF290CFD8
	static void PULSE_BLIP(Blip blip) { invoke<Void>(0xF19550, blip); } // 0x742D6FD43115AF73 0x44253855
	static void SHOW_NUMBER_ON_BLIP(Blip blip, int number) { invoke<Void>(0xF19570, blip, number); } // 0xA3C0B359DCB848B6 0x7BFC66C6
	static void HIDE_NUMBER_ON_BLIP(Blip blip) { invoke<Void>(0xF195A0, blip); } // 0x532CFF637EF80148 0x0B6D610D
	static void _0x75A16C3DA34F1245(Any p0, BOOL p1) { invoke<Void>(0xF195C0, p0, p1); } // 0x75A16C3DA34F1245 0x1D99F676
	static void _SET_BLIP_CHECKED(Blip blip, BOOL toggle) { invoke<Void>(0xF195E0, blip, toggle); } // 0x74513EA3E505181E 0x3DCF0092
	static void SHOW_HEADING_INDICATOR_ON_BLIP(Blip blip, BOOL toggle) { invoke<Void>(0xF19600, blip, toggle); } // 0x5FBCA48327B914DF 0xD1C3D71B
	static void _SET_BLIP_FRIENDLY(Blip blip, BOOL toggle) { invoke<Void>(0xF19620, blip, toggle); } // 0xB81656BC81FE24D1 0x8DE82C15
	static void _SET_BLIP_FRIEND(Blip blip, BOOL toggle) { invoke<Void>(0xF19640, blip, toggle); } // 0x23C3EB807312F01A 0x4C8F02B4
	static void _0xDCFB5D4DB8BF367E(Any p0, BOOL p1) { invoke<Void>(0xF19660, p0, p1); } // 0xDCFB5D4DB8BF367E 0xABBE1E45
	static void _0xC4278F70131BAA6D(Any p0, BOOL p1) { invoke<Void>(0xF19680, p0, p1); } // 0xC4278F70131BAA6D 0x6AA6A1CC
	static void _SET_BLIP_SHRINK(Blip blip, BOOL toggle) { invoke<Void>(0xF196E0, blip, toggle); } // 0x2B6D467DAB714E8D 0xC575F0BC
	static void _0x25615540D894B814(Any p0, BOOL p1) { invoke<Void>(0xF19700, p0, p1); } // 0x25615540D894B814 0x40E25DB8
	static BOOL DOES_BLIP_EXIST(Blip blip) { return invoke<BOOL>(0xF19720, blip); } // 0xA6DB27D19ECBB7DA 0xAE92DD96
	static void SET_WAYPOINT_OFF() { invoke<Void>(0xF19750); } // 0xA7E4E2D361C2627F 0xB3496E1B
	static void _0xD8E694757BCEA8E9() { invoke<Void>(0xF19760); } // 0xD8E694757BCEA8E9 0x62BABF2C
	static void REFRESH_WAYPOINT() { invoke<Void>(0xF19780); } // 0x81FA173F170560D1 0xB395D753
	static BOOL IS_WAYPOINT_ACTIVE() { return invoke<BOOL>(0xF19790); } // 0x1DD1F58F493F1DA5 0x5E4DF47B
	static void SET_NEW_WAYPOINT(float x, float y) { invoke<Void>(0xF197C0, x, y); } // 0xFE43368D2AA4F2FC 0x8444E1F0
	static void SET_BLIP_BRIGHT(Blip blip, BOOL toggle) { invoke<Void>(0xF19850, blip, toggle); } // 0xB203913733F27884 0x72BEE6DF
	static void SET_BLIP_SHOW_CONE(Blip blip, BOOL toggle) { invoke<Void>(0xF19870, blip, toggle); } // 0x13127EC3665E8EE1 0xFF545AD8
	static void _0xC594B315EDF2D4AF(Ped ped) { invoke<Void>(0xF19890, ped); } // 0xC594B315EDF2D4AF 0x41B0D022
	static Any SET_MINIMAP_COMPONENT(int p0, BOOL p1, int p2) { return invoke<Any>(0xF19940, p0, p1, p2); } // 0x75A9A10948D1DEA6 0x419DCDC4
	static void _0x60E892BA4F5BDCA4() { invoke<Void>(0xF19980); } // 0x60E892BA4F5BDCA4
	static Blip GET_MAIN_PLAYER_BLIP_ID() { return invoke<Blip>(0xF19990); } // 0xDCD4EC3F419D02FA 0xAB93F020
	static void _0x41350B4FC28E3941(BOOL p0) { invoke<Void>(0xF199D0, p0); } // 0x41350B4FC28E3941
	static void HIDE_LOADING_ON_FADE_THIS_FRAME() { invoke<Void>(0xF199F0); } // 0x4B0311D3CDC4648F 0x35087963
	static void SET_RADAR_AS_INTERIOR_THIS_FRAME(Hash interior, float x, float y, int heading, int zoom) { invoke<Void>(0xF19A00, interior, x, y, heading, zoom); } // 0x59E727A1C9D3E31A 0x6F2626E1
	static void SET_RADAR_AS_EXTERIOR_THIS_FRAME() { invoke<Void>(0xF19A50); } // 0xE81B7D2A3DAB2D81 0x39ABB10E
	static void _SET_PLAYER_BLIP_POSITION_THIS_FRAME(float x, float y) { invoke<Void>(0xF19A60, x, y); } // 0x77E2DD177910E1CF 0x54E75C7D
	static Any _0x9049FE339D5F6F6F() { return invoke<Any>(0xF19AB0); } // 0x9049FE339D5F6F6F 0x199DED14
	static void _DISABLE_RADAR_THIS_FRAME() { invoke<Void>(0xF19AC0); } // 0x5FBAE526203990C9 0x1A4318F7
	static void _0x20FE7FDFEEAD38C0() { invoke<Void>(0xF19AD0); } // 0x20FE7FDFEEAD38C0 0xCE36E3FE
	static void _CENTER_PLAYER_ON_RADAR_THIS_FRAME() { invoke<Void>(0xF19AE0); } // 0x6D14BFDC33B34F55 0x334EFD46
	static void SET_WIDESCREEN_FORMAT(Any p0) { invoke<Void>(0xF19B00, p0); } // 0xC3B07BA00A83B0F1 0xF016E08F
	static void DISPLAY_AREA_NAME(BOOL toggle) { invoke<Void>(0xF19B20, toggle); } // 0x276B6CE369C33678 0x489FDD41
	static void DISPLAY_CASH(BOOL toggle) { invoke<Void>(0xF19B40, toggle); } // 0x96DEC8D5430208B7 0x0049DF83
	static void _0x170F541E1CADD1DE(BOOL p0) { invoke<Void>(0xF19B60, p0); } // 0x170F541E1CADD1DE
	static void _SET_PLAYER_CASH_CHANGE(int cash, int bank) { invoke<Void>(0xF19B80, cash, bank); } // 0x0772DF77852C2E30
	static void DISPLAY_AMMO_THIS_FRAME(BOOL display) { invoke<Void>(0xF19B90, display); } // 0xA5E78BA2B1331C55 0x60693CEE
	static void DISPLAY_SNIPER_SCOPE_THIS_FRAME() { invoke<Void>(0xF19BB0); } // 0x73115226F4814E62 0xBC6C73CB
	static void HIDE_HUD_AND_RADAR_THIS_FRAME() { invoke<Void>(0xF19BC0); } // 0x719FF505F097FD20 0xB75D4AD2
	static void _0xE67C6DFD386EA5E7(BOOL p0) { invoke<Void>(0xF19BD0, p0); } // 0xE67C6DFD386EA5E7 0x5476B9FD
	static void _0xC2D15BEF167E27BC() { invoke<Void>(0xF19BF0); } // 0xC2D15BEF167E27BC 0xF4F3C796
	static void _0x95CF81BD06EE1887() { invoke<Void>(0xF19C10); } // 0x95CF81BD06EE1887 0x7BFFE82F
	static void SET_MULTIPLAYER_BANK_CASH() { invoke<Void>(0xF19C30); } // 0xDD21B55DF695CD0A 0x2C842D03
	static void REMOVE_MULTIPLAYER_BANK_CASH() { invoke<Void>(0xF19C50); } // 0xC7C6789AA1CFEDD0 0x728B4EF4
	static void SET_MULTIPLAYER_HUD_CASH(int p0, int p1) { invoke<Void>(0xF19C70, p0, p1); } // 0xFD1D220394BCB824 0xA8DB435E
	static void REMOVE_MULTIPLAYER_HUD_CASH() { invoke<Void>(0xF19C80); } // 0x968F270E39141ECA 0x07BF4A7D
	static void HIDE_HELP_TEXT_THIS_FRAME() { invoke<Void>(0xF19CB0); } // 0xD46923FC481CA285 0xF3807BED
	static void DISPLAY_HELP_TEXT_THIS_FRAME(char* message, BOOL p1) { invoke<Void>(0xF19CD0, message, p1); } // 0x960C9FF8F616E41C 0x18E3360A
	static void _SHOW_WEAPON_WHEEL(BOOL forcedShow) { invoke<Void>(0xF19D30, forcedShow); } // 0xEB354E5376BC81A7 0x1EFFB02A
	static void _BLOCK_WEAPON_WHEEL_THIS_FRAME() { invoke<Void>(0xF19D60); } // 0x0AFC4AF510774B47 0xB26FED2B
	static Hash _0xA48931185F0536FE() { return invoke<Hash>(0xF19D70); } // 0xA48931185F0536FE 0x22E9F555
	static void _0x72C1056D678BB7D8(Hash weaponHash) { invoke<Void>(0xF19D90, weaponHash); } // 0x72C1056D678BB7D8 0x83B608A0
	static Any _0xA13E93403F26C812(Any p0) { return invoke<Any>(0xF19DE0, p0); } // 0xA13E93403F26C812
	static void _0x14C9FDCC41F81F63(BOOL p0) { invoke<Void>(0xF19E40, p0); } // 0x14C9FDCC41F81F63 0xE70D1F43
	static void SET_GPS_FLAGS(int p0, float p1) { invoke<Void>(0xF19E60, p0, p1); } // 0x5B440763A4C8D15B 0x60539BAB
	static void CLEAR_GPS_FLAGS() { invoke<Void>(0xF19E90); } // 0x21986729D6A3A830 0x056AFCE6
	static void _0x1EAC5F91BCBC5073(BOOL p0) { invoke<Void>(0xF19EB0, p0); } // 0x1EAC5F91BCBC5073 0xFB9BABF5
	static void CLEAR_GPS_RACE_TRACK() { invoke<Void>(0xF19ED0); } // 0x7AA5B4CE533C858B 0x40C59829
	static void _0xDB34E8D56FC13B08(Any p0, BOOL p1, BOOL p2) { invoke<Void>(0xF19EE0, p0, p1, p2); } // 0xDB34E8D56FC13B08 0x7F93799B
	static void _0x311438A071DD9B1A(Any p0, Any p1, Any p2) { invoke<Void>(0xF19F00, p0, p1, p2); } // 0x311438A071DD9B1A 0xEEBDFE55
	static void _0x900086F371220B6F(BOOL p0, Any p1, Any p2) { invoke<Void>(0xF19F60, p0, p1, p2); } // 0x900086F371220B6F 0xDA0AF00E
	static void _0xE6DE0561D9232A64() { invoke<Void>(0xF19F80); } // 0xE6DE0561D9232A64 0xCF2E3E24
	static void _0x3D3D15AF7BCAAF83(Any p0, BOOL p1, BOOL p2) { invoke<Void>(0xF19FA0, p0, p1, p2); } // 0x3D3D15AF7BCAAF83 0xC3DCBEDB
	static void _0xA905192A6781C41B(float x, float y, float z) { invoke<Void>(0xF19FC0, x, y, z); } // 0xA905192A6781C41B 0xFE485135
	static void _0x3DDA37128DD1ACA8(BOOL p0) { invoke<Void>(0xF1A020, p0); } // 0x3DDA37128DD1ACA8 0xE87CBE4C
	static void _0x67EEDEA1B9BAFD94() { invoke<Void>(0xF1A040); } // 0x67EEDEA1B9BAFD94 0x0D9969E4
	static void CLEAR_GPS_PLAYER_WAYPOINT() { invoke<Void>(0xF1A050); } // 0xFF4FB7C8CDFA3DA7 0x0B9C7FC2
	static void SET_GPS_FLASHES(BOOL toggle) { invoke<Void>(0xF1A070, toggle); } // 0x320D0E0D936A0E9B 0xE991F733
	static void _0x7B21E0BB01E8224A(Any p0) { invoke<Void>(0xF1A090, p0); } // 0x7B21E0BB01E8224A
	static void FLASH_MINIMAP_DISPLAY() { invoke<Void>(0xF1A0A0); } // 0xF2DD778C22B15BDA 0xB8359952
	static void _0x6B1DE27EE78E6A19(Any p0) { invoke<Void>(0xF1A0B0, p0); } // 0x6B1DE27EE78E6A19 0x79A6CAF6
	static void TOGGLE_STEALTH_RADAR(BOOL toggle) { invoke<Void>(0xF1A0C0, toggle); } // 0x6AFDFB93754950C7 0xC68D47C4
	static void KEY_HUD_COLOUR(BOOL p0, Any p1) { invoke<Void>(0xF1A0E0, p0, p1); } // 0x1A5CD7752DD28CD3 0xD5BFCADB
	static void SET_MISSION_NAME(BOOL p0, char* name) { invoke<Void>(0xF1A150, p0, name); } // 0x5F28ECF5FC84772F 0x68DCAE10
	static void _SET_MISSION_NAME_2(BOOL p0, char* name) { invoke<Void>(0xF1A170, p0, name); } // 0xE45087D85F468BC2 0x8D9A1734
	static void _0x817B86108EB94E51(BOOL p0, Any* p1, Any* p2, Any* p3, Any* p4, Any* p5, Any* p6, Any* p7, Any* p8) { invoke<Void>(0xF1A1E0, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0x817B86108EB94E51 0xD2161E77
	static void SET_MINIMAP_BLOCK_WAYPOINT(BOOL toggle) { invoke<Void>(0xF1A230, toggle); } // 0x58FADDED207897DC 0xA41C3B62
	static void _SET_NORTH_YANKTON_MAP(BOOL toggle) { invoke<Void>(0xF1A250, toggle); } // 0x9133955F1A2DA957 0x02F5F1D1
	static void _SET_MINIMAP_REVEALED(BOOL toggle) { invoke<Void>(0xF1A270, toggle); } // 0xF8DEE0A5600CBB93 0xD8D77733
	static float _0xE0130B41D3CF4574() { return invoke<float>(0xF1A290); } // 0xE0130B41D3CF4574 0xA4098ACC
	static BOOL _IS_MINIMAP_AREA_REVEALED(float x, float y, float radius) { return invoke<BOOL>(0xF1A2B0, x, y, radius); } // 0x6E31B91145873922 0x65B705F6
	static void _0x62E849B7EB28E770(BOOL p0) { invoke<Void>(0xF1A320, p0); } // 0x62E849B7EB28E770
	static void _0x0923DBF87DFF735E(float x, float y, float z) { invoke<Void>(0xF1A340, x, y, z); } // 0x0923DBF87DFF735E 0xE010F081
	static void _0x71BDB63DBAF8DA59(Any p0) { invoke<Void>(0xF1A390, p0); } // 0x71BDB63DBAF8DA59 0x5133A750
	static void _0x35EDD5B2E3FF01C0() { invoke<Void>(0xF1A3A0); } // 0x35EDD5B2E3FF01C0 0x20FD3E87
	static void LOCK_MINIMAP_ANGLE(int angle) { invoke<Void>(0xF1A3B0, angle); } // 0x299FAEBB108AE05B 0xDEC733E4
	static void UNLOCK_MINIMAP_ANGLE() { invoke<Void>(0xF1A3D0); } // 0x8183455E16C42E3A 0x742043F9
	static void LOCK_MINIMAP_POSITION(float x, float y) { invoke<Void>(0xF1A3E0, x, y); } // 0x1279E861A329E73F 0xB9632A91
	static void UNLOCK_MINIMAP_POSITION() { invoke<Void>(0xF1A400); } // 0x3E93E06DB8EF1F30 0x5E8E6F54
	static void _SET_MINIMAP_ATTITUDE_INDICATOR_LEVEL(float altitude, BOOL p1) { invoke<Void>(0xF1A420, altitude, p1); } // 0xD201F3FF917A506D 0x0308EDF6
	static void _0x3F5CC444DCAAA8F2(Any p0, Any p1, BOOL p2) { invoke<Void>(0xF1A460, p0, p1, p2); } // 0x3F5CC444DCAAA8F2 0x7FB6FB2A
	static void _0x975D66A0BC17064C(Any p0) { invoke<Void>(0xF1A480, p0); } // 0x975D66A0BC17064C 0xF07D8CEF
	static void _0x06A320535F5F0248(Any p0) { invoke<Void>(0xF1A490, p0); } // 0x06A320535F5F0248 0x827F14DE
	static void _SET_RADAR_BIGMAP_ENABLED(BOOL toggleBigMap, BOOL showFullMap) { invoke<Void>(0xF1A4A0, toggleBigMap, showFullMap); } // 0x231C8F89D0539D8F 0x08EB83D2
	static BOOL IS_HUD_COMPONENT_ACTIVE(int id) { return invoke<BOOL>(0xF1A4C0, id); } // 0xBC4C9EA5391ECC0D 0x6214631F
	static BOOL IS_SCRIPTED_HUD_COMPONENT_ACTIVE(int id) { return invoke<BOOL>(0xF1A500, id); } // 0xDD100EB17A94FF65 0x2B86F382
	static void HIDE_SCRIPTED_HUD_COMPONENT_THIS_FRAME(int id) { invoke<Void>(0xF1A530, id); } // 0xE374C498D8BADC14 0x31ABA127
	static BOOL _0x09C0403ED9A751C2(Any p0) { return invoke<BOOL>(0xF1A540, p0); } // 0x09C0403ED9A751C2 0xE8C8E535
	static void HIDE_HUD_COMPONENT_THIS_FRAME(int id) { invoke<Void>(0xF1A570, id); } // 0x6806C51AD12B83B8 0xDB2D0762
	static void SHOW_HUD_COMPONENT_THIS_FRAME(int id) { invoke<Void>(0xF1A590, id); } // 0x0B4DF1FA60C0E664 0x95E1546E
	static void _0xA4DEDE28B1814289() { invoke<Void>(0xF1A5A0); } // 0xA4DEDE28B1814289 0x52746FE1
	static void RESET_RETICULE_VALUES() { invoke<Void>(0xF1A5B0); } // 0x12782CE0A636E9F0 0xBE27AA3F
	static void RESET_HUD_COMPONENT_VALUES(int id) { invoke<Void>(0xF1A5C0, id); } // 0x450930E616475D0D 0xD15B46DA
	static void SET_HUD_COMPONENT_POSITION(int id, float x, float y) { invoke<Void>(0xF1A5D0, id, x, y); } // 0xAABB1F56E2A17CED 0x2F3A0D15
	static Vector3 GET_HUD_COMPONENT_POSITION(int id) { return invoke<Vector3>(0xF1A620, id); } // 0x223CA69A8C4417FD 0x080DCED6
	static void CLEAR_REMINDER_MESSAGE() { invoke<Void>(0xF1A6B0); } // 0xB57D8DD645CFA2CF 0x5BBCC934
	static BOOL _GET_SCREEN_COORD_FROM_WORLD_COORD(float worldX, float worldY, float worldZ, float* screenX, float* screenY) { return invoke<BOOL>(0xF1A6C0, worldX, worldY, worldZ, screenX, screenY); } // 0xF9904D11F1ACBEC3 0xFE9A39F8
	static void _DISPLAY_JOB_REPORT() { invoke<Void>(0xF1A760); } // 0x523A590C1A3CC0D3 0x10DE5150
	static void _0xEE4C0E6DBC6F2C6F() { invoke<Void>(0xF1A790); } // 0xEE4C0E6DBC6F2C6F 0x67649EE0
	static Any _0x9135584D09A3437E() { return invoke<Any>(0xF1A7A0); } // 0x9135584D09A3437E 0x9D2C94FA
	static BOOL _0x2432784ACA090DA4(Any p0) { return invoke<BOOL>(0xF1A7C0, p0); } // 0x2432784ACA090DA4 0x45472FD5
	static void _0x7679CC1BCEBE3D4C(Any p0, float p1, float p2) { invoke<Void>(0xF1A840, p0, p1, p2); } // 0x7679CC1BCEBE3D4C 0x198F32D7
	static void _0x784BA7E0ECEB4178(Any p0, float x, float y, float z) { invoke<Void>(0xF1A8A0, p0, x, y, z); } // 0x784BA7E0ECEB4178 0x93045157
	static void _0xB094BC1DB4018240(Any p0, Any p1, float p2, float p3) { invoke<Void>(0xF1A900, p0, p1, p2, p3); } // 0xB094BC1DB4018240 0x18B012B7
	static void _0x788E7FD431BD67F1(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoke<Void>(0xF1A9A0, p0, p1, p2, p3, p4, p5); } // 0x788E7FD431BD67F1 0x97852A82
	static void CLEAR_FLOATING_HELP(Any p0, BOOL p1) { invoke<Void>(0xF1A9C0, p0, p1); } // 0x50085246ABD3FEFA 0xB181F88F
	static void _SET_MP_GAMER_TAG_COLOR(int headDisplayId, char* username, BOOL pointedClanTag, BOOL isRockstarClan, char* clanTag, Any p5, int r, int g, int b) { invoke<Void>(0xF1A9E0, headDisplayId, username, pointedClanTag, isRockstarClan, clanTag, p5, r, g, b); } // 0x6DD05E9D83EFA4C9 0xC969F2D0
	static BOOL _HAS_MP_GAMER_TAG() { return invoke<BOOL>(0xF1AAC0); } // 0x6E0EB3EB47C8D7AA 0xEFD2564A
	static int _CREATE_MP_GAMER_TAG(Ped ped, char* username, BOOL pointedClanTag, BOOL isRockstarClan, char* clanTag, Any p5) { return invoke<int>(0xF1AAF0, ped, username, pointedClanTag, isRockstarClan, clanTag, p5); } // 0xBFEFE3321A3F5015 0xF5CD2AA4
	static void REMOVE_MP_GAMER_TAG(int gamerTagId) { invoke<Void>(0xF1AC20, gamerTagId); } // 0x31698AA80E0223F8 0x3D081FE4
	static BOOL IS_MP_GAMER_TAG_ACTIVE(int gamerTagId) { return invoke<BOOL>(0xF1AC40, gamerTagId); } // 0x4E929E7A5796FD26 0x60118951
	static BOOL ADD_TREVOR_RANDOM_MODIFIER(int gamerTagId) { return invoke<BOOL>(0xF1AC70, gamerTagId); } // 0x595B5178E412E199 0x63959059
	static void SET_MP_GAMER_TAG_VISIBILITY(int gamerTagId, int component, BOOL toggle) { invoke<Void>(0xF1ACA0, gamerTagId, component, toggle); } // 0x63BB75ABEDC1F6A0 0xD41DF479
	static void _SET_MP_GAMER_TAG_(int headDisplayId, BOOL p1) { invoke<Void>(0xF1ACE0, headDisplayId, p1); } // 0xEE76FF7E6A0166B0 0x767DED29
	static void _SET_MP_GAMER_TAG_ICONS(int headDisplayId, BOOL p1) { invoke<Void>(0xF1AD10, headDisplayId, p1); } // 0xA67F9C46D612B6F1 0xB01A5434
	static void SET_MP_GAMER_TAG_COLOUR(int gamerTagId, int flag, int color) { invoke<Void>(0xF1ADA0, gamerTagId, flag, color); } // 0x613ED644950626AE 0x7E3AA40A
	static void SET_MP_GAMER_TAG_HEALTH_BAR_COLOUR(int headDisplayId, int color) { invoke<Void>(0xF1ADD0, headDisplayId, color); } // 0x3158C77A7E888AB4 0x5777EC77
	static void SET_MP_GAMER_TAG_ALPHA(int gamerTagId, int component, int alpha) { invoke<Void>(0xF1AE00, gamerTagId, component, alpha); } // 0xD48FE545CD46F857 0xF4418611
	static void SET_MP_GAMER_TAG_WANTED_LEVEL(int gamerTagId, int wantedlvl) { invoke<Void>(0xF1AE30, gamerTagId, wantedlvl); } // 0xCF228E2AA03099C3 0x0EBB003F
	static void SET_MP_GAMER_TAG_NAME(int gamerTagId, char* string) { invoke<Void>(0xF1AE90, gamerTagId, string); } // 0xDEA2B8283BAA3944 0x627A559B
	static BOOL _HAS_MP_GAMER_TAG_2(int gamerTagId) { return invoke<BOOL>(0xF1AEC0, gamerTagId); } // 0xEB709A36958ABE0D 0xF11414C4
	static void _SET_MP_GAMER_TAG_CHATTING(int gamerTagId, char* string) { invoke<Void>(0xF1AF00, gamerTagId, string); } // 0x7B7723747CCB55B6 0x939218AB
	static int _GET_ACTIVE_WEBSITE_ID() { return invoke<int>(0xF1AF30); } // 0x01A358D9128B7A86 0xAB5B7C18
	static int GET_CURRENT_WEBSITE_ID() { return invoke<int>(0xF1AF40); } // 0x97D47996FC48CBAD 0x42A55B14
	static Any _0xE3B05614DCE1D014(Any p0) { return invoke<Any>(0xF1AF50, p0); } // 0xE3B05614DCE1D014 0xD217EE7E
	static void _0xB99C4E4D9499DF29(BOOL p0) { invoke<Void>(0xF1AF80, p0); } // 0xB99C4E4D9499DF29
	static Any _0xAF42195A42C63BBA() { return invoke<Any>(0xF1AFA0); } // 0xAF42195A42C63BBA
	static void SET_WARNING_MESSAGE(char* entryLine1, int instructionalKey, char* entryLine2, BOOL p3, Any p4, Any* p5, Any* p6, BOOL background) { invoke<Void>(0xF1AFF0, entryLine1, instructionalKey, entryLine2, p3, p4, p5, p6, background); } // 0x7B1776B3B53F8D74 0xBE699BDE
	static void SET_WARNING_MESSAGE_WITH_HEADER(char* entryHeader, char* entryLine1, int instructionalKey, char* entryLine2, BOOL p4, Any p5, Any* p6, Any* p7, BOOL background) { invoke<Void>(0xF1B100, entryHeader, entryLine1, instructionalKey, entryLine2, p4, p5, p6, p7, background); } // 0xDC38CC1E35B6A5D7 0x2DB9EAB5
	static void _SET_WARNING_MESSAGE_3(char* entryHeader, char* entryLine1, Any instructionalKey, char* entryLine2, BOOL p4, Any p5, Any p6, Any* p7, Any* p8, BOOL p9) { invoke<Void>(0xF1B170, entryHeader, entryLine1, instructionalKey, entryLine2, p4, p5, p6, p7, p8, p9); } // 0x701919482C74B5AB 0x749929D3
	static BOOL _0x0C5A80A9E096D529(Any p0, Any* p1, Any p2, Any p3, Any p4, Any p5) { return invoke<BOOL>(0xF1B280, p0, p1, p2, p3, p4, p5); } // 0x0C5A80A9E096D529
	static BOOL _0xDAF87174BE7454FF(Any p0) { return invoke<BOOL>(0xF1B2C0, p0); } // 0xDAF87174BE7454FF
	static void _0x6EF54AB721DC6242() { invoke<Void>(0xF1B2F0); } // 0x6EF54AB721DC6242
	static BOOL IS_WARNING_MESSAGE_ACTIVE() { return invoke<BOOL>(0xF1B300); } // 0xE18B138FABC53103 0x94C834AD
	static void _0x7792424AA0EAC32E() { invoke<Void>(0xF1B340); } // 0x7792424AA0EAC32E 0x2F9A309C
	static void _SET_MAP_FULL_SCREEN(BOOL toggle) { invoke<Void>(0xF1B360, toggle); } // 0x5354C5BA2EA868A4 0xE4FD20D8
	static void _0x1EAE6DD17B7A5EFA(Any p0) { invoke<Void>(0xF1B380, p0); } // 0x1EAE6DD17B7A5EFA 0x13E7A5A9
	static Any _0x551DF99658DB6EE8(float p0, float p1, float p2) { return invoke<Any>(0xF1B390, p0, p1, p2); } // 0x551DF99658DB6EE8 0x786CA0A2
	static void _0x2708FC083123F9FF() { invoke<Void>(0xF1B400); } // 0x2708FC083123F9FF 0xCBEC9369
	static Any _0x1121BFA1A1A522A8() { return invoke<Any>(0xF1B410); } // 0x1121BFA1A1A522A8 0x3F4AFB13
	static void _0x82CEDC33687E1F50(BOOL p0) { invoke<Void>(0xF1B430, p0); } // 0x82CEDC33687E1F50 0x2F28F0A6
	static void _0x211C4EF450086857() { invoke<Void>(0xF1B450); } // 0x211C4EF450086857 0x801D0D86
	static void _0xBF4F34A85CA2970C() { invoke<Void>(0xF1B460); } // 0xBF4F34A85CA2970C 0x317775DF
	static void ACTIVATE_FRONTEND_MENU(Hash menuhash, BOOL Toggle_Pause, int component) { invoke<Void>(0xF1B470, menuhash, Toggle_Pause, component); } // 0xEF01D36B9C9D0C7B 0x01D83872
	static void RESTART_FRONTEND_MENU(Hash menuHash, int p1) { invoke<Void>(0xF1B4C0, menuHash, p1); } // 0x10706DC6AD2D49C0 0xB07DAF98
	static Hash _GET_CURRENT_FRONTEND_MENU() { return invoke<Hash>(0xF1B500); } // 0x2309595AD6145265 0x33D6868F
	static void SET_PAUSE_MENU_ACTIVE(BOOL toggle) { invoke<Void>(0xF1B530, toggle); } // 0xDF47FC56C71569CF 0x1DCD878E
	static void DISABLE_FRONTEND_THIS_FRAME() { invoke<Void>(0xF1B550); } // 0x6D3465A73092F0E6 0xD86A029E
	static void _0xBA751764F0821256() { invoke<Void>(0xF1B560); } // 0xBA751764F0821256 0x7F349900
	static void _0xCC3FDDED67BCFC63() { invoke<Void>(0xF1B570); } // 0xCC3FDDED67BCFC63 0x630CD8EE
	static void SET_FRONTEND_ACTIVE(BOOL active) { invoke<Void>(0xF1B580, active); } // 0x745711A75AB09277 0x81E1AD32
	static BOOL IS_PAUSE_MENU_ACTIVE() { return invoke<BOOL>(0xF1B5A0); } // 0xB0034A223497FFCB 0xD3600591
	static Any _0x2F057596F2BD0061() { return invoke<Any>(0xF1B5D0); } // 0x2F057596F2BD0061 0xC85C4487
	static int GET_PAUSE_MENU_STATE() { return invoke<int>(0xF1B5E0); } // 0x272ACD84970869C5 0x92F50134
	static Vector3 _0x5BFF36D6ED83E0AE() { return invoke<Vector3>(0xF1B600); } // 0x5BFF36D6ED83E0AE
	static BOOL IS_PAUSE_MENU_RESTARTING() { return invoke<BOOL>(0xF1B680); } // 0x1C491717107431C7 0x3C4CF4D9
	static void _LOG_DEBUG_INFO(char* p0) { invoke<Void>(0xF1B6A0, p0); } // 0x2162C446DFDF38FD 0x2DFD35C7
	static void _0x77F16B447824DA6C(Any p0) { invoke<Void>(0xF1B6B0, p0); } // 0x77F16B447824DA6C 0x0A89336C
	static void _0xCDCA26E80FAECB8F() { invoke<Void>(0xF1B6C0); } // 0xCDCA26E80FAECB8F 0xC84BE309
	static void _ADD_FRONTEND_MENU_CONTEXT(Hash hash) { invoke<Void>(0xF1B6F0, hash); } // 0xDD564BDD0472C936 0x9FE8FD5E
	static void OBJECT_DECAL_TOGGLE(Hash hash) { invoke<Void>(0xF1B730, hash); } // 0x444D8CF241EC25C5 0x0029046E
	static BOOL _0x84698AB38D0C6636(Hash hash) { return invoke<BOOL>(0xF1B770, hash); } // 0x84698AB38D0C6636 0xC51BC42F
	static Any _0x2A25ADC48F87841F() { return invoke<Any>(0xF1B7C0); } // 0x2A25ADC48F87841F 0x016D7AF9
	static Any _0xDE03620F8703A9DF() { return invoke<Any>(0xF1B840); } // 0xDE03620F8703A9DF
	static Any _0x359AF31A4B52F5ED() { return invoke<Any>(0xF1B860); } // 0x359AF31A4B52F5ED
	static Any _0x13C4B962653A5280() { return invoke<Any>(0xF1B880); } // 0x13C4B962653A5280
	static BOOL _0xC8E1071177A23BE5(Any* p0, Any* p1, Any* p2) { return invoke<BOOL>(0xF1B8A0, p0, p1, p2); } // 0xC8E1071177A23BE5
	static void ENABLE_DEATHBLOOD_SEETHROUGH(BOOL p0) { invoke<Void>(0xF1B8B0, p0); } // 0x4895BDEA16E7C080 0x15B24768
	static void _0xC78E239AC5B2DDB9(BOOL p0, Any p1, Any p2) { invoke<Void>(0xF1B8C0, p0, p1, p2); } // 0xC78E239AC5B2DDB9 0x6C67131A
	static void _0xF06EBB91A81E09E3(BOOL p0) { invoke<Void>(0xF1B900, p0); } // 0xF06EBB91A81E09E3 0x11D09737
	static Any _0x3BAB9A4E4F2FF5C7() { return invoke<Any>(0xF1B920); } // 0x3BAB9A4E4F2FF5C7 0xD3BF3ABD
	static void _0xEC9264727EEC0F28() { invoke<Void>(0xF1B960); } // 0xEC9264727EEC0F28 0xC06B763D
	static void _0x14621BB1DF14E2B2() { invoke<Void>(0xF1B970); } // 0x14621BB1DF14E2B2 0xB9392CE7
	static Any _0x66E7CB63C97B7D20() { return invoke<Any>(0xF1B980); } // 0x66E7CB63C97B7D20 0x92DAFA78
	static Any _0x593FEAE1F73392D4() { return invoke<Any>(0xF1B9A0); } // 0x593FEAE1F73392D4 0x22CA9F2A
	static Any _0x4E3CD0EF8A489541() { return invoke<Any>(0xF1B9C0); } // 0x4E3CD0EF8A489541 0xDA7951A2
	static Any _0xF284AC67940C6812() { return invoke<Any>(0xF1B9D0); } // 0xF284AC67940C6812 0x7D95AFFF
	static Any _0x2E22FEFA0100275E() { return invoke<Any>(0xF1B9E0); } // 0x2E22FEFA0100275E 0x96863460
	static void _0x0CF54F20DE43879C(Any p0) { invoke<Void>(0xF1B9F0, p0); } // 0x0CF54F20DE43879C
	static void _0x36C1451A88A09630(Any* p0, Any* p1) { invoke<Void>(0xF1BA00, p0, p1); } // 0x36C1451A88A09630 0x8543AAC8
	static void _0x7E17BE53E1AAABAF(int* p0, int* p1, int* p2) { invoke<Void>(0xF1BA30, p0, p1, p2); } // 0x7E17BE53E1AAABAF 0x6025AA2F
	static BOOL _0xA238192F33110615(int* p0, int* p1, int* p2) { return invoke<BOOL>(0xF1BA80, p0, p1, p2); } // 0xA238192F33110615 0x46794EB2
	static BOOL SET_USERIDS_UIHIDDEN(Any p0, Any* p1) { return invoke<BOOL>(0xF1BB00, p0, p1); } // 0xEF4CED81CEBEDC6D 0x4370999E
	static BOOL _0xCA6B2F7CE32AB653(Any p0, Any* p1, Any p2) { return invoke<BOOL>(0xF1BB30, p0, p1, p2); } // 0xCA6B2F7CE32AB653
	static BOOL _0x90A6526CF0381030(Any p0, Any* p1, Any p2, Any p3) { return invoke<BOOL>(0xF1BB60, p0, p1, p2, p3); } // 0x90A6526CF0381030 0xD6CC4766
	static BOOL _0x24A49BEAF468DC90(Any p0, Any* p1, Any p2, Any p3, Any p4) { return invoke<BOOL>(0xF1BC00, p0, p1, p2, p3, p4); } // 0x24A49BEAF468DC90
	static BOOL _0x5FBD7095FE7AE57F(Any p0, float* p1) { return invoke<BOOL>(0xF1BCA0, p0, p1); } // 0x5FBD7095FE7AE57F 0x51972B04
	static BOOL _0x8F08017F9D7C47BD(Any p0, Any* p1, Any p2) { return invoke<BOOL>(0xF1BCD0, p0, p1, p2); } // 0x8F08017F9D7C47BD
	static BOOL _0x052991E59076E4E4(Hash p0, Any* p1) { return invoke<BOOL>(0xF1BD00, p0, p1); } // 0x052991E59076E4E4 0xD43BB56D
	static void CLEAR_PED_IN_PAUSE_MENU() { invoke<Void>(0xF1BD30); } // 0x5E62BE5DC58E9E06 0x28058ACF
	static void GIVE_PED_TO_PAUSE_MENU(Ped ped, int p1) { invoke<Void>(0xF1BD70, ped, p1); } // 0xAC0BFBDC3BE00E14 0x2AD2C9CE
	static void _0x3CA6050692BC61B0(BOOL p0) { invoke<Void>(0xF1BD80, p0); } // 0x3CA6050692BC61B0 0x127310EB
	static void _0xECF128344E9FF9F1(BOOL p0) { invoke<Void>(0xF1BDE0, p0); } // 0xECF128344E9FF9F1 0x8F45D327
	static void _SHOW_SOCIAL_CLUB_LEGAL_SCREEN() { invoke<Void>(0xF1BE30); } // 0x805D7CBB36FD6C4C 0x19FCBBB2
	static Any _0xF13FE2A80C05C561() { return invoke<Any>(0xF1BE40); } // 0xF13FE2A80C05C561 0x850690FF
	static int _0x6F72CD94F7B5B68C() { return invoke<int>(0xF1BE60); } // 0x6F72CD94F7B5B68C 0x9D4934F4
	static void _0x75D3691713C3B05A() { invoke<Void>(0xF1BE70); } // 0x75D3691713C3B05A 0x57218529
	static void _0xD2B32BE3FC1626C6() { invoke<Void>(0xF1BE80); } // 0xD2B32BE3FC1626C6 0x5F86AA39
	static void _0x9E778248D6685FE0(char* p0) { invoke<Void>(0xF1BEA0, p0); } // 0x9E778248D6685FE0 0x7AD67C95
	static BOOL IS_SOCIAL_CLUB_ACTIVE() { return invoke<BOOL>(0xF1BED0); } // 0xC406BE343FC4B9AF 0xD4DA14EF
	static void _0x1185A8087587322C(BOOL p0) { invoke<Void>(0xF1BEE0, p0); } // 0x1185A8087587322C
	static void _0x8817605C2BA76200() { invoke<Void>(0xF1BEF0); } // 0x8817605C2BA76200
	static BOOL _IS_TEXT_CHAT_ACTIVE() { return invoke<BOOL>(0xF1BF20); } // 0xB118AF58B5F332A1
	static void _ABORT_TEXT_CHAT() { invoke<Void>(0xF1BF30); } // 0x1AC8F4AD40E22127
	static void _SET_TEXT_CHAT_UNK(BOOL p0) { invoke<Void>(0xF1BF60, p0); } // 0x1DB21A44B09E8BA3
	static void _0xCEF214315D276FD1(BOOL p0) { invoke<Void>(0xF1BF70, p0); } // 0xCEF214315D276FD1 0xFF06772A
	static void _SET_PED_AI_BLIP(int pedHandle, BOOL showViewCones) { invoke<Void>(0xF1BF90, pedHandle, showViewCones); } // 0xD30C50DF888D58B5 0x96C4C4DD
	static BOOL DOES_PED_HAVE_AI_BLIP(Ped ped) { return invoke<BOOL>(0xF1C010, ped); } // 0x15B8ECF844EE67ED 0x3BE1257F
	static void _SET_AI_BLIP_TYPE(Ped ped, int type) { invoke<Void>(0xF1C040, ped, type); } // 0xE52B8E7F85D39A08 0xD8E31B1A
	static void HIDE_SPECIAL_ABILITY_LOCKON_OPERATION(Any p0, BOOL p1) { invoke<Void>(0xF1C050, p0, p1); } // 0x3EED80DFF7325CAA 0x872C2CFB
	static void _IS_AI_BLIP_ALWAYS_SHOWN(Ped ped, BOOL flag) { invoke<Void>(0xF1C070, ped, flag); } // 0x0C4BBF625CA98C4E 0xFFDF46F0
	static void _SET_AI_BLIP_MAX_DISTANCE(Ped ped, float distance) { invoke<Void>(0xF1C090, ped, distance); } // 0x97C65887D4B37FA9 0xF9DC2AF7
	static Blip* _0x7CD934010E115C2C(Ped ped) { return invoke<Blip*>(0xF1C0B0, ped); } // 0x7CD934010E115C2C 0x06349065
	static Blip _GET_AI_BLIP(Ped ped) { return invoke<Blip>(0xF1C0D0, ped); } // 0x56176892826A4FE8 0xCA52CF43
	static Any _0xA277800A9EAE340E() { return invoke<Any>(0xF1C0F0); } // 0xA277800A9EAE340E
	static void _0x2632482FD6B9AB87() { invoke<Void>(0xF1C100); } // 0x2632482FD6B9AB87
	static void _SET_DIRECTOR_MODE(BOOL toggle) { invoke<Void>(0xF1C110, toggle); } // 0x808519373FD336A3
	static void _0x04655F9D075D0AE5(BOOL p0) { invoke<Void>(0xF1C130, p0); } // 0x04655F9D075D0AE5
}

namespace GRAPHICS
{
	static void SET_DEBUG_LINES_AND_SPHERES_DRAWING_ACTIVE(BOOL enabled) { invoke<Void>(0xF049F0, enabled); } // 0x175B6BFC15CDD0C5 0x1418CA37
	static void DRAW_DEBUG_LINE(float x1, float y1, float z1, float x2, float y2, float z2, int red, int green, int blue, int alpha) { invoke<Void>(0xF04A00, x1, y1, z1, x2, y2, z2, red, green, blue, alpha); } // 0x7FDFADE676AA3CB0 0xABF783AB
	static void DRAW_DEBUG_LINE_WITH_TWO_COLOURS(float x1, float y1, float z1, float x2, float y2, float z2, int r1, int g1, int b1, int r2, int g2, int b2, int alpha1, int alpha2) { invoke<Void>(0xF04A10, x1, y1, z1, x2, y2, z2, r1, g1, b1, r2, g2, b2, alpha1, alpha2); } // 0xD8B9A8AC5608FF94 0xE8BFF632
	static void DRAW_DEBUG_SPHERE(float x, float y, float z, float radius, int red, int green, int blue, int alpha) { invoke<Void>(0xF04A20, x, y, z, radius, red, green, blue, alpha); } // 0xAAD68E1AB39DA632 0x304D0EEF
	static void DRAW_DEBUG_BOX(float x1, float y1, float z1, float x2, float y2, float z2, int red, int green, int blue, int alpha) { invoke<Void>(0xF04A30, x1, y1, z1, x2, y2, z2, red, green, blue, alpha); } // 0x083A2CA4F2E573BD 0x8524A848
	static void DRAW_DEBUG_CROSS(float x, float y, float z, float size, int red, int green, int blue, int alpha) { invoke<Void>(0xF04A40, x, y, z, size, red, green, blue, alpha); } // 0x73B1189623049839 0xB6DF3709
	static void DRAW_DEBUG_TEXT(char* text, float x, float y, float z, int red, int green, int blue, int alpha) { invoke<Void>(0xF04A50, text, x, y, z, red, green, blue, alpha); } // 0x3903E216620488E8 0x269B006F
	static void DRAW_DEBUG_TEXT_2D(char* text, float x, float y, float z, int red, int green, int blue, int alpha) { invoke<Void>(0xF04A60, text, x, y, z, red, green, blue, alpha); } // 0xA3BB2E9555C05A8F 0x528B973B
	static void DRAW_LINE(float x1, float y1, float z1, float x2, float y2, float z2, int red, int green, int blue, int alpha) { invoke<Void>(0xF04A70, x1, y1, z1, x2, y2, z2, red, green, blue, alpha); } // 0x6B7256074AE34680 0xB3426BCC
	static void DRAW_POLY(float x1, float y1, float z1, float x2, float y2, float z2, float x3, float y3, float z3, int red, int green, int blue, int alpha) { invoke<Void>(0xF04B40, x1, y1, z1, x2, y2, z2, x3, y3, z3, red, green, blue, alpha); } // 0xAC26716048436851 0xABD19253
	static void DRAW_BOX(float x1, float y1, float z1, float x2, float y2, float z2, int red, int green, int blue, int alpha) { invoke<Void>(0xF04D20, x1, y1, z1, x2, y2, z2, red, green, blue, alpha); } // 0xD3A9971CADAC7252 0xCD4D9DD5
	static void _0x23BA6B0C2AD7B0D3(BOOL toggle) { invoke<Void>(0xF04DF0, toggle); } // 0x23BA6B0C2AD7B0D3 0xC44C2F44
	static BOOL _0x1DD2139A9A20DCE8() { return invoke<BOOL>(0xF04E30); } // 0x1DD2139A9A20DCE8 0xBA9AD458
	static int _0x90A78ECAA4E78453() { return invoke<int>(0xF04E50); } // 0x90A78ECAA4E78453 0xADBBA287
	static void _0x0A46AF8A78DC5E0A() { invoke<Void>(0xF04E70); } // 0x0A46AF8A78DC5E0A 0x9E553002
	static BOOL _0x4862437A486F91B0(char* p0, Any* p1, Any* p2, BOOL p3) { return invoke<BOOL>(0xF04E80, p0, p1, p2, p3); } // 0x4862437A486F91B0 0x56C1E488
	static int _0x1670F8D05056F257(Any p0) { return invoke<int>(0xF04EE0, p0); } // 0x1670F8D05056F257 0x226B08EA
	static BOOL _0x7FA5D82B8F58EC06() { return invoke<BOOL>(0xF04F10); } // 0x7FA5D82B8F58EC06 0x1F3CADB0
	static int _0x5B0316762AFD4A64() { return invoke<int>(0xF04F40); } // 0x5B0316762AFD4A64 0xA9DC8558
	static void _0x346EF3ECAAAB149E() { invoke<Void>(0xF04F70); } // 0x346EF3ECAAAB149E 0x88EAF398
	static BOOL _0xA67C35C56EB1BD9D() { return invoke<BOOL>(0xF04F80); } // 0xA67C35C56EB1BD9D 0x47B0C137
	static int _0x0D6CA79EEEBD8CA3() { return invoke<int>(0xF04FA0); } // 0x0D6CA79EEEBD8CA3 0x65376C9B
	static void _0xD801CC02177FA3F1() { invoke<Void>(0xF04FC0); } // 0xD801CC02177FA3F1 0x9CBA682A
	static void _0x1BBC135A4D25EDDE(BOOL p0) { invoke<Void>(0xF04FD0, p0); } // 0x1BBC135A4D25EDDE
	static BOOL _0x3DEC726C25A11BAC(int p0) { return invoke<BOOL>(0xF04FF0, p0); } // 0x3DEC726C25A11BAC 0x3B15D33C
	static int _0x0C0C4E81E1AC60A0() { return invoke<int>(0xF05010); } // 0x0C0C4E81E1AC60A0 0xEC5D0317
	static BOOL _0x759650634F07B6B4(int p0) { return invoke<BOOL>(0xF05030, p0); } // 0x759650634F07B6B4 0x25D569EB
	static int _0xCB82A0BF0E3E3265(int p0) { return invoke<int>(0xF05060, p0); } // 0xCB82A0BF0E3E3265 0xCFCDC518
	static void _0x6A12D88881435DCA() { invoke<Void>(0xF05080); } // 0x6A12D88881435DCA 0x108F36CC
	static void _0x1072F115DAB0717E(BOOL p0, BOOL p1) { invoke<Void>(0xF05090, p0, p1); } // 0x1072F115DAB0717E 0xE9F2B68F
	static int GET_MAXIMUM_NUMBER_OF_PHOTOS() { return invoke<int>(0xF050B0); } // 0x34D23450F028B0BF 0x727AA63F
	static int _GET_MAXIMUM_NUMBER_OF_PHOTOS_2() { return invoke<int>(0xF050C0); } // 0xDC54A7AF8B3A14EF 0x239272BD
	static int _GET_NUMBER_OF_PHOTOS() { return invoke<int>(0xF050D0); } // 0x473151EBC762C6DA 0x21DBF0C9
	static BOOL _0x2A893980E96B659A(BOOL p0) { return invoke<BOOL>(0xF050F0, p0); } // 0x2A893980E96B659A 0x199FABF0
	static int _0xF5BED327CEA362B1(BOOL p0) { return invoke<int>(0xF05120, p0); } // 0xF5BED327CEA362B1 0x596B900D
	static void _0x4AF92ACD3141D96C() { invoke<Void>(0xF05150); } // 0x4AF92ACD3141D96C 0xC9EF81ED
	static Any _0xE791DF1F73ED2C8B(Any p0) { return invoke<Any>(0xF05160, p0); } // 0xE791DF1F73ED2C8B 0x9D84554C
	static Any _0xEC72C258667BE5EA(Any p0) { return invoke<Any>(0xF05170, p0); } // 0xEC72C258667BE5EA 0x9C106AD9
	static int _RETURN_TWO(Any p0) { return invoke<int>(0xF05180, p0); } // 0x40AFB081F8ADD4EE 0x762E5C5F
	static void _DRAW_LIGHT_WITH_RANGE_AND_SHADOW(float x, float y, float z, int r, int g, int b, float range, float intensity, float shadow) { invoke<Void>(0xF05190, x, y, z, r, g, b, range, intensity, shadow); } // 0xF49E9A9716A04595
	static void DRAW_LIGHT_WITH_RANGE(float posX, float posY, float posZ, int colorR, int colorG, int colorB, float range, float intensity) { invoke<Void>(0xF051C0, posX, posY, posZ, colorR, colorG, colorB, range, intensity); } // 0xF2A1B2771A01DBD4 0x6A396E9A
	static void DRAW_SPOT_LIGHT(float posX, float posY, float posZ, float dirX, float dirY, float dirZ, int colorR, int colorG, int colorB, float distance, float brightness, float hardness, float radius, float falloff) { invoke<Void>(0xF051F0, posX, posY, posZ, dirX, dirY, dirZ, colorR, colorG, colorB, distance, brightness, hardness, radius, falloff); } // 0xD0F64B265C8C8B33 0xBDBC410C
	static void _DRAW_SPOT_LIGHT_WITH_SHADOW(float posX, float posY, float posZ, float dirX, float dirY, float dirZ, int colorR, int colorG, int colorB, float distance, float brightness, float roundness, float radius, float falloff, int shadowId) { invoke<Void>(0xF05220, posX, posY, posZ, dirX, dirY, dirZ, colorR, colorG, colorB, distance, brightness, roundness, radius, falloff, shadowId); } // 0x5BCA583A583194DB 0x32BF9598
	static void _0xC9B18B4619F48F7B(float p0) { invoke<Void>(0xF05260, p0); } // 0xC9B18B4619F48F7B 0x93628786
	static void _ENTITY_DESCRIPTION_TEXT(Entity entity) { invoke<Void>(0xF05270, entity); } // 0xDEADC0DEDEADC0DE
	static void DRAW_MARKER(int type, float posX, float posY, float posZ, float dirX, float dirY, float dirZ, float rotX, float rotY, float rotZ, float scaleX, float scaleY, float scaleZ, int red, int green, int blue, int alpha, BOOL bobUpAndDown, BOOL faceCamera, int p19, BOOL rotate, char* textureDict, char* textureName, BOOL drawOnEnts) { invoke<Void>(0xF052F0, type, posX, posY, posZ, dirX, dirY, dirZ, rotX, rotY, rotZ, scaleX, scaleY, scaleZ, red, green, blue, alpha, bobUpAndDown, faceCamera, p19, rotate, textureDict, textureName, drawOnEnts); } // 0x28477EC23D892089 0x48D84A02
	static int CREATE_CHECKPOINT(int type, float posX1, float posY1, float posZ1, float posX2, float posY2, float posZ2, float radius, int red, int green, int blue, int alpha, int reserved) { return invoke<int>(0xF05540, type, posX1, posY1, posZ1, posX2, posY2, posZ2, radius, red, green, blue, alpha, reserved); } // 0x0134F0835AB6BFCB 0xF541B690
	static void _SET_CHECKPOINT_SCALE(int checkpoint, float p0) { invoke<Void>(0xF05620, checkpoint, p0); } // 0x4B5B4DA5D79F1943 0x80151CCF
	static void SET_CHECKPOINT_CYLINDER_HEIGHT(int checkpoint, float nearHeight, float farHeight, float radius) { invoke<Void>(0xF056C0, checkpoint, nearHeight, farHeight, radius); } // 0x2707AAE9D9297D89 0xFF0F9B22
	static void SET_CHECKPOINT_RGBA(int checkpoint, int red, int green, int blue, int alpha) { invoke<Void>(0xF05730, checkpoint, red, green, blue, alpha); } // 0x7167371E8AD747F7 0xEF9C8CB3
	static void _SET_CHECKPOINT_ICON_RGBA(int checkpoint, int red, int green, int blue, int alpha) { invoke<Void>(0xF057B0, checkpoint, red, green, blue, alpha); } // 0xB9EA40907C680580 0xA5456DBB
	static void _0xF51D36185993515D(int checkpoint, float posX, float posY, float posZ, float unkX, float unkY, float unkZ) { invoke<Void>(0xF05830, checkpoint, posX, posY, posZ, unkX, unkY, unkZ); } // 0xF51D36185993515D 0x20EABD0F
	static void _0x615D3925E87A3B26(int checkpoint) { invoke<Void>(0xF058B0, checkpoint); } // 0x615D3925E87A3B26 0x1E3A3126
	static void DELETE_CHECKPOINT(int checkpoint) { invoke<Void>(0xF05990, checkpoint); } // 0xF5ED37F54CD4D52E 0xB66CF3CA
	static void _0x22A249A53034450A(BOOL p0) { invoke<Void>(0xF059D0, p0); } // 0x22A249A53034450A 0x932FDB81
	static void _0xDC459CFA0CCE245B(BOOL p0) { invoke<Void>(0xF059F0, p0); } // 0xDC459CFA0CCE245B 0x7E946E87
	static void REQUEST_STREAMED_TEXTURE_DICT(char* textureDict, BOOL p1) { invoke<Void>(0xF05A10, textureDict, p1); } // 0xDFA2EF8E04127DD5 0x4C9B035F
	static BOOL HAS_STREAMED_TEXTURE_DICT_LOADED(char* textureDict) { return invoke<BOOL>(0xF05AA0, textureDict); } // 0x0145F696AAAAD2E4 0x3F436EEF
	static void SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(char* textureDict) { invoke<Void>(0xF05B00, textureDict); } // 0xBE2CACCF5A8AA805 0xF07DDA38
	static void DRAW_RECT(float x, float y, float width, float height, int r, int g, int b, int a) { invoke<Void>(0xF05B60, x, y, width, height, r, g, b, a); } // 0x3A618A217E5154F0 0xDD2BFC77
	static void _0xC6372ECD45D73BCD(BOOL p0) { invoke<Void>(0xF05BA0, p0); } // 0xC6372ECD45D73BCD 0xF8FBCC25
	static void _SET_UI_LAYER(int layer) { invoke<Void>(0xF05BC0, layer); } // 0x61BB1D9B3A95D802 0xADF81D24
	static void _SCREEN_DRAW_POSITION_BEGIN(int x, int y) { invoke<Void>(0xF05C50, x, y); } // 0xB8A850F20A067EB6 0x228A2598
	static void _SCREEN_DRAW_POSITION_END() { invoke<Void>(0xF05C70); } // 0xE3A3DB414A373DAB 0x3FE33BD6
	static void _SCREEN_DRAW_POSITION_RATIO(float x, float y, float p2, float p3) { invoke<Void>(0xF05C90, x, y, p2, p3); } // 0xF5A2C681787E579D 0x76C641E4
	static void _0x6DD8F5AA635EB4B2(float p0, float p1, float* p2, float* p3) { invoke<Void>(0xF05CD0, p0, p1, p2, p3); } // 0x6DD8F5AA635EB4B2
	static float GET_SAFE_ZONE_SIZE() { return invoke<float>(0xF05D50); } // 0xBAF107B6BB2C97F0 0x3F0D1A6F
	static void DRAW_SPRITE(char* textureDict, char* textureName, float screenX, float screenY, float width, float height, float heading, int red, int green, int blue, int alpha) { invoke<Void>(0xF05D70, textureDict, textureName, screenX, screenY, width, height, heading, red, green, blue, alpha); } // 0xE7FFAE5EBF23D890 0x1FEC16B0
	static Any ADD_ENTITY_ICON(Entity entity, char* icon) { return invoke<Any>(0xF06180, entity, icon); } // 0x9CD43EEE12BF4DD0 0xF3027D21
	static void SET_ENTITY_ICON_VISIBILITY(Entity entity, BOOL toggle) { invoke<Void>(0xF06210, entity, toggle); } // 0xE0E8BEECCA96BA31 0xD1D2FD52
	static void SET_ENTITY_ICON_COLOR(Entity entity, int red, int green, int blue, int alpha) { invoke<Void>(0xF06270, entity, red, green, blue, alpha); } // 0x1D5F595CCAE2E238 0x6EE1E946
	static void SET_DRAW_ORIGIN(float x, float y, float z, Any p3) { invoke<Void>(0xF06310, x, y, z, p3); } // 0xAA0008F3BBB8F416 0xE10198D5
	static void CLEAR_DRAW_ORIGIN() { invoke<Void>(0xF063D0); } // 0xFF0B610F6BE0D7AF 0xDD76B263
	static void ATTACH_TV_AUDIO_TO_ENTITY(Entity entity) { invoke<Void>(0xF06680, entity); } // 0x845BAD77CC770633 0x784944DB
	static void SET_TV_AUDIO_FRONTEND(BOOL toggle) { invoke<Void>(0xF066F0, toggle); } // 0x113D2C5DC57E1774 0x2E0DFA35
	static int LOAD_MOVIE_MESH_SET(char* movieMeshSetName) { return invoke<int>(0xF06750, movieMeshSetName); } // 0xB66064452270E8F1 0x9627905C
	static void RELEASE_MOVIE_MESH_SET(int movieMeshSet) { invoke<Void>(0xF067C0, movieMeshSet); } // 0xEB119AA014E89183 0x4FA5501D
	static Any _0x9B6E70C5CEEF4EEB(Any p0) { return invoke<Any>(0xF06800, p0); } // 0x9B6E70C5CEEF4EEB 0x9D5D9B38
	static void GET_SCREEN_RESOLUTION(int* x, int* y) { invoke<Void>(0xF06840, x, y); } // 0x888D57E407E63624 0x29F3572F
	static void _GET_ACTIVE_SCREEN_RESOLUTION(int* x, int* y) { invoke<Void>(0xF06860, x, y); } // 0x873C9F3104101DD3
	static float _GET_ASPECT_RATIO(BOOL b) { return invoke<float>(0xF06890, b); } // 0xF1307EF624A80D87
	static Any _0xB2EBE8CBC58B90E9() { return invoke<Any>(0xF068C0); } // 0xB2EBE8CBC58B90E9
	static BOOL GET_IS_WIDESCREEN() { return invoke<BOOL>(0xF068F0); } // 0x30CF4BDA4FCB1905 0xEC717AEF
	static BOOL GET_IS_HIDEF() { return invoke<BOOL>(0xF06910); } // 0x84ED31191CC5D2C9 0x1C340359
	static void _0xEFABC7722293DA7C() { invoke<Void>(0xF06930); } // 0xEFABC7722293DA7C
	static void SET_NIGHTVISION(BOOL toggle) { invoke<Void>(0xF06940, toggle); } // 0x18F621F7A5B1F85D 0xD1E5565F
	static Any _0x35FB78DC42B7BD21() { return invoke<Any>(0xF06960); } // 0x35FB78DC42B7BD21
	static BOOL _IS_NIGHTVISION_ACTIVE() { return invoke<BOOL>(0xF06970); } // 0x2202A3F42C8E5F79 0x62619061
	static void _0xEF398BEEE4EF45F9(BOOL p0) { invoke<Void>(0xF069C0, p0); } // 0xEF398BEEE4EF45F9
	static void SET_NOISEOVERIDE(BOOL toggle) { invoke<Void>(0xF06A10, toggle); } // 0xE787BF1C5CF823C9 0xD576F5DD
	static void SET_NOISINESSOVERIDE(float value) { invoke<Void>(0xF06A30, value); } // 0xCB6A7C3BB17A0C67 0x046B62D9
	static BOOL GET_SCREEN_COORD_FROM_WORLD_COORD(float worldX, float worldY, float worldZ, float* screenX, float* screenY) { return invoke<BOOL>(0xF06A50, worldX, worldY, worldZ, screenX, screenY); } // 0x34E82F05DF2974F5 0x1F950E4B
	static Vector3 GET_TEXTURE_RESOLUTION(char* textureDict, char* textureName) { return invoke<Vector3>(0xF06AC0, textureDict, textureName); } // 0x35736EE65BD00C11 0x096DAA4D
	static void _0xE2892E7E55D7073A(float p0) { invoke<Void>(0xF06B60, p0); } // 0xE2892E7E55D7073A 0x455F1084
	static void SET_FLASH(float p0, float p1, float fadeIn, float duration, float fadeOut) { invoke<Void>(0xF06B80, p0, p1, fadeIn, duration, fadeOut); } // 0x0AB84296FED9CFC6 0x7E55A1EE
	static void _0x3669F1B198DCAA4F() { invoke<Void>(0xF06BB0); } // 0x3669F1B198DCAA4F 0x0DCC0B8B
	static void _SET_BLACKOUT(BOOL enable) { invoke<Void>(0xF06BF0, enable); } // 0x1268615ACE24D504 0xAA2A0EAF
	static void _0xC35A6D07C93802B2() { invoke<Void>(0xF06C10); } // 0xC35A6D07C93802B2
	static int CREATE_TRACKED_POINT() { return invoke<int>(0xF06C20); } // 0xE2C9439ED45DEA60 0x3129C31A
	static void SET_TRACKED_POINT_INFO(int point, float x, float y, float z, float radius) { invoke<Void>(0xF06C40, point, x, y, z, radius); } // 0x164ECBB3CF750CB0 0x28689AA4
	static BOOL IS_TRACKED_POINT_VISIBLE(int point) { return invoke<BOOL>(0xF06CF0, point); } // 0xC45CCDAAC9221CA8 0x0BFC4F64
	static void DESTROY_TRACKED_POINT(int point) { invoke<Void>(0xF06D20, point); } // 0xB25DC90BAD56CA42 0x14AC675F
	static Any _0xBE197EAA669238F4(Any p0, Any p1, Any p2, Any p3) { return invoke<Any>(0xF06D30, p0, p1, p2, p3); } // 0xBE197EAA669238F4
	static void _0x61F95E5BB3E0A8C6(Any p0) { invoke<Void>(0xF06D40, p0); } // 0x61F95E5BB3E0A8C6
	static void _0xAE51BC858F32BA66(Any p0, float p1, float p2, float p3, float p4) { invoke<Void>(0xF06D50, p0, p1, p2, p3, p4); } // 0xAE51BC858F32BA66
	static void _0x649C97D52332341A(Any p0) { invoke<Void>(0xF06DB0, p0); } // 0x649C97D52332341A
	static Any _0x2C42340F916C5930(Any p0) { return invoke<Any>(0xF06DD0, p0); } // 0x2C42340F916C5930
	static void _0x14FC5833464340A8() { invoke<Void>(0xF06DF0); } // 0x14FC5833464340A8
	static void _0x0218BA067D249DEA() { invoke<Void>(0xF06E00); } // 0x0218BA067D249DEA
	static void _0x1612C45F9E3E0D44() { invoke<Void>(0xF06E10); } // 0x1612C45F9E3E0D44
	static void _0x5DEBD9C4DC995692() { invoke<Void>(0xF06E20); } // 0x5DEBD9C4DC995692
	static void _0x6D955F6A9E0295B1(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { invoke<Void>(0xF06EC0, p0, p1, p2, p3, p4, p5, p6); } // 0x6D955F6A9E0295B1
	static void _0x302C91AB2D477F7E() { invoke<Void>(0xF06F50); } // 0x302C91AB2D477F7E
	static void _0x03FC694AE06C5A20() { invoke<Void>(0xF06F60); } // 0x03FC694AE06C5A20 0x48F16186
	static void _0xD2936CAB8B58FCBD(Any p0, BOOL p1, float p2, float p3, float p4, float p5, BOOL p6, float p7) { invoke<Void>(0xF06F80, p0, p1, p2, p3, p4, p5, p6, p7); } // 0xD2936CAB8B58FCBD
	static void _0x5F0F3F56635809EF(float p0) { invoke<Void>(0xF06FC0, p0); } // 0x5F0F3F56635809EF 0x13D4ABC0
	static void _0x5E9DAF5A20F15908(float p0) { invoke<Void>(0xF06FD0, p0); } // 0x5E9DAF5A20F15908 0xD2157428
	static void _0x36F6626459D91457(float p0) { invoke<Void>(0xF06FE0, p0); } // 0x36F6626459D91457 0xC07C64C9
	static void _SET_FAR_SHADOWS_SUPPRESSED(BOOL toggle) { invoke<Void>(0xF07000, toggle); } // 0x80ECBC0C856D3B0B 0xFE903D0F
	static void _0x25FC3E33A31AD0C9(BOOL p0) { invoke<Void>(0xF07020, p0); } // 0x25FC3E33A31AD0C9
	static void _0xB11D94BC55F41932(char* p0) { invoke<Void>(0xF07040, p0); } // 0xB11D94BC55F41932 0xDE10BA1F
	static void _0x27CB772218215325() { invoke<Void>(0xF07050); } // 0x27CB772218215325
	static void _0x6DDBF9DFFC4AC080(BOOL p0) { invoke<Void>(0xF07060, p0); } // 0x6DDBF9DFFC4AC080 0x9F470BE3
	static void _0xD39D13C9FEBF0511(BOOL p0) { invoke<Void>(0xF07080, p0); } // 0xD39D13C9FEBF0511 0x4A124267
	static void _0x02AC28F3A01FA04A(float p0) { invoke<Void>(0xF070A0, p0); } // 0x02AC28F3A01FA04A 0xB19B2764
	static void _0x0AE73D8DF3A762B2(BOOL p0) { invoke<Void>(0xF070B0, p0); } // 0x0AE73D8DF3A762B2 0x342FA2B4
	static void _0xA51C4B86B71652AE(BOOL p0) { invoke<Void>(0xF070F0, p0); } // 0xA51C4B86B71652AE 0x5D3BFFC9
	static void _0x312342E1A4874F3F(float p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, BOOL p8) { invoke<Void>(0xF07110, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0x312342E1A4874F3F 0xD9653728
	static void _0x2485D34E50A22E84(float p0, float p1, float p2) { invoke<Void>(0xF07160, p0, p1, p2); } // 0x2485D34E50A22E84 0x72BA8A14
	static void _0x12995F2E53FFA601(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8, int p9, int p10, int p11) { invoke<Void>(0xF07180, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); } // 0x12995F2E53FFA601 0x804F444C
	static void _0xDBAA5EC848BA2D46(Any p0, Any p1) { invoke<Void>(0xF071F0, p0, p1); } // 0xDBAA5EC848BA2D46 0xBB1A1294
	static void _0xC0416B061F2B7E5E(BOOL p0) { invoke<Void>(0xF07200, p0); } // 0xC0416B061F2B7E5E 0x1A1A72EF
	static void _0xB1BB03742917A5D6(int type, float xPos, float yPos, float zPos, float p4, int red, int green, int blue, int alpha) { invoke<Void>(0xF07220, type, xPos, yPos, zPos, p4, red, green, blue, alpha); } // 0xB1BB03742917A5D6 0x3BB12B75
	static void _0x9CFDD90B2B844BF7(float p0, float p1, float p2, float p3, float p4) { invoke<Void>(0xF072E0, p0, p1, p2, p3, p4); } // 0x9CFDD90B2B844BF7 0x4EA70FB4
	static void _0x06F761EA47C1D3ED(BOOL p0) { invoke<Void>(0xF07310, p0); } // 0x06F761EA47C1D3ED 0x0D830DC7
	static Any _0xA4819F5E23E2FFAD() { return invoke<Any>(0xF07330); } // 0xA4819F5E23E2FFAD 0xA08B46AD
	static Vector3 _0xA4664972A9B8F8BA(Any p0) { return invoke<Vector3>(0xF07350, p0); } // 0xA4664972A9B8F8BA 0xECD470F0
	static void SET_SEETHROUGH(BOOL toggle) { invoke<Void>(0xF07380, toggle); } // 0x7E08924259E08CE0 0x74D4995C
	static BOOL _IS_SEETHROUGH_ACTIVE() { return invoke<BOOL>(0xF073C0); } // 0x44B80ABAB9D80BD3 0x1FE547F2
	static void _0xD7D0B00177485411(Any p0, float p1) { invoke<Void>(0xF074F0, p0, p1); } // 0xD7D0B00177485411 0x654F0287
	static void _0xB3C641F3630BF6DA(float p0) { invoke<Void>(0xF075A0, p0); } // 0xB3C641F3630BF6DA 0xF6B837F0
	static Any _0xE59343E9E96529E7() { return invoke<Any>(0xF075C0); } // 0xE59343E9E96529E7 0xD906A3A9
	static void _0xE63D7C6EECECB66B(BOOL p0) { invoke<Void>(0xF07600, p0); } // 0xE63D7C6EECECB66B 0xD34A6CBA
	static void _0xE3E2C1B4C59DBC77(int unk) { invoke<Void>(0xF07630, unk); } // 0xE3E2C1B4C59DBC77 0xD8CC7221
	static BOOL _TRANSITION_TO_BLURRED(float transitionTime) { return invoke<BOOL>(0xF07640, transitionTime); } // 0xA328A24AAA6B7FDC 0x5604B890
	static BOOL _TRANSITION_FROM_BLURRED(float transitionTime) { return invoke<BOOL>(0xF07690, transitionTime); } // 0xEFACC8AEF94430D5 0x46617502
	static void _0xDE81239437E8C5A8() { invoke<Void>(0xF076F0); } // 0xDE81239437E8C5A8 0xDB7AECDA
	static float IS_PARTICLE_FX_DELAYED_BLINK() { return invoke<float>(0xF07700); } // 0x5CCABFFCA31DDE33 0xEA432A94
	static Any _0x7B226C785A52A0A9() { return invoke<Any>(0xF07720); } // 0x7B226C785A52A0A9 0x926B8734
	static void _SET_FROZEN_RENDERING_DISABLED(BOOL enabled) { invoke<Void>(0xF07760, enabled); } // 0xDFC252D8A3E15AB7 0x30ADE541
	static BOOL _0xEB3DAC2C86001E5E() { return invoke<BOOL>(0xF07780); } // 0xEB3DAC2C86001E5E
	static void _0xE1C8709406F2C41C() { invoke<Void>(0xF077A0); } // 0xE1C8709406F2C41C 0x0113EAE4
	static void _0x851CD923176EBA7C() { invoke<Void>(0xF077B0); } // 0x851CD923176EBA7C 0xDCBA251B
	static void _0xBA3D65906822BED5(BOOL p0, BOOL p1, float p2, float p3, float p4, float p5) { invoke<Void>(0xF077D0, p0, p1, p2, p3, p4, p5); } // 0xBA3D65906822BED5 0x513D444B
	static BOOL _0x7AC24EAB6D74118D(BOOL p0) { return invoke<BOOL>(0xF07840, p0); } // 0x7AC24EAB6D74118D 0xB2410EAB
	static Any _0xBCEDB009461DA156() { return invoke<Any>(0xF078A0); } // 0xBCEDB009461DA156 0x5AB94128
	static BOOL _0x27FEB5254759CDE3(char* textureDict, BOOL p1) { return invoke<BOOL>(0xF078C0, textureDict, p1); } // 0x27FEB5254759CDE3 0xD63FCB3E
	static int START_PARTICLE_FX_NON_LOOPED_AT_COORD(char* effectName, float xPos, float yPos, float zPos, float xRot, float yRot, float zRot, float scale, BOOL xAxis, BOOL yAxis, BOOL zAxis) { return invoke<int>(0xF078F0, effectName, xPos, yPos, zPos, xRot, yRot, zRot, scale, xAxis, yAxis, zAxis); } // 0x25129531F77B9ED3 0xDD79D679
	static BOOL _START_PARTICLE_FX_NON_LOOPED_AT_COORD_2(char* effectName, float xPos, float yPos, float zPos, float xRot, float yRot, float zRot, float scale, BOOL xAxis, BOOL yAxis, BOOL zAxis) { return invoke<BOOL>(0xF07980, effectName, xPos, yPos, zPos, xRot, yRot, zRot, scale, xAxis, yAxis, zAxis); } // 0xF56B8137DF10135D 0x633F8C48
	static BOOL START_PARTICLE_FX_NON_LOOPED_ON_PED_BONE(char* effectName, Ped ped, float offsetX, float offsetY, float offsetZ, float rotX, float rotY, float rotZ, int boneIndex, float scale, BOOL axisX, BOOL axisY, BOOL axisZ) { return invoke<BOOL>(0xF07A10, effectName, ped, offsetX, offsetY, offsetZ, rotX, rotY, rotZ, boneIndex, scale, axisX, axisY, axisZ); } // 0x0E7E72961BA18619 0x53DAEF4E
	static BOOL _START_PARTICLE_FX_NON_LOOPED_ON_PED_BONE_2(char* effectName, Ped ped, float offsetX, float offsetY, float offsetZ, float rotX, float rotY, float rotZ, int boneIndex, float scale, BOOL axisX, BOOL axisY, BOOL axisZ) { return invoke<BOOL>(0xF07AA0, effectName, ped, offsetX, offsetY, offsetZ, rotX, rotY, rotZ, boneIndex, scale, axisX, axisY, axisZ); } // 0xA41B6A43642AC2CF 0x161780C1
	static BOOL START_PARTICLE_FX_NON_LOOPED_ON_ENTITY(char* effectName, Entity entity, float offsetX, float offsetY, float offsetZ, float rotX, float rotY, float rotZ, float scale, BOOL axisX, BOOL axisY, BOOL axisZ) { return invoke<BOOL>(0xF07B30, effectName, entity, offsetX, offsetY, offsetZ, rotX, rotY, rotZ, scale, axisX, axisY, axisZ); } // 0x0D53A3B8DA0809D2 0x9604DAD4
	static BOOL _START_PARTICLE_FX_NON_LOOPED_ON_ENTITY_2(char* effectName, Entity entity, float offsetX, float offsetY, float offsetZ, float rotX, float rotY, float rotZ, float scale, BOOL axisX, BOOL axisY, BOOL axisZ) { return invoke<BOOL>(0xF07BC0, effectName, entity, offsetX, offsetY, offsetZ, rotX, rotY, rotZ, scale, axisX, axisY, axisZ); } // 0xC95EB1DB6E92113D
	static void SET_PARTICLE_FX_NON_LOOPED_COLOUR(float r, float g, float b) { invoke<Void>(0xF07C50, r, g, b); } // 0x26143A59EF48B262 0x7B689E20
	static void SET_PARTICLE_FX_NON_LOOPED_ALPHA(float alpha) { invoke<Void>(0xF07CE0, alpha); } // 0x77168D722C58B2FC 0x497EAFF2
	static void _0x8CDE909A0370BB3A(BOOL p0) { invoke<Void>(0xF07D10, p0); } // 0x8CDE909A0370BB3A
	static int START_PARTICLE_FX_LOOPED_AT_COORD(char* effectName, float x, float y, float z, float xRot, float yRot, float zRot, float scale, BOOL xAxis, BOOL yAxis, BOOL zAxis, BOOL p11) { return invoke<int>(0xF07D30, effectName, x, y, z, xRot, yRot, zRot, scale, xAxis, yAxis, zAxis, p11); } // 0xE184F4F0DC5910E7 0xD348E3E6
	static int START_PARTICLE_FX_LOOPED_ON_PED_BONE(char* effectName, Ped ped, float xOffset, float yOffset, float zOffset, float xRot, float yRot, float zRot, int boneIndex, float scale, BOOL xAxis, BOOL yAxis, BOOL zAxis) { return invoke<int>(0xF07D90, effectName, ped, xOffset, yOffset, zOffset, xRot, yRot, zRot, boneIndex, scale, xAxis, yAxis, zAxis); } // 0xF28DA9F38CD1787C 0xF8FC196F
	static int START_PARTICLE_FX_LOOPED_ON_ENTITY(char* effectName, Entity entity, float xOffset, float yOffset, float zOffset, float xRot, float yRot, float zRot, float scale, BOOL xAxis, BOOL yAxis, BOOL zAxis) { return invoke<int>(0xF07DF0, effectName, entity, xOffset, yOffset, zOffset, xRot, yRot, zRot, scale, xAxis, yAxis, zAxis); } // 0x1AE42C1660FD6517 0x0D06FF62
	static int _START_PARTICLE_FX_LOOPED_ON_ENTITY_BONE(char* effectName, Entity entity, float xOffset, float yOffset, float zOffset, float xRot, float yRot, float zRot, int boneIndex, float scale, BOOL xAxis, BOOL yAxis, BOOL zAxis) { return invoke<int>(0xF07E80, effectName, entity, xOffset, yOffset, zOffset, xRot, yRot, zRot, boneIndex, scale, xAxis, yAxis, zAxis); } // 0xC6EB449E33977F0B
	static int _START_PARTICLE_FX_LOOPED_ON_ENTITY_2(char* effectName, Entity entity, float xOffset, float yOffset, float zOffset, float xRot, float yRot, float zRot, float scale, BOOL xAxis, BOOL yAxis, BOOL zAxis) { return invoke<int>(0xF07F10, effectName, entity, xOffset, yOffset, zOffset, xRot, yRot, zRot, scale, xAxis, yAxis, zAxis); } // 0x6F60E89A7B64EE1D 0x110752B2
	static int _START_PARTICLE_FX_LOOPED_ON_ENTITY_BONE_2(char* effectName, Entity entity, float xOffset, float yOffset, float zOffset, float xRot, float yRot, float zRot, int boneIndex, float scale, BOOL xAxis, BOOL yAxis, BOOL zAxis) { return invoke<int>(0xF07FA0, effectName, entity, xOffset, yOffset, zOffset, xRot, yRot, zRot, boneIndex, scale, xAxis, yAxis, zAxis); } // 0xDDE23F30CC5A0F03
	static void STOP_PARTICLE_FX_LOOPED(int ptfxHandle, BOOL p1) { invoke<Void>(0xF08030, ptfxHandle, p1); } // 0x8F75998877616996 0xD245455B
	static void REMOVE_PARTICLE_FX(int ptfxHandle, BOOL p1) { invoke<Void>(0xF08050, ptfxHandle, p1); } // 0xC401503DFE8D53CF 0x6BA48C7E
	static void REMOVE_PARTICLE_FX_FROM_ENTITY(Entity entity) { invoke<Void>(0xF08070, entity); } // 0xB8FEAEEBCC127425 0xCEDE52E9
	static void REMOVE_PARTICLE_FX_IN_RANGE(float X, float Y, float Z, float radius) { invoke<Void>(0xF080C0, X, Y, Z, radius); } // 0xDD19FA1C6D657305 0x7EB8F275
	static BOOL DOES_PARTICLE_FX_LOOPED_EXIST(int ptfxHandle) { return invoke<BOOL>(0xF08110, ptfxHandle); } // 0x74AFEF0D2E1E409B 0xCBF91D2A
	static void SET_PARTICLE_FX_LOOPED_OFFSETS(int ptfxHandle, float x, float y, float z, float rotX, float rotY, float rotZ) { invoke<Void>(0xF08140, ptfxHandle, x, y, z, rotX, rotY, rotZ); } // 0xF7DDEBEC43483C43 0x641F7790
	static void SET_PARTICLE_FX_LOOPED_EVOLUTION(int ptfxHandle, char* propertyName, float amount, BOOL Id) { invoke<Void>(0xF08190, ptfxHandle, propertyName, amount, Id); } // 0x5F0C4B5B1C393BE2 0x1CBC1373
	static void SET_PARTICLE_FX_LOOPED_COLOUR(int ptfxHandle, float r, float g, float b, BOOL p4) { invoke<Void>(0xF081B0, ptfxHandle, r, g, b, p4); } // 0x7F8F65877F88783B 0x5219D530
	static void SET_PARTICLE_FX_LOOPED_ALPHA(int ptfxHandle, float alpha) { invoke<Void>(0xF081E0, ptfxHandle, alpha); } // 0x726845132380142E 0x5ED49BE1
	static void SET_PARTICLE_FX_LOOPED_SCALE(int ptfxHandle, float scale) { invoke<Void>(0xF081F0, ptfxHandle, scale); } // 0xB44250AAA456492D 0x099B8B49
	static void _SET_PARTICLE_FX_LOOPED_RANGE(int ptfxHandle, float range) { invoke<Void>(0xF08200, ptfxHandle, range); } // 0xDCB194B85EF7B541 0x233DE879
	static void SET_PARTICLE_FX_CAM_INSIDE_VEHICLE(BOOL p0) { invoke<Void>(0xF08210, p0); } // 0xEEC4047028426510 0x19EC0001
	static void SET_PARTICLE_FX_CAM_INSIDE_NONPLAYER_VEHICLE(Any p0, BOOL p1) { invoke<Void>(0xF08230, p0, p1); } // 0xACEE6F360FC1F6B6 0x6B125A02
	static void SET_PARTICLE_FX_SHOOTOUT_BOAT(Any p0) { invoke<Void>(0xF082B0, p0); } // 0x96EF97DAEB89BEF5 0xD938DEE0
	static void SET_PARTICLE_FX_BLOOD_SCALE(BOOL p0) { invoke<Void>(0xF08390, p0); } // 0x5F6DF3D92271E8A1 0x18136DE0
	static void ENABLE_CLOWN_BLOOD_VFX(BOOL toggle) { invoke<Void>(0xF08400, toggle); } // 0xD821490579791273 0xC61C75E9
	static void ENABLE_ALIEN_BLOOD_VFX(BOOL Toggle) { invoke<Void>(0xF08440, Toggle); } // 0x9DCE1F0F78260875 0xCE8B8748
	static void _0x27E32866E9A5C416(float p0) { invoke<Void>(0xF08480, p0); } // 0x27E32866E9A5C416
	static void _0xBB90E12CAC1DAB25(float p0) { invoke<Void>(0xF084C0, p0); } // 0xBB90E12CAC1DAB25
	static void _0xCA4AE345A153D573(BOOL p0) { invoke<Void>(0xF08500, p0); } // 0xCA4AE345A153D573
	static void _0x54E22EA2C1956A8D(float p0) { invoke<Void>(0xF08530, p0); } // 0x54E22EA2C1956A8D
	static void _0x949F397A288B28B3(float p0) { invoke<Void>(0xF08570, p0); } // 0x949F397A288B28B3
	static void _0x9B079E5221D984D3(BOOL p0) { invoke<Void>(0xF08670, p0); } // 0x9B079E5221D984D3
	static void _USE_PARTICLE_FX_ASSET_NEXT_CALL(char* name) { invoke<Void>(0xF08690, name); } // 0x6C38AF3693A69A91 0x9C720B61
	static void _SET_PARTICLE_FX_ASSET_OLD_TO_NEW(char* oldAsset, char* newAsset) { invoke<Void>(0xF086B0, oldAsset, newAsset); } // 0xEA1E2D93F6F75ED9
	static void _RESET_PARTICLE_FX_ASSET_OLD_TO_NEW(char* name) { invoke<Void>(0xF086E0, name); } // 0x89C8553DD3274AAE
	static void _0xA46B73FAA3460AE1(BOOL p0) { invoke<Void>(0xF08710, p0); } // 0xA46B73FAA3460AE1
	static void _0xF78B803082D4386F(float p0) { invoke<Void>(0xF08730, p0); } // 0xF78B803082D4386F
	static void WASH_DECALS_IN_RANGE(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0xF08750, p0, p1, p2, p3, p4); } // 0x9C30613D50A6ADEF 0xDEECBC57
	static void WASH_DECALS_FROM_VEHICLE(Vehicle vehicle, float p1) { invoke<Void>(0xF08790, vehicle, p1); } // 0x5B712761429DBC14 0x2929F11A
	static void FADE_DECALS_IN_RANGE(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0xF087F0, p0, p1, p2, p3, p4); } // 0xD77EDADB0420E6E0 0xF81E884A
	static void REMOVE_DECALS_IN_RANGE(float x, float y, float z, float range) { invoke<Void>(0xF08830, x, y, z, range); } // 0x5D6B2D4830A67C62 0x06A619A0
	static void REMOVE_DECALS_FROM_OBJECT(Object obj) { invoke<Void>(0xF08870, obj); } // 0xCCF71CBDDF5B6CB9 0x8B67DCA7
	static void REMOVE_DECALS_FROM_OBJECT_FACING(Object obj, float x, float y, float z) { invoke<Void>(0xF088D0, obj, x, y, z); } // 0xA6F6F70FDC6D144C 0xF4999A55
	static void REMOVE_DECALS_FROM_VEHICLE(Vehicle vehicle) { invoke<Void>(0xF08940, vehicle); } // 0xE91F1B65F2B48D57 0x831D06CA
	static Object ADD_DECAL(int decalType, float posX, float posY, float posZ, float p4, float p5, float p6, float p7, float p8, float p9, float width, float height, float rCoef, float gCoef, float bCoef, float opacity, float timeout, BOOL p17, BOOL p18, BOOL p19) { return invoke<Object>(0xF089A0, decalType, posX, posY, posZ, p4, p5, p6, p7, p8, p9, width, height, rCoef, gCoef, bCoef, opacity, timeout, p17, p18, p19); } // 0xB302244A1839BDAD 0xEAD0C412
	static Any ADD_PETROL_DECAL(float x, float y, float z, float groundLvl, float width, float transparency) { return invoke<Any>(0xF08A30, x, y, z, groundLvl, width, transparency); } // 0x4F5212C7AD880DF8 0x1259DF42
	static void _0x99AC7F0D8B9C893D(float p0) { invoke<Void>(0xF08AB0, p0); } // 0x99AC7F0D8B9C893D 0xE3938B0B
	static void _0x967278682CB6967A(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xF08B10, p0, p1, p2, p3); } // 0x967278682CB6967A 0xBAEC6ADD
	static void _0x0A123435A26C36CD() { invoke<Void>(0xF08B40); } // 0x0A123435A26C36CD 0xCCCA6855
	static void REMOVE_DECAL(Object decal) { invoke<Void>(0xF08B50, decal); } // 0xED3F346429CCD659 0xA4363188
	static BOOL IS_DECAL_ALIVE(Object decal) { return invoke<BOOL>(0xF08B60, decal); } // 0xC694D74949CAFD0C 0xCDD4A61A
	static float GET_DECAL_WASH_LEVEL(int decal) { return invoke<float>(0xF08B90, decal); } // 0x323F647679A09103 0x054448EF
	static void _0xD9454B5752C857DC() { invoke<Void>(0xF08BC0); } // 0xD9454B5752C857DC 0xEAB6417C
	static void _0x27CFB1B1E078CB2D() { invoke<Void>(0xF08BD0); } // 0x27CFB1B1E078CB2D 0xC2703B88
	static void _0x4B5CFC83122DF602() { invoke<Void>(0xF08BE0); } // 0x4B5CFC83122DF602 0xA706E84D
	static BOOL _0x2F09F7976C512404(float xCoord, float yCoord, float zCoord, float p3) { return invoke<BOOL>(0xF08C40, xCoord, yCoord, zCoord, p3); } // 0x2F09F7976C512404 0x242C6A04
	static void _ADD_DECAL_TO_MARKER(int decalType, char* textureDict, char* textureName) { invoke<Void>(0xF08CF0, decalType, textureDict, textureName); } // 0x8A35C742130C6080 0x335695CF
	static void _0xB7ED70C49521A61D(int decalType) { invoke<Void>(0xF08D30, decalType); } // 0xB7ED70C49521A61D 0x7B786555
	static void MOVE_VEHICLE_DECALS(Any p0, Any p1) { invoke<Void>(0xF08D50, p0, p1); } // 0x84C8D7C2D30D3280 0xCE9E6CF2
	static BOOL _ADD_CLAN_DECAL_TO_VEHICLE(Vehicle vehicle, Ped ped, int boneIndex, float x1, float x2, float x3, float y1, float y2, float y3, float z1, float z2, float z3, float scale, Any p13, int alpha) { return invoke<BOOL>(0xF08DF0, vehicle, ped, boneIndex, x1, x2, x3, y1, y2, y3, z1, z2, z3, scale, p13, alpha); } // 0x428BDCB9DA58DA53 0x12077738
	static void _0xD2300034310557E4(Vehicle vehicle, Any p1) { invoke<Void>(0xF08E90, vehicle, p1); } // 0xD2300034310557E4 0x667046A8
	static int _0xFE26117A5841B2FF(Vehicle vehicle, Any p1) { return invoke<int>(0xF08EF0, vehicle, p1); } // 0xFE26117A5841B2FF 0x4F4D76E8
	static BOOL _DOES_VEHICLE_HAVE_DECAL(Vehicle vehicle, Any p1) { return invoke<BOOL>(0xF08F60, vehicle, p1); } // 0x060D935D3981A275 0x6D58F73B
	static void _0x0E4299C549F0D1F1(BOOL p0) { invoke<Void>(0xF08FD0, p0); } // 0x0E4299C549F0D1F1 0x9BABCBA4
	static void _0x02369D5C8A51FDCF(BOOL p0) { invoke<Void>(0xF09000, p0); } // 0x02369D5C8A51FDCF 0xFDF6D8DA
	static void _0x46D1A61A21F566FC(float p0) { invoke<Void>(0xF09030, p0); } // 0x46D1A61A21F566FC 0x2056A015
	static void _0x2A2A52824DB96700(Any* p0) { invoke<Void>(0xF09070, p0); } // 0x2A2A52824DB96700 0x0F486429
	static void _0x1600FD8CF72EBC12(float p0) { invoke<Void>(0xF090A0, p0); } // 0x1600FD8CF72EBC12 0xD87CC710
	static void _0xEFB55E7C25D3B3BE() { invoke<Void>(0xF090C0); } // 0xEFB55E7C25D3B3BE 0xE29EE145
	static void _0xA44FF770DFBC5DAE() { invoke<Void>(0xF090D0); } // 0xA44FF770DFBC5DAE
	static void DISABLE_VEHICLE_DISTANTLIGHTS(BOOL toggle) { invoke<Void>(0xF09100, toggle); } // 0xC9F98AC1884E73A2 0x7CFAE36F
	static void _0x03300B57FCAC6DDB(BOOL p0) { invoke<Void>(0xF09120, p0); } // 0x03300B57FCAC6DDB 0x60F72371
	static void _0x98EDF76A7271E4F2() { invoke<Void>(0xF09140); } // 0x98EDF76A7271E4F2
	static void _SET_FORCE_PED_FOOTSTEPS_TRACKS(BOOL toggle) { invoke<Void>(0xF09150, toggle); } // 0xAEEDAD1420C65CC0
	static void _SET_FORCE_VEHICLE_TRAILS(BOOL toggle) { invoke<Void>(0xF09170, toggle); } // 0x4CC7F0FEA5283FE0
	static void _0xD7021272EB0A451E(char* p0) { invoke<Void>(0xF091C0, p0); } // 0xD7021272EB0A451E
	static void SET_TIMECYCLE_MODIFIER(char* modifierName) { invoke<Void>(0xF09210, modifierName); } // 0x2C933ABF17A1DF41 0xA81F3638
	static void SET_TIMECYCLE_MODIFIER_STRENGTH(float strength) { invoke<Void>(0xF09290, strength); } // 0x82E7FFCD5B2326B3 0x458F4F45
	static void SET_TRANSITION_TIMECYCLE_MODIFIER(char* modifierName, float transition) { invoke<Void>(0xF092B0, modifierName, transition); } // 0x3BCF567485E1971C 0xBB2BA72A
	static void _0x1CBA05AE7BD7EE05(float p0) { invoke<Void>(0xF09310, p0); } // 0x1CBA05AE7BD7EE05 0x56345F6B
	static void CLEAR_TIMECYCLE_MODIFIER() { invoke<Void>(0xF09330); } // 0x0F07E7745A236711 0x8D8DF8EE
	static int GET_TIMECYCLE_MODIFIER_INDEX() { return invoke<int>(0xF09370); } // 0xFDF3D97C674AFB66 0x594FEEC4
	static Any _0x459FD2C8D0AB78BC() { return invoke<Any>(0xF09390); } // 0x459FD2C8D0AB78BC 0x03C44E4B
	static void PUSH_TIMECYCLE_MODIFIER() { invoke<Void>(0xF093B0); } // 0x58F735290861E6B4 0x7E082045
	static void POP_TIMECYCLE_MODIFIER() { invoke<Void>(0xF093C0); } // 0x3C8938D7D872211E 0x79D7D235
	static void _0xBBF327DED94E4DEB(char* p0) { invoke<Void>(0xF093D0, p0); } // 0xBBF327DED94E4DEB 0x85BA15A4
	static void _0xBDEB86F4D5809204(float p0) { invoke<Void>(0xF094A0, p0); } // 0xBDEB86F4D5809204 0x9559BB38
	static void _0xBF59707B3E5ED531(char* p0) { invoke<Void>(0xF094C0, p0); } // 0xBF59707B3E5ED531 0x554BA16E
	static void _0x1A8E2C8B9CF4549C(Any* p0, Any* p1) { invoke<Void>(0xF09570, p0, p1); } // 0x1A8E2C8B9CF4549C 0xE8F538B5
	static void _0x15E33297C3E8DC60(Any p0) { invoke<Void>(0xF095E0, p0); } // 0x15E33297C3E8DC60 0x805BAB08
	static void _0x5096FD9CCB49056D(Any* p0) { invoke<Void>(0xF095F0, p0); } // 0x5096FD9CCB49056D 0x908A335E
	static void _0x92CCC17A7A2285DA() { invoke<Void>(0xF09670); } // 0x92CCC17A7A2285DA 0x6776720A
	static Any _0xBB0527EC6341496D() { return invoke<Any>(0xF09690); } // 0xBB0527EC6341496D
	static void _0x2C328AF17210F009(float p0) { invoke<Void>(0xF096B0, p0); } // 0x2C328AF17210F009
	static void _0x2BF72AD5B41AA739() { invoke<Void>(0xF096E0); } // 0x2BF72AD5B41AA739
	static int REQUEST_SCALEFORM_MOVIE(char* scaleformName) { return invoke<int>(0xF09700, scaleformName); } // 0x11FE353CF9733E6F 0xC67E3DCB
	static int REQUEST_SCALEFORM_MOVIE_INSTANCE(char* scaleformName) { return invoke<int>(0xF09760, scaleformName); } // 0xC514489CFB8AF806 0x7CC8057D
	static int _REQUEST_SCALEFORM_MOVIE_INTERACTIVE(char* scaleformName) { return invoke<int>(0xF09790, scaleformName); } // 0xBD06C611BB9048C2
	static BOOL HAS_SCALEFORM_MOVIE_LOADED(int scaleformHandle) { return invoke<BOOL>(0xF097C0, scaleformHandle); } // 0x85F01B8D5B90570E 0xDDFB6448
	static BOOL _HAS_NAMED_SCALEFORM_MOVIE_LOADED(char* scaleformName) { return invoke<BOOL>(0xF098F0, scaleformName); } // 0x0C1C5D756FB5F337
	static BOOL HAS_SCALEFORM_CONTAINER_MOVIE_LOADED_INTO_PARENT(int scaleformHandle) { return invoke<BOOL>(0xF09990, scaleformHandle); } // 0x8217150E1217EBFD 0x1DFE8D8A
	static void SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(int* scaleformHandle) { invoke<Void>(0xF099C0, scaleformHandle); } // 0x1D132D614DD86811 0x5FED3BA1
	static void SET_SCALEFORM_MOVIE_TO_USE_SYSTEM_TIME(int scaleform, BOOL toggle) { invoke<Void>(0xF09A30, scaleform, toggle); } // 0x6D8EB211944DCE08 0x18C9DE8D
	static void DRAW_SCALEFORM_MOVIE(int scaleformHandle, float x, float y, float width, float height, int red, int green, int blue, int alpha, int unk) { invoke<Void>(0xF09B30, scaleformHandle, x, y, width, height, red, green, blue, alpha, unk); } // 0x54972ADAF0294A93 0x48DA6A58
	static void DRAW_SCALEFORM_MOVIE_FULLSCREEN(int scaleform, int red, int green, int blue, int alpha) { invoke<Void>(0xF09B60, scaleform, red, green, blue, alpha); } // 0x0DF606929C105BE1 0x7B48E696
	static void DRAW_SCALEFORM_MOVIE_FULLSCREEN_MASKED(int scaleform1, int scaleform2, int red, int green, int blue, int alpha) { invoke<Void>(0xF09C30, scaleform1, scaleform2, red, green, blue, alpha); } // 0xCF537FDE4FBD4CE5 0x9C59FC06
	static void DRAW_SCALEFORM_MOVIE_3D(int scaleform, float posX, float posY, float posZ, float rotX, float rotY, float rotZ, float p7, float sharpness, float p9, float scaleX, float scaleY, float scaleZ, Any p13) { invoke<Void>(0xF09C50, scaleform, posX, posY, posZ, rotX, rotY, rotZ, p7, sharpness, p9, scaleX, scaleY, scaleZ, p13); } // 0x87D51D72255D4E78 0xC4F63A89
	static void _DRAW_SCALEFORM_MOVIE_3D_NON_ADDITIVE(int scaleform, float posX, float posY, float posZ, float rotX, float rotY, float rotZ, float p7, float p8, float p9, float scaleX, float scaleY, float scaleZ, Any p13) { invoke<Void>(0xF09C70, scaleform, posX, posY, posZ, rotX, rotY, rotZ, p7, p8, p9, scaleX, scaleY, scaleZ, p13); } // 0x1CE592FDC749D6F5 0x899933C8
	static void CALL_SCALEFORM_MOVIE_METHOD(int scaleform, char* method) { invoke<Void>(0xF09C90, scaleform, method); } // 0xFBD96D87AC96D533 0x7AB77B57
	static void _CALL_SCALEFORM_MOVIE_FUNCTION_FLOAT_PARAMS(int scaleform, char* functionName, float param1, float param2, float param3, float param4, float param5) { invoke<Void>(0xF09D60, scaleform, functionName, param1, param2, param3, param4, param5); } // 0xD0837058AE2E4BEE 0x557EDA1D
	static void _CALL_SCALEFORM_MOVIE_FUNCTION_STRING_PARAMS(int scaleform, char* functionName, char* param1, char* param2, char* param3, char* param4, char* param5) { invoke<Void>(0xF09E30, scaleform, functionName, param1, param2, param3, param4, param5); } // 0x51BC1ED3CC44E8F7 0x91A7FCEB
	static void _CALL_SCALEFORM_MOVIE_FUNCTION_MIXED_PARAMS(int scaleform, char* functionName, float floatParam1, float floatParam2, float floatParam3, float floatParam4, float floatParam5, char* stringParam1, char* stringParam2, char* stringParam3, char* stringParam4, char* stringParam5) { invoke<Void>(0xF09F10, scaleform, functionName, floatParam1, floatParam2, floatParam3, floatParam4, floatParam5, stringParam1, stringParam2, stringParam3, stringParam4, stringParam5); } // 0xEF662D8D57E290B1 0x6EAF56DE
	static BOOL _BEGIN_SCALEFORM_MOVIE_METHOD_HUD_COMPONENT(int hudComponent, char* functionName) { return invoke<BOOL>(0xF09FF0, hudComponent, functionName); } // 0x98C494FD5BDFBFD5 0x5D66CE1E
	static BOOL BEGIN_SCALEFORM_MOVIE_METHOD(int scaleform, char* functionName) { return invoke<BOOL>(0xF0A040, scaleform, functionName); } // 0xF6E48914C7A8694E 0x215ABBE8
	static BOOL _BEGIN_SCALEFORM_MOVIE_METHOD_N(char* functionName) { return invoke<BOOL>(0xF0A120, functionName); } // 0xAB58C27C2E6123C6 0xF6015178
	static BOOL _BEGIN_SCALEFORM_MOVIE_METHOD_V(char* functionName) { return invoke<BOOL>(0xF0A180, functionName); } // 0xB9449845F73F5E9C 0x5E219B67
	static void END_SCALEFORM_MOVIE_METHOD() { invoke<Void>(0xF0A1E0); } // 0xC6796A8FFA375E53 0x02DBF2D7
	static int _END_SCALEFORM_MOVIE_METHOD_RETURN() { return invoke<int>(0xF0A1F0); } // 0xC50AA39A577AF886 0x2F38B526
	static BOOL _GET_SCALEFORM_MOVIE_FUNCTION_RETURN_BOOL(int method_return) { return invoke<BOOL>(0xF0A210, method_return); } // 0x768FF8961BA904D6 0x5CD7C3C0
	static int _GET_SCALEFORM_MOVIE_FUNCTION_RETURN_INT(int method_return) { return invoke<int>(0xF0A240, method_return); } // 0x2DE7EFA66B906036 0x2CFB0E6D
	static char* SITTING_TV(int method_return) { return invoke<char*>(0xF0A290, method_return); } // 0xE1E258829A885245 0x516862EB
	static void _ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(int value) { invoke<Void>(0xF0A300, value); } // 0xC3D0841A0CC546A6 0x716777CB
	static void _ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_FLOAT(float value) { invoke<Void>(0xF0A310, value); } // 0xD69736AAE04DB51A 0x9A01FFDA
	static void _ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_BOOL(BOOL value) { invoke<Void>(0xF0A330, value); } // 0xC58424BA936EB458 0x0D4AE8CB
	static void BEGIN_TEXT_COMMAND_SCALEFORM_STRING(char* componentType) { invoke<Void>(0xF0A350, componentType); } // 0x80338406F3475E55 0x3AC9CB55
	static void END_TEXT_COMMAND_SCALEFORM_STRING() { invoke<Void>(0xF0A360); } // 0x362E2D3FE93A9959 0x386CE0B8
	static void _END_TEXT_COMMAND_SCALEFORM_STRING_2() { invoke<Void>(0xF0A370); } // 0xAE4E8157D9ECF087 0x2E80DB52
	static void _ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_STRING(char* value) { invoke<Void>(0xF0A3A0, value); } // 0xBA7148484BD90365 0x4DAAD55B
	static void _ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_BUTTON_NAME(char* button) { invoke<Void>(0xF0A3C0, button); } // 0xE83A3E3557A56640 0xCCBF0334
	static BOOL _0x5E657EF1099EDD65(int p0) { return invoke<BOOL>(0xF0A3E0, p0); } // 0x5E657EF1099EDD65 0x91A081A1
	static void _0xEC52C631A1831C03(int p0) { invoke<Void>(0xF0A410, p0); } // 0xEC52C631A1831C03 0x83A9811D
	static void _REQUEST_HUD_SCALEFORM(int hudComponent) { invoke<Void>(0xF0A480, hudComponent); } // 0x9304881D6F6537EA 0x7AF85862
	static BOOL _HAS_HUD_SCALEFORM_LOADED(int hudComponent) { return invoke<BOOL>(0xF0A4A0, hudComponent); } // 0xDF6E5987D2B4D140 0x79B43255
	static void _0xF44A5456AC3F4F97(Any p0) { invoke<Void>(0xF0A4D0, p0); } // 0xF44A5456AC3F4F97 0x03D87600
	static BOOL _0xD1C7CB175E012964(int scaleformHandle) { return invoke<BOOL>(0xF0A4E0, scaleformHandle); } // 0xD1C7CB175E012964 0xE9183D3A
	static void SET_TV_CHANNEL(int channel) { invoke<Void>(0xF0A510, channel); } // 0xBAABBB23EB6E484E 0x41A8A627
	static int GET_TV_CHANNEL() { return invoke<int>(0xF0A520); } // 0xFC1E275A90D39995 0x6B96145A
	static void SET_TV_VOLUME(float volume) { invoke<Void>(0xF0A530, volume); } // 0x2982BF73F66E9DDC 0xF3504F4D
	static float GET_TV_VOLUME() { return invoke<float>(0xF0A540); } // 0x2170813D3DD8661B 0x39555CF0
	static void DRAW_TV_CHANNEL(float xPos, float yPos, float xScale, float yScale, float rotation, int red, int green, int blue, int alpha) { invoke<Void>(0xF0A560, xPos, yPos, xScale, yScale, rotation, red, green, blue, alpha); } // 0xFDDC2B4ED3C69DF0 0x8129EF89
	static void _LOAD_TV_CHANNEL_SEQUENCE(int TV_Channel, char* VideoSequence, BOOL Restart) { invoke<Void>(0xF0A620, TV_Channel, VideoSequence, Restart); } // 0xF7B38B8305F1FE8B 0xB262DE67
	static void _0x2201C576FACAEBE8(Any p0, char* p1, Any p2) { invoke<Void>(0xF0A640, p0, p1, p2); } // 0x2201C576FACAEBE8 0x78C4DCBE
	static void _0xBEB3D46BB7F043C0(Any p0) { invoke<Void>(0xF0A660, p0); } // 0xBEB3D46BB7F043C0 0xCBE7068F
	static BOOL _LOAD_TV_CHANNEL(Hash tvChannel) { return invoke<BOOL>(0xF0A670, tvChannel); } // 0x0AD973CA1E077B60 0x4D1EB0FB
	static void _0x74C180030FDE4B69(BOOL p0) { invoke<Void>(0xF0A6A0, p0); } // 0x74C180030FDE4B69 0x796DE696
	static void _0xD1C55B110E4DF534(Any p0) { invoke<Void>(0xF0A6C0, p0); } // 0xD1C55B110E4DF534 0xD99EC000
	static void ENABLE_MOVIE_SUBTITLES(BOOL toggle) { invoke<Void>(0xF0A720, toggle); } // 0x873FA65C778AD970 0xC2DEBA3D
	static BOOL _0xD3A10FC7FD8D98CD() { return invoke<BOOL>(0xF0A740); } // 0xD3A10FC7FD8D98CD 0xE40A0F1A
	static BOOL _0xF1CEA8A4198D8E9A(char* p0) { return invoke<BOOL>(0xF0A760, p0); } // 0xF1CEA8A4198D8E9A 0x2E7D9B98
	static BOOL _DRAW_SHOWROOM(char* p0, Ped ped, int p2, float posX, float posY, float posZ) { return invoke<BOOL>(0xF0A7D0, p0, ped, p2, posX, posY, posZ); } // 0x98C4FE6EC34154CA 0x9A0E3BFE
	static void _0x7A42B2E236E71415() { invoke<Void>(0xF0A8D0); } // 0x7A42B2E236E71415 0x431AA036
	static void _0x108BE26959A9D9BB(BOOL p0) { invoke<Void>(0xF0A8F0, p0); } // 0x108BE26959A9D9BB 0x24A7A7F6
	static void _0xA356990E161C9E65(BOOL p0) { invoke<Void>(0xF0A910, p0); } // 0xA356990E161C9E65 0xA1CB6C94
	static void _0x1C4FC5752BCD8E48(float p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, float p9, float p10, float p11, float p12) { invoke<Void>(0xF0A930, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12); } // 0x1C4FC5752BCD8E48 0x3B637AA7
	static void _0x5CE62918F8D703C7(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8, int p9, int p10, int p11) { invoke<Void>(0xF0AA10, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); } // 0x5CE62918F8D703C7 0xDF552973
	static void _START_SCREEN_EFFECT(char* effectName, int duration, BOOL looped) { invoke<Void>(0xF0AA80, effectName, duration, looped); } // 0x2206BF9A37B7F724 0x1D980479
	static void _STOP_SCREEN_EFFECT(char* effectName) { invoke<Void>(0xF0AB10, effectName); } // 0x068E835A1D0DC0E3 0x06BB5CDA
	static BOOL _GET_SCREEN_EFFECT_IS_ACTIVE(BOOL effectName) { return invoke<BOOL>(0xF0ABE0, effectName); } // 0x36AD3E690DA5ACEB 0x089D5921
	static void _STOP_ALL_SCREEN_EFFECTS() { invoke<Void>(0xF0AC50); } // 0xB4EDDC19532BFB85 0x4E6D875B
	static void _0xD2209BE128B5418C(char* graphicsName) { invoke<Void>(0xF0AC70, graphicsName); } // 0xD2209BE128B5418C
}

namespace STATS
{
	static Any STAT_CLEAR_SLOT_FOR_RELOAD(int statSlot) { return invoke<Any>(0xFDB570, statSlot); } // 0xEB0A72181D4AA4AD 0x84BDD475
	static BOOL STAT_LOAD(int p0) { return invoke<BOOL>(0xFDB620, p0); } // 0xA651443F437B1CE6 0x9E5629F4
	static BOOL STAT_SAVE(int p0, BOOL p1, int p2) { return invoke<BOOL>(0xFDB650, p0, p1, p2); } // 0xE07BCA305B82D2FD 0xE10A7CA4
	static void _0x5688585E6D563CD8(Any p0) { invoke<Void>(0xFDB680, p0); } // 0x5688585E6D563CD8 0xC62406A6
	static BOOL STAT_LOAD_PENDING(Any p0) { return invoke<BOOL>(0xFDB6B0, p0); } // 0xA1750FFAFA181661 0x4E9AC983
	static Any STAT_SAVE_PENDING() { return invoke<Any>(0xFDB6E0); } // 0x7D3A583856F2C5AC 0xC3FD3822
	static Any STAT_SAVE_PENDING_OR_REQUESTED() { return invoke<Any>(0xFDB700); } // 0xBBB6AD006F1BBEA3 0xA3407CA3
	static Any STAT_DELETE_SLOT(Any p0) { return invoke<Any>(0xFDB740, p0); } // 0x49A49BED12794D70 0x2F171B94
	static BOOL STAT_SLOT_IS_LOADED(Any p0) { return invoke<BOOL>(0xFDB7A0, p0); } // 0x0D0A9F0E7BD91E3C 0x7A299C13
	static BOOL _0x7F2C4CDF2E82DF4C(Any p0) { return invoke<BOOL>(0xFDB7D0, p0); } // 0x7F2C4CDF2E82DF4C 0x0BF0F4B2
	static Any _0xE496A53BA5F50A56(Any p0) { return invoke<Any>(0xFDB800, p0); } // 0xE496A53BA5F50A56 0xCE6B62B5
	static void _0xF434A10BA01C37D0(BOOL p0) { invoke<Void>(0xFDB850, p0); } // 0xF434A10BA01C37D0 0xCE7A2411
	static BOOL _0x7E6946F68A38B74F(Any p0) { return invoke<BOOL>(0xFDB870, p0); } // 0x7E6946F68A38B74F 0x22804C20
	static void _0xA8733668D1047B51(Any p0) { invoke<Void>(0xFDB8F0, p0); } // 0xA8733668D1047B51 0x395D18B1
	static BOOL _0xECB41AC6AB754401() { return invoke<BOOL>(0xFDB930); } // 0xECB41AC6AB754401 0xED7000C8
	static void _0x9B4BD21D69B1E609() { invoke<Void>(0xFDB960); } // 0x9B4BD21D69B1E609
	static Any _0xC0E0D686DDFC6EAE() { return invoke<Any>(0xFDB990); } // 0xC0E0D686DDFC6EAE 0x099FCC86
	static BOOL STAT_SET_INT(Hash statName, int value, BOOL save) { return invoke<BOOL>(0xFDB9B0, statName, value, save); } // 0xB3271D7AB655B441 0xC9CC1C5C
	static BOOL STAT_SET_FLOAT(Hash statName, float value, BOOL save) { return invoke<BOOL>(0xFDB9E0, statName, value, save); } // 0x4851997F37FE9B3C 0x6CEA96F2
	static BOOL STAT_SET_BOOL(Hash statName, BOOL value, BOOL save) { return invoke<BOOL>(0xFDBA20, statName, value, save); } // 0x4B33C4243DE0C432 0x55D79DFB
	static BOOL STAT_SET_GXT_LABEL(Hash statName, char* value, BOOL save) { return invoke<BOOL>(0xFDBA60, statName, value, save); } // 0x17695002FD8B2AE0 0xC1224AA7
	static BOOL STAT_SET_DATE(Hash statName, Any* value, int numFields, BOOL save) { return invoke<BOOL>(0xFDBAA0, statName, value, numFields, save); } // 0x2C29BFB64F4FCBE4 0x36BE807B
	static BOOL STAT_SET_STRING(Hash statName, char* value, BOOL save) { return invoke<BOOL>(0xFDBAE0, statName, value, save); } // 0xA87B2335D12531D7 0xB1EF2E21
	static BOOL STAT_SET_POS(Hash statName, float x, float y, float z, BOOL save) { return invoke<BOOL>(0xFDBB20, statName, x, y, z, save); } // 0xDB283FDE680FE72E 0x1192C9A3
	static BOOL STAT_SET_MASKED_INT(Hash statName, Any p1, Any p2, int p3, BOOL save) { return invoke<BOOL>(0xFDBB60, statName, p1, p2, p3, save); } // 0x7BBB1B54583ED410 0x2CBAA739
	static BOOL STAT_SET_USER_ID(Hash statName, char* value, BOOL save) { return invoke<BOOL>(0xFDBBA0, statName, value, save); } // 0x8CDDF1E452BABE11 0xDBE78ED7
	static BOOL STAT_SET_CURRENT_POSIX_TIME(Hash statName, BOOL p1) { return invoke<BOOL>(0xFDBBE0, statName, p1); } // 0xC2F84B7F9C4D0C61 0xA286F015
	static BOOL STAT_GET_INT(Hash statHash, int* outValue, int p2) { return invoke<BOOL>(0xFDBC10, statHash, outValue, p2); } // 0x767FBC2AC802EF3D 0x1C6FE43E
	static BOOL STAT_GET_FLOAT(Hash statHash, float* outValue, Any p2) { return invoke<BOOL>(0xFDBCF0, statHash, outValue, p2); } // 0xD7AE6C9C9C6AC54C 0xFCBDA612
	static BOOL STAT_GET_BOOL(Hash statHash, BOOL* outValue, Any p2) { return invoke<BOOL>(0xFDBD20, statHash, outValue, p2); } // 0x11B5E6D2AE73F48E 0x28A3DD2B
	static BOOL STAT_GET_DATE(Hash statHash, Any* p1, Any p2, Any p3) { return invoke<BOOL>(0xFDBD50, statHash, p1, p2, p3); } // 0x8B0FACEFC36C824B 0xD762D16C
	static char* STAT_GET_STRING(Hash statHash, int p1) { return invoke<char*>(0xFDBD80, statHash, p1); } // 0xE50384ACC2C3DB74 0x10CE4BDE
	static BOOL STAT_GET_POS(Any p0, Any* p1, Any* p2, Any* p3, Any p4) { return invoke<BOOL>(0xFDBDB0, p0, p1, p2, p3, p4); } // 0x350F82CCB186AA1B 0xC846ECCE
	static BOOL STAT_GET_MASKED_INT(Any p0, Any* p1, Any p2, Any p3, Any p4) { return invoke<BOOL>(0xFDBDF0, p0, p1, p2, p3, p4); } // 0x655185A06D9EEAAB 0xE9D9B70F
	static char* STAT_GET_USER_ID(Any p0) { return invoke<char*>(0xFDBEC0, p0); } // 0x2365C388E393BBE2 0xE2E8B6BA
	static char* STAT_GET_LICENSE_PLATE(Hash statName) { return invoke<char*>(0xFDBEF0, statName); } // 0x5473D4195058B2E4 0x1544B29F
	static BOOL STAT_SET_LICENSE_PLATE(Hash statName, char* str) { return invoke<BOOL>(0xFDBF20, statName, str); } // 0x69FF13266D7296DA 0x3507D253
	static void STAT_INCREMENT(Hash statName, float value) { invoke<Void>(0xFDBF50, statName, value); } // 0x9B5A68C6489E9909 0xDFC5F71E
	static BOOL _0x5A556B229A169402() { return invoke<BOOL>(0xFDBFC0); } // 0x5A556B229A169402 0x46F21343
	static BOOL _0xB1D2BB1E1631F5B1() { return invoke<BOOL>(0xFDC010); } // 0xB1D2BB1E1631F5B1 0x02F283CE
	static BOOL _0xBED9F5693F34ED17(Hash statName, int p1, float* outValue) { return invoke<BOOL>(0xFDC050, statName, p1, outValue); } // 0xBED9F5693F34ED17 0xC4110917
	static void _0x26D7399B9587FE89(int p0) { invoke<Void>(0xFDC0D0, p0); } // 0x26D7399B9587FE89 0x343B27E2
	static void _0xA78B8FA58200DA56(int p0) { invoke<Void>(0xFDC0E0, p0); } // 0xA78B8FA58200DA56 0xE3247582
	static int STAT_GET_NUMBER_OF_DAYS(Hash statName) { return invoke<int>(0xFDC140, statName); } // 0xE0E854F5280FB769 0xFD66A429
	static int STAT_GET_NUMBER_OF_HOURS(Hash statName) { return invoke<int>(0xFDC160, statName); } // 0xF2D4B2FE415AAFC3 0x9B431236
	static int STAT_GET_NUMBER_OF_MINUTES(Hash statName) { return invoke<int>(0xFDC180, statName); } // 0x7583B4BE4C5A41B5 0x347B4436
	static int STAT_GET_NUMBER_OF_SECONDS(Hash statName) { return invoke<int>(0xFDC1A0, statName); } // 0x2CE056FF3723F00B 0x2C1D6C31
	static void _STAT_SET_PROFILE_SETTING(int profileSetting, int value) { invoke<Void>(0xFDC1C0, profileSetting, value); } // 0x68F01422BE1D838F 0x24DD4929
	static int _0xF4D8E7AC2A27758C(int p0) { return invoke<int>(0xFDC230, p0); } // 0xF4D8E7AC2A27758C 0xDFC25D66
	static int _0x94F12ABF9C79E339(int p0) { return invoke<int>(0xFDC260, p0); } // 0x94F12ABF9C79E339 0xCA160BCC
	static Hash _GET_PSTAT_BOOL_HASH(int index, BOOL spStat, BOOL charStat, int character) { return invoke<Hash>(0xFDC290, index, spStat, charStat, character); } // 0x80C75307B1C42837 0xB5BF87B2
	static Hash _GET_PSTAT_INT_HASH(int index, BOOL spStat, BOOL charStat, int character) { return invoke<Hash>(0xFDC370, index, spStat, charStat, character); } // 0x61E111E323419E07 0x1F938864
	static Hash _GET_TUPSTAT_BOOL_HASH(int index, BOOL spStat, BOOL charStat, int character) { return invoke<Hash>(0xFDC450, index, spStat, charStat, character); } // 0xC4BB08EE7907471E 0x3F8E893B
	static Hash _GET_TUPSTAT_INT_HASH(int index, BOOL spStat, BOOL charStat, int character) { return invoke<Hash>(0xFDC530, index, spStat, charStat, character); } // 0xD16C2AD6B8E32854 0xFB93C5A2
	static Hash _GET_NGSTAT_BOOL_HASH(int index, BOOL spStat, BOOL charStat, int character, char* section) { return invoke<Hash>(0xFDC610, index, spStat, charStat, character, section); } // 0xBA52FF538ED2BC71
	static Hash _GET_NGSTAT_INT_HASH(int index, BOOL spStat, BOOL charStat, int character, char* section) { return invoke<Hash>(0xFDC6F0, index, spStat, charStat, character, section); } // 0x2B4CDCA6F07FF3DA
	static BOOL STAT_GET_BOOL_MASKED(Hash statName, int mask, int p2) { return invoke<BOOL>(0xFDC7D0, statName, mask, p2); } // 0x10FE3F1B79F9B071 0x6ACE1B7D
	static BOOL STAT_SET_BOOL_MASKED(Hash statName, BOOL value, int mask, BOOL save) { return invoke<BOOL>(0xFDC8A0, statName, value, mask, save); } // 0x5BC62EC1937B9E5B 0x7842C4D6
	static void _0x5009DFD741329729(char* p0, Any p1) { invoke<Void>(0xFDC8E0, p0, p1); } // 0x5009DFD741329729 0x61ECC465
	static void PLAYSTATS_NPC_INVITE(Any* p0) { invoke<Void>(0xFDC9A0, p0); } // 0x93054C88E6AA7C44 0x598C06F3
	static void PLAYSTATS_AWARD_XP(Any p0, Any p1, Any p2) { invoke<Void>(0xFDC9B0, p0, p1, p2); } // 0x46F917F6B4128FE4 0x8770017B
	static void PLAYSTATS_RANK_UP(Any p0) { invoke<Void>(0xFDC9D0, p0); } // 0xC7F2DE41D102BFB4 0x56AFB9F5
	static void _0x098760C7461724CD() { invoke<Void>(0xFDC9E0); } // 0x098760C7461724CD 0x896CDF8D
	static void _0xA071E0ED98F91286(Any p0, Any p1) { invoke<Void>(0xFDCA70, p0, p1); } // 0xA071E0ED98F91286 0x1A66945F
	static void _0xC5BE134EC7BA96A0(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0xFDCB10, p0, p1, p2, p3, p4); } // 0xC5BE134EC7BA96A0 0xC960E161
	static void PLAYSTATS_MISSION_STARTED(Any* p0, Any p1, Any p2, BOOL p3) { invoke<Void>(0xFDCBD0, p0, p1, p2, p3); } // 0xC19A2925C34D2231 0x3AAB699C
	static void PLAYSTATS_MISSION_OVER(Any* p0, Any p1, Any p2, BOOL p3, BOOL p4, BOOL p5) { invoke<Void>(0xFDCC70, p0, p1, p2, p3, p4, p5); } // 0x7C4BB33A8CED7324 0x5B90B5FF
	static void PLAYSTATS_MISSION_CHECKPOINT(Any* p0, Any p1, Any p2, Any p3) { invoke<Void>(0xFDCD20, p0, p1, p2, p3); } // 0xC900596A63978C1D 0xCDC52280
	static void _0x71862B1D855F32E1(Any* p0, Any p1, Any p2, Any p3) { invoke<Void>(0xFDCD50, p0, p1, p2, p3); } // 0x71862B1D855F32E1 0xAC2C7C63
	static void _0x121FB4DDDC2D5291(Any p0, Any p1, Any p2, float p3) { invoke<Void>(0xFDCD80, p0, p1, p2, p3); } // 0x121FB4DDDC2D5291 0x413539BC
	static void PLAYSTATS_RACE_CHECKPOINT(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0xFDCE30, p0, p1, p2, p3, p4); } // 0x9C375C315099DDE4 0x580D5508
	static BOOL _0x6DEE77AFF8C21BD1(Any* p0, Any* p1) { return invoke<BOOL>(0xFDCE60, p0, p1); } // 0x6DEE77AFF8C21BD1 0x489E27E7
	static void PLAYSTATS_MATCH_STARTED(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { invoke<Void>(0xFDCE90, p0, p1, p2, p3, p4, p5, p6); } // 0xBC80E22DED931E3D 0x2BDE85C1
	static void PLAYSTATS_SHOP_ITEM(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0xFDCEB0, p0, p1, p2, p3, p4); } // 0x176852ACAAC173D1 0xA4746384
	static void _0x1CAE5D2E3F9A07F0(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoke<Void>(0xFDCEE0, p0, p1, p2, p3, p4, p5); } // 0x1CAE5D2E3F9A07F0 0x6602CED6
	static void _PLAYSTATS_AMBIENT_MISSION_CRATE_CREATED(float p0, float p1, float p2) { invoke<Void>(0xFDCF90, p0, p1, p2); } // 0xAFC7E5E075A96F46
	static void _0xCB00196B31C39EB1(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xFDCFC0, p0, p1, p2, p3); } // 0xCB00196B31C39EB1 0x759E0EC9
	static void _0x2B69F5074C894811(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xFDCFF0, p0, p1, p2, p3); } // 0x2B69F5074C894811 0x62073DF7
	static void _0xADDD1C754E2E2914(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9) { invoke<Void>(0xFDD070, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 0xADDD1C754E2E2914 0x06CE3692
	static void _0x79AB33F0FBFAC40C(Any p0) { invoke<Void>(0xFDD110, p0); } // 0x79AB33F0FBFAC40C 0x8D5C7B37
	static void PLAYSTATS_WEBSITE_VISITED(Hash scaleformHash, int p1) { invoke<Void>(0xFDD120, scaleformHash, p1); } // 0xDDF24D535060F811 0x37D152BB
	static void PLAYSTATS_FRIEND_ACTIVITY(Any p0, Any p1) { invoke<Void>(0xFDD130, p0, p1); } // 0x0F71DE29AB2258F1 0xD1FA1BDB
	static void PLAYSTATS_ODDJOB_DONE(Any p0, Any p1, Any p2) { invoke<Void>(0xFDD140, p0, p1, p2); } // 0x69DEA3E9DB727B4C 0xFE14A8EA
	static void PLAYSTATS_PROP_CHANGE(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xFDD150, p0, p1, p2, p3); } // 0xBA739D6D5A05D6E7 0x25740A1D
	static void PLAYSTATS_CLOTH_CHANGE(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0xFDD1E0, p0, p1, p2, p3, p4); } // 0x34B973047A2268B9 0x3AFF9E58
	static void _0xE95C8A1875A02CA4(Any p0, Any p1, Any p2) { invoke<Void>(0xFDD270, p0, p1, p2); } // 0xE95C8A1875A02CA4 0x79716890
	static void PLAYSTATS_CHEAT_APPLIED(char* cheat) { invoke<Void>(0xFDD330, cheat); } // 0x6058665D72302D3F 0x345166F3
	static void _0xF8C54A461C3E11DC(Any* p0, Any* p1, Any* p2, Any* p3) { invoke<Void>(0xFDD350, p0, p1, p2, p3); } // 0xF8C54A461C3E11DC 0x04181752
	static void _0xF5BB8DAC426A52C0(Any* p0, Any* p1, Any* p2, Any* p3) { invoke<Void>(0xFDD370, p0, p1, p2, p3); } // 0xF5BB8DAC426A52C0
	static void _0xA736CF7FB7C5BFF4(Any* p0, Any* p1, Any* p2, Any* p3) { invoke<Void>(0xFDD390, p0, p1, p2, p3); } // 0xA736CF7FB7C5BFF4 0x31002201
	static void _0x14E0B2D1AD1044E0(Any* p0, Any* p1, Any* p2, Any* p3) { invoke<Void>(0xFDD3B0, p0, p1, p2, p3); } // 0x14E0B2D1AD1044E0 0xDDD1F1F3
	static void _0x90D0622866E80445(int p0, char* p1) { invoke<Void>(0xFDD3D0, p0, p1); } // 0x90D0622866E80445 0x66FEB701
	static void _0x5DA3A8DE8CB6226F(int time) { invoke<Void>(0xFDD480, time); } // 0x5DA3A8DE8CB6226F 0x9E2B9522
	static void _0xD1032E482629049E(BOOL p0) { invoke<Void>(0xFDD500, p0); } // 0xD1032E482629049E
	static void _0xF4FF020A08BC8863(Any p0, Any p1) { invoke<Void>(0xFDD510, p0, p1); } // 0xF4FF020A08BC8863
	static void _0x46326E13DA4E0546(Any* p0) { invoke<Void>(0xFDD520, p0); } // 0x46326E13DA4E0546
	static Any LEADERBOARDS_GET_NUMBER_OF_COLUMNS(Any p0, Any p1) { return invoke<Any>(0xFDD800, p0, p1); } // 0x117B45156D7EFF2E 0x0A56EE34
	static Any LEADERBOARDS_GET_COLUMN_ID(Any p0, Any p1, Any p2) { return invoke<Any>(0xFDD840, p0, p1, p2); } // 0xC4B5467A1886EA7E 0x3821A334
	static Any LEADERBOARDS_GET_COLUMN_TYPE(Any p0, Any p1, Any p2) { return invoke<Any>(0xFDD890, p0, p1, p2); } // 0xBF4FEF46DB7894D3 0x6F2820F4
	static Any LEADERBOARDS_READ_CLEAR_ALL() { return invoke<Any>(0xFDD900); } // 0xA34CB6E6F0DF4A0B 0x233E058A
	static Any LEADERBOARDS_READ_CLEAR(Any p0, Any p1, Any p2) { return invoke<Any>(0xFDD940, p0, p1, p2); } // 0x7CCE5C737A665701 0x7090012F
	static BOOL LEADERBOARDS_READ_PENDING(Any p0, Any p1, Any p2) { return invoke<BOOL>(0xFDD9B0, p0, p1, p2); } // 0xAC392C8483342AC2 0xEEB8BF5C
	static Any _0xA31FD15197B192BD() { return invoke<Any>(0xFDD9E0); } // 0xA31FD15197B192BD 0x1789437B
	static BOOL LEADERBOARDS_READ_SUCCESSFUL(Any p0, Any p1, Any p2) { return invoke<BOOL>(0xFDDA30, p0, p1, p2); } // 0x2FB19228983E832C 0x3AC5B2F1
	static BOOL LEADERBOARDS2_READ_FRIENDS_BY_ROW(Any* p0, Any* p1, Any p2, BOOL p3, Any p4, Any p5) { return invoke<BOOL>(0xFDDAB0, p0, p1, p2, p3, p4, p5); } // 0x918B101666F9CB83 0xBD91B136
	static BOOL LEADERBOARDS2_READ_BY_HANDLE(Any* p0, Any* p1) { return invoke<BOOL>(0xFDDAF0, p0, p1); } // 0xC30713A383BFBF0E 0x6B553408
	static BOOL LEADERBOARDS2_READ_BY_ROW(Any* p0, Any* p1, Any p2, Any* p3, Any p4, Any* p5, Any p6) { return invoke<BOOL>(0xFDDB20, p0, p1, p2, p3, p4, p5, p6); } // 0xA9CDB1E3F0A49883 0xCA931F34
	static BOOL LEADERBOARDS2_READ_BY_RANK(Any* p0, Any p1, Any p2) { return invoke<BOOL>(0xFDDB60, p0, p1, p2); } // 0xBA2C7DB0C129449A 0x1B03F59F
	static BOOL LEADERBOARDS2_READ_BY_RADIUS(Any* p0, Any p1, Any* p2) { return invoke<BOOL>(0xFDDB90, p0, p1, p2); } // 0x5CE587FB5A42C8C4 0xC5B7E685
	static BOOL LEADERBOARDS2_READ_BY_SCORE_INT(Any* p0, Any p1, Any p2) { return invoke<BOOL>(0xFDDBC0, p0, p1, p2); } // 0x7EEC7E4F6984A16A 0xAC020C18
	static BOOL LEADERBOARDS2_READ_BY_SCORE_FLOAT(Any* p0, float p1, Any p2) { return invoke<BOOL>(0xFDDBF0, p0, p1, p2); } // 0xE662C8B759D08F3C 0xC678B29F
	static BOOL _0xC38DC1E90D22547C(Any* p0, Any* p1, Any* p2) { return invoke<BOOL>(0xFDDC20, p0, p1, p2); } // 0xC38DC1E90D22547C 0x9BEC3401
	static BOOL _0xF1AE5DCDBFCA2721(Any* p0, Any* p1, Any* p2) { return invoke<BOOL>(0xFDDC50, p0, p1, p2); } // 0xF1AE5DCDBFCA2721
	static BOOL _0xA0F93D5465B3094D(Any* p0) { return invoke<BOOL>(0xFDDC80, p0); } // 0xA0F93D5465B3094D 0xC977D6E2
	static void _0x71B008056E5692D6() { invoke<Void>(0xFDDCB0); } // 0x71B008056E5692D6 0xF2DB6A82
	static BOOL _0x34770B9CE0E03B91(Any p0, Any* p1) { return invoke<BOOL>(0xFDDCE0, p0, p1); } // 0x34770B9CE0E03B91 0x766A74FE
	static Any _0x88578F6EC36B4A3A(Any p0, Any p1) { return invoke<Any>(0xFDDE20, p0, p1); } // 0x88578F6EC36B4A3A 0x6B90E730
	static float _0x38491439B6BA7F7D(Any p0, Any p1) { return invoke<float>(0xFDDE50, p0, p1); } // 0x38491439B6BA7F7D 0x509A286F
	static BOOL LEADERBOARDS2_WRITE_DATA(Any* p0) { return invoke<BOOL>(0xFDDE80, p0); } // 0xAE2206545888AE49 0x5F9DF634
	static void _0x0BCA1D2C47B0D269(Any p0, Any p1, float p2) { invoke<Void>(0xFDDEB0, p0, p1, p2); } // 0x0BCA1D2C47B0D269 0x7524E27B
	static void _0x2E65248609523599(Any p0, Any p1, Any p2) { invoke<Void>(0xFDDED0, p0, p1, p2); } // 0x2E65248609523599 0x1C5CCC3A
	static BOOL LEADERBOARDS_CACHE_DATA_ROW(Any* p0) { return invoke<BOOL>(0xFDDEF0, p0); } // 0xB9BB18E2C40142ED 0x44F7D82B
	static void LEADERBOARDS_CLEAR_CACHE_DATA() { invoke<Void>(0xFDDF20); } // 0xD4B02A6B476E1FDC 0x87F498C1
	static void _0x8EC74CEB042E7CFF(Any p0) { invoke<Void>(0xFDDF40, p0); } // 0x8EC74CEB042E7CFF 0x88AE9667
	static BOOL LEADERBOARDS_GET_CACHE_EXISTS(Any p0) { return invoke<BOOL>(0xFDDF60, p0); } // 0x9C51349BE6CDFE2C 0xFC8A71F3
	static Any LEADERBOARDS_GET_CACHE_TIME(Any p0) { return invoke<Any>(0xFDDFC0, p0); } // 0xF04C1C27DA35F6C8 0xEDF02302
	static Any _0x58A651CD201D89AD(Any p0) { return invoke<Any>(0xFDE020, p0); } // 0x58A651CD201D89AD 0xCE7CB520
	static BOOL LEADERBOARDS_GET_CACHE_DATA_ROW(Any p0, Any p1, Any* p2) { return invoke<BOOL>(0xFDE060, p0, p1, p2); } // 0x9120E8DBA3D69273 0xA11289EC
	static void _0x11FF1C80276097ED(char* p0, Any p1, Any p2) { invoke<Void>(0xFDE090, p0, p1, p2); } // 0x11FF1C80276097ED 0x4AC39C6C
	static void _0x30A6614C1F7799B8(Any p0, float p1, Any p2) { invoke<Void>(0xFDE0B0, p0, p1, p2); } // 0x30A6614C1F7799B8 0x3E69E7C3
	static void _0x6483C25849031C4F(Any p0, Any p1, Any p2, Any* p3) { invoke<Void>(0xFDE0D0, p0, p1, p2, p3); } // 0x6483C25849031C4F 0x2FFD2FA5
	static BOOL _0x5EAD2BF6484852E4() { return invoke<BOOL>(0xFDE110); } // 0x5EAD2BF6484852E4 0x23D70C39
	static void _0xC141B8917E0017EC() { invoke<Void>(0xFDE140); } // 0xC141B8917E0017EC 0x0AD43306
	static void _0xB475F27C6A994D65() { invoke<Void>(0xFDE190); } // 0xB475F27C6A994D65 0xC7DE5C30
	static void _0xF1A1803D3476F215(int value) { invoke<Void>(0xFDE1E0, value); } // 0xF1A1803D3476F215 0xA3DAC790
	static void _0x38BAAA5DD4C9D19F(int value) { invoke<Void>(0xFDE240, value); } // 0x38BAAA5DD4C9D19F 0x726FAE66
	static void _0x55384438FC55AD8E(int value) { invoke<Void>(0xFDE2A0, value); } // 0x55384438FC55AD8E 0xF03895A4
	static void _0x723C1CE13FBFDB67(Any p0, Any p1) { invoke<Void>(0xFDE300, p0, p1); } // 0x723C1CE13FBFDB67 0x4C39CF10
	static void _0x0D01D20616FC73FB(Any p0, Any p1) { invoke<Void>(0xFDE310, p0, p1); } // 0x0D01D20616FC73FB 0x2180AE13
	static void _LEADERBOARDS_DEATHS(Hash statName, float value) { invoke<Void>(0xFDE320, statName, value); } // 0x428EAF89E24F6C36 0xEE292B91
	static void _0x047CBED6F6F8B63C() { invoke<Void>(0xFDE3A0); } // 0x047CBED6F6F8B63C 0xA063CABD
	static BOOL _0xC980E62E33DF1D5C(Any* p0, Any* p1) { return invoke<BOOL>(0xFDE3C0, p0, p1); } // 0xC980E62E33DF1D5C 0x62C19A3D
	static void _0x6F361B8889A792A3() { invoke<Void>(0xFDE3F0); } // 0x6F361B8889A792A3 0x3B4EF322
	static void _0xC847B43F369AC0B5() { invoke<Void>(0xFDE440); } // 0xC847B43F369AC0B5
	static BOOL _0xA5C80D8E768A9E66(Any* p0) { return invoke<BOOL>(0xFDE460, p0); } // 0xA5C80D8E768A9E66
	static Any _0x9A62EC95AE10E011() { return invoke<Any>(0xFDE490); } // 0x9A62EC95AE10E011
	static Any _0x4C89FE2BDEB3F169() { return invoke<Any>(0xFDE540); } // 0x4C89FE2BDEB3F169
	static Any _0xC6E0E2616A7576BB() { return invoke<Any>(0xFDE560); } // 0xC6E0E2616A7576BB
	static Any _0x5BD5F255321C4AAF(Any p0) { return invoke<Any>(0xFDE5F0, p0); } // 0x5BD5F255321C4AAF
	static Any _0xDEAAF77EB3687E97(Any p0, Any* p1) { return invoke<Any>(0xFDE610, p0, p1); } // 0xDEAAF77EB3687E97
	static Any _0xC70DDCE56D0D3A99() { return invoke<Any>(0xFDE640); } // 0xC70DDCE56D0D3A99 0x54E775E0
	static Any _0x886913BBEACA68C1(Any* p0) { return invoke<Any>(0xFDE6A0, p0); } // 0x886913BBEACA68C1 0xE3F0D62D
	static Any _0x4FEF53183C3C6414() { return invoke<Any>(0xFDE780); } // 0x4FEF53183C3C6414
	static Any _0x567384DFA67029E6() { return invoke<Any>(0xFDE820); } // 0x567384DFA67029E6
	static BOOL _0x3270F67EED31FBC1(Any p0, Any* p1, Any* p2) { return invoke<BOOL>(0xFDE850, p0, p1, p2); } // 0x3270F67EED31FBC1
	static Any _0xCE5AA445ABA8DEE0(Any* p0) { return invoke<Any>(0xFDE8E0, p0); } // 0xCE5AA445ABA8DEE0
	static void _0x98E2BC1CA26287C3() { invoke<Void>(0xFDE930); } // 0x98E2BC1CA26287C3
	static void _0x629526ABA383BCAA() { invoke<Void>(0xFDE940); } // 0x629526ABA383BCAA
	static Any _0xB3DA2606774A8E2D() { return invoke<Any>(0xFDEBE0); } // 0xB3DA2606774A8E2D
	static void _0xDAC073C7901F9E15(Any p0) { invoke<Void>(0xFDEBF0, p0); } // 0xDAC073C7901F9E15
	static void _0xF6792800AC95350D(Any p0) { invoke<Void>(0xFDEC30, p0); } // 0xF6792800AC95350D
}

namespace BRAIN
{
	static void ADD_SCRIPT_TO_RANDOM_PED(char* name, Hash model, float p2, float p3) { invoke<Void>(0xEC6AA0, name, model, p2, p3); } // 0x4EE5367468A65CCC 0xECC76C3D
	static void REGISTER_OBJECT_SCRIPT_BRAIN(char* scriptName, Hash objectName, int p2, float p3, int p4, int p5) { invoke<Void>(0xEC6B80, scriptName, objectName, p2, p3, p4, p5); } // 0x0BE84C318BA6EC22 0xB6BCC608
	static BOOL IS_OBJECT_WITHIN_BRAIN_ACTIVATION_RANGE(Object object) { return invoke<BOOL>(0xEC6C50, object); } // 0xCCBA154209823057 0xBA4CAA56
	static void REGISTER_WORLD_POINT_SCRIPT_BRAIN(Any* p0, float p1, Any p2) { invoke<Void>(0xEC6D00, p0, p1, p2); } // 0x3CDC7136613284BD 0x725D91F7
	static BOOL IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE() { return invoke<BOOL>(0xEC6DB0); } // 0xC5042CC6F5E3D450 0x2CF305A0
	static void ENABLE_SCRIPT_BRAIN_SET(int brainSet) { invoke<Void>(0xEC6DD0, brainSet); } // 0x67AA4D73F0CFA86B 0x2765919F
	static void DISABLE_SCRIPT_BRAIN_SET(int brainSet) { invoke<Void>(0xEC6DF0, brainSet); } // 0x14D8518E9760F08F 0xFBD13FAD
	static void _0x0B40ED49D7D6FF84() { invoke<Void>(0xEC6E10); } // 0x0B40ED49D7D6FF84 0x19B27825
	static void _0x4D953DF78EBF8158() { invoke<Void>(0xEC6E20); } // 0x4D953DF78EBF8158 0xF3A3AB08
	static void _0x6D6840CEE8845831(char* action) { invoke<Void>(0xEC6E30, action); } // 0x6D6840CEE8845831 0x949FE53E
	static void _0x6E91B04E08773030(char* action) { invoke<Void>(0xEC6E40, action); } // 0x6E91B04E08773030 0x29CE8BAA
}

namespace MOBILE
{
	static void CREATE_MOBILE_PHONE(int p3) { invoke<Void>(0xFC1920, p3); } // 0xA4E8E696C532FBC7 0x5BBC5E23
	static void DESTROY_MOBILE_PHONE() { invoke<Void>(0xFC1930); } // 0x3BC861DF703E5097 0x1A65037B
	static void SET_MOBILE_PHONE_SCALE(float scale) { invoke<Void>(0xFC1960, scale); } // 0xCBDD322A73D6D932 0x09BCF1BE
	static void SET_MOBILE_PHONE_ROTATION(float rotX, float rotY, float rotZ, Any p3) { invoke<Void>(0xFC1980, rotX, rotY, rotZ, p3); } // 0xBB779C0CA917E865 0x209C28CF
	static void GET_MOBILE_PHONE_ROTATION(Vector3* rotation, Vehicle p1) { invoke<Void>(0xFC19C0, rotation, p1); } // 0x1CEFB61F193070AE 0x17A29F23
	static void SET_MOBILE_PHONE_POSITION(float posX, float posY, float posZ) { invoke<Void>(0xFC1AB0, posX, posY, posZ); } // 0x693A5C6D6734085B 0x841800B3
	static void GET_MOBILE_PHONE_POSITION(Vector3* position) { invoke<Void>(0xFC1B40, position); } // 0x584FDFDA48805B86 0xB2E1E1A0
	static void SCRIPT_IS_MOVING_MOBILE_PHONE_OFFSCREEN(BOOL toggle) { invoke<Void>(0xFC1BB0, toggle); } // 0xF511F759238A5122 0x29828690
	static BOOL CAN_PHONE_BE_SEEN_ON_SCREEN() { return invoke<BOOL>(0xFC1BD0); } // 0xC4E2813898C97A4B 0x5F978584
	static void _MOVE_FINGER(int direction) { invoke<Void>(0xFC1C00, direction); } // 0x95C9E72F3D7DEC9B
	static void _SET_PHONE_LEAN(BOOL Toggle) { invoke<Void>(0xFC1C10, Toggle); } // 0x44E44169EF70138E
	static void CELL_CAM_ACTIVATE(BOOL p0, BOOL p1) { invoke<Void>(0xFC1C30, p0, p1); } // 0xFDE8F069C542D126 0x234C1AE9
	static void _DISABLE_PHONE_THIS_FRAME(BOOL toggle) { invoke<Void>(0xFC1C50, toggle); } // 0x015C49A93E3E086E 0x4479B304
	static void _0xA2CCBE62CD4C91A4(int* toggle) { invoke<Void>(0xFC1C70, toggle); } // 0xA2CCBE62CD4C91A4 0xC273BB4D
	static void _0x1B0B4AEED5B9B41C(float p0) { invoke<Void>(0xFC1C90, p0); } // 0x1B0B4AEED5B9B41C
	static void _0x53F4892D18EC90A4(float p0) { invoke<Void>(0xFC1CA0, p0); } // 0x53F4892D18EC90A4
	static void _0x3117D84EFA60F77B(float p0) { invoke<Void>(0xFC1CB0, p0); } // 0x3117D84EFA60F77B
	static void _0x15E69E2802C24B8D(float p0) { invoke<Void>(0xFC1CC0, p0); } // 0x15E69E2802C24B8D
	static void _0xAC2890471901861C(float p0) { invoke<Void>(0xFC1CD0, p0); } // 0xAC2890471901861C
	static void _0xD6ADE981781FCA09(float p0) { invoke<Void>(0xFC1CE0, p0); } // 0xD6ADE981781FCA09
	static void _0xF1E22DC13F5EEBAD(float p0) { invoke<Void>(0xFC1CF0, p0); } // 0xF1E22DC13F5EEBAD
	static void _0x466DA42C89865553(float p0) { invoke<Void>(0xFC1D00, p0); } // 0x466DA42C89865553 0x66DCD9D2
	static BOOL CELL_CAM_IS_CHAR_VISIBLE_NO_FACE_CHECK(Entity entity) { return invoke<BOOL>(0xFC1D10, entity); } // 0x439E9BC95B7E7FBE 0xBEA88097
	static void GET_MOBILE_PHONE_RENDER_ID(int* renderId) { invoke<Void>(0xFC1D40, renderId); } // 0xB4A53E05F68B6FA1 0x88E4FECE
	static BOOL _NETWORK_SHOP_DOES_ITEM_EXIST(char* name) { return invoke<BOOL>(0xF42470, name); } // 0xBD4D7EAF8A30F637
	static BOOL _NETWORK_SHOP_DOES_ITEM_EXIST_HASH(Hash hash) { return invoke<BOOL>(0xF42480, hash); } // 0x247F0F73A182EA0B
}

namespace APP
{
	static int APP_DATA_VALID() { return invoke<int>(0xEBA990); } // 0x846AA8E7D55EE5B6 0x72BDE002
	static int* APP_GET_INT(ScrHandle property) { return invoke<int*>(0xEBA9B0, property); } // 0xD3A58A12C77D9D4B 0x2942AAD2
	static float APP_GET_FLOAT(char* property) { return invoke<float>(0xEBAA70, property); } // 0x1514FB24C02C2322 0xD87F3A1C
	static char* APP_GET_STRING(char* property) { return invoke<char*>(0xEBAB40, property); } // 0x749B023950D2311C 0x849CEB80
	static void APP_SET_INT(char* property, int value) { invoke<Void>(0xEBAC10, property, value); } // 0x607E8E3D3E4F9611 0x1B509C32
	static void APP_SET_FLOAT(char* property, float value) { invoke<Void>(0xEBAC20, property, value); } // 0x25D7687C68E0DAA4 0xF3076135
	static void APP_SET_STRING(char* property, char* value) { invoke<Void>(0xEBAC40, property, value); } // 0x3FF2FCEC4B7721B4 0x23DF19A8
	static void APP_SET_APP(char* appName) { invoke<Void>(0xEBAC50, appName); } // 0xCFD0406ADAF90D2B 0x8BAC4146
	static void APP_SET_BLOCK(char* blockName) { invoke<Void>(0xEBAC60, blockName); } // 0x262AB456A3D21F93 0xC2D54DD9
	static void APP_CLEAR_BLOCK() { invoke<Void>(0xEBACA0); } // 0x5FE1DF3342DB7DBA 0xDAB86A18
	static void APP_CLOSE_APP() { invoke<Void>(0xEBAD00); } // 0xE41C65E07A5F05FC 0x03767C7A
	static void APP_CLOSE_BLOCK() { invoke<Void>(0xEBAD40); } // 0xE8E3FCF72EAC0EF8 0xED97B202
	static BOOL APP_HAS_LINKED_SOCIAL_CLUB_ACCOUNT() { return invoke<BOOL>(0xEBAD70); } // 0x71EEE69745088DA0 0xD368BA15
	static BOOL APP_HAS_SYNCED_DATA(char* appName) { return invoke<BOOL>(0xEBAD90, appName); } // 0xCA52279A7271517F 0x1DE2A63D
	static void APP_SAVE_DATA() { invoke<Void>(0xEBADD0); } // 0x95C5D356CDA6E85F 0x84A3918D
	static Any APP_GET_DELETED_FILE_STATUS() { return invoke<Any>(0xEBADF0); } // 0xC9853A2BE3DED1A6 0x784D550B
	static BOOL APP_DELETE_APP_DATA(char* appName) { return invoke<BOOL>(0xEBAE10, appName); } // 0x44151AEA95C8A003 0x2A2FBD1C
}

namespace TIME
{
	static void SET_CLOCK_TIME(int hour, int minute, int second) { invoke<Void>(0xED3D40, hour, minute, second); } // 0x47C3B5848C3E45D8 0x26F6AF14
	static void PAUSE_CLOCK(BOOL toggle) { invoke<Void>(0xED3D70, toggle); } // 0x4055E40BD2DBEC1D 0xB02D6124
	static void ADVANCE_CLOCK_TIME_TO(int hour, int minute, int second) { invoke<Void>(0xED3D90, hour, minute, second); } // 0xC8CA9670B9D83B3B 0x57B8DA7C
	static void ADD_TO_CLOCK_TIME(int hours, int minutes, int seconds) { invoke<Void>(0xED3DB0, hours, minutes, seconds); } // 0xD716F30D8C8980E2 0xCC40D20D
	static int GET_CLOCK_HOURS() { return invoke<int>(0xED3DD0); } // 0x25223CA6B4D20B7F 0x7EF8316F
	static int GET_CLOCK_MINUTES() { return invoke<int>(0xED3DE0); } // 0x13D2B8ADD79640F2 0x94AAC486
	static int GET_CLOCK_SECONDS() { return invoke<int>(0xED3DF0); } // 0x494E97C2EF27C470 0x099C927E
	static void SET_CLOCK_DATE(int day, int month, int year) { invoke<Void>(0xED3E00, day, month, year); } // 0xB096419DF0D06CE7 0x96891C94
	static int GET_CLOCK_DAY_OF_WEEK() { return invoke<int>(0xED3E20); } // 0xD972E4BD7AEB235F 0x84E4A289
	static int GET_CLOCK_DAY_OF_MONTH() { return invoke<int>(0xED3E30); } // 0x3D10BC92A4DB1D35 0xC7A5ACB7
	static int GET_CLOCK_MONTH() { return invoke<int>(0xED3E40); } // 0xBBC72712E80257A1 0x3C48A3D5
	static int GET_CLOCK_YEAR() { return invoke<int>(0xED3E50); } // 0x961777E64BDAF717 0xB8BECF15
	static int GET_MILLISECONDS_PER_GAME_MINUTE() { return invoke<int>(0xED3E60); } // 0x2F8B4D1C595B11DB 0x3B74095C
	static void GET_POSIX_TIME(int* year, int* month, int* day, int* hour, int* minute, int* second) { invoke<Void>(0xED3E70, year, month, day, hour, minute, second); } // 0xDA488F299A5B164E 0xE15A5281
	static void _GET_UTC_TIME(int* year, int* month, int* day, int* hour, int* minute, int* second) { invoke<Void>(0xED3E90, year, month, day, hour, minute, second); } // 0x8117E09A19EEF4D3
	static void GET_LOCAL_TIME(int* year, int* month, int* day, int* hour, int* minute, int* second) { invoke<Void>(0xED3EB0, year, month, day, hour, minute, second); } // 0x50C7A99057A69748 0x124BCFA2
}

namespace PATHFIND
{
	static void SET_ROADS_IN_AREA(float x1, float y1, float z1, float x2, float y2, float z2, BOOL unknown1, BOOL unknown2) { invoke<Void>(0xF82070, x1, y1, z1, x2, y2, z2, unknown1, unknown2); } // 0xBF1A602B5BA52FEE 0xEBC7B918
	static void SET_ROADS_IN_ANGLED_AREA(float x1, float y1, float z1, float x2, float y2, float z2, float angle, BOOL unknown1, BOOL unknown2, BOOL unknown3) { invoke<Void>(0xF820A0, x1, y1, z1, x2, y2, z2, angle, unknown1, unknown2, unknown3); } // 0x1A5AA1208AF5DB59 0xBD088F4B
	static void SET_PED_PATHS_IN_AREA(float x1, float y1, float z1, float x2, float y2, float z2, BOOL unknown) { invoke<Void>(0xF820E0, x1, y1, z1, x2, y2, z2, unknown); } // 0x34F060F4BF92E018 0x2148EA84
	static BOOL GET_SAFE_COORD_FOR_PED(float x, float y, float z, BOOL onGround, Vector3* outPosition, int flags) { return invoke<BOOL>(0xF82110, x, y, z, onGround, outPosition, flags); } // 0xB61C8E878A4199CA 0xB370270A
	static BOOL GET_CLOSEST_VEHICLE_NODE(float x, float y, float z, Vector3* outPosition, int nodeType, float p5, float p6) { return invoke<BOOL>(0xF82250, x, y, z, outPosition, nodeType, p5, p6); } // 0x240A18690AE96513 0x6F5F1E6C
	static BOOL GET_CLOSEST_MAJOR_VEHICLE_NODE(float x, float y, float z, Vector3* outPosition, float unknown1, int unknown2) { return invoke<BOOL>(0xF82330, x, y, z, outPosition, unknown1, unknown2); } // 0x2EABE3B06F58C1BE 0x04B5F15B
	static BOOL GET_CLOSEST_VEHICLE_NODE_WITH_HEADING(float x, float y, float z, Vector3* outPosition, float* outHeading, int nodeType, float p6, int p7) { return invoke<BOOL>(0xF82400, x, y, z, outPosition, outHeading, nodeType, p6, p7); } // 0xFF071FB798B803B0 0x8BD5759B
	static BOOL GET_NTH_CLOSEST_VEHICLE_NODE(float x, float y, float z, int nthClosest, Vector3* outPosition, Any unknown1, Any unknown2, Any unknown3) { return invoke<BOOL>(0xF824F0, x, y, z, nthClosest, outPosition, unknown1, unknown2, unknown3); } // 0xE50E52416CCF948B 0xF125BFCC
	static int GET_NTH_CLOSEST_VEHICLE_NODE_ID(float x, float y, float z, int nth, int nodetype, float p5, float p6) { return invoke<int>(0xF825D0, x, y, z, nth, nodetype, p5, p6); } // 0x22D7275A79FE8215 0x3F358BEA
	static BOOL GET_NTH_CLOSEST_VEHICLE_NODE_WITH_HEADING(float x, float y, float z, int nthClosest, Vector3* outPosition, float* heading, Any* unknown1, int unknown2, float unknown3, float unknown4) { return invoke<BOOL>(0xF82670, x, y, z, nthClosest, outPosition, heading, unknown1, unknown2, unknown3, unknown4); } // 0x80CA6A8B6C094CC4 0x7349C856
	static Any GET_NTH_CLOSEST_VEHICLE_NODE_ID_WITH_HEADING(float x, float y, float z, int nthClosest, Vector3* outPosition, float outHeading, Any p6, float p7, float p8) { return invoke<Any>(0xF82770, x, y, z, nthClosest, outPosition, outHeading, p6, p7, p8); } // 0x6448050E9C2A7207 0xC1AEB88D
	static BOOL GET_NTH_CLOSEST_VEHICLE_NODE_FAVOUR_DIRECTION(float x, float y, float z, float desiredX, float desiredY, float desiredZ, int nthClosest, Vector3* outPosition, float* outHeading, int nodetype, Any p10, Any p11) { return invoke<BOOL>(0xF82820, x, y, z, desiredX, desiredY, desiredZ, nthClosest, outPosition, outHeading, nodetype, p10, p11); } // 0x45905BE8654AE067 0x928A4DEC
	static BOOL GET_VEHICLE_NODE_PROPERTIES(float x, float y, float z, int* density, int* flags) { return invoke<BOOL>(0xF82930, x, y, z, density, flags); } // 0x0568566ACBB5DEDC 0xCC90110B
	static BOOL IS_VEHICLE_NODE_ID_VALID(int vehicleNodeId) { return invoke<BOOL>(0xF82960, vehicleNodeId); } // 0x1EAF30FCFBF5AF74 0x57DFB1EF
	static void GET_VEHICLE_NODE_POSITION(int nodeId, Vector3* outPosition) { invoke<Void>(0xF82980, nodeId, outPosition); } // 0x703123E5E7D429C2 0xE38E252D
	static BOOL _GET_SUPPORTS_GPS_ROUTE_FLAG(int nodeID) { return invoke<BOOL>(0xF82A60, nodeID); } // 0xA2AE5C478B96E3B6 0xEE4B1219
	static BOOL _GET_IS_SLOW_ROAD_FLAG(int nodeID) { return invoke<BOOL>(0xF82AB0, nodeID); } // 0x4F5070AA58F69279 0x56737A3C
	static Any GET_CLOSEST_ROAD(float x, float y, float z, float p3, int p4, Vector3* p5, Vector3* p6, Any* p7, Any* p8, float* p9, BOOL p10) { return invoke<Any>(0xF82B00, x, y, z, p3, p4, p5, p6, p7, p8, p9, p10); } // 0x132F52BBA570FE92 0x567B0E11
	static void _0x228E5C6AD4D74BFD(BOOL p0) { invoke<Void>(0xF82BE0, p0); } // 0x228E5C6AD4D74BFD 0xD6A3B458
	static BOOL _0xF7B79A50B905A30D(float p0, float p1, float p2, float p3) { return invoke<BOOL>(0xF82C00, p0, p1, p2, p3); } // 0xF7B79A50B905A30D 0x86E80A17
	static BOOL _0x07FB139B592FA687(float p0, float p1, float p2, float p3) { return invoke<BOOL>(0xF82C40, p0, p1, p2, p3); } // 0x07FB139B592FA687 0x2CDA5012
	static void SET_ROADS_BACK_TO_ORIGINAL(float p0, float p1, float p2, float p3, float p4, float p5) { invoke<Void>(0xF82CF0, p0, p1, p2, p3, p4, p5); } // 0x1EE7063B80FFC77C 0x86AC4A85
	static void SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(float x1, float y1, float z1, float x2, float y2, float z2, float p6) { invoke<Void>(0xF82D10, x1, y1, z1, x2, y2, z2, p6); } // 0x0027501B9F3B407E 0x9DB5D209
	static void _0x0B919E1FB47CC4E0(float p0) { invoke<Void>(0xF82D30, p0); } // 0x0B919E1FB47CC4E0 0x3C5085E4
	static void _0xAA76052DDA9BFC3E(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { invoke<Void>(0xF82D40, p0, p1, p2, p3, p4, p5, p6); } // 0xAA76052DDA9BFC3E 0xD0F51299
	static void SET_PED_PATHS_BACK_TO_ORIGINAL(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoke<Void>(0xF82DE0, p0, p1, p2, p3, p4, p5); } // 0xE04B48F2CC926253 0x3F1ABDA4
	static BOOL GET_RANDOM_VEHICLE_NODE(float x, float y, float z, float radius, BOOL p4, BOOL p5, BOOL p6, Vector3* outPosition, int* nodeId) { return invoke<BOOL>(0xF82E90, x, y, z, radius, p4, p5, p6, outPosition, nodeId); } // 0x93E0DB8440B73A7D 0xAD1476EA
	static void GET_STREET_NAME_AT_COORD(float x, float y, float z, Hash* streetName, Hash* crossingRoad) { invoke<Void>(0xF82FC0, x, y, z, streetName, crossingRoad); } // 0x2EB41072B4C1E4C0 0xDEBEEFCF
	static int GENERATE_DIRECTIONS_TO_COORD(float x, float y, float z, BOOL p3, float* direction, float* vehicle, float* distToNxJunction) { return invoke<int>(0xF83050, x, y, z, p3, direction, vehicle, distToNxJunction); } // 0xF90125F1F79ECDF8 0xED35C094
	static void SET_IGNORE_NO_GPS_FLAG(BOOL ignore) { invoke<Void>(0xF830B0, ignore); } // 0x72751156E7678833 0xB72CF194
	static void _0x1FC289A0C3FF470F(BOOL p0) { invoke<Void>(0xF830D0, p0); } // 0x1FC289A0C3FF470F 0x90DF7A4C
	static void SET_GPS_DISABLED_ZONE(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoke<Void>(0xF830F0, p0, p1, p2, p3, p4, p5); } // 0xDC20483CD3DD5201 0x720B8073
	static Any _0xBBB45C3CF5C8AA85() { return invoke<Any>(0xF831B0); } // 0xBBB45C3CF5C8AA85 0x4B770634
	static Any _0x869DAACBBE9FA006() { return invoke<Any>(0xF832D0); } // 0x869DAACBBE9FA006 0x286F82CC
	static Any _0x16F46FB18C8009E4(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoke<Any>(0xF83370, p0, p1, p2, p3, p4); } // 0x16F46FB18C8009E4 0xF6422F9A
	static BOOL IS_POINT_ON_ROAD(float x, float y, float z, Vehicle vehicle) { return invoke<BOOL>(0xF83410, x, y, z, vehicle); } // 0x125BF4ABFC536B09 0xCF198055
	static Any _0xD3A6A0EF48823A8C() { return invoke<Any>(0xF834C0); } // 0xD3A6A0EF48823A8C
	static void _0xD0BC1C6FB18EE154(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { invoke<Void>(0xF834F0, p0, p1, p2, p3, p4, p5, p6); } // 0xD0BC1C6FB18EE154
	static void _0x2801D0012266DF07(Any p0) { invoke<Void>(0xF835B0, p0); } // 0x2801D0012266DF07
	static void ADD_NAVMESH_REQUIRED_REGION(float x, float y, float radius) { invoke<Void>(0xF835D0, x, y, radius); } // 0x387EAD7EE42F6685 0x12B086EA
	static void REMOVE_NAVMESH_REQUIRED_REGIONS() { invoke<Void>(0xF83620); } // 0x916F0A3CDEC3445E 0x637BB680
	static void DISABLE_NAVMESH_IN_AREA(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { invoke<Void>(0xF83670, p0, p1, p2, p3, p4, p5, p6); } // 0x4C8872D8CDBE1B8B 0x6E37F132
	static BOOL ARE_ALL_NAVMESH_REGIONS_LOADED() { return invoke<BOOL>(0xF83690); } // 0x8415D95B194A3AEA 0x34C4E789
	static BOOL IS_NAVMESH_LOADED_IN_AREA(float x1, float y1, float z1, float x2, float y2, float z2) { return invoke<BOOL>(0xF836B0, x1, y1, z1, x2, y2, z2); } // 0xF813C7E63F9062A5 0x4C2BA99E
	static Any _0x01708E8DD3FF8C65(float p0, float p1, float p2, float p3, float p4, float p5) { return invoke<Any>(0xF836E0, p0, p1, p2, p3, p4, p5); } // 0x01708E8DD3FF8C65
	static Any ADD_NAVMESH_BLOCKING_OBJECT(float p0, float p1, float p2, float p3, float p4, float p5, float p6, BOOL p7, Any p8) { return invoke<Any>(0xF83710, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0xFCD5C8E06E502F5A 0x2952BA56
	static void UPDATE_NAVMESH_BLOCKING_OBJECT(Any p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, Any p8) { invoke<Void>(0xF837D0, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0x109E99373F290687 0x4E9776D0
	static void REMOVE_NAVMESH_BLOCKING_OBJECT(Any p0) { invoke<Void>(0xF83890, p0); } // 0x46399A7895957C0E 0x098602B0
	static BOOL DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Any p0) { return invoke<BOOL>(0xF838C0, p0); } // 0x0EAEB0DB4B132399 0x4B67D7EE
	static float _0x29C24BFBED8AB8FB(float p0, float p1) { return invoke<float>(0xF838F0, p0, p1); } // 0x29C24BFBED8AB8FB 0x3FE8C5A0
	static float _0x8ABE8608576D9CE3(float p0, float p1, float p2, float p3) { return invoke<float>(0xF83920, p0, p1, p2, p3); } // 0x8ABE8608576D9CE3 0x3ED21C90
	static float _0x336511A34F2E5185(float left, float right) { return invoke<float>(0xF83960, left, right); } // 0x336511A34F2E5185 0xA07C5B7D
	static float _0x3599D741C9AC6310(float p0, float p1, float p2, float p3) { return invoke<float>(0xF83990, p0, p1, p2, p3); } // 0x3599D741C9AC6310 0x76751DD4
	static float CALCULATE_TRAVEL_DISTANCE_BETWEEN_POINTS(float x1, float y1, float z1, float x2, float y2, float z2) { return invoke<float>(0xF839D0, x1, y1, z1, x2, y2, z2); } // 0xADD95C7005C4A197 0xB114489B
}

namespace CONTROLS
{
	static BOOL IS_CONTROL_ENABLED(int inputGroup, int control) { return invoke<BOOL>(0xF7D060, inputGroup, control); } // 0x1CEA6BFDF248E5D9 0x9174AF84
	static BOOL IS_CONTROL_PRESSED(int inputGroup, int control) { return invoke<BOOL>(0xF7D0C0, inputGroup, control); } // 0xF3A21BCD95725A4A 0x517A4384
	static BOOL IS_CONTROL_RELEASED(int inputGroup, int control) { return invoke<BOOL>(0xF7D130, inputGroup, control); } // 0x648EE3E7F38877DD 0x1F91A06E
	static BOOL IS_CONTROL_JUST_PRESSED(int inputGroup, int control) { return invoke<BOOL>(0xF7D1A0, inputGroup, control); } // 0x580417101DDB492F 0x4487F579
	static BOOL IS_CONTROL_JUST_RELEASED(int inputGroup, int control) { return invoke<BOOL>(0xF7D210, inputGroup, control); } // 0x50F940259D3841E6 0x2314444B
	static int GET_CONTROL_VALUE(int inputGroup, int control) { return invoke<int>(0xF7D280, inputGroup, control); } // 0xD95E79E8686D2C27 0xC526F3C6
	static float GET_CONTROL_NORMAL(int inputGroup, int control) { return invoke<float>(0xF7D300, inputGroup, control); } // 0xEC3C9B8D5327B563 0x5DE226A5
	static void _0x5B73C77D9EB66E24(BOOL p0) { invoke<Void>(0xF7D360, p0); } // 0x5B73C77D9EB66E24
	static float _0x5B84D09CEC5209C5(int inputGroup, int control) { return invoke<float>(0xF7D380, inputGroup, control); } // 0x5B84D09CEC5209C5 0xC49343BB
	static BOOL _SET_CONTROL_NORMAL(int inputGroup, int control, float amount) { return invoke<BOOL>(0xF7D3E0, inputGroup, control, amount); } // 0xE8A25867FBA3B05E
	static BOOL IS_DISABLED_CONTROL_PRESSED(int inputGroup, int control) { return invoke<BOOL>(0xF7D460, inputGroup, control); } // 0xE2587F8CBBD87B1D 0x32A93544
	static BOOL IS_DISABLED_CONTROL_JUST_PRESSED(int inputGroup, int control) { return invoke<BOOL>(0xF7D5A0, inputGroup, control); } // 0x91AEF906BCA88877 0xEE6ABD32
	static BOOL IS_DISABLED_CONTROL_JUST_RELEASED(int inputGroup, int control) { return invoke<BOOL>(0xF7D640, inputGroup, control); } // 0x305C8DCD79DA8B0F 0xD6A679E1
	static float GET_DISABLED_CONTROL_NORMAL(int inputGroup, int control) { return invoke<float>(0xF7D6E0, inputGroup, control); } // 0x11E65974A982637C 0x66FF4FAA
	static float _0x4F8A26A890FD62FB(int inputGroup, int control) { return invoke<float>(0xF7D780, inputGroup, control); } // 0x4F8A26A890FD62FB 0xF2A65A4C
	static int _0xD7D22F5592AED8BA(int p0) { return invoke<int>(0xF7D820, p0); } // 0xD7D22F5592AED8BA 0x0E8EF929
	static BOOL _IS_INPUT_DISABLED(int inputGroup) { return invoke<BOOL>(0xF7D870, inputGroup); } // 0xA571D46727E2B718
	static BOOL _IS_INPUT_JUST_DISABLED(int inputGroup) { return invoke<BOOL>(0xF7D880, inputGroup); } // 0x13337B38DB572509
	static BOOL _SET_CURSOR_LOCATION(float x, float y) { return invoke<BOOL>(0xF7D8D0, x, y); } // 0xFC695459D4D0E219
	static BOOL _0x23F09EADC01449D6(BOOL p0) { return invoke<BOOL>(0xF7D8E0, p0); } // 0x23F09EADC01449D6
	static BOOL _0x6CD79468A1E595C6(int inputGroup) { return invoke<BOOL>(0xF7D930, inputGroup); } // 0x6CD79468A1E595C6
	static char* GET_CONTROL_INSTRUCTIONAL_BUTTON(int inputGroup, int control, Player p2) { return invoke<char*>(0xF7D960, inputGroup, control, p2); } // 0x0499D7B09FC9B407 0x3551727A
	static char* _0x80C2FD58D720C801(int inputGroup, int control, BOOL p2) { return invoke<char*>(0xF7DA10, inputGroup, control, p2); } // 0x80C2FD58D720C801 0x3EE71F6A
	static void _0x8290252FFF36ACB5(int p0, int red, int green, int blue) { invoke<Void>(0xF7DAC0, p0, red, green, blue); } // 0x8290252FFF36ACB5
	static void _0xCB0360EFEFB2580D(Any p0) { invoke<Void>(0xF7DB60, p0); } // 0xCB0360EFEFB2580D
	static void SET_PAD_SHAKE(int p0, int duration, int frequency) { invoke<Void>(0xF7DBA0, p0, duration, frequency); } // 0x48B3886C1358D0D5 0x5D38BD2F
	static void _0x14D29BB12D47F68C(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0xF7DC10, p0, p1, p2, p3, p4); } // 0x14D29BB12D47F68C
	static void STOP_PAD_SHAKE(Any p0) { invoke<Void>(0xF7DC20, p0); } // 0x38C16A305E8CDC8D 0x8F75657E
	static void _0xF239400E16C23E08(Any p0, Any p1) { invoke<Void>(0xF7DC60, p0, p1); } // 0xF239400E16C23E08 0x7D65EB6E
	static void _0xA0CEFCEA390AAB9B(Any p0) { invoke<Void>(0xF7DCA0, p0); } // 0xA0CEFCEA390AAB9B
	static BOOL IS_LOOK_INVERTED() { return invoke<BOOL>(0xF7DCE0); } // 0x77B612531280010D 0x313434B2
	static BOOL _0xE1615EC03B3BB4FD() { return invoke<BOOL>(0xF7DD00); } // 0xE1615EC03B3BB4FD
	static int GET_LOCAL_PLAYER_AIM_STATE() { return invoke<int>(0xF7DD10); } // 0xBB41AFBBBC0A0287 0x81802053
	static Any _0x59B9A7AF4C95133C() { return invoke<Any>(0xF7DD20); } // 0x59B9A7AF4C95133C
	static BOOL _0x0F70731BACCFBB96() { return invoke<BOOL>(0xF7DD50); } // 0x0F70731BACCFBB96
	static BOOL _0xFC859E2374407556() { return invoke<BOOL>(0xF7DD70); } // 0xFC859E2374407556
	static void SET_PLAYERPAD_SHAKES_WHEN_CONTROLLER_DISABLED(BOOL toggle) { invoke<Void>(0xF7DD90, toggle); } // 0x798FDEB5B1575088 0xA86BD91F
	static void SET_INPUT_EXCLUSIVE(int inputGroup, int control) { invoke<Void>(0xF7DDB0, inputGroup, control); } // 0xEDE476E5EE29EDB1 0x4E8E29E6
	static void DISABLE_CONTROL_ACTION(int inputGroup, int control, BOOL disable) { invoke<Void>(0xF7DE00, inputGroup, control, disable); } // 0xFE99B66D079CF6BC 0x3800C0DC
	static void ENABLE_CONTROL_ACTION(int inputGroup, int control, BOOL enable) { invoke<Void>(0xF7DE90, inputGroup, control, enable); } // 0x351220255D64C155 0xD2753551
	static void DISABLE_ALL_CONTROL_ACTIONS(int inputGroup) { invoke<Void>(0xF7DF20, inputGroup); } // 0x5F4B6931816E599B 0x16753CF4
	static void ENABLE_ALL_CONTROL_ACTIONS(int inputGroup) { invoke<Void>(0xF7DF80, inputGroup); } // 0xA5FFE9B05F199DE7 0xFC2F119F
	static BOOL _0x3D42B92563939375(char* p0) { return invoke<BOOL>(0xF7DFB0, p0); } // 0x3D42B92563939375 0xD2C80B2E
	static BOOL _0x4683149ED1DDE7A1(char* p0) { return invoke<BOOL>(0xF7DFC0, p0); } // 0x4683149ED1DDE7A1 0xBBFC9050
	static void _0x643ED62D5EA3BEBD() { invoke<Void>(0xF7DFD0); } // 0x643ED62D5EA3BEBD 0x42140FF9
	static void _DISABLE_INPUT_GROUP(int inputGroup) { invoke<Void>(0xF7DFE0, inputGroup); } // 0x7F4724035FDCA1DD 0x2CEDE6C5
}

namespace DATAFILE
{
	static void _0xAD6875BBC0FC899C(Blip x) { invoke<Void>(0xEDA420, x); } // 0xAD6875BBC0FC899C 0x621388FF
	static void _0x6CC86E78358D5119() { invoke<Void>(0xEDA430); } // 0x6CC86E78358D5119
	static BOOL _0xFCCAE5B92A830878(Any p0) { return invoke<BOOL>(0xEDA470, p0); } // 0xFCCAE5B92A830878
	static BOOL _0x15FF52B809DB2353(Any p0) { return invoke<BOOL>(0xEDA4B0, p0); } // 0x15FF52B809DB2353
	static BOOL _0xF8CC1EBE0B62E29F(Any p0) { return invoke<BOOL>(0xEDA500, p0); } // 0xF8CC1EBE0B62E29F
	static BOOL _0x22DA66936E0FFF37(Any p0) { return invoke<BOOL>(0xEDA550, p0); } // 0x22DA66936E0FFF37 0xB41064A4
	static BOOL _0x8F5EA1C01D65A100(Any p0) { return invoke<BOOL>(0xEDA600, p0); } // 0x8F5EA1C01D65A100 0x9DB63CFF
	static BOOL _0xC84527E235FCA219(char* p0, BOOL p1, char* p2, Any* p3, Any* p4, char* type, BOOL p6) { return invoke<BOOL>(0xEDA630, p0, p1, p2, p3, p4, type, p6); } // 0xC84527E235FCA219 0xF09157B0
	static BOOL _0xA5EFC3E847D60507(char* p0, char* p1, char* p2, char* p3, BOOL p4) { return invoke<BOOL>(0xEDA680, p0, p1, p2, p3, p4); } // 0xA5EFC3E847D60507 0xD96860FC
	static BOOL _0x648E7A5434AF7969(char* p0, Any* p1, BOOL p2, Any* p3, Any* p4, Any* p5, char* type) { return invoke<BOOL>(0xEDA6C0, p0, p1, p2, p3, p4, p5, type); } // 0x648E7A5434AF7969 0x459F2683
	static BOOL _0x4645DE9980999E93(char* p0, char* p1, char* p2, char* p3, char* type) { return invoke<BOOL>(0xEDA700, p0, p1, p2, p3, type); } // 0x4645DE9980999E93 0xDBB83E2B
	static BOOL _0x692D808C34A82143(char* p0, float p1, char* type) { return invoke<BOOL>(0xEDA740, p0, p1, type); } // 0x692D808C34A82143 0xBB6321BD
	static BOOL _0xA69AC4ADE82B57A4(int p0) { return invoke<BOOL>(0xEDA830, p0); } // 0xA69AC4ADE82B57A4 0xE8D56DA2
	static BOOL _0x9CB0BFA7A9342C3D(int p0, BOOL p1) { return invoke<BOOL>(0xEDA860, p0, p1); } // 0x9CB0BFA7A9342C3D 0xCB6A351E
	static BOOL _0x52818819057F2B40(int p0) { return invoke<BOOL>(0xEDA890, p0); } // 0x52818819057F2B40 0xA4D1B30E
	static BOOL _0x01095C95CD46B624(int p0) { return invoke<BOOL>(0xEDA8C0, p0); } // 0x01095C95CD46B624 0xB8515B2F
	static BOOL _LOAD_UGC_FILE(char* filename) { return invoke<BOOL>(0xEDA8F0, filename); } // 0xC5238C011AF405E4 0x660C468E
	static void DATAFILE_CREATE() { invoke<Void>(0xEDA920); } // 0xD27058A1CA2B13EE 0x95F8A221
	static void DATAFILE_DELETE() { invoke<Void>(0xEDA9B0); } // 0x9AB9C1CFC8862DFB 0xDEF31B0A
	static void _0x2ED61456317B8178() { invoke<Void>(0xEDAA70); } // 0x2ED61456317B8178 0x4E03F632
	static void _0xC55854C7D7274882() { invoke<Void>(0xEDAA80); } // 0xC55854C7D7274882 0xF11F956F
	static char* DATAFILE_GET_FILE_DICT() { return invoke<char*>(0xEDAB40); } // 0x906B778CA1DC72B6 0x86DDF9C2
	static BOOL _0x83BCCE3224735F05(char* filename) { return invoke<BOOL>(0xEDAB60, filename); } // 0x83BCCE3224735F05 0x768CBB35
	static BOOL _0x4DFDD9EB705F8140(BOOL* p0) { return invoke<BOOL>(0xEDABC0, p0); } // 0x4DFDD9EB705F8140 0x0B4087F7
	static BOOL DATAFILE_IS_SAVE_PENDING() { return invoke<BOOL>(0xEDAC10); } // 0xBEDB96A7584AA8CF 0x5DCD0796
	static void _OBJECT_VALUE_ADD_BOOLEAN(Any* objectData, char* key, BOOL value) { invoke<Void>(0xEDAC30, objectData, key, value); } // 0x35124302A556A325 0x9B29D99B
	static void _OBJECT_VALUE_ADD_INTEGER(Any* objectData, char* key, int value) { invoke<Void>(0xEDAC50, objectData, key, value); } // 0xE7E035450A7948D5 0xEFCF554A
	static void _OBJECT_VALUE_ADD_FLOAT(Any* objectData, char* key, float value) { invoke<Void>(0xEDAC70, objectData, key, value); } // 0xC27E1CC2D795105E 0xE972CACF
	static void _OBJECT_VALUE_ADD_STRING(Any* objectData, char* key, char* value) { invoke<Void>(0xEDAC90, objectData, key, value); } // 0x8FF3847DADD8E30C 0xD437615C
	static void _OBJECT_VALUE_ADD_VECTOR3(Any* objectData, char* key, float valueX, float valueY, float valueZ) { invoke<Void>(0xEDACB0, objectData, key, valueX, valueY, valueZ); } // 0x4CD49B76338C7DEE 0x75FC6C3C
	static Any* _OBJECT_VALUE_ADD_OBJECT(Any* objectData, char* key) { return invoke<Any*>(0xEDACE0, objectData, key); } // 0xA358F56F10732EE1 0x96A8E05F
	static Any* _OBJECT_VALUE_ADD_ARRAY(Any* objectData, char* key) { return invoke<Any*>(0xEDAD10, objectData, key); } // 0x5B11728527CA6E5F 0x03939B8D
	static BOOL _OBJECT_VALUE_GET_BOOLEAN(Any* objectData, char* key) { return invoke<BOOL>(0xEDAD40, objectData, key); } // 0x1186940ED72FFEEC 0x8876C872
	static int _OBJECT_VALUE_GET_INTEGER(Any* objectData, char* key) { return invoke<int>(0xEDADF0, objectData, key); } // 0x78F06F6B1FB5A80C 0xA6C68693
	static float _OBJECT_VALUE_GET_FLOAT(Any* objectData, char* key) { return invoke<float>(0xEDAE90, objectData, key); } // 0x06610343E73B9727 0xA92C1AF4
	static char* _OBJECT_VALUE_GET_STRING(Any* objectData, char* key) { return invoke<char*>(0xEDAF50, objectData, key); } // 0x3D2FD9E763B24472 0x942160EC
	static Vector3 _OBJECT_VALUE_GET_VECTOR3(Any* objectData, char* key) { return invoke<Vector3>(0xEDB000, objectData, key); } // 0x46CD3CB66E0825CC 0xE84A127A
	static Any* _OBJECT_VALUE_GET_OBJECT(Any* objectData, char* key) { return invoke<Any*>(0xEDB0D0, objectData, key); } // 0xB6B9DDC412FCEEE2 0xC9C13D8D
	static Any* _OBJECT_VALUE_GET_ARRAY(Any* objectData, char* key) { return invoke<Any*>(0xEDB170, objectData, key); } // 0x7A983AA9DA2659ED 0x1F2F7D00
	static int _OBJECT_VALUE_GET_TYPE(Any* objectData, char* key) { return invoke<int>(0xEDB210, objectData, key); } // 0x031C55ED33227371 0x2678342A
	static void _ARRAY_VALUE_ADD_BOOLEAN(Any* arrayData, BOOL value) { invoke<Void>(0xEDB2B0, arrayData, value); } // 0xF8B0F5A43E928C76 0x08174B90
	static void _ARRAY_VALUE_ADD_INTEGER(Any* arrayData, int value) { invoke<Void>(0xEDB2D0, arrayData, value); } // 0xCABDB751D86FE93B 0xF29C0B36
	static void _ARRAY_VALUE_ADD_FLOAT(Any* arrayData, float value) { invoke<Void>(0xEDB2F0, arrayData, value); } // 0x57A995FD75D37F56 0xE4302123
	static void _ARRAY_VALUE_ADD_STRING(Any* arrayData, char* value) { invoke<Void>(0xEDB310, arrayData, value); } // 0x2F0661C155AEEEAA 0xF3C01350
	static void _ARRAY_VALUE_ADD_VECTOR3(Any* arrayData, float valueX, float valueY, float valueZ) { invoke<Void>(0xEDB330, arrayData, valueX, valueY, valueZ); } // 0x407F8D034F70F0C2 0x16F464B6
	static Any* _ARRAY_VALUE_ADD_OBJECT(Any* arrayData) { return invoke<Any*>(0xEDB360, arrayData); } // 0x6889498B3E19C797 0xC174C71B
	static BOOL _ARRAY_VALUE_GET_BOOLEAN(Any* arrayData, int arrayIndex) { return invoke<BOOL>(0xEDB390, arrayData, arrayIndex); } // 0x50C1B2874E50C114 0xA2E5F921
	static int _ARRAY_VALUE_GET_INTEGER(Any* arrayData, int arrayIndex) { return invoke<int>(0xEDB400, arrayData, arrayIndex); } // 0x3E5AE19425CD74BE 0xBB120CFC
	static float _ARRAY_VALUE_GET_FLOAT(Any* arrayData, int arrayIndex) { return invoke<float>(0xEDB460, arrayData, arrayIndex); } // 0xC0C527B525D7CFB5 0x08AD2CC2
	static char* _ARRAY_VALUE_GET_STRING(Any* arrayData, int arrayIndex) { return invoke<char*>(0xEDB4D0, arrayData, arrayIndex); } // 0xD3F2FFEB8D836F52 0x93F985A6
	static Vector3 _ARRAY_VALUE_GET_VECTOR3(Any* arrayData, int arrayIndex) { return invoke<Vector3>(0xEDB540, arrayData, arrayIndex); } // 0x8D2064E5B64A628A 0x80E3DA55
	static Any* _ARRAY_VALUE_GET_OBJECT(Any* arrayData, int arrayIndex) { return invoke<Any*>(0xEDB5C0, arrayData, arrayIndex); } // 0x8B5FADCC4E3A145F 0xECE81278
	static int _ARRAY_VALUE_GET_SIZE(Any* arrayData) { return invoke<int>(0xEDB620, arrayData); } // 0x065DB281590CEA2D 0xA8A21766
	static int _ARRAY_VALUE_GET_TYPE(Any* arrayData, int arrayIndex) { return invoke<int>(0xEDB640, arrayData, arrayIndex); } // 0x3A0014ADB172A3C5 0xFA2402C8
}

namespace FIRE
{
	static int START_SCRIPT_FIRE(float X, float Y, float Z, int maxChildren, BOOL isGasFire) { return invoke<int>(0xEF4C60, X, Y, Z, maxChildren, isGasFire); } // 0x6B83617E04503888 0xE7529357
	static void REMOVE_SCRIPT_FIRE(int fireHandle) { invoke<Void>(0xEF4D30, fireHandle); } // 0x7FF548385680673F 0x6B21FE26
	static Any START_ENTITY_FIRE(Entity entity) { return invoke<Any>(0xEF4D70, entity); } // 0xF6A9D9708F6F23DF 0x8928428E
	static void STOP_ENTITY_FIRE(Entity entity) { invoke<Void>(0xEF4DF0, entity); } // 0x7F0DD2EBBB651AFF 0xCE8C9066
	static BOOL IS_ENTITY_ON_FIRE(Entity entity) { return invoke<BOOL>(0xEF4E60, entity); } // 0x28D3FED7190D3A0B 0x8C73E64F
	static int GET_NUMBER_OF_FIRES_IN_RANGE(float x, float y, float z, float radius) { return invoke<int>(0xEF4ED0, x, y, z, radius); } // 0x50CAD495A460B305 0x654D93B7
	static void STOP_FIRE_IN_RANGE(float x, float y, float z, float radius) { invoke<Void>(0xEF4F10, x, y, z, radius); } // 0x056A8A219B8E829F 0x725C7205
	static BOOL GET_CLOSEST_FIRE_POS(Vector3* outPosition, float x, float y, float z) { return invoke<BOOL>(0xEF4F40, outPosition, x, y, z); } // 0x352A9F6BCF90081F 0xC4977B47
	static void ADD_EXPLOSION(float x, float y, float z, int explosionType, float damageScale, BOOL isAudible, BOOL isInvisible, float cameraShake) { invoke<Void>(0xEF5010, x, y, z, explosionType, damageScale, isAudible, isInvisible, cameraShake); } // 0xE3AD2BDBAEE269AC 0x10AF5258
	static void ADD_OWNED_EXPLOSION(Ped ped, float x, float y, float z, int explosionType, float damageScale, BOOL isAudible, BOOL isInvisible, float cameraShake) { invoke<Void>(0xEF5050, ped, x, y, z, explosionType, damageScale, isAudible, isInvisible, cameraShake); } // 0x172AA1B624FA1013 0x27EE0D67
	static void ADD_EXPLOSION_WITH_USER_VFX(float x, float y, float z, int explosionType, Hash explosionFx, float damageScale, BOOL isAudible, BOOL isInvisible, float cameraShake) { invoke<Void>(0xEF5090, x, y, z, explosionType, explosionFx, damageScale, isAudible, isInvisible, cameraShake); } // 0x36DD3FE58B5E5212 0xCF358946
	static BOOL IS_EXPLOSION_IN_AREA(int explosionType, float x1, float y1, float z1, float x2, float y2, float z2) { return invoke<BOOL>(0xEF50C0, explosionType, x1, y1, z1, x2, y2, z2); } // 0x2E2EBA0EE7CED0E0 0xFB40075B
	static Any _0x6070104B699B2EF4(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return invoke<Any>(0xEF5190, p0, p1, p2, p3, p4, p5, p6); } // 0x6070104B699B2EF4
	static BOOL IS_EXPLOSION_IN_SPHERE(int explosionType, float x, float y, float z, float radius) { return invoke<BOOL>(0xEF5260, explosionType, x, y, z, radius); } // 0xAB0F816885B0E483 0xD455A7F3
	static BOOL IS_EXPLOSION_IN_ANGLED_AREA(int explosionType, float x1, float y1, float z1, float x2, float y2, float z2, float angle) { return invoke<BOOL>(0xEF5370, explosionType, x1, y1, z1, x2, y2, z2, angle); } // 0xA079A6C51525DC4B 0x0128FED9
	static Entity _GET_PED_INSIDE_EXPLOSION_AREA(int explosionType, float x1, float y1, float z1, float x2, float y2, float z2, float radius) { return invoke<Entity>(0xEF5400, explosionType, x1, y1, z1, x2, y2, z2, radius); } // 0x14BA4BA137AF6CEC 0xAEC0D176
}

namespace DECISIONEVENT
{
	static void SET_DECISION_MAKER(Ped ped, Hash name) { invoke<Void>(0xEF37E0, ped, name); } // 0xB604A2942ADED0EE 0x19CEAC9E
	static void CLEAR_DECISION_MAKER_EVENT_RESPONSE(Hash name, int type) { invoke<Void>(0xEF3840, name, type); } // 0x4FC9381A7AEE8968 0x07ABD94D
	static void BLOCK_DECISION_MAKER_EVENT(Hash name, int type) { invoke<Void>(0xEF3880, name, type); } // 0xE42FCDFD0E4196F7 0x57506EA6
	static void UNBLOCK_DECISION_MAKER_EVENT(Hash name, int type) { invoke<Void>(0xEF38B0, name, type); } // 0xD7CD9CF34F2C99E8 0x62A3161D
	static ScrHandle ADD_SHOCKING_EVENT_AT_POSITION(int type, float x, float y, float z, float duration) { return invoke<ScrHandle>(0xEF38F0, type, x, y, z, duration); } // 0xD9F8455409B525E9 0x0B30F779
	static ScrHandle ADD_SHOCKING_EVENT_FOR_ENTITY(int type, Entity entity, float duration) { return invoke<ScrHandle>(0xEF3980, type, entity, duration); } // 0x7FD8F3BE76F89422 0xA81B5B71
	static BOOL IS_SHOCKING_EVENT_IN_SPHERE(int type, float x, float y, float z, float radius) { return invoke<BOOL>(0xEF3A30, type, x, y, z, radius); } // 0x1374ABB7C15BAB92 0x2F98823E
	static BOOL REMOVE_SHOCKING_EVENT(ScrHandle event) { return invoke<BOOL>(0xEF3A60, event); } // 0x2CDA538C44C6CCE5 0xF82D5A87
	static void REMOVE_ALL_SHOCKING_EVENTS(BOOL p0) { invoke<Void>(0xEF3A90, p0); } // 0xEAABE8FDFA21274C 0x64DF6282
	static void REMOVE_SHOCKING_EVENT_SPAWN_BLOCKING_AREAS() { invoke<Void>(0xEF3AB0); } // 0x340F1415B68AEADE 0xA0CE89C8
	static void SUPPRESS_SHOCKING_EVENTS_NEXT_FRAME() { invoke<Void>(0xEF3AC0); } // 0x2F9A292AD0A3BD89 0x4CC674B5
	static void SUPPRESS_SHOCKING_EVENT_TYPE_NEXT_FRAME(int type) { invoke<Void>(0xEF3AD0, type); } // 0x3FD2EC8BF1F1CF30 0xA0FDCB82
	static void SUPPRESS_AGITATION_EVENTS_NEXT_FRAME() { invoke<Void>(0xEF3AF0); } // 0x5F3B7749C112D552 0x80340396
}

namespace ZONE
{
	static int GET_ZONE_AT_COORDS(float x, float y, float z) { return invoke<int>(0x103DE10, x, y, z); } // 0x27040C25DE6CB2F4 0xC9018181
	static int GET_ZONE_FROM_NAME_ID(char* zoneName) { return invoke<int>(0x103DEA0, zoneName); } // 0x98CD1D2934B76CC1 0x8EC68304
	static int GET_ZONE_POPSCHEDULE(int zoneId) { return invoke<int>(0x103DEE0, zoneId); } // 0x4334BC40AA0CB4BB 0x20AB2FC9
	static char* GET_NAME_OF_ZONE(float x, float y, float z) { return invoke<char*>(0x103DF30, x, y, z); } // 0xCD90657D4C30E1CA 0x7875CE91
	static void SET_ZONE_ENABLED(int zoneId, BOOL toggle) { invoke<Void>(0x103DFE0, zoneId, toggle); } // 0xBA5ECEEA120E5611 0x04E21B03
	static int GET_ZONE_SCUMMINESS(int zoneId) { return invoke<int>(0x103E000, zoneId); } // 0x5F7B268D15BA0739 0xB2FB5C4C
	static void OVERRIDE_POPSCHEDULE_VEHICLE_MODEL(int scheduleId, Hash vehicleHash) { invoke<Void>(0x103E030, scheduleId, vehicleHash); } // 0x5F7D596BAC2E7777 0x3F0A3680
	static void CLEAR_POPSCHEDULE_OVERRIDE_VEHICLE_MODEL(int scheduleId) { invoke<Void>(0x103E040, scheduleId); } // 0x5C0DE367AA0D911C 0x7A72A24E
	static Hash GET_HASH_OF_MAP_AREA_AT_COORDS(float x, float y, float z) { return invoke<Hash>(0x103E090, x, y, z); } // 0x7EE64D51E8498728 0xB5C5C99B
}

namespace ROPE
{
	static Object ADD_ROPE(float x, float y, float z, float rotX, float rotY, float rotZ, float length, int ropeType, float maxLength, float minLength, float p10, BOOL p11, BOOL p12, BOOL rigid, float p14, BOOL breakWhenShot, Any* unkPtr) { return invoke<Object>(0xFB4680, x, y, z, rotX, rotY, rotZ, length, ropeType, maxLength, minLength, p10, p11, p12, rigid, p14, breakWhenShot, unkPtr); } // 0xE832D760399EB220 0xA592EC74
	static void DELETE_ROPE(Object* rope) { invoke<Void>(0xFB4700, rope); } // 0x52B4829281364649 0x748D72AF
	static void DELETE_CHILD_ROPE(Object rope) { invoke<Void>(0xFB4710, rope); } // 0xAA5D6B1888E4DB20 0xB19B4706
	static BOOL DOES_ROPE_EXIST(Object* rope) { return invoke<BOOL>(0xFB4730, rope); } // 0xFD5448BE3111ED96 0x66E4A3AC
	static void ROPE_DRAW_SHADOW_ENABLED(Object* rope, BOOL toggle) { invoke<Void>(0xFB4770, rope, toggle); } // 0xF159A63806BB5BA8 0x51523B8C
	static void LOAD_ROPE_DATA(Object rope, char* rope_preset) { invoke<Void>(0xFB47D0, rope, rope_preset); } // 0xCBB203C04D1ABD27 0x9E8F1644
	static void PIN_ROPE_VERTEX(Object rope, int vertex, float x, float y, float z) { invoke<Void>(0xFB47E0, rope, vertex, x, y, z); } // 0x2B320CF14146B69A 0xAE1D101B
	static void UNPIN_ROPE_VERTEX(Object rope, int vertex) { invoke<Void>(0xFB4800, rope, vertex); } // 0x4B5AE2EEE4A8F180 0xB30B552F
	static int GET_ROPE_VERTEX_COUNT(Object rope) { return invoke<int>(0xFB4810, rope); } // 0x3655F544CD30F0B5 0x5131CD2C
	static void ATTACH_ENTITIES_TO_ROPE(Object rope, Entity ent1, Entity ent2, float ent1_x, float ent1_y, float ent1_z, float ent2_x, float ent2_y, float ent2_z, float length, BOOL p10, BOOL p11, char* boneName1, char* boneName2) { invoke<Void>(0xFB4870, rope, ent1, ent2, ent1_x, ent1_y, ent1_z, ent2_x, ent2_y, ent2_z, length, p10, p11, boneName1, boneName2); } // 0x3D95EC8B6D940AC3 0x7508668F
	static void ATTACH_ROPE_TO_ENTITY(Object rope, Entity entity, float x, float y, float z, BOOL p5) { invoke<Void>(0xFB48C0, rope, entity, x, y, z, p5); } // 0x4B490A6832559A65 0xB25D9536
	static void DETACH_ROPE_FROM_ENTITY(Object rope, Entity entity) { invoke<Void>(0xFB48E0, rope, entity); } // 0xBCF3026912A8647D 0x3E720BEE
	static void ROPE_SET_UPDATE_PINVERTS(Object rope) { invoke<Void>(0xFB48F0, rope); } // 0xC8D667EE52114ABA 0xEAF291A0
	static void _0xDC57A637A20006ED(Any p0, Any p1) { invoke<Void>(0xFB4930, p0, p1); } // 0xDC57A637A20006ED 0x80DB77A7
	static void _0x36CCB9BE67B970FD(Any p0, BOOL p1) { invoke<Void>(0xFB4940, p0, p1); } // 0x36CCB9BE67B970FD 0xC67D5CF6
	static BOOL _0x84DE3B5FB3E666F0(Any* p0) { return invoke<BOOL>(0xFB49A0, p0); } // 0x84DE3B5FB3E666F0 0x7A18BB9C
	static Vector3 GET_ROPE_LAST_VERTEX_COORD(Object rope) { return invoke<Vector3>(0xFB49F0, rope); } // 0x21BB0FBD3E217C2D 0x91F6848B
	static Vector3 GET_ROPE_VERTEX_COORD(Object rope, int vertex) { return invoke<Vector3>(0xFB4A80, rope, vertex); } // 0xEA61CA8E80F09E4D 0x84374452
	static void START_ROPE_WINDING(Object rope) { invoke<Void>(0xFB4B00, rope); } // 0x1461C72C889E343E 0x5187BED3
	static void STOP_ROPE_WINDING(Object rope) { invoke<Void>(0xFB4B10, rope); } // 0xCB2D4AB84A19AA7C 0x46826B53
	static void START_ROPE_UNWINDING_FRONT(Object rope) { invoke<Void>(0xFB4B20, rope); } // 0x538D1179EC1AA9A9 0xFC0DB4C3
	static void STOP_ROPE_UNWINDING_FRONT(Object rope) { invoke<Void>(0xFB4B30, rope); } // 0xFFF3A50779EFBBB3 0x2EEDB18F
	static void ROPE_CONVERT_TO_SIMPLE(Object rope) { invoke<Void>(0xFB4B40, rope); } // 0x5389D48EFA2F079A 0x43E92628
	static void ROPE_LOAD_TEXTURES() { invoke<Void>(0xFB4BB0); } // 0x9B9039DBF2D258C1 0xBA97CE91
	static BOOL ROPE_ARE_TEXTURES_LOADED() { return invoke<BOOL>(0xFB4BD0); } // 0xF2D0E6A75CC05597 0x5FDC1047
	static void ROPE_UNLOAD_TEXTURES() { invoke<Void>(0xFB4C00); } // 0x6CE36C35C1AC8163 0x584463E0
	static BOOL _0x271C9D3ACA5D6409(Object rope) { return invoke<BOOL>(0xFB4C20, rope); } // 0x271C9D3ACA5D6409
	static void _0xBC0CE682D4D05650(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12, Any p13) { invoke<Void>(0xFB4CA0, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13); } // 0xBC0CE682D4D05650 0x106BA127
	static void _0xB1B6216CA2E7B55E(Any p0, BOOL p1, BOOL p2) { invoke<Void>(0xFB4DA0, p0, p1, p2); } // 0xB1B6216CA2E7B55E 0x7C6F7668
	static void _0xB743F735C03D7810(Any p0, Any p1) { invoke<Void>(0xFB4DC0, p0, p1); } // 0xB743F735C03D7810 0x686672DD
	static float _GET_ROPE_LENGTH(Object rope) { return invoke<float>(0xFB4E00, rope); } // 0x73040398DFF9A4A6 0xFD309DC8
	static void ROPE_FORCE_LENGTH(Object rope, float length) { invoke<Void>(0xFB4E50, rope, length); } // 0xD009F759A723DB1B 0xABF3130F
	static void ROPE_RESET_LENGTH(Object rope, float length) { invoke<Void>(0xFB4EA0, rope, length); } // 0xC16DE94D9BEA14A0 0xC8A423A3
	static void APPLY_IMPULSE_TO_CLOTH(float posX, float posY, float posZ, float vecX, float vecY, float vecZ, float impulse) { invoke<Void>(0xFB4F00, posX, posY, posZ, vecX, vecY, vecZ, impulse); } // 0xE37F721824571784 0xA2A5C9FE
	static void SET_DAMPING(Object rope, int vertex, float value) { invoke<Void>(0xFB4F50, rope, vertex, value); } // 0xEEA3B200A6FEB65B 0xCFB37773
	static void ACTIVATE_PHYSICS(Entity entity) { invoke<Void>(0xFB4FD0, entity); } // 0x710311ADF0E20730 0x031711B8
	static void SET_CGOFFSET(Object rope, float x, float y, float z) { invoke<Void>(0xFB5020, rope, x, y, z); } // 0xD8FA3908D7B86904 0x59910AB2
	static Vector3 GET_CGOFFSET(Object rope) { return invoke<Vector3>(0xFB5030, rope); } // 0x8214A4B5A7A33612 0x49A11F0D
	static void SET_CG_AT_BOUNDCENTER(Object rope) { invoke<Void>(0xFB50D0, rope); } // 0xBE520D9761FF811F 0xA5B55421
	static void BREAK_ENTITY_GLASS(Any p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, Any p9, BOOL p10) { invoke<Void>(0xFB51B0, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); } // 0x2E648D16F6E308F3 0xD0E0402F
	static void SET_DISABLE_BREAKING(Object rope, BOOL enabled) { invoke<Void>(0xFB5240, rope, enabled); } // 0x5CEC1A84620E7D5B 0xEE77C326
	static void _0xCC6E963682533882(Any p0) { invoke<Void>(0xFB52E0, p0); } // 0xCC6E963682533882
	static void SET_DISABLE_FRAG_DAMAGE(Object object, BOOL toggle) { invoke<Void>(0xFB52F0, object, toggle); } // 0x01BA3AED21C16CFB 0x97269DC8
}

namespace WATER
{
	static BOOL GET_WATER_HEIGHT(float x, float y, float z, float height) { return invoke<BOOL>(0x10320D0, x, y, z, height); } // 0xF6829842C06AE524 0xD864E17C
	static BOOL GET_WATER_HEIGHT_NO_WAVES(float x, float y, float z, float* height) { return invoke<BOOL>(0x1032100, x, y, z, height); } // 0x8EE6B53CE13A9794 0x262017F8
	static BOOL TEST_PROBE_AGAINST_WATER(float x1, float y1, float z1, float x2, float y2, float z2, Vector3* result) { return invoke<BOOL>(0x1032270, x1, y1, z1, x2, y2, z2, result); } // 0xFFA5D878809819DB 0xAA4AE00C
	static BOOL TEST_PROBE_AGAINST_ALL_WATER(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { return invoke<BOOL>(0x10322E0, p0, p1, p2, p3, p4, p5, p6, p7); } // 0x8974647ED222EA5F 0x4A962D55
	static BOOL TEST_VERTICAL_PROBE_AGAINST_ALL_WATER(float x, float y, float z, Any p3, float* height) { return invoke<BOOL>(0x10323A0, x, y, z, p3, height); } // 0x2B3451FA1E3142E2 0x4C71D143
	static void MODIFY_WATER(float x, float y, float radius, float height) { invoke<Void>(0x1032480, x, y, radius, height); } // 0xC443FD757C3BA637 0xC49E005A
	static int _ADD_CURRENT_RISE(float xLow, float yLow, float xHigh, float yHigh, float height) { return invoke<int>(0x10324A0, xLow, yLow, xHigh, yHigh, height); } // 0xFDBF4CDBC07E1706
	static void _REMOVE_CURRENT_RISE(int p0) { invoke<Void>(0x10324E0, p0); } // 0xB1252E3E59A82AAF
	static void _SET_CURRENT_INTENSITY(float intensity) { invoke<Void>(0x10324F0, intensity); } // 0xB96B00E976BE977F
	static float _GET_CURRENT_INTENSITY() { return invoke<float>(0x1032500); } // 0x2B2A2CC86778B619
	static void _RESET_CURRENT_INTENSITY() { invoke<Void>(0x1032530); } // 0x5E5E99285AE812DB
}

namespace WORLDPROBE
{
	static int START_SHAPE_TEST_LOS_PROBE(float x1, float y1, float z1, float x2, float y2, float z2, int flags, Entity ent, int p8) { return invoke<int>(0xFC5440, x1, y1, z1, x2, y2, z2, flags, ent, p8); } // 0x7EE9F5D83DD4F90E 0xEFAF4BA6
	static int _START_SHAPE_TEST_RAY(float x1, float y1, float z1, float x2, float y2, float z2, int flags, Entity entity, int p8) { return invoke<int>(0xFC5470, x1, y1, z1, x2, y2, z2, flags, entity, p8); } // 0x377906D8A31E5586 0x8251485D
	static int START_SHAPE_TEST_BOUNDING_BOX(Entity entity, int flags1, int flags2) { return invoke<int>(0xFC54A0, entity, flags1, flags2); } // 0x052837721A854EC7 0xCEEAD94B
	static int START_SHAPE_TEST_BOX(float x, float y, float z, float x1, float y2, float z2, float rotX, float rotY, float rotZ, Any p9, Any p10, Any entity, Any p12) { return invoke<int>(0xFC54D0, x, y, z, x1, y2, z2, rotX, rotY, rotZ, p9, p10, entity, p12); } // 0xFE466162C4401D18 0x249BC876
	static int START_SHAPE_TEST_BOUND(Entity entity, int flags1, int flags2) { return invoke<int>(0xFC5510, entity, flags1, flags2); } // 0x37181417CE7C8900 0x13BC46C0
	static int START_SHAPE_TEST_CAPSULE(float x1, float y1, float z1, float x2, float y2, float z2, float radius, int flags, Entity entity, int p9) { return invoke<int>(0xFC5540, x1, y1, z1, x2, y2, z2, radius, flags, entity, p9); } // 0x28579D1B8F8AAC80 0x591EA833
	static int _START_SHAPE_TEST_CAPSULE_2(float x1, float y1, float z1, float x2, float y2, float z2, float radius, int flags, Entity entity, Any p9) { return invoke<int>(0xFC5580, x1, y1, z1, x2, y2, z2, radius, flags, entity, p9); } // 0xE6AC6C45FBE83004 0x4559460A
	static int _START_SHAPE_TEST_SURROUNDING_COORDS(Vector3* pVec1, Vector3* pVec2, int flag, Entity entity, int flag2) { return invoke<int>(0xFC55C0, pVec1, pVec2, flag, entity, flag2); } // 0xFF6BE494C7987F34
	static int GET_SHAPE_TEST_RESULT(int rayHandle, BOOL* hit, Vector3* endCoords, Vector3* surfaceNormal, Entity* entityHit) { return invoke<int>(0xFC5660, rayHandle, hit, endCoords, surfaceNormal, entityHit); } // 0x3D87450E15D98694 0xF3C2875A
	static int _GET_SHAPE_TEST_RESULT_EX(int rayHandle, BOOL* hit, Vector3* endCoords, Vector3* surfaceNormal, Hash* materialHash, Entity* entityHit) { return invoke<int>(0xFC5710, rayHandle, hit, endCoords, surfaceNormal, materialHash, entityHit); } // 0x65287525D951F6BE 0x4301E10C
	static void _SHAPE_TEST_RESULT_ENTITY(Entity entityHit) { invoke<Void>(0xFC57C0, entityHit); } // 0x2B3334BCA57CD799 0xEC2AAF06
}

namespace NETWORK
{
	static BOOL NETWORK_IS_SIGNED_IN() { return invoke<BOOL>(0xF60220); } // 0x054354A99211EB96 0xADD0B40F
	static BOOL NETWORK_IS_SIGNED_ONLINE() { return invoke<BOOL>(0xF60240); } // 0x1077788E268557C2 0x6E5BDCE2
	static BOOL _0xBD545D44CCE70597() { return invoke<BOOL>(0xF60270); } // 0xBD545D44CCE70597
	static Any _0xEBCAB9E5048434F4() { return invoke<Any>(0xF602B0); } // 0xEBCAB9E5048434F4
	static Any _0x74FB3E29E6D10FA9() { return invoke<Any>(0xF602F0); } // 0x74FB3E29E6D10FA9
	static Any _0x7808619F31FF22DB() { return invoke<Any>(0xF60330); } // 0x7808619F31FF22DB
	static Any _0xA0FA4EC6A05DA44E() { return invoke<Any>(0xF60370); } // 0xA0FA4EC6A05DA44E
	static BOOL _NETWORK_ARE_ROS_AVAILABLE() { return invoke<BOOL>(0xF603B0); } // 0x85443FF4C328F53B 0x3FB40673
	static BOOL _NETWORK_IS_PSN_AVAILABLE() { return invoke<BOOL>(0xF603E0); } // 0x8D11E61A4ABF49CC
	static BOOL NETWORK_IS_CLOUD_AVAILABLE() { return invoke<BOOL>(0xF60410); } // 0x9A4CF4F48AD77302 0xC7FF5AFC
	static BOOL _0x67A5589628E0CFF6() { return invoke<BOOL>(0xF60440); } // 0x67A5589628E0CFF6 0x66EC713F
	static Any _0xBA9775570DB788CF() { return invoke<Any>(0xF60460); } // 0xBA9775570DB788CF 0x358D1D77
	static BOOL NETWORK_IS_HOST() { return invoke<BOOL>(0xF604A0); } // 0x8DB296B814EDDA07 0xE46AC10F
	static BOOL _0x4237E822315D8BA9() { return invoke<BOOL>(0xF604C0); } // 0x4237E822315D8BA9
	static BOOL NETWORK_HAVE_ONLINE_PRIVILEGES() { return invoke<BOOL>(0xF604D0); } // 0x25CB5A9F37BFD063 0xEF63BFDF
	static BOOL _0x1353F87E89946207() { return invoke<BOOL>(0xF60500); } // 0x1353F87E89946207
	static BOOL _0x72D918C99BCACC54(Any p0) { return invoke<BOOL>(0xF60530, p0); } // 0x72D918C99BCACC54 0x1F88819D
	static BOOL _0xAEEF48CDF5B6CE7C(Any p0, Any p1) { return invoke<BOOL>(0xF60560, p0, p1); } // 0xAEEF48CDF5B6CE7C 0x2D817A5E
	static BOOL _0x78321BEA235FD8CD(Any p0, BOOL p1) { return invoke<BOOL>(0xF605E0, p0, p1); } // 0x78321BEA235FD8CD
	static BOOL _0x595F028698072DD9(Any p0, Any p1, BOOL p2) { return invoke<BOOL>(0xF60610, p0, p1, p2); } // 0x595F028698072DD9 0xBB54AA3D
	static BOOL _0x83F28CE49FBBFFBA(Any p0, Any p1, BOOL p2) { return invoke<BOOL>(0xF60640, p0, p1, p2); } // 0x83F28CE49FBBFFBA
	static Any* _0x76BF03FADBF154F5() { return invoke<Any*>(0xF606A0); } // 0x76BF03FADBF154F5
	static Any _0x9614B71F8ADB982B() { return invoke<Any>(0xF606C0); } // 0x9614B71F8ADB982B
	static Any _0x5EA784D197556507() { return invoke<Any>(0xF60740); } // 0x5EA784D197556507
	static Any _0xA8ACB6459542A8C8() { return invoke<Any>(0xF60760); } // 0xA8ACB6459542A8C8
	static void _0x83FE8D7229593017() { invoke<Void>(0xF60780); } // 0x83FE8D7229593017
	static BOOL NETWORK_CAN_BAIL() { return invoke<BOOL>(0xF607B0); } // 0x580CE4438479CC61 0x60E1FEDF
	static void NETWORK_BAIL() { invoke<Void>(0xF607D0); } // 0x95914459A87EBA28 0x87D79A04
	static void _0x283B6062A2C01E9B() { invoke<Void>(0xF60820); } // 0x283B6062A2C01E9B 0x96E28FE2
	static BOOL NETWORK_CAN_ACCESS_MULTIPLAYER(int* loadingState) { return invoke<BOOL>(0xF60890, loadingState); } // 0xAF50DA1A3F8B1BA4 0xA520B982
	static ScrHandle NETWORK_IS_MULTIPLAYER_DISABLED() { return invoke<ScrHandle>(0xF608F0); } // 0x9747292807126EDA 0x05518C0F
	static BOOL NETWORK_CAN_ENTER_MULTIPLAYER() { return invoke<BOOL>(0xF60920); } // 0x7E782A910C362C25 0x4A23B9C9
	static Any NETWORK_SESSION_ENTER(Any p0, Any p1, Any p2, int maxPlayers, Any p4, Any p5) { return invoke<Any>(0xF60950, p0, p1, p2, maxPlayers, p4, p5); } // 0x330ED4D05491934F 0x543CD2BE
	static BOOL NETWORK_SESSION_FRIEND_MATCHMAKING(int p0, int p1, int maxPlayers, BOOL p3) { return invoke<BOOL>(0xF60A00, p0, p1, maxPlayers, p3); } // 0x2CFC76E0D087C994 0x4E53202A
	static BOOL NETWORK_SESSION_CREW_MATCHMAKING(int p0, int p1, int p2, int maxPlayers, BOOL p4) { return invoke<BOOL>(0xF60AB0, p0, p1, p2, maxPlayers, p4); } // 0x94BC51E9449D917F 0xD7624E6B
	static BOOL NETWORK_SESSION_ACTIVITY_QUICKMATCH(Any p0, Any p1, Any p2, Any p3) { return invoke<BOOL>(0xF60AF0, p0, p1, p2, p3); } // 0xBE3E347A87ACEB82 0x3F75CC38
	static BOOL NETWORK_SESSION_HOST(int p0, int maxPlayers, BOOL p2) { return invoke<BOOL>(0xF60BA0, p0, maxPlayers, p2); } // 0x6F3D4ED9BEE4E61D 0x6716460F
	static BOOL NETWORK_SESSION_HOST_CLOSED(int p0, int maxPlayers) { return invoke<BOOL>(0xF60C50, p0, maxPlayers); } // 0xED34C0C02C098BB7 0x8AC9EA19
	static BOOL NETWORK_SESSION_HOST_FRIENDS_ONLY(int p0, int maxPlayers) { return invoke<BOOL>(0xF60CF0, p0, maxPlayers); } // 0xB9CFD27A5D578D83 0x26864403
	static BOOL NETWORK_SESSION_IS_CLOSED_FRIENDS() { return invoke<BOOL>(0xF60D90); } // 0xFBCFA2EA2E206890 0x56E75FE4
	static BOOL NETWORK_SESSION_IS_CLOSED_CREW() { return invoke<BOOL>(0xF60DC0); } // 0x74732C6CA90DA2B4 0xA95299B9
	static BOOL NETWORK_SESSION_IS_SOLO() { return invoke<BOOL>(0xF60DF0); } // 0xF3929C2379B60CCE 0x3D2C1916
	static BOOL NETWORK_SESSION_IS_PRIVATE() { return invoke<BOOL>(0xF60E20); } // 0xCEF70AA5B3F89BA1 0xDB67785D
	static BOOL NETWORK_SESSION_END(BOOL p0, BOOL p1) { return invoke<BOOL>(0xF60E50, p0, p1); } // 0xA02E59562D711006 0xBCACBEA2
	static void NETWORK_SESSION_KICK_PLAYER(Player player) { invoke<Void>(0xF60EA0, player); } // 0xFA8904DC5F304220 0x1E20138A
	static BOOL _NETWORK_SESSION_IS_PLAYER_VOTED_TO_KICK(Player player) { return invoke<BOOL>(0xF60EE0, player); } // 0xD6D09A6F32F49EF1 0x8A559D26
	static Any _0x59DF79317F85A7E0() { return invoke<Any>(0xF60F60); } // 0x59DF79317F85A7E0
	static Any _0xFFE1E5B792D92B34() { return invoke<Any>(0xF60F90); } // 0xFFE1E5B792D92B34
	static void _NETWORK_SCTV_SLOTS(int p0) { invoke<Void>(0xF60FC0, p0); } // 0x49EC8030F5015F8B 0x3C3E2AB6
	static void _NETWORK_SESSION_SET_MAX_PLAYERS(int playerType, int playerCount) { invoke<Void>(0xF60FE0, playerType, playerCount); } // 0x8B6A4DD0AF9CE215 0x5F29A7E0
	static int _NETWORK_SESSION_GET_UNK(int p0) { return invoke<int>(0xF61010, p0); } // 0x56CE820830EF040B 0x36EAD960
	static void _0xCAE55F48D3D7875C(Any p0) { invoke<Void>(0xF61050, p0); } // 0xCAE55F48D3D7875C 0x5BE529F7
	static void _0xF49ABC20D8552257(Any p0) { invoke<Void>(0xF61070, p0); } // 0xF49ABC20D8552257 0x454C7B67
	static void _0x4811BBAC21C5FCD5(Any p0) { invoke<Void>(0xF61090, p0); } // 0x4811BBAC21C5FCD5 0xE5961511
	static void _0x5539C3EBF104A53A(BOOL p0) { invoke<Void>(0xF610B0, p0); } // 0x5539C3EBF104A53A 0xAE396263
	static void _0x702BC4D605522539(Any p0) { invoke<Void>(0xF610E0, p0); } // 0x702BC4D605522539 0x913FD7D6
	static void _0x3F52E880AAF6C8CA(BOOL p0) { invoke<Void>(0xF61100, p0); } // 0x3F52E880AAF6C8CA 0xB3D9A67F
	static void _0xF1EEA2DDA9FFA69D(Any p0) { invoke<Void>(0xF61120, p0); } // 0xF1EEA2DDA9FFA69D 0x6CC062FC
	static void _0x1153FA02A659051C() { invoke<Void>(0xF61190); } // 0x1153FA02A659051C 0x57F9BC83
	static void _NETWORK_SESSION_HOSTED(BOOL p0) { invoke<Void>(0xF611A0, p0); } // 0xC19F6C8E7865A6FF 0xF3768F90
	static void NETWORK_ADD_FOLLOWERS(int* p0, int p1) { invoke<Void>(0xF611C0, p0, p1); } // 0x236406F60CF216D6 0x0EC62629
	static void NETWORK_CLEAR_FOLLOWERS() { invoke<Void>(0xF611D0); } // 0x058F43EC59A8631A 0x5E557307
	static void _NETWORK_GET_SERVER_TIME(int* hours, int* minutes, int* seconds) { invoke<Void>(0xF611E0, hours, minutes, seconds); } // 0x6D03BFBD643B2A02 0x74E8C53E
	static void _0x600F8CB31C7AAB6E(Any p0) { invoke<Void>(0xF61200, p0); } // 0x600F8CB31C7AAB6E 0x959E43A3
	static BOOL NETWORK_X_AFFECTS_GAMERS(Any p0) { return invoke<BOOL>(0xF61230, p0); } // 0xE532D6811B3A4D2A 0x7771AB83
	static BOOL NETWORK_FIND_MATCHED_GAMERS(Any p0, float p1, float p2, float p3) { return invoke<BOOL>(0xF61300, p0, p1, p2, p3); } // 0xF7B2CFDE5C9F700D 0xA13045D4
	static BOOL NETWORK_IS_FINDING_GAMERS() { return invoke<BOOL>(0xF61340); } // 0xDDDF64C91BFCF0AA 0xA6DAA79F
	static Any _0xF9B83B77929D8863() { return invoke<Any>(0xF61360); } // 0xF9B83B77929D8863 0xBEDC4503
	static int NETWORK_GET_NUM_FOUND_GAMERS() { return invoke<int>(0xF61380); } // 0xA1B043EE79A916FB 0xF4B80C7E
	static BOOL NETWORK_GET_FOUND_GAMER(Any* p0, Any p1) { return invoke<BOOL>(0xF613A0, p0, p1); } // 0x9DCFF2AFB68B3476 0xA08C9141
	static void NETWORK_CLEAR_FOUND_GAMERS() { invoke<Void>(0xF61460); } // 0x6D14CCEE1B40381A 0x6AA9A154
	static BOOL _0x85A0EF54A500882C(Any* p0) { return invoke<BOOL>(0xF61470, p0); } // 0x85A0EF54A500882C 0x42BD0780
	static Any _0x2CC848A861D01493() { return invoke<Any>(0xF614F0); } // 0x2CC848A861D01493 0xBEB98840
	static Any _0x94A8394D150B013A() { return invoke<Any>(0xF61510); } // 0x94A8394D150B013A 0x08029970
	static Any _0x5AE17C6B0134B7F1() { return invoke<Any>(0xF61530); } // 0x5AE17C6B0134B7F1 0xC871E745
	static BOOL _0x02A8BEC6FD9AF660(Any* p0, Any p1) { return invoke<BOOL>(0xF61550, p0, p1); } // 0x02A8BEC6FD9AF660 0xB5ABC4B4
	static void _0x86E0660E4F5C956D() { invoke<Void>(0xF61600); } // 0x86E0660E4F5C956D 0x3F7EDBBD
	static void NETWORK_IS_PLAYER_ANIMATION_DRAWING_SYNCHRONIZED() { invoke<Void>(0xF61610); } // 0xC6F8AB8A4189CF3A 0x3D6360B5
	static void NETWORK_SESSION_CANCEL_INVITE() { invoke<Void>(0xF61620); } // 0x2FBF47B1B36D36F9 0x20317535
	static void NETWORK_SESSION_FORCE_CANCEL_INVITE() { invoke<Void>(0xF61650); } // 0xA29177F7703B5644 0x3FD49D3B
	static BOOL NETWORK_HAS_PENDING_INVITE() { return invoke<BOOL>(0xF61680); } // 0xAC8C7B9B88C4A668 0x0C207D6E
	static Any _0xC42DD763159F3461() { return invoke<Any>(0xF616B0); } // 0xC42DD763159F3461 0xFBBAC350
	static Any _0x62A0296C1BB1CEB3() { return invoke<Any>(0xF616D0); } // 0x62A0296C1BB1CEB3 0x0907A6BF
	static BOOL NETWORK_SESSION_WAS_INVITED() { return invoke<BOOL>(0xF61700); } // 0x23DFB504655D0CE4 0x6A0BEA60
	static void NETWORK_SESSION_GET_INVITER(int* networkHandle) { invoke<Void>(0xF61720, networkHandle); } // 0xE57397B4A3429DD0 0xE9C6B3FD
	static Any _0xD313DE83394AF134() { return invoke<Any>(0xF61750); } // 0xD313DE83394AF134 0x3EA9D44C
	static Any _0xBDB6F89C729CF388() { return invoke<Any>(0xF61780); } // 0xBDB6F89C729CF388
	static void NETWORK_SUPPRESS_INVITE(BOOL toggle) { invoke<Void>(0xF617A0, toggle); } // 0xA0682D67EF1FBA3D 0x323DC78C
	static void NETWORK_BLOCK_INVITES(BOOL toggle) { invoke<Void>(0xF617C0, toggle); } // 0x34F9E9049454A7A0 0xD156FD1A
	static void _0xCFEB8AF24FC1D0BB(BOOL p0) { invoke<Void>(0xF617E0, p0); } // 0xCFEB8AF24FC1D0BB
	static void _0xF814FEC6A19FD6E0() { invoke<Void>(0xF61800); } // 0xF814FEC6A19FD6E0 0x32B7A076
	static void _NETWORK_BLOCK_KICKED_PLAYERS(BOOL p0) { invoke<Void>(0xF61810, p0); } // 0x6B07B9CE4D390375 0x0FCE995D
	static void _0x7AC752103856FB20(BOOL p0) { invoke<Void>(0xF61830, p0); } // 0x7AC752103856FB20 0xA639DCA2
	static Any _0x74698374C45701D2() { return invoke<Any>(0xF61850); } // 0x74698374C45701D2 0x70ED476A
	static void _0x140E6A44870A11CE() { invoke<Void>(0xF61870); } // 0x140E6A44870A11CE 0x50507BED
	static void NETWORK_SESSION_HOST_SINGLE_PLAYER(int p0) { invoke<Void>(0xF61880, p0); } // 0xC74C33FCA52856D5 0xF3B1CA85
	static void NETWORK_SESSION_LEAVE_SINGLE_PLAYER() { invoke<Void>(0xF618A0); } // 0x3442775428FD2DAA 0xC692F86A
	static BOOL NETWORK_IS_GAME_IN_PROGRESS() { return invoke<BOOL>(0xF618C0); } // 0x10FAB35428CCC9D7 0x09B88E3E
	static BOOL NETWORK_IS_SESSION_ACTIVE() { return invoke<BOOL>(0xF618D0); } // 0xD83C2B94E7508980 0x715CB8C4
	static BOOL NETWORK_IS_IN_SESSION() { return invoke<BOOL>(0xF618F0); } // 0xCA97246103B63917 0x4BC4105E
	static BOOL NETWORK_IS_SESSION_STARTED() { return invoke<BOOL>(0xF61910); } // 0x9DE624D2FC4B603F 0x9D854A37
	static BOOL NETWORK_IS_SESSION_BUSY() { return invoke<BOOL>(0xF61930); } // 0xF4435D66A8E2905E 0x8592152D
	static BOOL NETWORK_CAN_SESSION_END() { return invoke<BOOL>(0xF61950); } // 0x4EEBC3694E49C572 0xE1FCCDBA
	static void NETWORK_SESSION_MARK_VISIBLE(BOOL p0) { invoke<Void>(0xF61970, p0); } // 0x271CC6AB59EBF9A5 0x7017257D
	static BOOL NETWORK_SESSION_IS_VISIBLE() { return invoke<BOOL>(0xF619C0); } // 0xBA416D68C631496A 0x4977AC28
	static void NETWORK_SESSION_BLOCK_JOIN_REQUESTS(BOOL p0) { invoke<Void>(0xF61A00, p0); } // 0xA73667484D7037C3 0xE6EEF8AF
	static void NETWORK_SESSION_CHANGE_SLOTS(int p0, BOOL p1) { invoke<Void>(0xF61A50, p0, p1); } // 0xB4AB419E0D86ACAE 0x6BB93227
	static Any _0x53AFD64C6758F2F9() { return invoke<Any>(0xF61A90); } // 0x53AFD64C6758F2F9
	static void NETWORK_SESSION_VOICE_HOST() { invoke<Void>(0xF61AC0); } // 0x9C1556705F864230 0x345C2980
	static void NETWORK_SESSION_VOICE_LEAVE() { invoke<Void>(0xF61AF0); } // 0x6793E42BE02B575D 0xE566C7DA
	static void _NETWORK_VOICE_CONNECT_TO_PLAYER(Any* globalPtr) { invoke<Void>(0xF61B20, globalPtr); } // 0xABD5E88B8A2D3DB2 0x9DFD89E6
	static void NETWORK_SET_KEEP_FOCUSPOINT(BOOL p0, Any p1) { invoke<Void>(0xF61BA0, p0, p1); } // 0x7F8413B7FC2AA6B9 0x075321B5
	static void _0x5B8ED3DB018927B1(Any p0) { invoke<Void>(0xF61BC0, p0); } // 0x5B8ED3DB018927B1 0x6EFC2FD0
	static BOOL _0x855BC38818F6F684() { return invoke<BOOL>(0xF61BE0); } // 0x855BC38818F6F684 0x60AA4AA1
	static Any _0xB5D3453C98456528() { return invoke<Any>(0xF61C10); } // 0xB5D3453C98456528
	static BOOL _0xEF0912DDF7C4CB4B() { return invoke<BOOL>(0xF61C40); } // 0xEF0912DDF7C4CB4B 0x132CA01E
	static BOOL NETWORK_SEND_TEXT_MESSAGE(char* message, int* networkHandle) { return invoke<BOOL>(0xF61C70, message, networkHandle); } // 0x3A214F2EC889B100 0xAFFEA720
	static void NETWORK_SET_ACTIVITY_SPECTATOR(BOOL toggle) { invoke<Void>(0xF61D00, toggle); } // 0x75138790B4359A74 0xFC9AD060
	static Any NETWORK_IS_ACTIVITY_SPECTATOR() { return invoke<Any>(0xF61D20); } // 0x12103B9E0C9F92FB 0xAF329720
	static void NETWORK_SET_ACTIVITY_SPECTATOR_MAX(int maxSpectators) { invoke<Void>(0xF61D60, maxSpectators); } // 0x9D277B76D1D12222 0x74E0BC0A
	static int NETWORK_GET_ACTIVITY_PLAYER_NUM(BOOL p0) { return invoke<int>(0xF61D80, p0); } // 0x73E2B500410DA5A2 0x31F951FD
	static BOOL NETWORK_IS_ACTIVITY_SPECTATOR_FROM_HANDLE(int* networkHandle) { return invoke<BOOL>(0xF61DC0, networkHandle); } // 0x2763BBAA72A7BCB9 0x58F1DF7D
	static Any NETWORK_HOST_TRANSITION(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return invoke<Any>(0xF61E50, p0, p1, p2, p3, p4, p5); } // 0xA60BB5CE242BB254 0x146764FB
	static BOOL NETWORK_DO_TRANSITION_QUICKMATCH(Any p0, Any p1, Any p2, Any p3) { return invoke<BOOL>(0xF61F20, p0, p1, p2, p3); } // 0x71FB0EBCD4915D56 0x2FF65C0B
	static BOOL NETWORK_DO_TRANSITION_QUICKMATCH_ASYNC(Any p0, Any p1, Any p2, Any p3) { return invoke<BOOL>(0xF61FC0, p0, p1, p2, p3); } // 0xA091A5E44F0072E5 0x47D61C99
	static BOOL NETWORK_DO_TRANSITION_QUICKMATCH_WITH_GROUP(Any p0, Any p1, Any p2, Any p3, Any* p4, Any p5) { return invoke<BOOL>(0xF62060, p0, p1, p2, p3, p4, p5); } // 0x9C4AB58491FDC98A 0x5CE60A11
	static Any NETWORK_JOIN_GROUP_ACTIVITY() { return invoke<Any>(0xF620B0); } // 0xA06509A691D12BE4 0x0D7E5CF9
	static void _0xB13E88E655E5A3BC() { invoke<Void>(0xF620F0); } // 0xB13E88E655E5A3BC 0x36A5F2DA
	static Any _0x6512765E3BE78C50() { return invoke<Any>(0xF62100); } // 0x6512765E3BE78C50
	static Any _0x0DBD5D7E3C5BEC3B() { return invoke<Any>(0xF62130); } // 0x0DBD5D7E3C5BEC3B
	static BOOL _0x5DC577201723960A() { return invoke<BOOL>(0xF62160); } // 0x5DC577201723960A
	static BOOL _0x5A6AA44FF8E931E6() { return invoke<BOOL>(0xF62190); } // 0x5A6AA44FF8E931E6
	static void _0x261E97AD7BCF3D40(BOOL p0) { invoke<Void>(0xF621F0, p0); } // 0x261E97AD7BCF3D40 0x7EF353E1
	static void _0x39917E1B4CB0F911(BOOL p0) { invoke<Void>(0xF62210, p0); } // 0x39917E1B4CB0F911 0xF60986FC
	static void NETWORK_SET_TRANSITION_CREATOR_HANDLE(Any* p0) { invoke<Void>(0xF62250, p0); } // 0xEF26739BCD9907D5 0x1DD01FE7
	static void NETWORK_CLEAR_TRANSITION_CREATOR_HANDLE() { invoke<Void>(0xF622D0); } // 0xFB3272229A82C759 0x8BB336F7
	static BOOL NETWORK_INVITE_GAMERS_TO_TRANSITION(Any* p0, Any p1) { return invoke<BOOL>(0xF62330, p0, p1); } // 0x4A595C32F77DFF76 0x5332E645
	static void NETWORK_SET_GAMER_INVITED_TO_TRANSITION(int* networkHandle) { invoke<Void>(0xF62360, networkHandle); } // 0xCA2C8073411ECDB6 0x17F1C69D
	static Any NETWORK_LEAVE_TRANSITION() { return invoke<Any>(0xF623F0); } // 0xD23A1A815D21DB19 0x3A3599B7
	static Any NETWORK_LAUNCH_TRANSITION() { return invoke<Any>(0xF62430); } // 0x2DCF46CB1A4F0884 0xE3570BA2
	static void _0xA2E9C1AB8A92E8CD(BOOL p0) { invoke<Void>(0xF62470, p0); } // 0xA2E9C1AB8A92E8CD
	static void NETWORK_BAIL_TRANSITION() { invoke<Void>(0xF62490); } // 0xEAA572036990CD1B 0xB59D74CA
	static BOOL NETWORK_DO_TRANSITION_TO_GAME(BOOL p0, int maxPlayers) { return invoke<BOOL>(0xF624C0, p0, maxPlayers); } // 0x3E9BB38102A589B0 0x1B2114D2
	static BOOL NETWORK_DO_TRANSITION_TO_NEW_GAME(BOOL p0, int maxPlayers, BOOL p2) { return invoke<BOOL>(0xF624F0, p0, maxPlayers, p2); } // 0x4665F51EFED00034 0x58AFBE63
	static BOOL NETWORK_DO_TRANSITION_TO_FREEMODE(Any* p0, Any p1, BOOL p2, int players, BOOL p4) { return invoke<BOOL>(0xF62530, p0, p1, p2, players, p4); } // 0x3AAD8B2FCA1E289F 0xC7CB8ADF
	static BOOL NETWORK_DO_TRANSITION_TO_NEW_FREEMODE(Any* p0, Any* p1, int players, BOOL p3, BOOL p4, BOOL p5) { return invoke<BOOL>(0xF62570, p0, p1, players, p3, p4, p5); } // 0x9E80A5BA8109F974 0xAD13375E
	static Any NETWORK_IS_TRANSITION_TO_GAME() { return invoke<Any>(0xF625C0); } // 0x9D7696D8F4FA6CB7 0x17146B2B
	static Any NETWORK_GET_TRANSITION_MEMBERS(Any* p0, Any p1) { return invoke<Any>(0xF625E0, p0, p1); } // 0x73B000F7FBC55829 0x31F19263
	static void NETWORK_APPLY_TRANSITION_PARAMETER(Any p0, Any p1) { invoke<Void>(0xF62610, p0, p1); } // 0x521638ADA1BA0D18 0xCEE79711
	static void _0xEBEFC2E77084F599(Any p0, char* p1, BOOL p2) { invoke<Void>(0xF62630, p0, p1, p2); } // 0xEBEFC2E77084F599 0xE0C28DB5
	static BOOL NETWORK_SEND_TRANSITION_GAMER_INSTRUCTION(int* networkHandle, char* p1, int p2, int p3, BOOL p4) { return invoke<BOOL>(0xF62660, networkHandle, p1, p2, p3, p4); } // 0x31D1D2B858D25E6B 0x468B0884
	static BOOL NETWORK_MARK_TRANSITION_GAMER_AS_FULLY_JOINED(Any* p0) { return invoke<BOOL>(0xF62730, p0); } // 0x5728BB6D63E3FF1D 0x03383F57
	static Any NETWORK_IS_TRANSITION_HOST() { return invoke<Any>(0xF627D0); } // 0x0B824797C9BF2159 0x0C0900BC
	static BOOL NETWORK_IS_TRANSITION_HOST_FROM_HANDLE(int* networkHandle) { return invoke<BOOL>(0xF62800, networkHandle); } // 0x6B5C83BA3EFE6A10 0x0E2854C4
	static BOOL NETWORK_GET_TRANSITION_HOST(int* networkHandle) { return invoke<BOOL>(0xF628B0, networkHandle); } // 0x65042B9774C4435E 0x73098D40
	static BOOL NETWORK_IS_IN_TRANSITION() { return invoke<BOOL>(0xF62940); } // 0x68049AEFF83D8F0A 0xC3CDB626
	static BOOL NETWORK_IS_TRANSITION_STARTED() { return invoke<BOOL>(0xF62960); } // 0x53FA83401D9C07FE 0x7917E111
	static Any NETWORK_IS_TRANSITION_BUSY() { return invoke<Any>(0xF62980); } // 0x520F3282A53D26B7 0xA357A2C6
	static Any NETWORK_IS_TRANSITION_MATCHMAKING() { return invoke<Any>(0xF629A0); } // 0x292564C735375EDF 0x8262C70E
	static Any _0xC571D0E77D8BBC29() { return invoke<Any>(0xF629C0); } // 0xC571D0E77D8BBC29
	static void NETWORK_OPEN_TRANSITION_MATCHMAKING() { invoke<Void>(0xF62A60); } // 0x2B3A8F7CA3A38FDE 0xC71E607B
	static void NETWORK_CLOSE_TRANSITION_MATCHMAKING() { invoke<Void>(0xF62A80); } // 0x43F4DBA69710E01E 0x82D32D07
	static Any _0x37A4494483B9F5C9() { return invoke<Any>(0xF62AA0); } // 0x37A4494483B9F5C9 0xC901AA9F
	static void _0x0C978FDA19692C2C(BOOL p0, BOOL p1) { invoke<Void>(0xF62AD0, p0, p1); } // 0x0C978FDA19692C2C
	static Any _0xD0A484CB2F829FBE() { return invoke<Any>(0xF62B00); } // 0xD0A484CB2F829FBE
	static void NETWORK_SET_TRANSITION_ACTIVITY_ID(Any p0) { invoke<Void>(0xF62B30, p0); } // 0x30DE938B516F0AD2 0xCCA9C022
	static void NETWORK_CHANGE_TRANSITION_SLOTS(Any p0, Any p1) { invoke<Void>(0xF62B80, p0, p1); } // 0xEEEDA5E6D7080987 0x1E5F6AEF
	static void _0x973D76AA760A6CB6(BOOL p0) { invoke<Void>(0xF62BE0, p0); } // 0x973D76AA760A6CB6 0x0532DDD2
	static BOOL NETWORK_HAS_PLAYER_STARTED_TRANSITION(Player player) { return invoke<BOOL>(0xF62C30, player); } // 0x9AC9CCBFA8C29795 0x4ABD1E59
	static BOOL NETWORK_ARE_TRANSITION_DETAILS_VALID(Any p0) { return invoke<BOOL>(0xF62C80, p0); } // 0x2615AA2A695930C1 0xCDEBCCE7
	static BOOL NETWORK_JOIN_TRANSITION(Player player) { return invoke<BOOL>(0xF62CE0, player); } // 0x9D060B08CD63321A 0xB054EC4B
	static BOOL NETWORK_HAS_INVITED_GAMER_TO_TRANSITION(Any* p0) { return invoke<BOOL>(0xF62D40, p0); } // 0x7284A47B3540E6CF 0x4F41DF6B
	static BOOL _0x3F9990BF5F22759C(Any* p0) { return invoke<BOOL>(0xF62DD0, p0); } // 0x3F9990BF5F22759C
	static BOOL NETWORK_IS_ACTIVITY_SESSION() { return invoke<BOOL>(0xF62E60); } // 0x05095437424397FA 0x577DAA8A
	static void _NETWORK_BLOCK_INVITES_2(BOOL p0) { invoke<Void>(0xF62E90, p0); } // 0x4A9FDE3A5A6D0437 0x18F03AFD
	static BOOL _NETWORK_SEND_PRESENCE_INVITE(int* networkHandle, Any* p1, Any p2, Any p3) { return invoke<BOOL>(0xF62EA0, networkHandle, p1, p2, p3); } // 0xC3C7A6AFDB244624 0x8B99B72B
	static BOOL _NETWORK_SEND_PRESENCE_TRANSITION_INVITE(Any* p0, Any* p1, Any p2, Any p3) { return invoke<BOOL>(0xF62F80, p0, p1, p2, p3); } // 0xC116FF9B4D488291 0x877C0E1C
	static BOOL _0x1171A97A3D3981B6(Any* p0, Any* p1, Any p2, Any p3) { return invoke<BOOL>(0xF63060, p0, p1, p2, p3); } // 0x1171A97A3D3981B6
	static Any _0x742B58F723233ED9(Any p0) { return invoke<Any>(0xF63150, p0); } // 0x742B58F723233ED9 0x5E832444
	static int NETWORK_GET_NUM_PRESENCE_INVITES() { return invoke<int>(0xF63180); } // 0xCEFA968912D0F78D 0x3FDA00F3
	static BOOL NETWORK_ACCEPT_PRESENCE_INVITE(Any p0) { return invoke<BOOL>(0xF631B0, p0); } // 0xFA91550DF9318B22 0xE5DA4CED
	static BOOL NETWORK_REMOVE_PRESENCE_INVITE(Any p0) { return invoke<BOOL>(0xF631E0, p0); } // 0xF0210268DB0974B1 0x93C665FA
	static Any NETWORK_GET_PRESENCE_INVITE_ID(Any p0) { return invoke<Any>(0xF63210, p0); } // 0xDFF09646E12EC386 0xD50DF46C
	static Any NETWORK_GET_PRESENCE_INVITE_INVITER(Any p0) { return invoke<Any>(0xF63240, p0); } // 0x4962CC4AA2F345B7 0x19EC65D9
	static BOOL NETWORK_GET_PRESENCE_INVITE_HANDLE(Any p0, Any* p1) { return invoke<BOOL>(0xF63270, p0, p1); } // 0x38D5B0FEBB086F75 0xB2451429
	static Any NETWORK_GET_PRESENCE_INVITE_SESSION_ID(Any p0) { return invoke<Any>(0xF63300, p0); } // 0x26E1CD96B0903D60 0xC5E0C989
	static Any _0x24409FC4C55CB22D(Any p0) { return invoke<Any>(0xF63320, p0); } // 0x24409FC4C55CB22D 0xA4302183
	static Any _0xD39B3FFF8FFDD5BF(Any p0) { return invoke<Any>(0xF63350, p0); } // 0xD39B3FFF8FFDD5BF 0x51B2D848
	static Any _0x728C4CC7920CD102(Any p0) { return invoke<Any>(0xF63380, p0); } // 0x728C4CC7920CD102 0x4677C656
	static BOOL _0x3DBF2DF0AEB7D289(Any p0) { return invoke<BOOL>(0xF633B0, p0); } // 0x3DBF2DF0AEB7D289 0xF5E3401C
	static BOOL _0x8806CEBFABD3CE05(Any p0) { return invoke<BOOL>(0xF633E0, p0); } // 0x8806CEBFABD3CE05 0x7D593B4C
	static BOOL NETWORK_HAS_FOLLOW_INVITE() { return invoke<BOOL>(0xF63410); } // 0x76D9B976C4C09FDE 0xE96CFE7D
	static Any NETWORK_ACTION_FOLLOW_INVITE() { return invoke<Any>(0xF63440); } // 0xC88156EBB786F8D5 0xAB969F00
	static Any NETWORK_CLEAR_FOLLOW_INVITE() { return invoke<Any>(0xF63470); } // 0x439BFDE3CD0610F6 0x3242F952
	static void _0xEBF8284D8CADEB53() { invoke<Void>(0xF634A0); } // 0xEBF8284D8CADEB53 0x9773F36A
	static void NETWORK_REMOVE_TRANSITION_INVITE(Any* p0) { invoke<Void>(0xF634B0, p0); } // 0x7524B431B2E6F7EE 0xFDE84CB7
	static void NETWORK_REMOVE_ALL_TRANSITION_INVITE() { invoke<Void>(0xF63530); } // 0x726E0375C7A26368 0xF7134E73
	static void _0xF083835B70BA9BFE() { invoke<Void>(0xF63540); } // 0xF083835B70BA9BFE 0xC47352E7
	static BOOL NETWORK_INVITE_GAMERS(Any* p0, Any p1, Any* p2, Any* p3) { return invoke<BOOL>(0xF63550, p0, p1, p2, p3); } // 0x9D80CD1D0E6327DE 0x52FB8074
	static BOOL NETWORK_HAS_INVITED_GAMER(Any* p0) { return invoke<BOOL>(0xF63580, p0); } // 0x4D86CD31E8976ECE 0xEC651BC0
	static BOOL NETWORK_GET_CURRENTLY_SELECTED_GAMER_HANDLE_FROM_INVITE_MENU(Any* p0) { return invoke<BOOL>(0xF63740, p0); } // 0x74881E6BCAE2327C 0x72BA00CE
	static BOOL NETWORK_SET_CURRENTLY_SELECTED_GAMER_HANDLE_FROM_INVITE_MENU(Any* p0) { return invoke<BOOL>(0xF637A0, p0); } // 0x7206F674F2A3B1BB 0xFD95899E
	static void _0x66F010A4B031A331(Any* p0) { invoke<Void>(0xF63870, p0); } // 0x66F010A4B031A331
	static BOOL _0x44B37CDCAE765AAE(Any p0, Any* p1) { return invoke<BOOL>(0xF63880, p0, p1); } // 0x44B37CDCAE765AAE
	static void _0x0D77A82DC2D0DA59(Any* p0, Any* p1) { invoke<Void>(0xF63A00, p0, p1); } // 0x0D77A82DC2D0DA59 0x0808D4CC
	static BOOL FILLOUT_PM_PLAYER_LIST(int* networkHandle, Any p1, Any p2) { return invoke<BOOL>(0xF63A10, networkHandle, p1, p2); } // 0xCBBD7C4991B64809 0xCE40F423
	static BOOL FILLOUT_PM_PLAYER_LIST_WITH_NAMES(Any* p0, Any* p1, Any p2, Any p3) { return invoke<BOOL>(0xF63A40, p0, p1, p2, p3); } // 0x716B6DB9D1886106 0xB8DF604E
	static BOOL USING_NETWORK_WEAPONTYPE(Any p0) { return invoke<BOOL>(0xF63A70, p0); } // 0xE26CCFF8094D8C74 0xF49C1533
	static BOOL _NETWORK_CHECK_DATA_MANAGER_FOR_HANDLE(Any* p0) { return invoke<BOOL>(0xF63AA0, p0); } // 0x796A87B3B68D1F3D
	static Any _0x2FC5650B0271CB57() { return invoke<Any>(0xF63B50); } // 0x2FC5650B0271CB57 0xA812B6CB
	static Any _0x01ABCE5E7CBDA196() { return invoke<Any>(0xF63B70); } // 0x01ABCE5E7CBDA196
	static Any _0x120364DE2845DAF8(Any* p0, Any p1) { return invoke<Any>(0xF63B90, p0, p1); } // 0x120364DE2845DAF8 0xF30E5814
	static Any _0xFD8B834A8BA05048() { return invoke<Any>(0xF63BC0); } // 0xFD8B834A8BA05048 0xC6609191
	static BOOL NETWORK_IS_CHATTING_IN_PLATFORM_PARTY(int* networkHandle) { return invoke<BOOL>(0xF63BE0, networkHandle); } // 0x8DE9945BCC9AEC52 0x51367B34
	static Any _0x2BF66D2E7414F686() { return invoke<Any>(0xF63C60); } // 0x2BF66D2E7414F686 0x9156EFC0
	static Any _0x14922ED3E38761F0() { return invoke<Any>(0xF63C90); } // 0x14922ED3E38761F0 0x8FA6EE0E
	static void _0xFA2888E3833C8E96() { invoke<Void>(0xF63CD0); } // 0xFA2888E3833C8E96 0x7F70C15A
	static void _0x25D990F8E0E3F13C() { invoke<Void>(0xF63CE0); } // 0x25D990F8E0E3F13C
	static void _0xF1B84178F8674195(Any p0) { invoke<Void>(0xF63CF0, p0); } // 0xF1B84178F8674195 0x41702C8A
	static int NETWORK_GET_RANDOM_INT() { return invoke<int>(0xF63D30); } // 0x599E4FA1F87EB5FF 0x208DD848
	static int _NETWORK_GET_RANDOM_INT_IN_RANGE(int rangeStart, int rangeEnd) { return invoke<int>(0xF63D70, rangeStart, rangeEnd); } // 0xE30CF56F1EFA5F43 0xF9B6426D
	static BOOL NETWORK_PLAYER_IS_CHEATER() { return invoke<BOOL>(0xF63DD0); } // 0x655B91F1495A9090 0xA51DC214
	static BOOL _NETWORK_PLAYER_IS_UNK() { return invoke<BOOL>(0xF63E20); } // 0x172F75B6EE2233BA 0x1720ABA6
	static BOOL NETWORK_PLAYER_IS_BADSPORT() { return invoke<BOOL>(0xF63E50); } // 0x19D8DA0E5A68045A 0xA19708E3
	static BOOL _NETWORK_IS_PLAYER_IN_SCRIPT(Player player, int p1, Hash scriptHash) { return invoke<BOOL>(0xF63E80, player, p1, scriptHash); } // 0x46FB3ED415C7641C 0xF9A51B92
	static BOOL BAD_SPORT_PLAYER_LEFT_DETECTED(int* networkHandle, int event, int amountReceived) { return invoke<BOOL>(0xF63FE0, networkHandle, event, amountReceived); } // 0xEC5E3AF5289DCA81 0x4C2C6B6A
	static void _0xE66C690248F11150(Entity p0, Any p1) { invoke<Void>(0xF64090, p0, p1); } // 0xE66C690248F11150 0x4818ACD0
	static void NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(int lobbySize, BOOL p1, int playerId) { invoke<Void>(0xF640F0, lobbySize, p1, playerId); } // 0x1CA59E306ECB80A5 0x470810ED
	static BOOL _NETWORK_IS_THIS_SCRIPT_MARKED(Any p0, BOOL p1, Any p2) { return invoke<BOOL>(0xF64160, p0, p1, p2); } // 0xD1110739EEADB592
	static BOOL NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT() { return invoke<BOOL>(0xF641F0); } // 0x2910669969E9535E 0xD9BF6549
	static int _NETWORK_GET_NUM_PARTICIPANTS_HOST() { return invoke<int>(0xF64220); } // 0xA6C90FBC38E395EE 0xCCD8C02D
	static int NETWORK_GET_NUM_PARTICIPANTS() { return invoke<int>(0xF64260); } // 0x18D0456E86604654 0x3E25A3C5
	static int NETWORK_GET_SCRIPT_STATUS() { return invoke<int>(0xF642A0); } // 0x57D158647A6BFABF 0x2BE9235A
	static void NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(int* vars, int sizeofVars) { invoke<Void>(0xF642C0, vars, sizeofVars); } // 0x3E9B2F01C50DF595 0xDAF3B0AE
	static void NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(int* vars, int numVars) { invoke<Void>(0xF642D0, vars, numVars); } // 0x3364AA97340CA215 0xBE3D32B4
	static void _0x64F62AFB081E260D() { invoke<Void>(0xF642E0); } // 0x64F62AFB081E260D 0xA71A1D2A
	static BOOL _0x5D10B3795F3FC886() { return invoke<BOOL>(0xF64300); } // 0x5D10B3795F3FC886 0x0B739F53
	static int NETWORK_GET_PLAYER_INDEX(Player player) { return invoke<int>(0xF64320, player); } // 0x24FB80D107371267 0xBE1C1506
	static int NETWORK_GET_PARTICIPANT_INDEX(int index) { return invoke<int>(0xF643C0, index); } // 0x1B84DF6AF2A46938 0xC4D91094
	static Player NETWORK_GET_PLAYER_INDEX_FROM_PED(Ped ped) { return invoke<Player>(0xF64440, ped); } // 0x6C0E2E0125610278 0x40DBF464
	static int NETWORK_GET_NUM_CONNECTED_PLAYERS() { return invoke<int>(0xF644B0); } // 0xA4A79DD2D9600654 0xF7952E62
	static BOOL NETWORK_IS_PLAYER_CONNECTED(Player player) { return invoke<BOOL>(0xF644D0, player); } // 0x93DC1BE4E1ABE9D1 0x168EE2C2
	static int _0xCF61D4B4702EE9EB() { return invoke<int>(0xF64530); } // 0xCF61D4B4702EE9EB 0xF4F13B06
	static BOOL NETWORK_IS_PARTICIPANT_ACTIVE(int p0) { return invoke<BOOL>(0xF64550, p0); } // 0x6FF8FF40B6357D45 0x4E2C348B
	static BOOL NETWORK_IS_PLAYER_ACTIVE(Player player) { return invoke<BOOL>(0xF64590, player); } // 0xB8DFD30D6973E135 0x43657B17
	static BOOL NETWORK_IS_PLAYER_A_PARTICIPANT(Any p0) { return invoke<BOOL>(0xF645C0, p0); } // 0x3CA58F6CB7CBD784 0xB08B6992
	static BOOL NETWORK_IS_HOST_OF_THIS_SCRIPT() { return invoke<BOOL>(0xF64600); } // 0x83CD99A1E6061AB5 0x6970BA94
	static Any NETWORK_GET_HOST_OF_THIS_SCRIPT() { return invoke<Any>(0xF64630); } // 0xC7B4D79B01FA7A5C 0x89EA7B54
	static int NETWORK_GET_HOST_OF_SCRIPT(char* scriptName, int p1, int p2) { return invoke<int>(0xF64670, scriptName, p1, p2); } // 0x1D6A14F1F9A736FC 0x9C95D0BB
	static void NETWORK_SET_MISSION_FINISHED() { invoke<Void>(0xF646A0); } // 0x3B3D11CD9FFCDFC9 0x3083FAD7
	static BOOL NETWORK_IS_SCRIPT_ACTIVE(char* scriptName, Player player, BOOL p2, Any p3) { return invoke<BOOL>(0xF646D0, scriptName, player, p2, p3); } // 0x9D40DF90FAD26098 0x4A65250C
	static int NETWORK_GET_NUM_SCRIPT_PARTICIPANTS(Any* p0, Any p1, Any p2) { return invoke<int>(0xF647E0, p0, p1, p2); } // 0x3658E8CD94FC121A 0x8F7D9F46
	static int _0x638A3A81733086DB() { return invoke<int>(0xF648F0); } // 0x638A3A81733086DB 0xDB8B5D71
	static BOOL _0x1AD5B71586B94820(Player p0, Any* p1, Any p2) { return invoke<BOOL>(0xF64930, p0, p1, p2); } // 0x1AD5B71586B94820 0xCEA55F4C
	static void _0x2302C0264EA58D31() { invoke<Void>(0xF64960); } // 0x2302C0264EA58D31 0x8DCFE77D
	static void _0x741A3D8380319A81() { invoke<Void>(0xF64990); } // 0x741A3D8380319A81 0x331D9A27
	static Player PARTICIPANT_ID() { return invoke<Player>(0xF649C0); } // 0x90986E8876CE0A83 0x9C35A221
	static int PARTICIPANT_ID_TO_INT() { return invoke<int>(0xF649F0); } // 0x57A3BDDAD8E5AA0A 0x907498B0
	static int NETWORK_GET_DESTROYER_OF_NETWORK_ID(int netId, Hash* weaponHash) { return invoke<int>(0xF64A80, netId, weaponHash); } // 0x7A1ADEEF01740A24 0x4FCA6436
	static BOOL _NETWORK_GET_DESROYER_OF_ENTITY(Any p0, Any p1, Hash* weaponHash) { return invoke<BOOL>(0xF64B10, p0, p1, weaponHash); } // 0x4CACA84440FA26F6 0x28A45454
	static Entity NETWORK_GET_ENTITY_KILLER_OF_PLAYER(Player player, Hash* weaponHash) { return invoke<Entity>(0xF64B40, player, weaponHash); } // 0x42B2DAA6B596F5F8 0xA7E7E04F
	static void NETWORK_RESURRECT_LOCAL_PLAYER(float x, float y, float z, float heading, BOOL unk, BOOL changetime) { invoke<Void>(0xF64B70, x, y, z, heading, unk, changetime); } // 0xEA23C49EAA83ACFB 0xF1F9D4B4
	static void NETWORK_SET_LOCAL_PLAYER_INVINCIBLE_TIME(int time) { invoke<Void>(0xF64BA0, time); } // 0x2D95C7E2D7E07307 0xFEA9B85C
	static BOOL NETWORK_IS_LOCAL_PLAYER_INVINCIBLE() { return invoke<BOOL>(0xF64BE0); } // 0x8A8694B48715B000 0x8DE13B36
	static void NETWORK_DISABLE_INVINCIBLE_FLASHING(int player, BOOL p1) { invoke<Void>(0xF64C20, player, p1); } // 0x9DD368BF06983221 0x8D27280E
	static void _0x524FF0AEFF9C3973(Any p0) { invoke<Void>(0xF64C70, p0); } // 0x524FF0AEFF9C3973 0xB72F086D
	static BOOL _0xB07D3185E11657A5(Entity p0) { return invoke<BOOL>(0xF64CB0, p0); } // 0xB07D3185E11657A5 0xEDA68956
	static int NETWORK_GET_NETWORK_ID_FROM_ENTITY(Entity entity) { return invoke<int>(0xF64D10, entity); } // 0xA11700682F3AD45C 0x9E35DAB6
	static Entity NETWORK_GET_ENTITY_FROM_NETWORK_ID(int netId) { return invoke<Entity>(0xF64D80, netId); } // 0xCE4E5D9B0A4FF560 0x5B912C3F
	static BOOL NETWORK_GET_ENTITY_IS_NETWORKED(Entity entity) { return invoke<BOOL>(0xF64DC0, entity); } // 0xC7827959479DCC78 0xD7F934F4
	static BOOL NETWORK_GET_ENTITY_IS_LOCAL(Entity entity) { return invoke<BOOL>(0xF64E30, entity); } // 0x0991549DE4D64762 0x813353ED
	static void NETWORK_REGISTER_ENTITY_AS_NETWORKED(Entity entity) { invoke<Void>(0xF64EA0, entity); } // 0x06FAACD625D80CAA 0x31A630A4
	static void NETWORK_UNREGISTER_NETWORKED_ENTITY(Entity entity) { invoke<Void>(0xF64F70, entity); } // 0x7368E683BB9038D6 0x5C645F64
	static BOOL NETWORK_DOES_NETWORK_ID_EXIST(int netID) { return invoke<BOOL>(0xF65010, netID); } // 0x38CE16C96BD11344 0xB8D2C99E
	static BOOL NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Entity entity) { return invoke<BOOL>(0xF65050, entity); } // 0x18A47D074708FD68 0x1E2E3177
	static BOOL NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(int netId) { return invoke<BOOL>(0xF65090, netId); } // 0xA670B3662FAFFBD0 0x9262A60A
	static BOOL NETWORK_HAS_CONTROL_OF_NETWORK_ID(int netId) { return invoke<BOOL>(0xF65100, netId); } // 0x4D36070FE0215186 0x92E77D21
	static BOOL NETWORK_REQUEST_CONTROL_OF_ENTITY(Entity entity) { return invoke<BOOL>(0xF651D0, entity); } // 0xB69317BF5E782347 0xA05FEBD7
	static BOOL NETWORK_REQUEST_CONTROL_OF_DOOR(int doorID) { return invoke<BOOL>(0xF65200, doorID); } // 0x870DDFD5A4A796E4 0xF60DAAF6
	static BOOL NETWORK_HAS_CONTROL_OF_ENTITY(Entity entity) { return invoke<BOOL>(0xF65270, entity); } // 0x01BF60A500E28887 0x005FD797
	static BOOL NETWORK_HAS_CONTROL_OF_PICKUP(Pickup pickup) { return invoke<BOOL>(0xF652E0, pickup); } // 0x5BC9495F0B3B6FA6 0xF7784FC8
	static BOOL NETWORK_HAS_CONTROL_OF_DOOR(Hash doorHash) { return invoke<BOOL>(0xF65310, doorHash); } // 0xCB3C68ADB06195DF 0x136326EC
	static BOOL _NETWORK_HAS_CONTROL_OF_PAVEMENT_STATS(Hash doorHash) { return invoke<BOOL>(0xF65360, doorHash); } // 0xC01E93FAC20C3346
	static int VEH_TO_NET(Vehicle vehicle) { return invoke<int>(0xF653A0, vehicle); } // 0xB4C94523F023419C 0xF17634EB
	static int PED_TO_NET(Ped ped) { return invoke<int>(0xF65410, ped); } // 0x0EDEC3C276198689 0x86A0B759
	static int OBJ_TO_NET(Object object) { return invoke<int>(0xF65480, object); } // 0x99BFDC94A603E541 0x1E05F29F
	static Vehicle NET_TO_VEH(int netHandle) { return invoke<Vehicle>(0xF654F0, netHandle); } // 0x367B936610BA360C 0x7E02FAEA
	static Ped NET_TO_PED(int netHandle) { return invoke<Ped>(0xF65530, netHandle); } // 0xBDCD95FC216A8B3E 0x87717DD4
	static Object NET_TO_OBJ(int netHandle) { return invoke<Object>(0xF65570, netHandle); } // 0xD8515F5FEA14CB3F 0x27AA14D8
	static Entity NET_TO_ENT(int netHandle) { return invoke<Entity>(0xF655B0, netHandle); } // 0xBFFEAB45A9A9094A 0x5E149683
	static void NETWORK_GET_LOCAL_HANDLE(int* networkHandle, int bufferSize) { invoke<Void>(0xF655F0, networkHandle, bufferSize); } // 0xE86051786B66CD8E 0x08023B16
	static void NETWORK_HANDLE_FROM_USER_ID(char* userId, int* networkHandle, int bufferSize) { invoke<Void>(0xF65630, userId, networkHandle, bufferSize); } // 0xDCD51DD8F87AEC5C 0x74C2C1B7
	static void NETWORK_HANDLE_FROM_MEMBER_ID(char* memberId, int* networkHandle, int bufferSize) { invoke<Void>(0xF656B0, memberId, networkHandle, bufferSize); } // 0xA0FD21BED61E5C4C 0x9BFC9FE2
	static void NETWORK_HANDLE_FROM_PLAYER(Player player, int* networkHandle, int bufferSize) { invoke<Void>(0xF65730, player, networkHandle, bufferSize); } // 0x388EB2B86C73B6B3 0xD3498917
	static Hash _NETWORK_HASH_FROM_PLAYER_HANDLE(Player player) { return invoke<Hash>(0xF657A0, player); } // 0xBC1D768F2F5D6C05
	static Hash _NETWORK_HASH_FROM_GAMER_HANDLE(int* networkHandle) { return invoke<Hash>(0xF657C0, networkHandle); } // 0x58575AC3CF2CA8EC
	static void NETWORK_HANDLE_FROM_FRIEND(Player friendIndex, int* networkHandle, int bufferSize) { invoke<Void>(0xF65870, friendIndex, networkHandle, bufferSize); } // 0xD45CB817D7E177D2 0x3B0BB3A3
	static BOOL NETWORK_GAMERTAG_FROM_HANDLE_START(int* networkHandle) { return invoke<BOOL>(0xF65910, networkHandle); } // 0x9F0C0A981D73FA56 0xEBA00C2A
	static BOOL NETWORK_GAMERTAG_FROM_HANDLE_PENDING() { return invoke<BOOL>(0xF65920); } // 0xB071E27958EF4CF0 0xF000828E
	static BOOL NETWORK_GAMERTAG_FROM_HANDLE_SUCCEEDED() { return invoke<BOOL>(0xF65930); } // 0xFD00798DBA7523DD 0x89C2B5EA
	static char* NETWORK_GET_GAMERTAG_FROM_HANDLE(int* networkHandle) { return invoke<char*>(0xF65940, networkHandle); } // 0x426141162EBE5CDB 0xA18A1B26
	static int _0xD66C9E72B3CC4982(Any* p0, Any p1) { return invoke<int>(0xF659F0, p0, p1); } // 0xD66C9E72B3CC4982
	static Any _0x58CC181719256197(Any p0, Any p1, Any p2) { return invoke<Any>(0xF65AF0, p0, p1, p2); } // 0x58CC181719256197
	static BOOL NETWORK_ARE_HANDLES_THE_SAME(int* netHandle1, int* netHandle2) { return invoke<BOOL>(0xF65C00, netHandle1, netHandle2); } // 0x57DBA049E110F217 0x45975AE3
	static BOOL NETWORK_IS_HANDLE_VALID(int* networkHandle, int bufferSize) { return invoke<BOOL>(0xF65CB0, networkHandle, bufferSize); } // 0x6F79B93B0A8E4133 0xF0996C6E
	static Player NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(int* networkHandle) { return invoke<Player>(0xF65CE0, networkHandle); } // 0xCE5F689CF5A0A49D 0x2E96EF1E
	static char* NETWORK_MEMBER_ID_FROM_GAMER_HANDLE(int* networkHandle) { return invoke<char*>(0xF65D10, networkHandle); } // 0xC82630132081BB6F 0x62EF0A63
	static BOOL NETWORK_IS_GAMER_IN_MY_SESSION(int* networkHandle) { return invoke<BOOL>(0xF65DA0, networkHandle); } // 0x0F10B05DDF8D16E9 0x59127716
	static void NETWORK_SHOW_PROFILE_UI(int* networkHandle) { invoke<Void>(0xF65E30, networkHandle); } // 0x859ED1CEA343FCA8 0xF00A20B0
	static char* NETWORK_PLAYER_GET_NAME(Player player) { return invoke<char*>(0xF65EA0, player); } // 0x7718D2E2060837D2 0xCE48F260
	static char* NETWORK_PLAYER_GET_USERID(Player player, char* userID) { return invoke<char*>(0xF65F20, player, userID); } // 0x4927FC39CD0869A0 0x4EC0D983
	static BOOL NETWORK_PLAYER_IS_ROCKSTAR_DEV(Player player) { return invoke<BOOL>(0xF65F50, player); } // 0x544ABDDA3B409B6D 0xF6659045
	static BOOL _NETWORK_PLAYER_SOMETHING(Player player) { return invoke<BOOL>(0xF65FA0, player); } // 0x565E430DB3B05BEC 0xD265B049
	static BOOL NETWORK_IS_INACTIVE_PROFILE(Any* p0) { return invoke<BOOL>(0xF660F0, p0); } // 0x7E58745504313A2E 0x95481343
	static int NETWORK_GET_MAX_FRIENDS() { return invoke<int>(0xF66120); } // 0xAFEBB0D5D8F687D2 0x048171BC
	static int NETWORK_GET_FRIEND_COUNT() { return invoke<int>(0xF66130); } // 0x203F1CFD823B27A4 0xA396ACDE
	static char* NETWORK_GET_FRIEND_NAME(int friendIndex) { return invoke<char*>(0xF66140, friendIndex); } // 0xE11EBBB2A783FE8B 0x97420B6D
	static char* _NETWORK_GET_FRIEND_NAME_FROM_INDEX(int friendIndex) { return invoke<char*>(0xF66190, friendIndex); } // 0x4164F227D052E293
	static BOOL NETWORK_IS_FRIEND_ONLINE(char* name) { return invoke<BOOL>(0xF661E0, name); } // 0x425A44533437B64D 0xE0A42430
	static BOOL _NETWORK_IS_FRIEND_ONLINE_2(int* networkHandle) { return invoke<BOOL>(0xF66230, networkHandle); } // 0x87EB7A3FFCB314DB
	static BOOL NETWORK_IS_FRIEND_IN_SAME_TITLE(char* friendName) { return invoke<BOOL>(0xF66260, friendName); } // 0x2EA9A3BEDF3F17B8 0xC54365C2
	static BOOL NETWORK_IS_FRIEND_IN_MULTIPLAYER(char* friendName) { return invoke<BOOL>(0xF662E0, friendName); } // 0x57005C18827F3A28 0x400BDDD9
	static BOOL NETWORK_IS_FRIEND(int* networkHandle) { return invoke<BOOL>(0xF66330, networkHandle); } // 0x1A24A179F9B31654 0x2DA4C282
	static BOOL NETWORK_IS_PENDING_FRIEND(Any p0) { return invoke<BOOL>(0xF663C0, p0); } // 0x0BE73DA6984A6E33 0x5C85FF81
	static BOOL NETWORK_IS_ADDING_FRIEND() { return invoke<BOOL>(0xF663D0); } // 0x6EA101606F6E4D81 0xBB7EC8C4
	static BOOL NETWORK_ADD_FRIEND(int* networkHandle, char* message) { return invoke<BOOL>(0xF663F0, networkHandle, message); } // 0x8E02D73914064223 0x20E5B3EE
	static BOOL NETWORK_IS_FRIEND_INDEX_ONLINE(int friendIndex) { return invoke<BOOL>(0xF66480, friendIndex); } // 0xBAD8F2A42B844821 0x94AE7172
	static void _0x1B857666604B1A74(BOOL p0) { invoke<Void>(0xF664D0, p0); } // 0x1B857666604B1A74
	static BOOL _0x82377B65E943F72D(Any p0) { return invoke<BOOL>(0xF66520, p0); } // 0x82377B65E943F72D 0xB802B671
	static BOOL NETWORK_CAN_SET_WAYPOINT() { return invoke<BOOL>(0xF66580); } // 0xC927EC229934AF60 0x009E68F3
	static Any _0xB309EBEA797E001F(Any p0) { return invoke<Any>(0xF665C0, p0); } // 0xB309EBEA797E001F 0x5C0AB2A9
	static Any _0x26F07DD83A5F7F98() { return invoke<Any>(0xF665E0); } // 0x26F07DD83A5F7F98 0x9A176B6E
	static BOOL NETWORK_HAS_HEADSET() { return invoke<BOOL>(0xF66610); } // 0xE870F9F1F7B4F1FA 0xA7DC5657
	static void _0x7D395EA61622E116(BOOL p0) { invoke<Void>(0xF66650, p0); } // 0x7D395EA61622E116 0x5C05B7E1
	static Any _0xC0D2AF00BCC234CA() { return invoke<Any>(0xF66670); } // 0xC0D2AF00BCC234CA
	static BOOL NETWORK_GAMER_HAS_HEADSET(Any* p0) { return invoke<BOOL>(0xF66690, p0); } // 0xF2FD55CB574BCC55 0xD036DA4A
	static BOOL NETWORK_IS_GAMER_TALKING(int* p0) { return invoke<BOOL>(0xF66720, p0); } // 0x71C33B22606CD88A 0x99B58DBC
	static BOOL NETWORK_CAN_COMMUNICATE_WITH_GAMER(int* player) { return invoke<BOOL>(0xF667F0, player); } // 0xA150A4F065806B1F 0xD05EB7F6
	static BOOL NETWORK_IS_GAMER_MUTED_BY_ME(int* p0) { return invoke<BOOL>(0xF66880, p0); } // 0xCE60DE011B6C7978 0x001B4046
	static BOOL NETWORK_AM_I_MUTED_BY_GAMER(Any* p0) { return invoke<BOOL>(0xF66910, p0); } // 0xDF02A2C93F1F26DA 0x7685B333
	static BOOL NETWORK_IS_GAMER_BLOCKED_BY_ME(Any* p0) { return invoke<BOOL>(0xF669A0, p0); } // 0xE944C4F5AF1B5883 0x3FDCC8D7
	static BOOL NETWORK_AM_I_BLOCKED_BY_GAMER(Any* p0) { return invoke<BOOL>(0xF66A30, p0); } // 0x15337C7C268A27B2 0xD19B312C
	static BOOL _0xB57A49545BA53CE7(Any* p0) { return invoke<BOOL>(0xF66AC0, p0); } // 0xB57A49545BA53CE7
	static BOOL _0xCCA4318E1AB03F1F(Any* p0) { return invoke<BOOL>(0xF66B50, p0); } // 0xCCA4318E1AB03F1F
	static BOOL _0x07DD29D5E22763F1(Any* p0) { return invoke<BOOL>(0xF66BE0, p0); } // 0x07DD29D5E22763F1
	static BOOL _0x135F9B7B7ADD2185(Any* p0) { return invoke<BOOL>(0xF66C70, p0); } // 0x135F9B7B7ADD2185
	static BOOL NETWORK_IS_PLAYER_TALKING(Player player) { return invoke<BOOL>(0xF66D00, player); } // 0x031E11F3D447647E 0xDA9FD9DB
	static BOOL NETWORK_PLAYER_HAS_HEADSET(Player player) { return invoke<BOOL>(0xF66D60, player); } // 0x3FB99A8B08D18FD6 0x451FB6B6
	static BOOL NETWORK_IS_PLAYER_MUTED_BY_ME(Player player) { return invoke<BOOL>(0xF66DC0, player); } // 0x8C71288AE68EDE39 0x7A21050E
	static BOOL NETWORK_AM_I_MUTED_BY_PLAYER(Player player) { return invoke<BOOL>(0xF66E20, player); } // 0x9D6981DFC91A8604 0xE128F2B0
	static BOOL NETWORK_IS_PLAYER_BLOCKED_BY_ME(Player player) { return invoke<BOOL>(0xF66E80, player); } // 0x57AF1F8E27483721 0xAE4F4560
	static BOOL NETWORK_AM_I_BLOCKED_BY_PLAYER(Player player) { return invoke<BOOL>(0xF66EE0, player); } // 0x87F395D957D4353D 0x953EF45E
	static float NETWORK_GET_PLAYER_LOUDNESS(Any p0) { return invoke<float>(0xF66F40, p0); } // 0x21A1684A25C2867F 0xF2F67014
	static void NETWORK_SET_TALKER_PROXIMITY(float p0) { invoke<Void>(0xF66FA0, p0); } // 0xCBF12D65F95AD686 0x67555C66
	static Any NETWORK_GET_TALKER_PROXIMITY() { return invoke<Any>(0xF66FC0); } // 0x84F0F13120B4E098 0x19991ADD
	static void NETWORK_SET_VOICE_ACTIVE(BOOL toggle) { invoke<Void>(0xF66FF0, toggle); } // 0xBABEC9E69A91C57B 0x8011247F
	static void _0xCFEB46DCD7D8D5EB(BOOL p0) { invoke<Void>(0xF67010, p0); } // 0xCFEB46DCD7D8D5EB 0x1A3EA6CD
	static void NETWORK_OVERRIDE_TRANSITION_CHAT(BOOL p0) { invoke<Void>(0xF67030, p0); } // 0xAF66059A131AA269 0xCAB21090
	static void NETWORK_SET_TEAM_ONLY_CHAT(BOOL toggle) { invoke<Void>(0xF67050, toggle); } // 0xD5B4883AC32F24C3 0x3813019A
	static void _0x6F697A66CE78674E(int team, BOOL toggle) { invoke<Void>(0xF67090, team, toggle); } // 0x6F697A66CE78674E 0xC8CC9E75
	static void NETWORK_SET_OVERRIDE_SPECTATOR_MODE(BOOL toggle) { invoke<Void>(0xF670C0, toggle); } // 0x70DA3BF8DACD3210 0xA0FD42D3
	static void _0x3C5C1E2C2FF814B1(BOOL p0) { invoke<Void>(0xF670E0, p0); } // 0x3C5C1E2C2FF814B1 0xC9DDA85B
	static void _0x9D7AFCBF21C51712(BOOL p0) { invoke<Void>(0xF67100, p0); } // 0x9D7AFCBF21C51712
	static void _0xF46A1E03E8755980(BOOL p0) { invoke<Void>(0xF67120, p0); } // 0xF46A1E03E8755980 0xD33AFF79
	static void _0x6A5D89D7769A40D8(BOOL p0) { invoke<Void>(0xF67140, p0); } // 0x6A5D89D7769A40D8 0x4FFEFE43
	static void NETWORK_OVERRIDE_CHAT_RESTRICTIONS(Player player, BOOL toggle) { invoke<Void>(0xF67160, player, toggle); } // 0x3039AE5AD2C9C0C4 0x74EE2D8B
	static void _NETWORK_OVERRIDE_SEND_RESTRICTIONS(Player player, BOOL toggle) { invoke<Void>(0xF671C0, player, toggle); } // 0x97DD4C5944CC2E6A
	static void _NETWORK_CHAT_MUTE(BOOL p0) { invoke<Void>(0xF671F0, p0); } // 0x57B192B4D4AD23D5 0x2F98B405
	static void NETWORK_OVERRIDE_RECEIVE_RESTRICTIONS(Player player, BOOL toggle) { invoke<Void>(0xF67210, player, toggle); } // 0xDDF73E2B1FEC5AB4 0x95F1C60D
	static void _0x0FF2862B61A58AF9(BOOL p0) { invoke<Void>(0xF67240, p0); } // 0x0FF2862B61A58AF9 0x1BCD3DDF
	static void NETWORK_SET_VOICE_CHANNEL(Any p0) { invoke<Void>(0xF67260, p0); } // 0xEF6212C2EFEF1A23 0x3974879F
	static void NETWORK_CLEAR_VOICE_CHANNEL() { invoke<Void>(0xF672B0); } // 0xE036A705F989E049 0x9ECF722A
	static void IS_NETWORK_VEHICLE_BEEN_DAMAGED_BY_ANY_OBJECT(float x, float y, float z) { invoke<Void>(0xF672E0, x, y, z); } // 0xDBD2056652689917 0xF1E84832
	static void _0xF03755696450470C() { invoke<Void>(0xF67370); } // 0xF03755696450470C 0x7F9B9052
	static void _0x5E3AA4CA2B6FB0EE(Any p0) { invoke<Void>(0xF673A0, p0); } // 0x5E3AA4CA2B6FB0EE 0x7BBEA8CF
	static void _0xCA575C391FEA25CC(Any p0) { invoke<Void>(0xF67400, p0); } // 0xCA575C391FEA25CC 0xE797A4B6
	static void _0xADB57E5B663CCA8B(Player p0, float* p1, float* p2) { invoke<Void>(0xF67460, p0, p1, p2); } // 0xADB57E5B663CCA8B 0x92268BB5
	static BOOL _NETWORK_IS_TEXT_CHAT_ACTIVE() { return invoke<BOOL>(0xF674B0); } // 0x5FCF4D7069B09026
	static void SHUTDOWN_AND_LAUNCH_SINGLE_PLAYER_GAME() { invoke<Void>(0xF674C0); } // 0x593850C16A36B692 0x92B7351C
	static void NETWORK_SET_FRIENDLY_FIRE_OPTION(BOOL toggle) { invoke<Void>(0xF67520, toggle); } // 0xF808475FA571D823 0x6BAF95FA
	static void NETWORK_SET_RICH_PRESENCE(int p0, Any p1, Any p2, Any p3) { invoke<Void>(0xF67540, p0, p1, p2, p3); } // 0x1DCCACDCFC569362 0x932A6CED
	static void _NETWORK_SET_RICH_PRESENCE_2(int p0, char* gxtLabel) { invoke<Void>(0xF67550, p0, gxtLabel); } // 0x3E200C2BCF4164EB 0x017E6777
	static int NETWORK_GET_TIMEOUT_TIME() { return invoke<int>(0xF67560); } // 0x5ED0356A0CE3A34F 0xE1F86C6A
	static void _NETWORK_RESPAWN_COORDS(Player player, float x, float y, float z, BOOL p4, BOOL p5) { invoke<Void>(0xF67580, player, x, y, z, p4, p5); } // 0x9769F811D1785B03 0xBE6A30C3
	static void _0xBF22E0F32968E967(Player player, BOOL p1) { invoke<Void>(0xF675B0, player, p1); } // 0xBF22E0F32968E967 0x22E03AD0
	static void _0x715135F4B82AC90D(Entity entity) { invoke<Void>(0xF675D0, entity); } // 0x715135F4B82AC90D 0xCEAE5AFC
	static BOOL _NETWORK_PLAYER_IS_IN_CLAN() { return invoke<BOOL>(0xF676A0); } // 0x579CCED0265D4896 0xF5F4BD95
	static BOOL NETWORK_CLAN_PLAYER_IS_ACTIVE(int* networkHandle) { return invoke<BOOL>(0xF676D0, networkHandle); } // 0xB124B57F571D8F18 0xAB8319A3
	static BOOL NETWORK_CLAN_PLAYER_GET_DESC(int* clanDesc, int bufferSize, int* networkHandle) { return invoke<BOOL>(0xF67780, clanDesc, bufferSize, networkHandle); } // 0xEEE6EACBE8874FBA 0x6EE4A282
	static BOOL _0x7543BB439F63792B(int* clanDesc, int bufferSize) { return invoke<BOOL>(0xF677B0, clanDesc, bufferSize); } // 0x7543BB439F63792B 0x54E79E9C
	static void _0xF45352426FF3A4F0(int* clanDesc, int bufferSize, int* networkHandle) { invoke<Void>(0xF677F0, clanDesc, bufferSize, networkHandle); } // 0xF45352426FF3A4F0 0xF633805A
	static int _GET_NUM_MEMBERSHIP_DESC() { return invoke<int>(0xF67870); } // 0x1F471B79ACC90BEF 0x807B3450
	static BOOL NETWORK_CLAN_GET_MEMBERSHIP_DESC(int* memberDesc, int p1) { return invoke<BOOL>(0xF678A0, memberDesc, p1); } // 0x48DE78AF2C8885B8 0x3369DD1F
	static BOOL NETWORK_CLAN_DOWNLOAD_MEMBERSHIP(int* networkHandle) { return invoke<BOOL>(0xF678D0, networkHandle); } // 0xA989044E70010ABE 0x8E8CB520
	static BOOL NETWORK_CLAN_DOWNLOAD_MEMBERSHIP_PENDING(Any* p0) { return invoke<BOOL>(0xF67900, p0); } // 0x5B9E023DC6EBEDC0 0x1FDB590F
	static BOOL _NETWORK_IS_CLAN_MEMBERSHIP_FINISHED_DOWNLOADING() { return invoke<BOOL>(0xF67930); } // 0xB3F64A6A91432477 0x83ED8E08
	static BOOL NETWORK_CLAN_REMOTE_MEMBERSHIPS_ARE_IN_CACHE(int* p0) { return invoke<BOOL>(0xF67980, p0); } // 0xBB6E6FEE99D866B2 0x40202867
	static int NETWORK_CLAN_GET_MEMBERSHIP_COUNT(int* p0) { return invoke<int>(0xF679B0, p0); } // 0xAAB11F6C4ADBC2C1 0x25924010
	static BOOL NETWORK_CLAN_GET_MEMBERSHIP_VALID(int* p0, Any p1) { return invoke<BOOL>(0xF679E0, p0, p1); } // 0x48A59CF88D43DF0E 0x48914F6A
	static BOOL NETWORK_CLAN_GET_MEMBERSHIP(int* p0, int* clanMembership, int p2) { return invoke<BOOL>(0xF67A10, p0, clanMembership, p2); } // 0xC8BC2011F67B3411 0xCDC4A590
	static BOOL NETWORK_CLAN_JOIN(int clanDesc) { return invoke<BOOL>(0xF67A40, clanDesc); } // 0x9FAAA4F4FC71F87F 0x79C916C5
	static BOOL _NETWORK_CLAN_ANIMATION(char* animDict, char* animName) { return invoke<BOOL>(0xF67A70, animDict, animName); } // 0x729E3401F0430686 0xBDA90BAC
	static BOOL _0x2B51EDBEFC301339(int p0, char* p1) { return invoke<BOOL>(0xF67AC0, p0, p1); } // 0x2B51EDBEFC301339 0x8E952B12
	static Any _0xC32EA7A2F6CA7557() { return invoke<Any>(0xF67B10); } // 0xC32EA7A2F6CA7557 0x966C90FD
	static BOOL _0x5835D9CD92E83184(Any* p0, Any* p1) { return invoke<BOOL>(0xF67B50, p0, p1); } // 0x5835D9CD92E83184 0xBA672146
	static BOOL _0x13518FF1C6B28938(Any p0) { return invoke<BOOL>(0xF67B80, p0); } // 0x13518FF1C6B28938 0x7963FA4D
	static BOOL _0xA134777FF7F33331(Any p0, Any* p1) { return invoke<BOOL>(0xF67BB0, p0, p1); } // 0xA134777FF7F33331 0x88B13CDC
	static void _0x113E6E3E50E286B0(Any p0) { invoke<Void>(0xF67C60, p0); } // 0x113E6E3E50E286B0 0xD6E3D5EA
	static Any NETWORK_GET_PRIMARY_CLAN_DATA_CLEAR() { return invoke<Any>(0xF67D00); } // 0x9AA46BADAD0E27ED 0xE22445DA
	static void NETWORK_GET_PRIMARY_CLAN_DATA_CANCEL() { invoke<Void>(0xF67D20); } // 0x042E4B70B93E6054 0x455DDF5C
	static BOOL NETWORK_GET_PRIMARY_CLAN_DATA_START(Any* p0, Any p1) { return invoke<BOOL>(0xF67D40, p0, p1); } // 0xCE86D8191B762107 0x89DB0EC7
	static Any NETWORK_GET_PRIMARY_CLAN_DATA_PENDING() { return invoke<Any>(0xF67D70); } // 0xB5074DB804E28CE7 0xA4EF02F3
	static Any NETWORK_GET_PRIMARY_CLAN_DATA_SUCCESS() { return invoke<Any>(0xF67D90); } // 0x5B4F04F19376A0BA 0x068A054E
	static BOOL NETWORK_GET_PRIMARY_CLAN_DATA_NEW(Any* p0, Any* p1) { return invoke<BOOL>(0xF67DB0, p0, p1); } // 0xC080FF658B2E41DA 0x9B8631EB
	static void SET_NETWORK_ID_CAN_MIGRATE(int netId, BOOL toggle) { invoke<Void>(0xF67DE0, netId, toggle); } // 0x299EEB23175895FC 0x47C8E5FF
	static void SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(int netId, BOOL toggle) { invoke<Void>(0xF67E00, netId, toggle); } // 0xE05E81A888FA63C8 0x68D486B2
	static void _SET_NETWORK_ID_SYNC_TO_PLAYER(int netId, Player player, BOOL toggle) { invoke<Void>(0xF67E20, netId, player, toggle); } // 0xA8A024587329F36A 0x4D15FDB1
	static void NETWORK_SET_ENTITY_CAN_BLEND(Entity entity, BOOL toggle) { invoke<Void>(0xF67E40, entity, toggle); } // 0xD830567D88A1E873 0xDE8C0DB8
	static void _NETWORK_SET_ENTITY_INVISIBLE_TO_NETWORK(Entity entity, BOOL toggle) { invoke<Void>(0xF67F10, entity, toggle); } // 0xF1CA12B18AEF5298 0x09CBC4B0
	static void SET_NETWORK_ID_VISIBLE_IN_CUTSCENE(int netId, BOOL p1, BOOL p2) { invoke<Void>(0xF67F90, netId, p1, p2); } // 0xA6928482543022B4 0x199E75EF
	static void _0xAAA553E7DD28A457(BOOL p0) { invoke<Void>(0xF67FD0, p0); } // 0xAAA553E7DD28A457
	static void _0x3FA36981311FA4FF(int netId, BOOL state) { invoke<Void>(0xF67FF0, netId, state); } // 0x3FA36981311FA4FF 0x00AE4E17
	static BOOL _NETWORK_CAN_NETWORK_ID_BE_SEEN(int netId) { return invoke<BOOL>(0xF68010, netId); } // 0xA1607996431332DF 0xEA5176C0
	static void SET_LOCAL_PLAYER_VISIBLE_IN_CUTSCENE(BOOL p0, BOOL p1) { invoke<Void>(0xF68040, p0, p1); } // 0xD1065D68947E7B6E 0x59F3479B
	static void SET_LOCAL_PLAYER_INVISIBLE_LOCALLY(BOOL p0) { invoke<Void>(0xF680C0, p0); } // 0xE5F773C1A1D9D168 0x764F6222
	static void SET_LOCAL_PLAYER_VISIBLE_LOCALLY(BOOL p0) { invoke<Void>(0xF68160, p0); } // 0x7619364C82D3BF14 0x324B56DB
	static void SET_PLAYER_INVISIBLE_LOCALLY(Player player, BOOL toggle) { invoke<Void>(0xF68200, player, toggle); } // 0x12B37D54667DB0B8 0x18227209
	static void SET_PLAYER_VISIBLE_LOCALLY(Player player, BOOL toggle) { invoke<Void>(0xF682A0, player, toggle); } // 0xFAA10F1FAFB11AF2 0xBA2BB4B4
	static void FADE_OUT_LOCAL_PLAYER(BOOL p0) { invoke<Void>(0xF68350, p0); } // 0x416DBD4CD6ED8DD2 0x8FA7CEBD
	static void NETWORK_FADE_OUT_ENTITY(Entity entity, BOOL normal, BOOL slow) { invoke<Void>(0xF68370, entity, normal, slow); } // 0xDE564951F95E09ED 0x47EDEE56
	static void NETWORK_FADE_IN_ENTITY(Entity entity, BOOL state) { invoke<Void>(0xF68390, entity, state); } // 0x1F4ED342ACEFE62D 0x9B9FCD02
	static BOOL _0x631DC5DFF4B110E3(Any p0) { return invoke<BOOL>(0xF683B0, p0); } // 0x631DC5DFF4B110E3
	static BOOL _0x422F32CC7E56ABAD(Any p0) { return invoke<BOOL>(0xF68430, p0); } // 0x422F32CC7E56ABAD
	static BOOL IS_PLAYER_IN_CUTSCENE(Player player) { return invoke<BOOL>(0xF684C0, player); } // 0xE73092F4157CD126 0xE0A619BD
	static void SET_ENTITY_VISIBLE_IN_CUTSCENE(Any p0, BOOL p1, BOOL p2) { invoke<Void>(0xF68520, p0, p1, p2); } // 0xE0031D3C8F36AB82 0xDBFB067B
	static void SET_ENTITY_LOCALLY_INVISIBLE(Entity entity) { invoke<Void>(0xF685D0, entity); } // 0xE135A9FF3F5D05D8 0x51ADCC5F
	static void SET_ENTITY_LOCALLY_VISIBLE(Entity entity) { invoke<Void>(0xF68640, entity); } // 0x241E289B5C059EDC 0x235A57B3
	static BOOL IS_DAMAGE_TRACKER_ACTIVE_ON_NETWORK_ID(int netID) { return invoke<BOOL>(0xF686B0, netID); } // 0x6E192E33AD436366 0x597063BA
	static void ACTIVATE_DAMAGE_TRACKER_ON_NETWORK_ID(int netID, BOOL p1) { invoke<Void>(0xF686E0, netID, p1); } // 0xD45B1FFCCD52FF19 0x95D07BA5
	static BOOL IS_SPHERE_VISIBLE_TO_ANOTHER_MACHINE(float p0, float p1, float p2, float p3) { return invoke<BOOL>(0xF687E0, p0, p1, p2, p3); } // 0xD82CF8E64C8729D8 0x23C5274E
	static BOOL IS_SPHERE_VISIBLE_TO_PLAYER(Any p0, float p1, float p2, float p3, float p4) { return invoke<BOOL>(0xF68880, p0, p1, p2, p3, p4); } // 0xDC3A310219E5DA62 0xE9FCFB32
	static void RESERVE_NETWORK_MISSION_OBJECTS(int amount) { invoke<Void>(0xF68940, amount); } // 0x4E5C93BD0C32FBF8 0x391DF4F3
	static void RESERVE_NETWORK_MISSION_PEDS(int amount) { invoke<Void>(0xF68950, amount); } // 0xB60FEBA45333D36F 0x54998C37
	static void RESERVE_NETWORK_MISSION_VEHICLES(int amount) { invoke<Void>(0xF68960, amount); } // 0x76B02E21ED27A469 0x5062875E
	static BOOL CAN_REGISTER_MISSION_OBJECTS(int amount) { return invoke<BOOL>(0xF68990, amount); } // 0x800DD4721A8B008B 0x7F85DFDE
	static BOOL CAN_REGISTER_MISSION_PEDS(int amount) { return invoke<BOOL>(0xF68A10, amount); } // 0xBCBF4FEF9FA5D781 0xCCAA5CE9
	static BOOL CAN_REGISTER_MISSION_VEHICLES(int amount) { return invoke<BOOL>(0xF68A90, amount); } // 0x7277F1F2E085EE74 0x818B6830
	static BOOL CAN_REGISTER_MISSION_ENTITIES(int ped_amt, int vehicle_amt, int object_amt, int pickup_amt) { return invoke<BOOL>(0xF68C00, ped_amt, vehicle_amt, object_amt, pickup_amt); } // 0x69778E7564BADE6D 0x83794008
	static int GET_NUM_RESERVED_MISSION_OBJECTS(BOOL p0) { return invoke<int>(0xF68CE0, p0); } // 0xAA81B5F10BC43AC2 0x16A80CD6
	static int GET_NUM_RESERVED_MISSION_PEDS(BOOL p0) { return invoke<int>(0xF68DA0, p0); } // 0x1F13D5AE5CB17E17 0x6C25975C
	static int GET_NUM_RESERVED_MISSION_VEHICLES(BOOL p0) { return invoke<int>(0xF68E60, p0); } // 0xCF3A965906452031 0xA9A308F3
	static int _0x12B6281B6C6706C0(BOOL p0) { return invoke<int>(0xF68F20, p0); } // 0x12B6281B6C6706C0 0x603FA104
	static int _0xCB215C4B56A7FAE7(BOOL p0) { return invoke<int>(0xF68FA0, p0); } // 0xCB215C4B56A7FAE7 0xD8FEC4F8
	static int _0x0CD9AB83489430EA(BOOL p0) { return invoke<int>(0xF69020, p0); } // 0x0CD9AB83489430EA 0x20527695
	static Any _0xC7BE335216B5EC7C() { return invoke<Any>(0xF691A0); } // 0xC7BE335216B5EC7C 0x8687E285
	static Any _0x0C1F7D49C39D2289() { return invoke<Any>(0xF691B0); } // 0x0C1F7D49C39D2289 0x744AC008
	static Any _0x0AFCE529F69B21FF() { return invoke<Any>(0xF691C0); } // 0x0AFCE529F69B21FF 0xC3A12135
	static Any _0xA72835064DD63E4C() { return invoke<Any>(0xF691D0); } // 0xA72835064DD63E4C 0x6A036061
	static int GET_NETWORK_TIME() { return invoke<int>(0xF69250); } // 0x7A5487FE9FAA6B48 0x998103C2
	static int _0x89023FBBF9200E9F() { return invoke<int>(0xF692B0); } // 0x89023FBBF9200E9F 0x98AA48E5
	static BOOL HAS_NETWORK_TIME_STARTED() { return invoke<BOOL>(0xF69340); } // 0x46718ACEEDEAFC84 0x4538C4A2
	static int GET_TIME_OFFSET(int timeA, int timeB) { return invoke<int>(0xF69370, timeA, timeB); } // 0x017008CCDAD48503 0x2E079AE6
	static BOOL IS_TIME_LESS_THAN(int timeA, int timeB) { return invoke<BOOL>(0xF69380, timeA, timeB); } // 0xCB2CF5148012C8D0 0x50EF8FC6
	static BOOL IS_TIME_MORE_THAN(int timeA, int timeB) { return invoke<BOOL>(0xF693A0, timeA, timeB); } // 0xDE350F8651E4346C 0xBBB6DF61
	static BOOL IS_TIME_EQUAL_TO(int timeA, int timeB) { return invoke<BOOL>(0xF693C0, timeA, timeB); } // 0xF5BC95857BD6D512 0x8B4D1C06
	static int GET_TIME_DIFFERENCE(int timeA, int timeB) { return invoke<int>(0xF693E0, timeA, timeB); } // 0xA2C6FC031D46FFF0 0x5666A837
	static char* GET_TIME_AS_STRING(int time) { return invoke<char*>(0xF693F0, time); } // 0x9E23B1777A927DAD 0x8218944E
	static int _GET_POSIX_TIME() { return invoke<int>(0xF69540); } // 0x9A73240B49945C76 0xF2FDF2E0
	static void _GET_DATE_AND_TIME_FROM_UNIX_EPOCH(int unixEpoch, Any* timeStructure) { invoke<Void>(0xF69560, unixEpoch, timeStructure); } // 0xAC97AF97FA68E5D5 0xBB7CCE49
	static void NETWORK_SET_IN_SPECTATOR_MODE(BOOL toggle, Ped playerPed) { invoke<Void>(0xF695E0, toggle, playerPed); } // 0x423DE3854BB50894 0x5C4C8458
	static void _0x419594E137637120(BOOL p0, Any p1, BOOL p2) { invoke<Void>(0xF69650, p0, p1, p2); } // 0x419594E137637120 0x54058F5F
	static void _0xFC18DB55AE19E046(BOOL p0) { invoke<Void>(0xF696D0, p0); } // 0xFC18DB55AE19E046 0xA7E36020
	static void _0x5C707A667DF8B9FA(BOOL p0, Any p1) { invoke<Void>(0xF69720, p0, p1); } // 0x5C707A667DF8B9FA 0x64235620
	static BOOL NETWORK_IS_IN_SPECTATOR_MODE() { return invoke<BOOL>(0xF69770); } // 0x048746E388762E11 0x3EAD9DB8
	static void NETWORK_SET_IN_MP_CUTSCENE(BOOL p0, BOOL p1) { invoke<Void>(0xF69790, p0, p1); } // 0x9CA5DE655269FEC4 0x8434CB43
	static BOOL NETWORK_IS_IN_MP_CUTSCENE() { return invoke<BOOL>(0xF697C0); } // 0x6CC27C9FA2040220 0x4BB33316
	static BOOL NETWORK_IS_PLAYER_IN_MP_CUTSCENE(Player player) { return invoke<BOOL>(0xF697D0, player); } // 0x63F9EE203C3619F2 0x56F961E4
	static void SET_NETWORK_VEHICLE_RESPOT_TIMER(int netId, int time) { invoke<Void>(0xF69830, netId, time); } // 0xEC51713AB6EC36E8 0x2C30912D
	static void _SET_NETWORK_OBJECT_NON_CONTACT(Object object, BOOL toggle) { invoke<Void>(0xF698A0, object, toggle); } // 0x6274C4712850841E 0xEA235081
	static void USE_PLAYER_COLOUR_INSTEAD_OF_TEAM_COLOUR(BOOL toggle) { invoke<Void>(0xF69A90, toggle); } // 0x5FFE9B4144F9712F 0x4DD46DAE
	static BOOL _0x21D04D7BC538C146(Any p0) { return invoke<BOOL>(0xF69AB0, p0); } // 0x21D04D7BC538C146
	static void _0x77758139EC9B66C7(BOOL p0) { invoke<Void>(0xF69E40, p0); } // 0x77758139EC9B66C7
	static int NETWORK_CREATE_SYNCHRONISED_SCENE(float x, float y, float z, float xRot, float yRot, float zRot, int p6, int p7, int p8, float p9) { return invoke<int>(0xF69E60, x, y, z, xRot, yRot, zRot, p6, p7, p8, p9); } // 0x7CD6BC4C2BBDD526 0xB06FE3FE
	static void NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(Ped ped, int netScene, char* animDict, char* animnName, float speed, float speedMultiplier, int duration, int flag, float playbackRate, Any p9) { invoke<Void>(0xF69EB0, ped, netScene, animDict, animnName, speed, speedMultiplier, duration, flag, playbackRate, p9); } // 0x742A637471BCECD9 0xB386713E
	static void NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(Entity entity, int netScene, char* animDict, char* animName, float speed, float speedMulitiplier, int flag) { invoke<Void>(0xF6A070, entity, netScene, animDict, animName, speed, speedMulitiplier, flag); } // 0xF2404D68CBC855FA 0x10DD636C
	static void _NETWORK_FORCE_LOCAL_USE_OF_SYNCED_SCENE_CAMERA(int netScene, char* animDict, char* animName) { invoke<Void>(0xF6A130, netScene, animDict, animName); } // 0xCF8BD3B0BD6D42D7 0xBFFE8B5C
	static void NETWORK_ATTACH_SYNCHRONISED_SCENE_TO_ENTITY(int netScene, Entity entity, int bone) { invoke<Void>(0xF6A1B0, netScene, entity, bone); } // 0x478DCBD2A98B705A 0x3FE5B222
	static void NETWORK_START_SYNCHRONISED_SCENE(int netScene) { invoke<Void>(0xF6A270, netScene); } // 0x9A1B3FCDB36C8697 0xA9DFDC40
	static void NETWORK_STOP_SYNCHRONISED_SCENE(int netScene) { invoke<Void>(0xF6A2E0, netScene); } // 0xC254481A4574CB2F 0x97B1CDF6
	static int _NETWORK_CONVERT_SYNCHRONISED_SCENE_TO_SYNCHRONIZED_SCENE(int netScene) { return invoke<int>(0xF6A350, netScene); } // 0x02C40BF885C567B6 0x16AED87B
	static void _0xC9B43A33D09CADA7(Any p0) { invoke<Void>(0xF6A390, p0); } // 0xC9B43A33D09CADA7
	static Any _0xFB1F9381E80FA13F(int p0, Any* p1) { return invoke<Any>(0xF6A430, p0, p1); } // 0xFB1F9381E80FA13F 0x0679CE71
	static BOOL _0x5A6FFA2433E2F14C(Player player, float p1, float p2, float p3, float p4, float p5, float p6, float p7, int flags) { return invoke<BOOL>(0xF6A4A0, player, p1, p2, p3, p4, p5, p6, p7, flags); } // 0x5A6FFA2433E2F14C 0xC62E77B3
	static BOOL _0x4BA92A18502BCA61(Player player, float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, float p9, float p10, int flags) { return invoke<BOOL>(0xF6A4E0, player, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, flags); } // 0x4BA92A18502BCA61 0x74D6B13C
	static Any _0x3C891A251567DFCE(Any* p0) { return invoke<Any>(0xF6A520, p0); } // 0x3C891A251567DFCE 0x90700C7D
	static void _0xFB8F2A6F3DF08CBE() { invoke<Void>(0xF6A580); } // 0xFB8F2A6F3DF08CBE 0x44BFB619
	static void NETWORK_GET_RESPAWN_RESULT(int randomInt, Vector3* coordinates, float* heading) { invoke<Void>(0xF6A590, randomInt, coordinates, heading); } // 0x371EA43692861CF1 0xDDFE9FBC
	static Any _0x6C34F1208B8923FD(Any p0) { return invoke<Any>(0xF6A600, p0); } // 0x6C34F1208B8923FD 0x03287FD2
	static void _0x17E0198B3882C2CB() { invoke<Void>(0xF6A620); } // 0x17E0198B3882C2CB 0x408A9436
	static void _0xFB680D403909DC70(Any p0, Any p1) { invoke<Void>(0xF6A650, p0, p1); } // 0xFB680D403909DC70 0xFFB2ADA1
	static void NETWORK_END_TUTORIAL_SESSION() { invoke<Void>(0xF6A6A0); } // 0xD0AFAFF5A51D72F7 0xBA57E53E
	static Any NETWORK_IS_IN_TUTORIAL_SESSION() { return invoke<Any>(0xF6A6D0); } // 0xADA24309FE08DACF 0x34DD7B28
	static Any _0xB37E4E6A2388CA7B() { return invoke<Any>(0xF6A710); } // 0xB37E4E6A2388CA7B 0x755A2B3E
	static Any _0x35F0B98A8387274D() { return invoke<Any>(0xF6A750); } // 0x35F0B98A8387274D 0xA003C40B
	static Any _0x3B39236746714134(Any p0) { return invoke<Any>(0xF6A790, p0); } // 0x3B39236746714134 0x5E1020CC
	static BOOL _NETWORK_IS_PLAYER_EQUAL_TO_INDEX(Player player, int index) { return invoke<BOOL>(0xF6A7E0, player, index); } // 0x9DE986FC9A87C474 0xE66A0B40
	static void _0xBBDF066252829606(Any p0, BOOL p1) { invoke<Void>(0xF6A840, p0, p1); } // 0xBBDF066252829606 0x72052DB3
	static BOOL _0x919B3C98ED8292F9(Any p0) { return invoke<BOOL>(0xF6A890, p0); } // 0x919B3C98ED8292F9 0xB0313590
	static void NETWORK_OVERRIDE_CLOCK_TIME(int Hours, int Minutes, int Seconds) { invoke<Void>(0xF6A9C0, Hours, Minutes, Seconds); } // 0xE679E3E06E363892 0xC077BCD6
	static void NETWORK_CLEAR_CLOCK_TIME_OVERRIDE() { invoke<Void>(0xF6A9E0); } // 0xD972DF67326F966E 0xC4AEAF49
	static BOOL NETWORK_IS_CLOCK_TIME_OVERRIDDEN() { return invoke<BOOL>(0xF6AA20); } // 0xD7C95D322FF57522 0x2465296D
	static Any NETWORK_ADD_ENTITY_AREA(float p0, float p1, float p2, float p3, float p4, float p5) { return invoke<Any>(0xF6AA40, p0, p1, p2, p3, p4, p5); } // 0x494C8FB299290269 0x51030E5B
	static Any _NETWORK_ADD_ENTITY_ANGLED_AREA(float p0, float p1, float p2, float p3, float p4, float p5, float p6) { return invoke<Any>(0xF6AA70, p0, p1, p2, p3, p4, p5, p6); } // 0x376C6375BA60293A
	static Any _0x25B99872D588A101(float p0, float p1, float p2, float p3, float p4, float p5) { return invoke<Any>(0xF6AAA0, p0, p1, p2, p3, p4, p5); } // 0x25B99872D588A101 0x4C2C2B12
	static BOOL NETWORK_REMOVE_ENTITY_AREA(Any p0) { return invoke<BOOL>(0xF6AB00, p0); } // 0x93CF869BAA0C4874 0xEAB97F25
	static BOOL _0xE64A3CA08DFA37A9(Any p0) { return invoke<BOOL>(0xF6AC00, p0); } // 0xE64A3CA08DFA37A9 0x69956127
	static BOOL _0x4DF7CFFF471A7FB1(Any p0) { return invoke<BOOL>(0xF6AC30, p0); } // 0x4DF7CFFF471A7FB1 0xCB1CD6D3
	static BOOL _0x4A2D4E8BF4265B0F(Any p0) { return invoke<BOOL>(0xF6AC60, p0); } // 0x4A2D4E8BF4265B0F 0xC6D53AA0
	static void _NETWORK_SET_NETWORK_ID_DYNAMIC(int netID, BOOL toggle) { invoke<Void>(0xF6AC90, netID, toggle); } // 0x2B1813ABA29016C5 0x155465EE
	static BOOL _NETWORK_REQUEST_CLOUD_BACKGROUND_SCRIPTS() { return invoke<BOOL>(0xF6ACF0); } // 0x924426BFFD82E915 0x29532731
	static BOOL _HAS_BG_SCRIPT_BEEN_DOWNLOADED() { return invoke<BOOL>(0xF6AD20); } // 0x8132C0EB8B2B3293
	static void NETWORK_REQUEST_CLOUD_TUNABLES() { invoke<Void>(0xF6AD50); } // 0x42FB3B532D526E6C 0xD760CAD5
	static BOOL _HAS_TUNABLES_BEEN_DOWNLOADED() { return invoke<BOOL>(0xF6AD60); } // 0x0467C11ED88B7D28
	static Any _0x10BD227A753B0D84() { return invoke<Any>(0xF6AD90); } // 0x10BD227A753B0D84 0x231CFD12
	static BOOL NETWORK_DOES_TUNABLE_EXIST(char* tunableContext, char* tunableName) { return invoke<BOOL>(0xF6ADB0, tunableContext, tunableName); } // 0x85E5F8B9B898B20A 0x9FCE9C9A
	static BOOL NETWORK_ACCESS_TUNABLE_INT(char* tunableContext, char* tunableName, int* value) { return invoke<BOOL>(0xF6AE20, tunableContext, tunableName, value); } // 0x8BE1146DFD5D4468 0xE4B3726A
	static BOOL NETWORK_ACCESS_TUNABLE_FLOAT(char* tunableContext, char* tunableName, float* value) { return invoke<BOOL>(0xF6AEA0, tunableContext, tunableName, value); } // 0xE5608CA7BC163A5F 0x41E8912A
	static BOOL NETWORK_ACCESS_TUNABLE_BOOL(char* tunableContext, char* tunableName) { return invoke<BOOL>(0xF6AF20, tunableContext, tunableName); } // 0xAA6A47A573ABB75A 0x8A04E1FE
	static BOOL _NETWORK_DOES_TUNABLE_EXIST_HASH(Hash tunableContext, Hash tunableName) { return invoke<BOOL>(0xF6AFC0, tunableContext, tunableName); } // 0xE4E53E1419D81127
	static BOOL _NETWORK_ACCESS_TUNABLE_INT_HASH(Hash tunableContext, Hash tunableName, int* value) { return invoke<BOOL>(0xF6B040, tunableContext, tunableName, value); } // 0x40FCE03E50E8DBE8
	static BOOL _NETWORK_ACCESS_TUNABLE_FLOAT_HASH(Hash tunableContext, Hash tunableName, float* value) { return invoke<BOOL>(0xF6B0E0, tunableContext, tunableName, value); } // 0x972BC203BBC4C4D5
	static BOOL _NETWORK_ACCESS_TUNABLE_BOOL_HASH(Hash tunableContext, Hash tunableName) { return invoke<BOOL>(0xF6B180, tunableContext, tunableName); } // 0xEA16B69D93D71A45
	static BOOL _NETWORK_ACCESS_TUNABLE_BOOL_HASH_FAIL_VAL(Hash tunableContext, Hash tunableName, BOOL defaultValue) { return invoke<BOOL>(0xF6B240, tunableContext, tunableName, defaultValue); } // 0xC7420099936CE286
	static int _GET_TUNABLES_CONTENT_MODIFIER_ID(Hash contentHash) { return invoke<int>(0xF6B2A0, contentHash); } // 0x187382F8A3E0A6C3 0xA78571CA
	static Any _0x7DB53B37A2F211A0() { return invoke<Any>(0xF6B2D0); } // 0x7DB53B37A2F211A0 0x053BB329
	static void NETWORK_RESET_BODY_TRACKER() { invoke<Void>(0xF6B300); } // 0x72433699B4E6DD64 0x3914463F
	static Any _0xD38C4A6D047C019D() { return invoke<Any>(0xF6B320); } // 0xD38C4A6D047C019D 0x17CBC608
	static BOOL _0x2E0BF682CC778D49(Any p0) { return invoke<BOOL>(0xF6B350, p0); } // 0x2E0BF682CC778D49 0xBFAA349B
	static BOOL _0x0EDE326D47CD0F3E(Ped ped, Player player) { return invoke<BOOL>(0xF6B3E0, ped, player); } // 0x0EDE326D47CD0F3E 0xBEB7281A
	static Any NETWORK_EXPLODE_VEHICLE(Vehicle vehicle, BOOL isAudible, BOOL isInvisible, BOOL p3) { return invoke<Any>(0xF6B530, vehicle, isAudible, isInvisible, p3); } // 0x301A42153C9AD707 0x0E1B38AE
	static void _0xCD71A4ECAB22709E(Entity entity) { invoke<Void>(0xF6B590, entity); } // 0xCD71A4ECAB22709E 0xBC54371B
	static void _0xA7E30DE9272B6D49(Ped ped, float x, float y, float z, float p4) { invoke<Void>(0xF6B5F0, ped, x, y, z, p4); } // 0xA7E30DE9272B6D49 0x644141C5
	static void _0x407091CF6037118E(int netID) { invoke<Void>(0xF6B690, netID); } // 0x407091CF6037118E
	static void NETWORK_SET_PROPERTY_ID(Any p0) { invoke<Void>(0xF6B6E0, p0); } // 0x1775961C2FBBCB5C 0x5A74E873
	static void NETWORK_CLEAR_PROPERTY_ID() { invoke<Void>(0xF6B720); } // 0xC2B82527CA77053E 0x38BC35C8
	static void _0x367EF5E2F439B4C6(int p0) { invoke<Void>(0xF6B750, p0); } // 0x367EF5E2F439B4C6 0x53C9563C
	static void _0x94538037EE44F5CF(BOOL p0) { invoke<Void>(0xF6B790, p0); } // 0x94538037EE44F5CF 0x6B97075B
	static void _0xBD0BE0BFC927EAC1() { invoke<Void>(0xF6B7B0); } // 0xBD0BE0BFC927EAC1
	static BOOL _0x237D5336A9A54108(Any p0) { return invoke<BOOL>(0xF6B7C0, p0); } // 0x237D5336A9A54108
	static BOOL _NETWORK_COPY_PED_BLEND_DATA(Ped ped, Player player) { return invoke<BOOL>(0xF6B800, ped, player); } // 0x99B72C7ABDE5C910
	static Any _0xF2EAC213D5EA0623() { return invoke<Any>(0xF6B880); } // 0xF2EAC213D5EA0623 0x965EA007
	static Any _0xEA14EEF5B7CD2C30() { return invoke<Any>(0xF6B8A0); } // 0xEA14EEF5B7CD2C30 0xEEFC8A55
	static void _0xB606E6CC59664972(Any p0) { invoke<Void>(0xF6B8C0, p0); } // 0xB606E6CC59664972 0x866D1B67
	static Any _0x1D4DC17C38FEAFF0() { return invoke<Any>(0xF6B8D0); } // 0x1D4DC17C38FEAFF0 0xED4A272F
	static Any _0x662635855957C411(Any p0) { return invoke<Any>(0xF6B900, p0); } // 0x662635855957C411 0x4ACF110C
	static Any _0xB4271092CA7EDF48(Any p0) { return invoke<Any>(0xF6B970, p0); } // 0xB4271092CA7EDF48 0x1AA3A0D5
	static Any _0xCA94551B50B4932C(Any p0) { return invoke<Any>(0xF6B9E0, p0); } // 0xCA94551B50B4932C 0x37877757
	static Any _0x2A7776C709904AB0(Any p0) { return invoke<Any>(0xF6BA50, p0); } // 0x2A7776C709904AB0 0x1CF89DA5
	static Any _0x6F44CBF56D79FAC0(Any p0, Any p1) { return invoke<Any>(0xF6BAC0, p0, p1); } // 0x6F44CBF56D79FAC0 0x16E53875
	static void _0x58C21165F6545892(char* p0, char* p1) { invoke<Void>(0xF6BB30, p0, p1); } // 0x58C21165F6545892 0x365C50EE
	static Any _0x2EAC52B4019E2782() { return invoke<Any>(0xF6BB50); } // 0x2EAC52B4019E2782 0x25E2DBA9
	static void SET_STORE_ENABLED(BOOL toggle) { invoke<Void>(0xF6BB70, toggle); } // 0x9641A9FF718E9C5E 0xC1F6443B
	static BOOL _0xA2F952104FC6DD4B(Any p0) { return invoke<BOOL>(0xF6BB90, p0); } // 0xA2F952104FC6DD4B 0x1FDC75DC
	static void _0x72D0706CD6CCDB58() { invoke<Void>(0xF6BBC0); } // 0x72D0706CD6CCDB58 0xCA7A0A49
	static Any _0x722F5D28B61C5EA8(Any p0) { return invoke<Any>(0xF6BBD0, p0); } // 0x722F5D28B61C5EA8 0x44A58B0A
	static Any _0x883D79C4071E18B3() { return invoke<Any>(0xF6BC40); } // 0x883D79C4071E18B3 0xD32FA11F
	static void _0x265635150FB0D82E() { invoke<Void>(0xF6BC90); } // 0x265635150FB0D82E 0xA7FA70AE
	static void _0x444C4525ECE0A4B9() { invoke<Void>(0xF6BCA0); } // 0x444C4525ECE0A4B9 0xCC7DCE24
	static Any _0x59328EB08C5CEB2B() { return invoke<Any>(0xF6BCB0); } // 0x59328EB08C5CEB2B 0x70F6D3AD
	static void _0xFAE628F1E9ADB239(Any p0, Any p1, Any p2) { invoke<Void>(0xF6BCF0, p0, p1, p2); } // 0xFAE628F1E9ADB239
	static Any _0xC64DED7EF0D2FE37(Any* p0) { return invoke<Any>(0xF6BD70, p0); } // 0xC64DED7EF0D2FE37 0x2B7B57B3
	static BOOL _0x4C61B39930D045DA(Any p0) { return invoke<BOOL>(0xF6BDD0, p0); } // 0x4C61B39930D045DA 0xBAF52DD8
	static BOOL _0x3A3D5568AF297CD5(Any p0) { return invoke<BOOL>(0xF6BE00, p0); } // 0x3A3D5568AF297CD5 0x9B9AFFF1
	static void _DOWNLOAD_CHECK() { invoke<Void>(0xF6BE30); } // 0x4F18196C8D38768D 0xC38E9DB0
	static Any _0xC7ABAC5DE675EE3B() { return invoke<Any>(0xF6BE40); } // 0xC7ABAC5DE675EE3B 0x32A4EB22
	static Any NETWORK_ENABLE_MOTION_DRUGGED() { return invoke<Any>(0xF6BE60); } // 0x0B0CC10720653F3B 0x9262744C
	static Any _0x8B0C2964BA471961() { return invoke<Any>(0xF6BE80); } // 0x8B0C2964BA471961
	static Any _0x88B588B41FF7868E() { return invoke<Any>(0xF6BF60); } // 0x88B588B41FF7868E
	static Any _0x67FC09BC554A75E5() { return invoke<Any>(0xF6BFB0); } // 0x67FC09BC554A75E5
	static void _0x966DD84FB6A46017() { invoke<Void>(0xF6C010); } // 0x966DD84FB6A46017
	static BOOL _0x152D90E4C1B4738A(Any* p0, Any* p1) { return invoke<BOOL>(0xF6C020, p0, p1); } // 0x152D90E4C1B4738A 0x08243B79
	static Any _0x9FEDF86898F100E9() { return invoke<Any>(0xF6C070); } // 0x9FEDF86898F100E9 0x798D6C27
	static Any _0x5E24341A7F92A74B() { return invoke<Any>(0xF6C0A0); } // 0x5E24341A7F92A74B 0xE69E8D0D
	static Any _0x24E4E51FC16305F9() { return invoke<Any>(0xF6C0D0); } // 0x24E4E51FC16305F9 0x742075FE
	static Any _0xFBC5E768C7A77A6A() { return invoke<Any>(0xF6C100); } // 0xFBC5E768C7A77A6A 0xCE569932
	static Any _0xC55A0B40FFB1ED23() { return invoke<Any>(0xF6C130); } // 0xC55A0B40FFB1ED23 0x82146BE9
	static void _0x17440AA15D1D3739() { invoke<Void>(0xF6C160); } // 0x17440AA15D1D3739 0x133FF2D5
	static BOOL _0x9BF438815F5D96EA(Any p0, Any p1, Any* p2, Any p3, Any p4, Any p5) { return invoke<BOOL>(0xF6C170, p0, p1, p2, p3, p4, p5); } // 0x9BF438815F5D96EA 0xCBA7242F
	static BOOL _0x692D58DF40657E8C(Any p0, Any p1, Any p2, Any* p3, Any p4, BOOL p5) { return invoke<BOOL>(0xF6C240, p0, p1, p2, p3, p4, p5); } // 0x692D58DF40657E8C
	static BOOL _0x158EC424F35EC469(char* p0, BOOL p1, char* contentType) { return invoke<BOOL>(0xF6C2D0, p0, p1, contentType); } // 0x158EC424F35EC469 0xDED82A6E
	static BOOL _0xC7397A83F7A2A462(Any* p0, Any p1, BOOL p2, Any* p3) { return invoke<BOOL>(0xF6C3A0, p0, p1, p2, p3); } // 0xC7397A83F7A2A462
	static BOOL _0x6D4CB481FAC835E8(Any p0, Any p1, Any* p2, Any p3) { return invoke<BOOL>(0xF6C4D0, p0, p1, p2, p3); } // 0x6D4CB481FAC835E8 0x40CF0783
	static BOOL _0xD5A4B59980401588(Any p0, Any p1, Any* p2, Any* p3) { return invoke<BOOL>(0xF6C570, p0, p1, p2, p3); } // 0xD5A4B59980401588 0x4609D596
	static BOOL _0x3195F8DD0D531052(Any p0, Any p1, Any* p2, Any* p3) { return invoke<BOOL>(0xF6C5D0, p0, p1, p2, p3); } // 0x3195F8DD0D531052 0x4C2C0D1F
	static BOOL _0xF9E1CCAE8BA4C281(Any p0, Any p1, Any* p2, Any* p3) { return invoke<BOOL>(0xF6C640, p0, p1, p2, p3); } // 0xF9E1CCAE8BA4C281 0x9EFBD5D1
	static BOOL _0x9F6E2821885CAEE2(Any p0, Any p1, Any p2, Any* p3, Any* p4) { return invoke<BOOL>(0xF6C6A0, p0, p1, p2, p3, p4); } // 0x9F6E2821885CAEE2 0xA6D8B798
	static BOOL _0x678BB03C1A3BD51E(Any p0, Any p1, Any p2, Any* p3, Any* p4) { return invoke<BOOL>(0xF6C700, p0, p1, p2, p3, p4); } // 0x678BB03C1A3BD51E 0x67E74842
	static BOOL SET_BALANCE_ADD_MACHINE(Any* p0, Any* p1) { return invoke<BOOL>(0xF6C770, p0, p1); } // 0x815E5E3073DA1D67 0xE123C7AC
	static BOOL SET_BALANCE_ADD_MACHINES(Any* p0, Any p1, Any* p2) { return invoke<BOOL>(0xF6C820, p0, p1, p2); } // 0xB8322EEB38BE7C26 0x22C33603
	static BOOL _0xA7862BC5ED1DFD7E(Any p0, Any p1, Any* p2, Any* p3) { return invoke<BOOL>(0xF6C940, p0, p1, p2, p3); } // 0xA7862BC5ED1DFD7E 0x37F5BD93
	static BOOL NETWORK_GET_BACKGROUND_LOADING_RECIPIENTS(Any p0, Any p1, Any* p2, Any* p3) { return invoke<BOOL>(0xF6C9A0, p0, p1, p2, p3); } // 0x97A770BEEF227E2B 0x1CFB3F51
	static BOOL _0x5324A0E3E4CE3570(Any p0, Any p1, Any* p2, Any* p3) { return invoke<BOOL>(0xF6CA00, p0, p1, p2, p3); } // 0x5324A0E3E4CE3570 0x87D1E6BD
	static void _0xE9B99B6853181409() { invoke<Void>(0xF6CA60); } // 0xE9B99B6853181409 0x021D5A94
	static Any _0xD53ACDBEF24A46E8() { return invoke<Any>(0xF6CA70); } // 0xD53ACDBEF24A46E8 0x4908A514
	static Any _0x02ADA21EA2F6918F() { return invoke<Any>(0xF6CAA0); } // 0x02ADA21EA2F6918F 0x50296140
	static Any _0x941E5306BCD7C2C7() { return invoke<Any>(0xF6CAD0); } // 0x941E5306BCD7C2C7 0x3970B0DA
	static Any _0xC87E740D9F3872CC() { return invoke<Any>(0xF6CB00); } // 0xC87E740D9F3872CC 0xC1487110
	static Any _0xEDF7F927136C224B() { return invoke<Any>(0xF6CB30); } // 0xEDF7F927136C224B 0xCC2356E3
	static Any _0xE0A6138401BCB837() { return invoke<Any>(0xF6CB60); } // 0xE0A6138401BCB837 0x2DE69817
	static Any _0x769951E2455E2EB5() { return invoke<Any>(0xF6CB90); } // 0x769951E2455E2EB5 0x81BD8D3B
	static Any _0x3A17A27D75C74887() { return invoke<Any>(0xF6CBC0); } // 0x3A17A27D75C74887 0x8E1D8F78
	static void _0xBA96394A0EECFA65() { invoke<Void>(0xF6CBF0); } // 0xBA96394A0EECFA65 0x0D35DD93
	static char* _GET_CONTENT_USER_ID(int p0) { return invoke<char*>(0xF6CC00, p0); } // 0xCD67AD041A394C9C 0x8F3137E6
	static BOOL _0x584770794D758C18(Any p0, Any* p1) { return invoke<BOOL>(0xF6CC30, p0, p1); } // 0x584770794D758C18
	static BOOL _0x8C8D2739BA44AF0F(Any p0) { return invoke<BOOL>(0xF6CCC0, p0); } // 0x8C8D2739BA44AF0F
	static Any _0x703F12425ECA8BF5(Any p0) { return invoke<Any>(0xF6CCF0, p0); } // 0x703F12425ECA8BF5 0xB9137BA7
	static BOOL _0xAEAB987727C5A8A4(Any p0) { return invoke<BOOL>(0xF6CD20, p0); } // 0xAEAB987727C5A8A4 0x9FEEAA9C
	static int _GET_CONTENT_CATEGORY(int p0) { return invoke<int>(0xF6CD50, p0); } // 0xA7BAB11E7C9C6C5A 0x5E8A7559
	static char* _GET_CONTENT_ID(Any p0) { return invoke<char*>(0xF6CD80, p0); } // 0x55AA95F481D694D2 0x331AEABF
	static char* _GET_ROOT_CONTENT_ID(Any p0) { return invoke<char*>(0xF6CDB0, p0); } // 0xC0173D6BFF4E0348 0x0E5E8E5C
	static Any _0xBF09786A7FCAB582(Any p0) { return invoke<Any>(0xF6CDE0, p0); } // 0xBF09786A7FCAB582 0xA5A0C695
	static int _GET_CONTENT_DESCRIPTION_HASH(Any p0) { return invoke<int>(0xF6CE10, p0); } // 0x7CF0448787B23758 0x91534C6E
	static Any _0xBAF6BABF9E7CCC13(int p0, Any* p1) { return invoke<Any>(0xF6CE40, p0, p1); } // 0xBAF6BABF9E7CCC13 0x744A9EA5
	static void _0xCFD115B373C0DF63(Any p0, Any* p1) { invoke<Void>(0xF6CE80, p0, p1); } // 0xCFD115B373C0DF63 0xA19A238D
	static Any _GET_CONTENT_FILE_VERSION(Any p0, Any p1) { return invoke<Any>(0xF6CF10, p0, p1); } // 0x37025B27D9B658B1 0xFF7D44E6
	static BOOL _0x1D610EB0FEA716D9(Any p0) { return invoke<BOOL>(0xF6CF40, p0); } // 0x1D610EB0FEA716D9
	static BOOL _0x7FCC39C46C3C03BD(Any p0) { return invoke<BOOL>(0xF6CF70, p0); } // 0x7FCC39C46C3C03BD
	static Any _0x32DD916F3F7C9672(Any p0) { return invoke<Any>(0xF6CFA0, p0); } // 0x32DD916F3F7C9672 0xA2C5BD9D
	static BOOL _0x3054F114121C21EA(Any p0) { return invoke<BOOL>(0xF6CFD0, p0); } // 0x3054F114121C21EA 0xA850DDE1
	static BOOL _0xA9240A96C74CCA13(Any p0) { return invoke<BOOL>(0xF6D000, p0); } // 0xA9240A96C74CCA13 0x8F6754AE
	static Any _0x1ACCFBA3D8DAB2EE(Any p0, Any p1) { return invoke<Any>(0xF6D030, p0, p1); } // 0x1ACCFBA3D8DAB2EE 0x1E34953F
	static Any _0x759299C5BB31D2A9(Any p0, Any p1) { return invoke<Any>(0xF6D060, p0, p1); } // 0x759299C5BB31D2A9 0x771FE190
	static Any _0x87E5C46C187FE0AE(Any p0, Any p1) { return invoke<Any>(0xF6D090, p0, p1); } // 0x87E5C46C187FE0AE 0x3276D9D3
	static Any _0x4E548C0D7AE39FF9(Any p0, Any p1) { return invoke<Any>(0xF6D0C0, p0, p1); } // 0x4E548C0D7AE39FF9 0x41A0FB02
	static BOOL _0x70EA8DA57840F9BE(Any p0) { return invoke<BOOL>(0xF6D0F0, p0); } // 0x70EA8DA57840F9BE 0x11DC0F27
	static BOOL _0x993CBE59D350D225(Any p0) { return invoke<BOOL>(0xF6D120, p0); } // 0x993CBE59D350D225 0x0DEB3F5A
	static Any _0x171DF6A0C07FB3DC(Any p0, Any p1) { return invoke<Any>(0xF6D150, p0, p1); } // 0x171DF6A0C07FB3DC 0x84315226
	static Any _0x7FD2990AF016795E(Any* p0, Any* p1, Any p2, Any p3, Any p4) { return invoke<Any>(0xF6D190, p0, p1, p2, p3, p4); } // 0x7FD2990AF016795E 0x38FC2EEB
	static Any _0x5E0165278F6339EE(Any p0) { return invoke<Any>(0xF6D210, p0); } // 0x5E0165278F6339EE 0x1C4F9FDB
	static BOOL _0x2D5DC831176D0114(Any p0) { return invoke<BOOL>(0xF6D240, p0); } // 0x2D5DC831176D0114 0xA69AE16C
	static BOOL _0xEBFA8D50ADDC54C4(Any p0) { return invoke<BOOL>(0xF6D270, p0); } // 0xEBFA8D50ADDC54C4 0xF50BC67A
	static BOOL _0x162C23CA83ED0A62(Any p0) { return invoke<BOOL>(0xF6D2A0, p0); } // 0x162C23CA83ED0A62 0xB3BBD241
	static Any _0x40F7E66472DF3E5C(Any p0, Any p1) { return invoke<Any>(0xF6D2D0, p0, p1); } // 0x40F7E66472DF3E5C 0x70A2845C
	static BOOL _0x5A34CD9C3C5BEC44(Any p0) { return invoke<BOOL>(0xF6D350, p0); } // 0x5A34CD9C3C5BEC44 0x346B506C
	static void _0x68103E2247887242() { invoke<Void>(0xF6D380); } // 0x68103E2247887242 0x0095DB71
	static BOOL _0x1DE0F5F50D723CAA(Any* p0, Any* p1, Any* p2) { return invoke<BOOL>(0xF6D390, p0, p1, p2); } // 0x1DE0F5F50D723CAA 0xAD334B40
	static BOOL _0x274A1519DFC1094F(Any* p0, BOOL p1, Any* p2) { return invoke<BOOL>(0xF6D400, p0, p1, p2); } // 0x274A1519DFC1094F 0x980D45D7
	static BOOL _0xD05D1A6C74DA3498(Any* p0, BOOL p1, Any* p2) { return invoke<BOOL>(0xF6D460, p0, p1, p2); } // 0xD05D1A6C74DA3498 0x48CCC328
	static Any _0x45E816772E93A9DB() { return invoke<Any>(0xF6D4C0); } // 0x45E816772E93A9DB 0x8E664EFD
	static Any _0x299EF3C576773506() { return invoke<Any>(0xF6D4F0); } // 0x299EF3C576773506 0x611E0BE2
	static Any _0x793FF272D5B365F4() { return invoke<Any>(0xF6D520); } // 0x793FF272D5B365F4 0xF0211AC1
	static Any _0x5A0A3D1A186A5508() { return invoke<Any>(0xF6D550); } // 0x5A0A3D1A186A5508 0x1F0DD8AF
	static void _0xA1E5E0204A6FCC70() { invoke<Void>(0xF6D580); } // 0xA1E5E0204A6FCC70 0x405ECA16
	static BOOL _0xB746D20B17F2A229(Any* p0, Any* p1) { return invoke<BOOL>(0xF6D590, p0, p1); } // 0xB746D20B17F2A229 0x9567392B
	static Any _0x63B406D7884BFA95() { return invoke<Any>(0xF6D640); } // 0x63B406D7884BFA95 0xF79FFF3C
	static Any _0x4D02279C83BE69FE() { return invoke<Any>(0xF6D670); } // 0x4D02279C83BE69FE 0xA7F3F82B
	static Any _0x597F8DBA9B206FC7() { return invoke<Any>(0xF6D6A0); } // 0x597F8DBA9B206FC7 0x410C61D1
	static BOOL _0x5CAE833B0EE0C500(Any p0) { return invoke<BOOL>(0xF6D6D0, p0); } // 0x5CAE833B0EE0C500 0x0D4F845D
	static void _0x61A885D3F7CFEE9A() { invoke<Void>(0xF6D700); } // 0x61A885D3F7CFEE9A 0xE13C1F7F
	static void _0xF98DDE0A8ED09323(BOOL p0) { invoke<Void>(0xF6D710, p0); } // 0xF98DDE0A8ED09323 0x213C6D36
	static void _0xFD75DABC0957BF33(BOOL p0) { invoke<Void>(0xF6D730, p0); } // 0xFD75DABC0957BF33 0x511E6F50
	static BOOL _0xF53E48461B71EECB(Any p0) { return invoke<BOOL>(0xF6D750, p0); } // 0xF53E48461B71EECB 0xB4668B23
	static BOOL _FACEBOOK_SET_HEIST_COMPLETE(char* heistName, int cashEarned, int xpEarned) { return invoke<BOOL>(0xF6D780, heistName, cashEarned, xpEarned); } // 0x098AB65B9ED9A9EC 0x30B51753
	static BOOL _FACEBOOK_SET_CREATE_CHARACTER_COMPLETE() { return invoke<BOOL>(0xF6D7C0); } // 0xDC48473142545431 0x02DAD93F
	static BOOL _FACEBOOK_SET_MILESTONE_COMPLETE(int milestoneId) { return invoke<BOOL>(0xF6D7F0, milestoneId); } // 0x0AE1F1653B554AB9 0x2D947814
	static BOOL _FACEBOOK_IS_SENDING_DATA() { return invoke<BOOL>(0xF6D820); } // 0x62B9FEC9A11F10EF 0x37A28C26
	static BOOL _FACEBOOK_DO_UNK_CHECK() { return invoke<BOOL>(0xF6D850); } // 0xA75E2B6733DA5142 0x11E8B5CD
	static BOOL _FACEBOOK_IS_AVAILABLE() { return invoke<BOOL>(0xF6D880); } // 0x43865688AE10F0D7 0x429AEAB3
	static int TEXTURE_DOWNLOAD_REQUEST(int* PlayerHandle, char* FilePath, char* Name, BOOL p3) { return invoke<int>(0xF6D8B0, PlayerHandle, FilePath, Name, p3); } // 0x16160DA74A8E74A2 0xAD546CC3
	static Any _0x0B203B4AFDE53A4F(Any* p0, Any* p1, BOOL p2) { return invoke<Any>(0xF6DA10, p0, p1, p2); } // 0x0B203B4AFDE53A4F 0x1856D008
	static Any _0x308F96458B7087CC(Any* p0, Any p1, Any p2, Any p3, Any* p4, BOOL p5) { return invoke<Any>(0xF6DAD0, p0, p1, p2, p3, p4, p5); } // 0x308F96458B7087CC 0x68C9AF69
	static void TEXTURE_DOWNLOAD_RELEASE(int p0) { invoke<Void>(0xF6DBA0, p0); } // 0x487EB90B98E9FB19 0xEE8D9E70
	static BOOL TEXTURE_DOWNLOAD_HAS_FAILED(int p0) { return invoke<BOOL>(0xF6DBC0, p0); } // 0x5776ED562C134687 0xE4547765
	static char* TEXTURE_DOWNLOAD_GET_NAME(int p0) { return invoke<char*>(0xF6DBF0, p0); } // 0x3448505B6E35262D 0xA40EF65A
	static Any _0x8BD6C6DEA20E82C6(Any p0) { return invoke<Any>(0xF6DC20, p0); } // 0x8BD6C6DEA20E82C6 0x03225BA3
	static Any _0x60EDD13EB3AC1FF3() { return invoke<Any>(0xF6DC70); } // 0x60EDD13EB3AC1FF3 0x4DEBC227
	static BOOL NETWORK_IS_CABLE_CONNECTED() { return invoke<BOOL>(0xF6DCF0); } // 0xEFFB25453D8600F9 0x5C065D55
	static Any _0x66B59CFFD78467AF() { return invoke<Any>(0xF6DD10); } // 0x66B59CFFD78467AF 0x0CA1167F
	static Any _0x606E4D3E3CCCF3EB() { return invoke<Any>(0xF6DD70); } // 0x606E4D3E3CCCF3EB 0x424C6E27
	static BOOL _IS_ROCKSTAR_BANNED() { return invoke<BOOL>(0xF6DDD0); } // 0x8020A73847E0CA7D 0xD3BBE42F
	static BOOL _IS_SOCIALCLUB_BANNED() { return invoke<BOOL>(0xF6DE10); } // 0xA0AD7E2AF5349F61 0xBDBB5948
	static BOOL _CAN_PLAY_ONLINE() { return invoke<BOOL>(0xF6DE70); } // 0x5F91D5D0B36AA310 0x97287D68
	static BOOL _0x422D396F80A96547() { return invoke<BOOL>(0xF6DED0); } // 0x422D396F80A96547 0xC6EA802E
	static BOOL _0xA699957E60D80214(Any p0) { return invoke<BOOL>(0xF6DF30, p0); } // 0xA699957E60D80214 0xFD261E30
	static BOOL _0xC22912B1D85F26B1(int p0, int* p1, Vector3* p2) { return invoke<BOOL>(0xF6DFB0, p0, p1, p2); } // 0xC22912B1D85F26B1 0x8570DD34
	static Any _0x593570C289A77688() { return invoke<Any>(0xF6DFE0); } // 0x593570C289A77688
	static Any _0x91B87C55093DE351() { return invoke<Any>(0xF6E040); } // 0x91B87C55093DE351
	static Any _0x36391F397731595D(Any p0) { return invoke<Any>(0xF6E0A0, p0); } // 0x36391F397731595D
	static Any _0xDEB2B99A1AF1A2A6(Any p0) { return invoke<Any>(0xF6E0B0, p0); } // 0xDEB2B99A1AF1A2A6
	static void _0x9465E683B12D3F6B() { invoke<Void>(0xF6E0C0); } // 0x9465E683B12D3F6B 0x273C6180
	static void _0xB7C7F6AD6424304B() { invoke<Void>(0xF6E0E0); } // 0xB7C7F6AD6424304B 0x371BBA08
	static void _0xC505036A35AFD01B(BOOL p0) { invoke<Void>(0xF6E100, p0); } // 0xC505036A35AFD01B 0xA100CC97
	static void _0x267C78C60E806B9A(Any p0, BOOL p1) { invoke<Void>(0xF6E150, p0, p1); } // 0x267C78C60E806B9A 0xBB2D33D3
	static void _0x6BFF5F84102DF80A(Any p0) { invoke<Void>(0xF6E1A0, p0); } // 0x6BFF5F84102DF80A
	static void _0x5C497525F803486B() { invoke<Void>(0xF6E1E0); } // 0x5C497525F803486B
	static Any _0x6FB7BB3607D27FA2() { return invoke<Any>(0xF6E220); } // 0x6FB7BB3607D27FA2
	static void _0x45A83257ED02D9BC() { invoke<Void>(0xF6E280); } // 0x45A83257ED02D9BC
}

namespace NETWORKCASH
{
	static void NETWORK_INITIALIZE_CASH(int p0, int p1) { invoke<Void>(0xF3EEC0, p0, p1); } // 0x3DA5ECD1A56CBA6D 0x66DA9935
	static void NETWORK_DELETE_CHARACTER(int characterIndex, BOOL p1, BOOL p2) { invoke<Void>(0xF3EED0, characterIndex, p1, p2); } // 0x05A50AF38947EB8D 0xA9F7E9C3
	static void NETWORK_CLEAR_CHARACTER_WALLET(Any p0) { invoke<Void>(0xF3EF20, p0); } // 0xA921DED15FDF28F5 0x19F0C471
	static void NETWORK_GIVE_PLAYER_JOBSHARE_CASH(int amount, int* networkHandle) { invoke<Void>(0xF3EF70, amount, networkHandle); } // 0xFB18DF9CB95E0105 0xC6047FDB
	static void NETWORK_RECEIVE_PLAYER_JOBSHARE_CASH(int value, int* networkHandle) { invoke<Void>(0xF3EF80, value, networkHandle); } // 0x56A3B51944C50598 0x4ED71C1A
	static Any _0x1C2473301B1C66BA() { return invoke<Any>(0xF3EF90); } // 0x1C2473301B1C66BA 0xA27B9FE8
	static void NETWORK_REFUND_CASH(int index, char* context, char* reason, BOOL unk) { invoke<Void>(0xF3EFF0, index, context, reason, unk); } // 0xF9C812CD7C46E817 0x07C92F21
	static BOOL NETWORK_MONEY_CAN_BET(Any p0, BOOL p1, BOOL p2) { return invoke<BOOL>(0xF3F050, p0, p1, p2); } // 0x81404F3DC124FE5B 0x8474E6F0
	static BOOL NETWORK_CAN_BET(Any p0) { return invoke<BOOL>(0xF3F090, p0); } // 0x3A54E33660DED67F 0xE3802533
	static void NETWORK_EARN_FROM_PICKUP(int amount) { invoke<Void>(0xF3F180, amount); } // 0xED1517D3AF17C698 0x70A0ED62
	static void _NETWORK_EARN_FROM_GANG_PICKUP(int amount) { invoke<Void>(0xF3F190, amount); } // 0xA03D4ACE0A3284CE 0x33C20BC4
	static void _NETWORK_EARN_FROM_ARMOUR_TRUCK(int amount) { invoke<Void>(0xF3F1A0, amount); } // 0xF514621E8EA463D0 0x30B3EC0A
	static void NETWORK_EARN_FROM_CRATE_DROP(int amount) { invoke<Void>(0xF3F1B0, amount); } // 0xB1CC1B9EC3007A2A 0xEAF04923
	static void NETWORK_EARN_FROM_BETTING(int amount, char* p1) { invoke<Void>(0xF3F1D0, amount, p1); } // 0x827A5BA1A44ACA6D 0xA0F7F07C
	static void NETWORK_EARN_FROM_JOB(int amount, char* p1) { invoke<Void>(0xF3F1E0, amount, p1); } // 0xB2CC4836834E8A98 0x0B6997FC
	static void NETWORK_EARN_FROM_MISSION_H(int amount, char* heistHash) { invoke<Void>(0xF3F200, amount, heistHash); } // 0x61326EE6DF15B0CA 0x5E81F55C
	static void NETWORK_EARN_FROM_CHALLENGE_WIN(Any p0, Any* p1, BOOL p2) { invoke<Void>(0xF3F210, p0, p1, p2); } // 0x2B171E6B2F64D8DF 0x2BEFB6C4
	static void NETWORK_EARN_FROM_BOUNTY(int amount, int* networkHandle, Any* p2, Any p3) { invoke<Void>(0xF3F230, amount, networkHandle, p2, p3); } // 0x131BB5DA15453ACF 0x127F2DAE
	static void NETWORK_EARN_FROM_IMPORT_EXPORT(Any p0, Any p1) { invoke<Void>(0xF3F250, p0, p1); } // 0xF92A014A634442D6 0xF11FC458
	static void NETWORK_EARN_FROM_HOLDUPS(int amount) { invoke<Void>(0xF3F260, amount); } // 0x45B8154E077D9E4D 0xE6B90E9C
	static void NETWORK_EARN_FROM_PROPERTY(int amount, Hash propertyName) { invoke<Void>(0xF3F270, amount, propertyName); } // 0x849648349D77F5C5 0x9BE4F7E1
	static void NETWORK_EARN_FROM_AI_TARGET_KILL(Any p0, Any p1) { invoke<Void>(0xF3F280, p0, p1); } // 0x515B4A22E4D3C6D7 0x866004A8
	static void NETWORK_EARN_FROM_NOT_BADSPORT(int amount) { invoke<Void>(0xF3F290, amount); } // 0x4337511FA8221D36 0xCC068380
	static void NETWORK_EARN_FROM_ROCKSTAR(int amount) { invoke<Void>(0xF3F2A0, amount); } // 0x02CE1D6AC0FC73EA 0x5A3733CC
	static void NETWORK_EARN_FROM_VEHICLE(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { invoke<Void>(0xF3F2B0, p0, p1, p2, p3, p4, p5, p6, p7); } // 0xB539BD8A4C1EECF8 0xF803589D
	static void NETWORK_EARN_FROM_PERSONAL_VEHICLE(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { invoke<Void>(0xF3F300, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0x3F4D00167E41E0AD 0x96B8BEE8
	static void _NETWORK_EARN_FROM_DAILY_OBJECTIVE(int p0, char* p1, int p2) { invoke<Void>(0xF3F360, p0, p1, p2); } // 0x6EA318C91C1A8786
	static void _NETWORK_EARN_FROM_AMBIENT_JOB(int p0, char* p1, Any* p2) { invoke<Void>(0xF3F380, p0, p1, p2); } // 0xFB6DB092FBAE29E6
	static void _NETWORK_EARN_FROM_JOB_BONUS(Any p0, Any* p1, Any* p2) { invoke<Void>(0xF3F3A0, p0, p1, p2); } // 0x6816FB4416760775
	static BOOL NETWORK_CAN_SPEND_MONEY(Any p0, BOOL p1, BOOL p2, BOOL p3, Any p4) { return invoke<BOOL>(0xF3F550, p0, p1, p2, p3, p4); } // 0xAB3CAA6B422164DA 0x5AA379D9
	static BOOL _0x7303E27CC6532080(Any p0, BOOL p1, BOOL p2, BOOL p3, Any* p4, Any p5) { return invoke<BOOL>(0xF3F5A0, p0, p1, p2, p3, p4, p5); } // 0x7303E27CC6532080
	static void NETWORK_BUY_ITEM(Ped player, Hash item, Any p2, Any p3, BOOL p4, char* item_name, Any p6, Any p7, Any p8, BOOL p9) { invoke<Void>(0xF3F5F0, player, item, p2, p3, p4, item_name, p6, p7, p8, p9); } // 0xF0077C797F66A355 0xA07B6368
	static void NETWORK_SPENT_TAXI(int amount, BOOL p1, BOOL p2) { invoke<Void>(0xF3F650, amount, p1, p2); } // 0x17C3A7D31EAE39F9 0x1F3DB3E3
	static void NETWORK_PAY_EMPLOYEE_WAGE(Any p0, BOOL p1, BOOL p2) { invoke<Void>(0xF3F670, p0, p1, p2); } // 0x5FD5ED82CBBE9989 0xBE70849B
	static void NETWORK_PAY_UTILITY_BILL(Any p0, BOOL p1, BOOL p2) { invoke<Void>(0xF3F690, p0, p1, p2); } // 0xAFE08B35EC0C9EAE 0x451A2644
	static void NETWORK_PAY_MATCH_ENTRY_FEE(int value, int* p1, BOOL p2, BOOL p3) { invoke<Void>(0xF3F6B0, value, p1, p2, p3); } // 0x9346E14F2AF74D46 0x224A3488
	static void NETWORK_SPENT_BETTING(Any p0, Any p1, Any* p2, BOOL p3, BOOL p4) { invoke<Void>(0xF3F6E0, p0, p1, p2, p3, p4); } // 0x1C436FD11FFA692F 0xF8A07513
	static void NETWORK_SPENT_IN_STRIPCLUB(Any p0, BOOL p1, Any p2, BOOL p3) { invoke<Void>(0xF3F730, p0, p1, p2, p3); } // 0xEE99784E4467689C 0x8957038E
	static void NETWORK_BUY_HEALTHCARE(int cost, BOOL p1, BOOL p2) { invoke<Void>(0xF3F760, cost, p1, p2); } // 0xD9B067E55253E3DD 0x832150E5
	static void NETWORK_BUY_AIRSTRIKE(int cost, BOOL p1, BOOL p2) { invoke<Void>(0xF3F780, cost, p1, p2); } // 0x763B4BD305338F19 0x40470683
	static void NETWORK_BUY_HELI_STRIKE(int cost, BOOL p1, BOOL p2) { invoke<Void>(0xF3F7D0, cost, p1, p2); } // 0x81AA4610E3FD3A69 0x047547D4
	static void NETWORK_SPENT_AMMO_DROP(Any p0, BOOL p1, BOOL p2) { invoke<Void>(0xF3F7F0, p0, p1, p2); } // 0xB162DC95C0A3317B 0x4B643076
	static void NETWORK_BUY_BOUNTY(int amount, Player victim, BOOL p2, BOOL p3) { invoke<Void>(0xF3F810, amount, victim, p2, p3); } // 0x7B718E197453F2D9 0xCB89CBE0
	static void NETWORK_BUY_PROPERTY(float propertyCost, Hash propertyName, BOOL p2, BOOL p3) { invoke<Void>(0xF3F840, propertyCost, propertyName, p2, p3); } // 0x650A08A280870AF6 0x7D479AAB
	static void NETWORK_SPENT_HELI_PICKUP(Any p0, BOOL p1, BOOL p2) { invoke<Void>(0xF3F890, p0, p1, p2); } // 0x7BF1D73DB2ECA492 0x27EEBCAB
	static void NETWORK_SPENT_BOAT_PICKUP(Any p0, BOOL p1, BOOL p2) { invoke<Void>(0xF3F8B0, p0, p1, p2); } // 0x524EE43A37232C00 0xB241CABD
	static void NETWORK_SPENT_BULL_SHARK(Any p0, BOOL p1, BOOL p2) { invoke<Void>(0xF3F8D0, p0, p1, p2); } // 0xA6DD8458CE24012C 0xDE7D398C
	static void NETWORK_SPENT_CASH_DROP(int amount, BOOL p1, BOOL p2) { invoke<Void>(0xF3F8F0, amount, p1, p2); } // 0x289016EC778D60E0 0x87BD1D11
	static void NETWORK_SPENT_HIRE_MUGGER(Any p0, BOOL p1, BOOL p2) { invoke<Void>(0xF3F910, p0, p1, p2); } // 0xE404BFB981665BF0 0xE792C4A5
	static void NETWORK_SPENT_ROBBED_BY_MUGGER(int amount, BOOL p1, BOOL p2) { invoke<Void>(0xF3F930, amount, p1, p2); } // 0x995A65F15F581359 0xE6AAA0D5
	static void NETWORK_SPENT_HIRE_MERCENARY(Any p0, BOOL p1, BOOL p2) { invoke<Void>(0xF3F950, p0, p1, p2); } // 0xE7B80E2BF9D80BD6 0x99CF02C4
	static void NETWORK_SPENT_BUY_WANTEDLEVEL(Any p0, Any* p1, BOOL p2, BOOL p3) { invoke<Void>(0xF3F970, p0, p1, p2, p3); } // 0xE1B13771A843C4F6 0xE7CB4F95
	static void NETWORK_SPENT_BUY_OFFTHERADAR(Any p0, BOOL p1, BOOL p2) { invoke<Void>(0xF3F9A0, p0, p1, p2); } // 0xA628A745E2275C5D 0x20DDCF2F
	static void NETWORK_SPENT_BUY_REVEAL_PLAYERS(Any p0, BOOL p1, BOOL p2) { invoke<Void>(0xF3F9C0, p0, p1, p2); } // 0x6E176F1B18BC0637 0x2F7836E2
	static void NETWORK_SPENT_CARWASH(Any p0, Any p1, Any p2, BOOL p3, BOOL p4) { invoke<Void>(0xF3F9E0, p0, p1, p2, p3, p4); } // 0xEC03C719DB2F4306 0x8283E028
	static void NETWORK_SPENT_CINEMA(Any p0, Any p1, BOOL p2, BOOL p3) { invoke<Void>(0xF3FA10, p0, p1, p2, p3); } // 0x6B38ECB05A63A685 0x1100CAF5
	static void NETWORK_SPENT_TELESCOPE(Any p0, BOOL p1, BOOL p2) { invoke<Void>(0xF3FA40, p0, p1, p2); } // 0x7FE61782AD94CC09 0xAE7FF044
	static void NETWORK_SPENT_HOLDUPS(Any p0, BOOL p1, BOOL p2) { invoke<Void>(0xF3FA60, p0, p1, p2); } // 0xD9B86B9872039763 0x1B3803B1
	static void NETWORK_SPENT_BUY_PASSIVE_MODE(Any p0, BOOL p1, BOOL p2) { invoke<Void>(0xF3FA80, p0, p1, p2); } // 0x6D3A430D1A809179 0x7E97C92C
	static void NETWORK_SPENT_PROSTITUTES(Any p0, BOOL p1, BOOL p2) { invoke<Void>(0xF3FAC0, p0, p1, p2); } // 0xB21B89501CFAC79E 0x78436D07
	static void NETWORK_SPENT_ARREST_BAIL(Any p0, BOOL p1, BOOL p2) { invoke<Void>(0xF3FAE0, p0, p1, p2); } // 0x812F5488B1B2A299 0x5AEE2FC1
	static void NETWORK_SPENT_PAY_VEHICLE_INSURANCE_PREMIUM(int amount, Hash vehicleModel, int* networkHandle, BOOL notBankrupt, BOOL hasTheMoney) { invoke<Void>(0xF3FB00, amount, vehicleModel, networkHandle, notBankrupt, hasTheMoney); } // 0x9FF28D88C766E3E8 0x4E665BB2
	static void NETWORK_SPENT_CALL_PLAYER(Any p0, Any* p1, BOOL p2, BOOL p3) { invoke<Void>(0xF3FB30, p0, p1, p2, p3); } // 0xACDE7185B374177C 0x1A89B5FC
	static void NETWORK_SPENT_BOUNTY(Any p0, BOOL p1, BOOL p2) { invoke<Void>(0xF3FB60, p0, p1, p2); } // 0x29B260B84947DFCC 0x3401FC96
	static void NETWORK_SPENT_FROM_ROCKSTAR(int bank, BOOL p1, BOOL p2) { invoke<Void>(0xF3FB80, bank, p1, p2); } // 0x6A445B64ED7ABEB5 0x54198922
	static char* PROCESS_CASH_GIFT(int* p0, int* p1, char* p2) { return invoke<char*>(0xF3FBB0, p0, p1, p2); } // 0x20194D48EAEC9A41 0xC5D8B1E9
	static void NETWORK_SPENT_PLAYER_HEALTHCARE(Any p0, Any p1, BOOL p2, BOOL p3) { invoke<Void>(0xF3FBE0, p0, p1, p2, p3); } // 0x7C99101F7FCE2EE5 0x3D96A21C
	static void NETWORK_SPENT_NO_COPS(Any p0, BOOL p1, BOOL p2) { invoke<Void>(0xF3FC10, p0, p1, p2); } // 0xD5BB406F4E04019F 0x2E51C61C
	static void NETWORK_SPENT_REQUEST_JOB(Any p0, BOOL p1, BOOL p2) { invoke<Void>(0xF3FC30, p0, p1, p2); } // 0x8204DA7934DF3155 0xD57A5125
	static void _NETWORK_SPENT_REQUEST_HEIST(Any p0, BOOL p1, BOOL p2) { invoke<Void>(0xF3FC50, p0, p1, p2); } // 0x9D26502BB97BFE62
	static void NETWORK_BUY_FAIRGROUND_RIDE(int amountSpent, Any p1, BOOL p2, BOOL p3) { invoke<Void>(0xF3FCA0, amountSpent, p1, p2, p3); } // 0x8A7B3952DD64D2B5 0xD9622D64
	static BOOL _0x7C4FCCD2E4DEB394() { return invoke<BOOL>(0xF3FCD0); } // 0x7C4FCCD2E4DEB394
	static int NETWORK_GET_VC_BANK_BALANCE() { return invoke<int>(0xF40810); } // 0x76EF28DA05EA395A 0x16184FB5
	static int NETWORK_GET_VC_WALLET_BALANCE(int character) { return invoke<int>(0xF40840, character); } // 0xA40F9C2623F6A8B5 0x4F5B781C
	static int NETWORK_GET_VC_BALANCE() { return invoke<int>(0xF40870); } // 0x5CBAD97E059E1B94 0xADF8F882
	static char* _NETWORK_GET_BANK_BALANCE_STRING() { return invoke<char*>(0xF40940); } // 0xA6FA3979BED01B81
	static BOOL _0xDC18531D7019A535(Any p0, Any p1) { return invoke<BOOL>(0xF40A30, p0, p1); } // 0xDC18531D7019A535
	static BOOL NETWORK_CAN_RECEIVE_PLAYER_CASH(Any p0, Any p1, Any p2, Any p3) { return invoke<BOOL>(0xF40B20, p0, p1, p2, p3); } // 0x5D17BE59D2123284 0x41F5F10E
	static Any _0xF70EFA14FE091429(Any p0) { return invoke<Any>(0xF40B90, p0); } // 0xF70EFA14FE091429 0x8B755993
	static BOOL _0xE260E0BB9CD995AC(Any p0) { return invoke<BOOL>(0xF40BC0, p0); } // 0xE260E0BB9CD995AC 0x8F266745
	static BOOL _0xE154B48B68EF72BC(Any p0) { return invoke<BOOL>(0xF40BF0, p0); } // 0xE154B48B68EF72BC 0x531E4892
	static float* _0x6FCF8DDEA146C45B(Any p0) { return invoke<float*>(0xF40C00, p0); } // 0x6FCF8DDEA146C45B 0xB96C7ABE
}

namespace DLC1
{
	static int _GET_NUM_DECORATIONS(int character) { return invoke<int>(0xEDE470, character); } // 0x278F76C3B0A8F109 0x71D0CF3E
	static BOOL _0xFF56381874F82086(int p0, int p1, int* outComponent) { return invoke<BOOL>(0xEDE4A0, p0, p1, outComponent); } // 0xFF56381874F82086 0x2E9D628C
	static void INIT_SHOP_PED_COMPONENT(int* outComponent) { invoke<Void>(0xEDE550, outComponent); } // 0x1E8C308FD312C036 0xB818C7FC
	static void INIT_SHOP_PED_PROP(int* outProp) { invoke<Void>(0xEDE590, outProp); } // 0xEB0A2B758F7B850F 0xF5659E50
	static int _0x50F457823CE6EB5F(int p0, int p1, int p2, int p3) { return invoke<int>(0xEDE5D0, p0, p1, p2, p3); } // 0x50F457823CE6EB5F 0xC937FF3D
	static int _GET_NUM_PROPS_FROM_OUTFIT(int character, int p1, int p2, BOOL p3, int p4, int componentId) { return invoke<int>(0xEDE650, character, p1, p2, p3, p4, componentId); } // 0x9BDF59818B1E38C1 0x594E862C
	static void GET_SHOP_PED_QUERY_COMPONENT(int componentId, int* outComponent) { invoke<Void>(0xEDE6C0, componentId, outComponent); } // 0x249E310B2D920699 0xC0718904
	static void GET_SHOP_PED_COMPONENT(Hash p0, Any* p1) { invoke<Void>(0xEDE6D0, p0, p1); } // 0x74C0E2A57EC66760 0xB39677C5
	static void GET_SHOP_PED_QUERY_PROP(Any p0, Any* p1) { invoke<Void>(0xEDE6E0, p0, p1); } // 0xDE44A00999B2837D 0x1D3C1466
	static void _0x5D5CAFF661DDF6FC(Any p0, Any* p1) { invoke<Void>(0xEDE6F0, p0, p1); } // 0x5D5CAFF661DDF6FC
	static Hash GET_HASH_NAME_FOR_COMPONENT(Entity entity, int componentId, int drawableVariant, int textureVariant) { return invoke<Hash>(0xEDE700, entity, componentId, drawableVariant, textureVariant); } // 0x0368B3A838070348 0xC8A4BF12
	static Hash GET_HASH_NAME_FOR_PROP(Entity entity, int componentId, int propIndex, int propTextureIndex) { return invoke<Hash>(0xEDE740, entity, componentId, propIndex, propTextureIndex); } // 0x5D6160275CAEC8DD 0x7D876DC0
	static int _0xC17AD0E5752BECDA(Hash componentHash) { return invoke<int>(0xEDE780, componentHash); } // 0xC17AD0E5752BECDA 0x159751B4
	static void GET_VARIANT_COMPONENT(Hash componentHash, int componentId, Any* p2, Any* p3, Any* p4) { invoke<Void>(0xEDE7E0, componentHash, componentId, p2, p3, p4); } // 0x6E11F282F11863B6 0xE4FF7103
	static int _GET_NUM_FORCED_COMPONENTS(Hash componentHash) { return invoke<int>(0xEDE840, componentHash); } // 0xC6B9DB42C04DD8C3 0xCE70F183
	static Any _0x017568A8182D98A6(Any p0) { return invoke<Any>(0xEDE870, p0); } // 0x017568A8182D98A6
	static void GET_FORCED_COMPONENT(Hash componentHash, int componentId, Any* p2, Any* p3, Any* p4) { invoke<Void>(0xEDE8A0, componentHash, componentId, p2, p3, p4); } // 0x6C93ED8C2F74859B 0x382C70BE
	static void _0xE1CA84EBF72E691D(Any p0, Any p1, Any* p2, Any* p3, Any* p4) { invoke<Void>(0xEDE8D0, p0, p1, p2, p3, p4); } // 0xE1CA84EBF72E691D
	static BOOL _0x341DE7ED1D2A1BFD(Hash componentHash, Hash drawableSlotHash, int componentId) { return invoke<BOOL>(0xEDE900, componentHash, drawableSlotHash, componentId); } // 0x341DE7ED1D2A1BFD 0x8E2C7FD5
	static int _0xF3FBE2D50A6A8C28(int character, BOOL p1) { return invoke<int>(0xEDE930, character, p1); } // 0xF3FBE2D50A6A8C28 0x1ECD23E7
	static void GET_SHOP_PED_QUERY_OUTFIT(Any p0, Any* outfit) { invoke<Void>(0xEDE970, p0, outfit); } // 0x6D793F03A631FE56 0x2F8013A1
	static void GET_SHOP_PED_OUTFIT(Any p0, Any* p1) { invoke<Void>(0xEDE980, p0, p1); } // 0xB7952076E444979D 0xCAFE9209
	static Any GET_SHOP_PED_OUTFIT_LOCATE(Any p0) { return invoke<Any>(0xEDE990, p0); } // 0x073CA26B079F956E 0x2798F56F
	static BOOL _0xA9F9C2E0FDE11CBB(Any p0, Any p1, Any* p2) { return invoke<BOOL>(0xEDE9D0, p0, p1, p2); } // 0xA9F9C2E0FDE11CBB 0x6641A864
	static BOOL _GET_PROP_FROM_OUTFIT(Any outfit, int slot, Any* item) { return invoke<BOOL>(0xEDEA50, outfit, slot, item); } // 0x19F2A026EDF0013F 0x818534AC
	static int GET_NUM_DLC_VEHICLES() { return invoke<int>(0xEDEAD0); } // 0xA7A866D21CD2329B 0x8EAF9CF6
	static Hash GET_DLC_VEHICLE_MODEL(int dlcVehicleIndex) { return invoke<Hash>(0xEDEAF0, dlcVehicleIndex); } // 0xECC01B7C5763333C 0xA2201E09
	static BOOL GET_DLC_VEHICLE_DATA(int dlcVehicleIndex, int* outData) { return invoke<BOOL>(0xEDEB20, dlcVehicleIndex, outData); } // 0x33468EDC08E371F6 0xCF428FA4
	static int GET_DLC_VEHICLE_FLAGS(int dlcVehicleIndex) { return invoke<int>(0xEDEB70, dlcVehicleIndex); } // 0x5549EE11FA22FCF2 0xAB12738C
	static int GET_NUM_DLC_WEAPONS() { return invoke<int>(0xEDEBB0); } // 0xEE47635F352DA367 0x2B757E6C
	static BOOL GET_DLC_WEAPON_DATA(int dlcWeaponIndex, int* outData) { return invoke<BOOL>(0xEDEBD0, dlcWeaponIndex, outData); } // 0x79923CD21BECE14E 0xD88EC8EA
	static int GET_NUM_DLC_WEAPON_COMPONENTS(int dlcWeaponIndex) { return invoke<int>(0xEDEC00, dlcWeaponIndex); } // 0x405425358A7D61FE 0x476B23A9
	static BOOL GET_DLC_WEAPON_COMPONENT_DATA(int dlcWeaponIndex, int dlcWeapCompIndex, Any* ComponentDataPtr) { return invoke<BOOL>(0xEDEC30, dlcWeaponIndex, dlcWeapCompIndex, ComponentDataPtr); } // 0x6CF598A2957C2BF8 0x4B83FCAF
	static BOOL _IS_DLC_DATA_EMPTY(Any* dlcData) { return invoke<BOOL>(0xEDEC60, dlcData); } // 0xD4D7B033C3AA243C 0x06396058
	static BOOL IS_DLC_VEHICLE_MOD(Any modData) { return invoke<BOOL>(0xEDEC90, modData); } // 0x0564B9FF9631B82C 0x35BCA844
	static int _0xC098810437312FFF(int modData) { return invoke<int>(0xEDECF0, modData); } // 0xC098810437312FFF 0x59352658
}

namespace DLC2
{
	static BOOL IS_DLC_PRESENT(Hash dlcHash) { return invoke<BOOL>(0xF41210, dlcHash); } // 0x812595A0644CE1DE 0x1F321943
	static BOOL _0xF2E07819EF1A5289() { return invoke<BOOL>(0xF412A0); } // 0xF2E07819EF1A5289 0x881B1FDB
	static Any _0x9489659372A81585() { return invoke<Any>(0xF412B0); } // 0x9489659372A81585 0xC2169164
	static Any _0xA213B11DFF526300() { return invoke<Any>(0xF412C0); } // 0xA213B11DFF526300 0xF79A97F5
	static BOOL _0x8D30F648014A92B5() { return invoke<BOOL>(0xF412D0); } // 0x8D30F648014A92B5 0xF69B729C
	static BOOL GET_IS_LOADING_SCREEN_ACTIVE() { return invoke<BOOL>(0xF412F0); } // 0x10D0A8F259E93EC9 0x517B601B
	static BOOL _NULLIFY(Any* variable, Any unused) { return invoke<BOOL>(0xF41310, variable, unused); } // 0x46E2B844905BC5F0 0x6087C10C
	static void _0xD7C10C4A637992C9() { invoke<Void>(0xF41330); } // 0xD7C10C4A637992C9
	static void _LOAD_MP_DLC_MAPS() { invoke<Void>(0xF41390); } // 0x0888C3502DBBEEF5
}

namespace SYSTEM
{
	static void WAIT(int* ms) { invoke<Void>(0x223A870, ms); } // 0x4EDE34FBADD967A6 0x7715C03B
	static int START_NEW_SCRIPT(char* scriptName, int stackSize) { return invoke<int>(0x223AB90, scriptName, stackSize); } // 0xE81651AD79516E48 0x3F166D0E
	static int START_NEW_SCRIPT_WITH_ARGS(char* scriptName, Any* args, int argCount, int stackSize) { return invoke<int>(0x223AD60, scriptName, args, argCount, stackSize); } // 0xB8BA7F44DF1575E1 0x4A2100E4
	static int START_NEW_SCRIPT_WITH_NAME_HASH(Hash scriptHash, int stackSize) { return invoke<int>(0x223ADA0, scriptHash, stackSize); } // 0xEB1C67C3A5333A92 0x8D15BE5D
	static int START_NEW_SCRIPT_WITH_NAME_HASH_AND_ARGS(Hash scriptHash, Any* args, int argCount, int stackSize) { return invoke<int>(0x223AE10, scriptHash, args, argCount, stackSize); } // 0xC4BB298BD441BE78 0xE38A3AD4
	static int TIMERA() { return invoke<int>(0x223BF30); } // 0x83666F9FB8FEBD4B 0x45C8C188
	static int TIMERB() { return invoke<int>(0x223BF50); } // 0xC9D9444186B5A374 0x330A9C0C
	static void SETTIMERA(int value) { invoke<Void>(0x223BF70, value); } // 0xC1B1E9A034A63A62 0x35785333
	static void SETTIMERB(int value) { invoke<Void>(0x223BFA0, value); } // 0x5AE11BC36633DE4E 0x27C1B7C6
	static float TIMESTEP() { return invoke<float>(0x223BFD0); } // 0x0000000050597EE2 0x50597EE2
	static float SIN(float value) { return invoke<float>(0x223BFF0, value); } // 0x0BADBFA3B172435F 0xBF987F58
	static float COS(float value) { return invoke<float>(0x223C020, value); } // 0xD0FFB162F40A139C 0x00238FE9
	static float SQRT(float value) { return invoke<float>(0x223C060, value); } // 0x71D93B57D07F9804 0x145C7701
	static float POW(float base, float exponent) { return invoke<float>(0x223C080, base, exponent); } // 0xE3621CC40F31FE2E 0x85D134F8
	static float VMAG(float x, float y, float z) { return invoke<float>(0x223C0B0, x, y, z); } // 0x652D2EEEF1D3E62C 0x1FCF1ECD
	static float VMAG2(float x, float y, float z) { return invoke<float>(0x223C0F0, x, y, z); } // 0xA8CEACB4F35AE058 0xE796E629
	static float VDIST(float x1, float y1, float z1, float x2, float y2, float z2) { return invoke<float>(0x223C120, x1, y1, z1, x2, y2, z2); } // 0x2A488C176D52CCA5 0x3C08ECB7
	static float VDIST2(float x1, float y1, float z1, float x2, float y2, float z2) { return invoke<float>(0x223C170, x1, y1, z1, x2, y2, z2); } // 0xB7A628320EFF8E47 0xC85DEF1F
	static int SHIFT_LEFT(int value, int bitShift) { return invoke<int>(0x223C1B0, value, bitShift); } // 0xEDD95A39E5544DE8 0x314CC6CD
	static int SHIFT_RIGHT(int value, int bitShift) { return invoke<int>(0x223C1D0, value, bitShift); } // 0x97EF1E5BCE9DC075 0x352633CA
	static int FLOOR(float value) { return invoke<int>(0x223C1F0, value); } // 0xF34EE736CF047844 0x32E9BE04
	static int CEIL(float value) { return invoke<int>(0x223C210, value); } // 0x11E019C8F43ACC8A 0xD536A1DF
	static int ROUND(float value) { return invoke<int>(0x223C230, value); } // 0xF2DB717A73826179 0x323B0E24
	static float TO_FLOAT(int value) { return invoke<float>(0x223C250, value); } // 0xBBDA792448DB5A89 0x67116627
}

namespace DECORATOR
{
	static BOOL DECOR_SET_TIME(Entity entity, char* propertyName, int timestamp) { return invoke<BOOL>(0xEDC6B0, entity, propertyName, timestamp); } // 0x95AED7B8E39ECAA4 0xBBAEEF94
	static BOOL DECOR_SET_BOOL(Entity entity, char* propertyName, BOOL value) { return invoke<BOOL>(0xEDC6E0, entity, propertyName, value); } // 0x6B1E8E2ED1335B71 0x8E101F5C
	static BOOL _DECOR_SET_FLOAT(Entity entity, char* propertyName, float value) { return invoke<BOOL>(0xEDC7C0, entity, propertyName, value); } // 0x211AB1DD8D0F363A
	static BOOL DECOR_SET_INT(Entity entity, char* propertyName, int value) { return invoke<BOOL>(0xEDC8A0, entity, propertyName, value); } // 0x0CE3AA5E1CA19E10 0xDB718B21
	static BOOL DECOR_GET_BOOL(Entity entity, char* propertyName) { return invoke<BOOL>(0xEDC970, entity, propertyName); } // 0xDACE671663F2F5DB 0xDBCE51E0
	static float _DECOR_GET_FLOAT(Entity entity, char* propertyName) { return invoke<float>(0xEDCA30, entity, propertyName); } // 0x6524A2F114706F43
	static int DECOR_GET_INT(Entity entity, char* propertyName) { return invoke<int>(0xEDCB00, entity, propertyName); } // 0xA06C969B02A97298 0xDDDE59B5
	static BOOL DECOR_EXIST_ON(Entity entity, char* propertyName) { return invoke<BOOL>(0xEDCBC0, entity, propertyName); } // 0x05661B80A8C9165F 0x74EF9C40
	static BOOL DECOR_REMOVE(Entity entity, char* propertyName) { return invoke<BOOL>(0xEDCC40, entity, propertyName); } // 0x00EE9F297C738720 0xE0E2640B
	static void DECOR_REGISTER(char* propertyName, int type) { invoke<Void>(0xEDCCC0, propertyName, type); } // 0x9FD90732F56403CE 0x68BD42A9
	static BOOL DECOR_IS_REGISTERED_AS_TYPE(char* propertyName, int type) { return invoke<BOOL>(0xEDCD40, propertyName, type); } // 0x4F14F9F870D6FBC8 0x7CF0971D
	static void DECOR_REGISTER_LOCK() { invoke<Void>(0xEDCDB0); } // 0xA9D14EEA259F9248 0x7F3F1C02
	static BOOL _0x241FCA5B1AA14F75() { return invoke<BOOL>(0xF411E0); } // 0x241FCA5B1AA14F75
}

namespace SOCIALCLUB
{
	static int _GET_TOTAL_SC_INBOX_IDS() { return invoke<int>(0xFC7990); } // 0x03A93FF1A2CA0864 0x6BE5DF29
	static Hash _SC_INBOX_MESSAGE_INIT(int p0) { return invoke<Hash>(0xFC79B0, p0); } // 0xBB8EA16ECBC976C4 0x5ECF955D
	static BOOL _IS_SC_INBOX_VALID(int p0) { return invoke<BOOL>(0xFC7A00, p0); } // 0x93028F1DB42BFD08 0xD1ED1D48
	static BOOL _SC_INBOX_MESSAGE_POP(int p0) { return invoke<BOOL>(0xFC7A30, p0); } // 0x2C015348CF19CA1D 0x19EE0CCB
	static BOOL SC_INBOX_MESSAGE_GET_DATA_INT(int p0, char* context, int* out) { return invoke<BOOL>(0xFC7A60, p0, context, out); } // 0xA00EFE4082C4056E 0x88068C7C
	static BOOL _SC_INBOX_MESSAGE_GET_DATA_BOOL(int p0, char* p1) { return invoke<BOOL>(0xFC7AA0, p0, p1); } // 0xFFE5C16F402D851D
	static BOOL SC_INBOX_MESSAGE_GET_DATA_STRING(int p0, char* context, char* out) { return invoke<BOOL>(0xFC7B20, p0, context, out); } // 0x7572EF42FC6A9B6D 0x15607620
	static BOOL _SC_INBOX_MESSAGE_PUSH(int p0) { return invoke<BOOL>(0xFC7B60, p0); } // 0x9A2C8064B6C1E41A 0xEBE420A4
	static char* _SC_INBOX_MESSAGE_GET_STRING(int p0) { return invoke<char*>(0xFC7B90, p0); } // 0xF3E31D16CBDCB304 0x2C959AF9
	static void _0xDA024BDBD600F44A(int* networkHandle) { invoke<Void>(0xFC7BE0, networkHandle); } // 0xDA024BDBD600F44A 0x0B9A3512
	static void _0xA68D3D229F4F3B06(char* p0) { invoke<Void>(0xFC7C80, p0); } // 0xA68D3D229F4F3B06 0x75324674
	static BOOL SC_INBOX_MESSAGE_GET_UGCDATA(Any p0, Any* p1) { return invoke<BOOL>(0xFC7CC0, p0, p1); } // 0x69D82604A1A5A254 0x88CA3BFC
	static BOOL _0x6AFD2CD753FEEF83(char* playerName) { return invoke<BOOL>(0xFC7CF0, playerName); } // 0x6AFD2CD753FEEF83 0x628F489B
	static BOOL _0x87E0052F08BD64E6(Any p0, int* p1) { return invoke<BOOL>(0xFC7D40, p0, p1); } // 0x87E0052F08BD64E6 0xAB3346B5
	static void _SC_INBOX_GET_EMAILS(int offset, int limit) { invoke<Void>(0xFC7D70, offset, limit); } // 0x040ADDCBAFA1018A
	static Any _0x16DA8172459434AA() { return invoke<Any>(0xFC7DB0); } // 0x16DA8172459434AA
	static BOOL _0x4737980E8A283806(int p0, Any* p1) { return invoke<BOOL>(0xFC7E10, p0, p1); } // 0x4737980E8A283806
	static void _0x44ACA259D67651DB(Any* p0, Any p1) { invoke<Void>(0xFC7E60, p0, p1); } // 0x44ACA259D67651DB
	static void SC_EMAIL_MESSAGE_PUSH_GAMER_TO_RECIP_LIST(Player* player) { invoke<Void>(0xFC7EB0, player); } // 0x2330C12A7A605D16 0x9A703A2B
	static void SC_EMAIL_MESSAGE_CLEAR_RECIP_LIST() { invoke<Void>(0xFC7F50); } // 0x55DF6DB45179236E 0xD094F11A
	static void _0x116FB94DC4B79F17(char* p0) { invoke<Void>(0xFC7F60, p0); } // 0x116FB94DC4B79F17 0xAF3C081B
	static void _0xBFA0A56A817C6C7D(BOOL p0) { invoke<Void>(0xFC7FF0, p0); } // 0xBFA0A56A817C6C7D 0x2FB9F53C
	static Any _0xBC1CC91205EC8D6E() { return invoke<Any>(0xFC8010); } // 0xBC1CC91205EC8D6E 0x6C5738AB
	static Any _0xDF649C4E9AFDD788() { return invoke<Any>(0xFC8020); } // 0xDF649C4E9AFDD788 0x468668F0
	static BOOL _0x1F1E9682483697C7(Any p0, Any p1) { return invoke<BOOL>(0xFC8050, p0, p1); } // 0x1F1E9682483697C7 0x90C74343
	static BOOL _0x287F1F75D2803595(Any p0, Any* p1) { return invoke<BOOL>(0xFC80C0, p0, p1); } // 0x287F1F75D2803595 0x3ACE6D6B
	static BOOL _0x487912FD248EFDDF(Any p0, float p1) { return invoke<BOOL>(0xFC8100, p0, p1); } // 0x487912FD248EFDDF 0x579B4510
	static BOOL _0x8416FE4E4629D7D7(char* p0) { return invoke<BOOL>(0xFC81C0, p0); } // 0x8416FE4E4629D7D7 0xDF45B2A7
	static BOOL _SC_START_CHECK_STRING_TASK(char* string, int* taskHandle) { return invoke<BOOL>(0xFC82A0, string, taskHandle); } // 0x75632C5ECD7ED843 0xDF084A6B
	static BOOL _SC_HAS_CHECK_STRING_TASK_COMPLETED(int taskHandle) { return invoke<BOOL>(0xFC8340, taskHandle); } // 0x1753344C770358AE 0xFFED3676
	static int _SC_GET_CHECK_STRING_STATUS(int taskHandle) { return invoke<int>(0xFC83A0, taskHandle); } // 0x82E4A58BABC15AE7 0xA796D7A7
	static Any _0x85535ACF97FC0969(Any p0) { return invoke<Any>(0xFC8400, p0); } // 0x85535ACF97FC0969 0x09497F31
	static int _0x930DE22F07B1CCE3(Any p0) { return invoke<int>(0xFC8460, p0); } // 0x930DE22F07B1CCE3 0x4D8A6521
	static BOOL _0xF6BAAAF762E1BF40(char* p0, int* p1) { return invoke<BOOL>(0xFC84B0, p0, p1); } // 0xF6BAAAF762E1BF40 0x7AA36406
	static BOOL _0xF22CA0FD74B80E7A(Any p0) { return invoke<BOOL>(0xFC84F0, p0); } // 0xF22CA0FD74B80E7A 0xF379DCE4
	static Any _0x9237E334F6E43156(Any p0) { return invoke<Any>(0xFC8550, p0); } // 0x9237E334F6E43156 0x65D84665
	static Any _0x700569DBA175A77C(Any p0) { return invoke<Any>(0xFC85B0, p0); } // 0x700569DBA175A77C
	static Any _0x1D4446A62D35B0D0(Any p0, Any p1) { return invoke<Any>(0xFC8600, p0, p1); } // 0x1D4446A62D35B0D0
	static Any _0x2E89990DDFF670C3(Any p0, Any p1) { return invoke<Any>(0xFC8660, p0, p1); } // 0x2E89990DDFF670C3
	static BOOL _0xD0EE05FE193646EA(Any* p0, Any* p1, Any* p2) { return invoke<BOOL>(0xFC86C0, p0, p1, p2); } // 0xD0EE05FE193646EA
	static BOOL _0x1989C6E6F67E76A8(Any* p0, Any* p1, Any* p2) { return invoke<BOOL>(0xFC8740, p0, p1, p2); } // 0x1989C6E6F67E76A8
	static Any _0x07C61676E5BB52CD(Any p0) { return invoke<Any>(0xFC87B0, p0); } // 0x07C61676E5BB52CD
	static Any _0x8147FFF6A718E1AD(Any p0) { return invoke<Any>(0xFC8810, p0); } // 0x8147FFF6A718E1AD
	static BOOL _0x0F73393BAC7E6730(Any* p0, int* p1) { return invoke<BOOL>(0xFC8860, p0, p1); } // 0x0F73393BAC7E6730
	static Any _0xD302E99EDF0449CF(Any p0) { return invoke<Any>(0xFC88A0, p0); } // 0xD302E99EDF0449CF
	static Any _0x5C4EBFFA98BDB41C(Any p0) { return invoke<Any>(0xFC8900, p0); } // 0x5C4EBFFA98BDB41C
	static Any _0xFF8F3A92B75ED67A() { return invoke<Any>(0xFC8950); } // 0xFF8F3A92B75ED67A 0xC96456BA
	static Any _0x4A7D6E727F941747(Any* p0) { return invoke<Any>(0xFC8AF0, p0); } // 0x4A7D6E727F941747 0x8E7AEEB7
	static BOOL _0x8CC469AB4D349B7C(int p0, char* p1, Any* p2) { return invoke<BOOL>(0xFC8C90, p0, p1, p2); } // 0x8CC469AB4D349B7C 0xE778B2A7
	static BOOL _0x699E4A5C8C893A18(int p0, char* p1, Any* p2) { return invoke<BOOL>(0xFC8D30, p0, p1, p2); } // 0x699E4A5C8C893A18 0xCE7D50A8
	static BOOL _0x19853B5B17D77BCA(Any p0, Any* p1) { return invoke<BOOL>(0xFC8D80, p0, p1); } // 0x19853B5B17D77BCA 0xD26CCA46
	static BOOL _0x6BFB12CE158E3DD4(Any p0) { return invoke<BOOL>(0xFC8DD0, p0); } // 0x6BFB12CE158E3DD4 0x24D84334
	static BOOL _0xFE4C1D0D3B9CC17E(Any p0, Any p1) { return invoke<BOOL>(0xFC8E20, p0, p1); } // 0xFE4C1D0D3B9CC17E 0x8A023024
	static Any _0xD8122C407663B995() { return invoke<Any>(0xFC8E70); } // 0xD8122C407663B995 0x1C65B038
	static BOOL _0x3001BEF2FECA3680() { return invoke<BOOL>(0xFC8EA0); } // 0x3001BEF2FECA3680 0x4D4C37B3
	static BOOL _0x92DA6E70EF249BD1(char* p0, int* p1) { return invoke<BOOL>(0xFC8ED0, p0, p1); } // 0x92DA6E70EF249BD1 0xAED95A6F
	static void _0x675721C9F644D161() { invoke<Void>(0xFC8F10); } // 0x675721C9F644D161 0x486867E6
	static Entity _SC_GET_NICKNAME() { return invoke<Entity>(0xFC8FC0); } // 0x198D161F458ECC7F
	static BOOL _0x225798743970412B(int* p0) { return invoke<BOOL>(0xFC8FE0, p0); } // 0x225798743970412B
	static BOOL _0x418DC16FAE452C1C(int p0) { return invoke<BOOL>(0xFC9050, p0); } // 0x418DC16FAE452C1C
}

namespace UNK
{
	static int _0xF2CA003F167E21D2() { return invoke<int>(0xF1FC40); } // 0xF2CA003F167E21D2 0x106C8317
	static BOOL _0xEF7D17BC6C85264C() { return invoke<BOOL>(0xF1FC50); } // 0xEF7D17BC6C85264C 0xD87F3A9E
	static void _0xB0C56BD3D808D863(BOOL p0) { invoke<Void>(0xF1FC90, p0); } // 0xB0C56BD3D808D863 0xC0B971EA
	static Any _0x8AA464D4E0F6ACCD() { return invoke<Any>(0xF1FCB0); } // 0x8AA464D4E0F6ACCD 0x94BCAC7C
	static void _IS_IN_LOADING_SCREEN(BOOL p0) { invoke<Void>(0xF1FCD0, p0); } // 0xFC309E94546FCDB5 0x7D90EEE5
	static BOOL _IS_UI_LOADING_MULTIPLAYER() { return invoke<BOOL>(0xF1FCF0); } // 0xC6DC823253FBB366 0x734CFEDA
	static void _0xC7E7181C09F33B69(BOOL p0) { invoke<Void>(0xF1FD10, p0); } // 0xC7E7181C09F33B69 0x8C227332
	static void _0xFA1E0E893D915215(BOOL p0) { invoke<Void>(0xF1FD30, p0); } // 0xFA1E0E893D915215 0x5C350D78
	static int _GET_CURRENT_LANGUAGE_ID() { return invoke<int>(0xF1FE80); } // 0x2BDD44CC428A7EAE
	static int _GET_USER_LANGUAGE_ID() { return invoke<int>(0xF1FEB0); } // 0xA8AE43AEC1A61314
}

namespace UNK1
{
	static void _0x48621C9FCA3EBD28(BOOL p0) { invoke<Void>(0xFC0980, p0); } // 0x48621C9FCA3EBD28
	static void _0x81CBAE94390F9F89() { invoke<Void>(0xFC0990); } // 0x81CBAE94390F9F89
	static void _0x13B350B8AD0EEE10() { invoke<Void>(0xFC09A0); } // 0x13B350B8AD0EEE10
	static void _0x293220DA1B46CEBC(float p0, float p1, BOOL p2) { invoke<Void>(0xFC09B0, p0, p1, p2); } // 0x293220DA1B46CEBC
	static void _0x208784099002BC30(char* missionNameLabel, Any p1) { invoke<Void>(0xFC09E0, missionNameLabel, p1); } // 0x208784099002BC30
	static void _0xEB2D525B57F42B40() { invoke<Void>(0xFC09F0); } // 0xEB2D525B57F42B40
	static void _0xF854439EFBB3B583() { invoke<Void>(0xFC0A00); } // 0xF854439EFBB3B583
	static void _0xAF66DCEE6609B148() { invoke<Void>(0xFC0A10); } // 0xAF66DCEE6609B148
	static void _0x66972397E0757E7A(Any p0, Any p1, Any p2) { invoke<Void>(0xFC0A20, p0, p1, p2); } // 0x66972397E0757E7A
	static void _START_RECORDING(int mode) { invoke<Void>(0xFC0A30, mode); } // 0xC3AC2FFF9612AC81
	static void _STOP_RECORDING_AND_SAVE_CLIP() { invoke<Void>(0xFC0A40); } // 0x071A5197D6AFC8B3
	static void _STOP_RECORDING_AND_DISCARD_CLIP() { invoke<Void>(0xFC0A50); } // 0x88BB3507ED41A240
	static BOOL _0x644546EC5287471B() { return invoke<BOOL>(0xFC0A60); } // 0x644546EC5287471B
	static BOOL _IS_RECORDING() { return invoke<BOOL>(0xFC0A80); } // 0x1897CA71995A90B4
	static Any _0xDF4B952F7D381B95() { return invoke<Any>(0xFC0AA0); } // 0xDF4B952F7D381B95
	static Any _0x4282E08174868BE3() { return invoke<Any>(0xFC0AD0); } // 0x4282E08174868BE3
	static BOOL _0x33D47E85B476ABCD(BOOL p0) { return invoke<BOOL>(0xFC0AF0, p0); } // 0x33D47E85B476ABCD
}

namespace UNK2
{
	static void _0x7E2BD3EF6C205F09(char* p0, BOOL p1) { invoke<Void>(0xFC0C30, p0, p1); } // 0x7E2BD3EF6C205F09
	static BOOL _IS_INTERIOR_RENDERING_DISABLED() { return invoke<BOOL>(0xFC0C40); } // 0x95AB8B5C992C7B58
	static void _0x5AD3932DAEB1E5D3() { invoke<Void>(0xFC0C50); } // 0x5AD3932DAEB1E5D3
	static void _0xE058175F8EAFE79A(BOOL p0) { invoke<Void>(0xFC0C60, p0); } // 0xE058175F8EAFE79A
	static void _RESET_EDITOR_VALUES() { invoke<Void>(0xFC0C80); } // 0x3353D13F09307691
	static void _ACTIVATE_ROCKSTAR_EDITOR() { invoke<Void>(0xFC0C90); } // 0x49DA8145672B2725
}

namespace UNK3
{
	static int _NETWORK_SHOP_GET_PRICE(Hash hash, Hash hash2, BOOL p2) { return invoke<int>(0xF42490, hash, hash2, p2); } // 0xC27009422FCCA88D
	static Any _0x3C4487461E9B0DCB() { return invoke<Any>(0xF424A0); } // 0x3C4487461E9B0DCB
	static Any _0x2B949A1E6AEC8F6A() { return invoke<Any>(0xF424B0); } // 0x2B949A1E6AEC8F6A
	static Any _0x85F6C9ABA1DE2BCF() { return invoke<Any>(0xF424C0); } // 0x85F6C9ABA1DE2BCF
	static Any _0x357B152EF96C30B6() { return invoke<Any>(0xF424D0); } // 0x357B152EF96C30B6
	static BOOL _0xCF38DAFBB49EDE5E(Any* p0) { return invoke<BOOL>(0xF424E0, p0); } // 0xCF38DAFBB49EDE5E
	static Any _0xE3E5A7C64CA2C6ED() { return invoke<Any>(0xF424F0); } // 0xE3E5A7C64CA2C6ED
	static BOOL _0x0395CB47B022E62C(Any* p0) { return invoke<BOOL>(0xF42500, p0); } // 0x0395CB47B022E62C
	static BOOL _NETWORK_SHOP_START_SESSION(Any p0) { return invoke<BOOL>(0xF42510, p0); } // 0xA135AC892A58FC07
	static BOOL _0x72EB7BA9B69BF6AB() { return invoke<BOOL>(0xF42520); } // 0x72EB7BA9B69BF6AB
	static BOOL _0x170910093218C8B9(Any* p0) { return invoke<BOOL>(0xF42530, p0); } // 0x170910093218C8B9
	static BOOL _0xC13C38E47EA5DF31(Any* p0) { return invoke<BOOL>(0xF42540, p0); } // 0xC13C38E47EA5DF31
	static BOOL _NETWORK_SHOP_GET_TRANSACTIONS_ENABLED_FOR_CHARACTER(int mpChar) { return invoke<BOOL>(0xF42550, mpChar); } // 0xB24F0944DA203D9E
	static int _0x74A0FD0688F1EE45(int p0) { return invoke<int>(0xF42560, p0); } // 0x74A0FD0688F1EE45
	static BOOL _NETWORK_SHOP_SESSION_APPLY_RECEIVED_DATA(Any p0) { return invoke<BOOL>(0xF42570, p0); } // 0x2F41D51BA3BCD1F1
	static BOOL _NETWORK_SHOP_GET_TRANSACTIONS_DISABLED() { return invoke<BOOL>(0xF42580); } // 0x810E8431C0614BF9
	static BOOL _0x35A1B3E1D1315CFA(BOOL p0, BOOL p1) { return invoke<BOOL>(0xF42590, p0, p1); } // 0x35A1B3E1D1315CFA
	static BOOL _0x897433D292B44130(Any* p0, Any* p1) { return invoke<BOOL>(0xF425B0, p0, p1); } // 0x897433D292B44130
	static BOOL _NETWORK_SHOP_BASKET_START(Any* p0, int p1, int p2, int p3) { return invoke<BOOL>(0xF425C0, p0, p1, p2, p3); } // 0x279F08B1A4B29B7E
	static BOOL _NETWORK_SHOP_BASKET_END() { return invoke<BOOL>(0xF425D0); } // 0xA65568121DF2EA26
	static BOOL _NETWORK_SHOP_BASKET_ADD_ITEM(Any* p0, Any p1) { return invoke<BOOL>(0xF425F0, p0, p1); } // 0xF30980718C8ED876
	static Any _NETWORK_SHOP_BASKET_IS_FULL() { return invoke<Any>(0xF42600); } // 0x27F76CC6C55AD30E
	static BOOL _NETWORK_SHOP_BASKET_APPLY_SERVER_DATA(Any p0, Any* p1) { return invoke<BOOL>(0xF42610, p0, p1); } // 0xE1A0450ED46A7812
	static BOOL _NETWORK_SHOP_CHECKOUT_START(int transactionID) { return invoke<BOOL>(0xF42620, transactionID); } // 0x39BE7CEA8D9CC8E6
	static BOOL _NETWORK_SHOP_BEGIN_SERVICE(int* transactionID, Hash p1, Hash transactionHash, int amount, Hash p4, int mode) { return invoke<BOOL>(0xF42650, transactionID, p1, transactionHash, amount, p4, mode); } // 0x3C5FD37B5499582E
	static BOOL _NETWORK_SHOP_TERMINATE_SERVICE(int transactionID) { return invoke<BOOL>(0xF42660, transactionID); } // 0xE2A99A9B524BEFFF
	static BOOL _0x51F1A8E48C3D2F6D(Any p0, BOOL p1, Any p2) { return invoke<BOOL>(0xF42670, p0, p1, p2); } // 0x51F1A8E48C3D2F6D
	static Any _0x0A6D923DFFC9BD89() { return invoke<Any>(0xF42680); } // 0x0A6D923DFFC9BD89
	static Any _NETWORK_SHOP_DELETE_SET_TELEMETRY_NONCE_SEED() { return invoke<Any>(0xF42690); } // 0x112CEF1615A1139F
	static BOOL _NETWORK_TRANSFER_BANK_TO_WALLET(int charStatInt, int amount) { return invoke<BOOL>(0xF426A0, charStatInt, amount); } // 0xD47A2C1BA117471D
	static BOOL _NETWORK_TRANSFER_WALLET_TO_BANK(int charStatInt, int amount) { return invoke<BOOL>(0xF426B0, charStatInt, amount); } // 0xC2F7FE5309181C7D
	static Any _0x23789E777D14CE44() { return invoke<Any>(0xF426C0); } // 0x23789E777D14CE44
	static Any _0x350AA5EBC03D3BD2() { return invoke<Any>(0xF426D0); } // 0x350AA5EBC03D3BD2
	static BOOL _NETWORK_SHOP_CASH_TRANSFER_SET_TELEMETRY_NONCE_SEED() { return invoke<BOOL>(0xF426E0); } // 0x498C1E05CE5F7877
	static BOOL _NETWORK_SHOP_SET_TELEMETRY_NONCE_SEED(Any p0) { return invoke<BOOL>(0xF426F0, p0); } // 0x9507D4271988E1AE
	static char* _GET_ONLINE_VERSION() { return invoke<char*>(0xF60210); } // 0xFCA9373EF340AC0A
}