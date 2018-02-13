#pragma once

#include "types.h"
#include <utility>

#define MaxSubmenuLevels 20

typedef void(*Function)();
typedef void(*KeyboardHandler)(char*);

class Menu {
private:
	Function mainMenu;
	Function currentMenu;
	Function lastSubmenu[MaxSubmenuLevels];
	int submenuLevel;

	char* tipText;
	int currentOption;
	int optionCount;
	int lastOption[MaxSubmenuLevels];

	bool optionPress,
		leftPress,
		rightPress,
		leftHold,
		rightHold,
		upPress,
		downPress,
		squarePress;

	Scaleform instructionsHandle;
	int instructionCount;
	bool setupIntructionsThisFrame,
		xInstruction,
		squareInstruction,
		lrInstruction;

	bool keyboardActive;
	KeyboardHandler keyboardHandler;

	template <typename T> struct scrollData {
		T* var;
		T min;
		T max;
		int decimals;
	};
	static scrollData<int> intScrollData;
	static scrollData<float> floatScrollData;

	static void intScrollKeyboardHandler(char* text);
	static void floatScrollKeyboardHandler(char* text);

	void playSound(char* sound);

	enum Alignment {
		Left,
		Center,
		Right
	};
	void drawText(char* text, Vector2 pos, float scale, Font font, Color color, Alignment alignment, bool outline);

	void setupInstructions();
	void addInstruction(ScaleformSymbol symbol, char* text);
	void finishInstructions();

	void positionMenuText(char* text, float xPos, Alignment alignment);

	bool fastScrolling;

	bool colorEditing;
	bool editingAlpha;
	Color *colorToEdit;
	Function colorChangeCallback;
	void colorEditor();

public:
	bool open,
		sounds,
		instructions;

	char* title;
	Font titleFont;

	int maxOptions;
	Font optionsFont;

	Color bannerColor,
		bannerTextColor,
		optionsActiveColor,
		optionsInactiveColor,
		bodyColor,
		scrollerColor,
		indicatorColor,
		instructionsColor,
		instructionsTextColor;

	Menu();
	Menu(Menu& menu);
	Menu(Function main);

	static void drawCenterNotification(char* text, int duration = 3000);
	static void drawFeedNotification(char* text, char* subtitle, char* title = "Menu Base");

	void monitorButtons();
	void run();

	void changeSubmenu(Function submenu);
	void openKeyboard(KeyboardHandler handler, int maxLength, char* defaultText = "");

	void banner(char* text);

	bool hovered();
	bool pressed();
	bool scrolled();

	Menu& option(char* text);
	void spacer(char* text);
	Menu& data(char* text);
	Menu& data(bool b);
	Menu& data(int i);
	Menu& data(float f, int decimalPlaces);

	Menu& scroller(int* i, int min, int max, bool fast, bool keyboard);
	Menu& scroller(float *f, float min, float max, float increment, int decimalPlaces, bool fast, bool keyboard);
	Menu& scroller(char** textArray, int* index, int numItems, bool fast);
	Menu& scroller(Font* font);

	Menu& toggle(bool *b);
	Menu& tip(char* text);
	Menu& submenu(Function sub);
	Menu& keyboard(KeyboardHandler handler, int maxLength, char* defaultText = "");
	Menu& editColor(Color* color, bool editAlpha, Function callback = nullptr);
	template<typename F, typename... Args> Menu& call(F func, Args&&... args) {
		if (pressed()) {
			func(std::forward<Args>(args)...);
		}
		return *this;
	}

	Hash vehicleToSpawn;
	Menu& vehicleSpawn(Hash vehicleHash);
};