#include "menu.h"
#include "natives.h"
#include "lib.h"

Menu::Menu() {}
Menu::Menu(Menu& menu) {}
Menu::Menu(Function mainSubmenu) {
	mainMenu = mainSubmenu;
	open = false;
	colorEditing = false;

	vehicleToSpawn = 0;

	// Settings
	sounds = true;
	instructions = true;

	maxOptions = 15;
	optionsFont = Font_Chalet_London;
	optionsActiveColor = { 0, 0, 0, 255 };
	optionsInactiveColor = { 255, 255, 255, 255 };

	bodyColor = { 16, 16, 16, 200 };
	scrollerColor = { 255, 255, 255, 255 };
	indicatorColor = { 255, 255, 255, 255 };

	titleFont = Font_Pricedown;
	bannerColor = { 0, 255, 0, 255 };
	bannerTextColor = { 255, 255, 255, 255 };

	instructionsColor = { 0, 0, 0, 80 };
}

void Menu::playSound(char* sound) {
	if (sounds) {
		AUDIO::PLAY_SOUND_FRONTEND(-1, sound, "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
	}
}

void Menu::monitorButtons() {
	if (open) {
		CONTROLS::DISABLE_CONTROL_ACTION(0, Button_Dpad_Up, true);
		CONTROLS::DISABLE_CONTROL_ACTION(0, Button_Dpad_Down, true);
		CONTROLS::DISABLE_CONTROL_ACTION(0, Button_Dpad_Right, true);
		CONTROLS::DISABLE_CONTROL_ACTION(0, Button_Dpad_Left, true);
		CONTROLS::DISABLE_CONTROL_ACTION(0, Button_Dpad_Right_2, true);
		CONTROLS::DISABLE_CONTROL_ACTION(0, Button_Dpad_Left_2, true);
		CONTROLS::DISABLE_CONTROL_ACTION(0, Button_Circle, true);
		CONTROLS::DISABLE_CONTROL_ACTION(0, Button_X, true);
		CONTROLS::SET_INPUT_EXCLUSIVE(0, Button_Cirlce_2);
		CONTROLS::SET_INPUT_EXCLUSIVE(0, Button_Dpad_Right);
		CONTROLS::SET_INPUT_EXCLUSIVE(0, Button_Dpad_Left);

		optionPress = leftPress = rightPress = leftHold = rightHold = upPress = downPress = squarePress = false;

		if (CONTROLS::IS_DISABLED_CONTROL_JUST_PRESSED(0, Button_Circle)) {
			if (currentMenu == mainMenu) {
				open = false;
			}
			else {
				submenuLevel--;
				currentMenu = lastSubmenu[submenuLevel];
				currentOption = lastOption[submenuLevel];
				if (colorEditing) {
					colorEditing = false;
				}
			}
			playSound("BACK");
		}
		else if (CONTROLS::IS_DISABLED_CONTROL_JUST_PRESSED(0, Button_Dpad_Up)) {
			upPress = true;
			currentOption--;
			if (currentOption < 1) {
				currentOption = optionCount;
			}
			playSound("NAV_UP_DOWN");
		}
		else if (CONTROLS::IS_DISABLED_CONTROL_JUST_PRESSED(0, Button_Dpad_Down)) {
			downPress = true;
			currentOption++;
			if (currentOption > optionCount) {
				currentOption = 1;
			}
			playSound("NAV_UP_DOWN");
		}
		else if (CONTROLS::IS_DISABLED_CONTROL_JUST_PRESSED(0, Button_Dpad_Right)) {
			rightPress = true;
		}
		else if (CONTROLS::IS_DISABLED_CONTROL_JUST_PRESSED(0, Button_Dpad_Left)) {
			leftPress = true;
		}
		else if (CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, Button_Dpad_Right)) {
			rightHold = true;
		}
		else if (CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, Button_Dpad_Left)) {
			leftHold = true;
		}
		else if (CONTROLS::IS_DISABLED_CONTROL_JUST_PRESSED(0, Button_Square)) {
			squarePress = true;
		}
		else if (CONTROLS::IS_DISABLED_CONTROL_JUST_PRESSED(0, Button_X)) {
			optionPress = true;
			playSound("SELECT");
		}
	}
	else {
		if (CONTROLS::IS_CONTROL_JUST_PRESSED(0, Button_Dpad_Right) && CONTROLS::IS_CONTROL_JUST_PRESSED(0, Button_Square)) {
			open = true;
			optionPress = false;
			submenuLevel = 0;
			currentMenu = mainMenu;
			currentOption = 1;
			playSound("YES");
		}
	}
}

void Menu::drawText(char* text, Vector2 pos, float scale, Font font, Color color, Alignment alignment, bool outline) {
	UI::SET_TEXT_COLOUR(color.r, color.g, color.b, color.a);
	UI::SET_TEXT_WRAP(0.0f, 1.0f);
	UI::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	UI::SET_TEXT_FONT(font);
	if (outline) {
		UI::SET_TEXT_OUTLINE();
	}
	if (alignment == Center) {
		UI::SET_TEXT_CENTRE(true);
	}
	else if (alignment == Right) {
		UI::SET_TEXT_RIGHT_JUSTIFY(true);
		UI::SET_TEXT_WRAP(0.0f, pos.x);
	}
	UI::SET_TEXT_SCALE(scale, scale);
	UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
	UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(text);
	UI::END_TEXT_COMMAND_DISPLAY_TEXT(pos.x, pos.y);
}
void Menu::drawCenterNotification(char* text, int duration) {
	UI::BEGIN_TEXT_COMMAND_PRINT("STRING");
	UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(text);
	UI::END_TEXT_COMMAND_PRINT(duration, 1);
}
void Menu::drawFeedNotification(char* text, char* subtitle, char* title) {
	UI::_SET_NOTIFICATION_TEXT_ENTRY("STRING");
	UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(text);
	UI::_SET_NOTIFICATION_MESSAGE_2("CHAR_SOCIAL_CLUB", "CHAR_SOCIAL_CLUB", true, 4, title, subtitle);
	UI::_DRAW_NOTIFICATION(false, true);
}

void Menu::setupInstructions() {
	instructionsHandle = GRAPHICS::REQUEST_SCALEFORM_MOVIE("instructional_buttons");
	GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(instructionsHandle, 255, 255, 255, 0);
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(instructionsHandle, "CLEAR_ALL");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(instructionsHandle, "SET_CLEAR_SPACE");
	GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(200);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();

	instructionCount = 0;
}
void Menu::addInstruction(ScaleformSymbol symbol, char* text) {
	if (!setupIntructionsThisFrame) {
		setupInstructions();
		setupIntructionsThisFrame = true;
	}

	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(instructionsHandle, "SET_DATA_SLOT");
	GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(instructionCount);
	GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(symbol);
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(text);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();

	instructionCount++;
}
void Menu::finishInstructions() {
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(instructionsHandle, "DRAW_INSTRUCTIONAL_BUTTONS");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(instructionsHandle, "SET_BACKGROUND_COLOUR");
	GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(instructionsColor.r);
	GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(instructionsColor.g);
	GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(instructionsColor.b);
	GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(instructionsColor.a);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void Menu::run() {
	optionCount = 0;
	tipText = nullptr;
	setupIntructionsThisFrame = xInstruction = squareInstruction = lrInstruction = false;

	colorEditing ? colorEditor() : currentMenu();

	// Draw banner top
	GRAPHICS::DRAW_RECT(0.825f, 0.1175f, 0.23f, 0.083f, bannerColor.r, bannerColor.g, bannerColor.b, bannerColor.a);
	drawText(title, { 0.825f, 0.1f }, 0.75f, titleFont, bannerTextColor, Center, true);

	// Draw banner bottom
	if (tipText) {
		int optionIndex = ((optionCount > maxOptions) ? maxOptions : optionCount) + 1;
		drawText(tipText, { 0.825f, optionIndex * 0.035f + 0.125f }, 0.4f, optionsFont, bannerTextColor, Center, true);
		GRAPHICS::DRAW_RECT(0.825f, ((optionIndex * 0.035f) + 0.1415f), 0.23f, 0.035f, bannerColor.r, bannerColor.g, bannerColor.b, bannerColor.a);
	}

	// Draw body
	if (optionCount > maxOptions) {
		GRAPHICS::DRAW_RECT(0.825f, (((maxOptions * 0.035f) / 2) + 0.159f), 0.23f, (maxOptions * 0.035f), bodyColor.r, bodyColor.g, bodyColor.b, bodyColor.a); // Body
		if (currentOption > maxOptions) {
			GRAPHICS::DRAW_RECT(0.825f, ((maxOptions * 0.035f) + 0.1415f), 0.23f, 0.035f, scrollerColor.r, scrollerColor.g, scrollerColor.b, scrollerColor.a); // Scroller
			GRAPHICS::DRAW_RECT(0.825f, 0.159f, 0.23f, 0.005f, indicatorColor.r, indicatorColor.g, indicatorColor.b, indicatorColor.a); // Up indicator
		}
		else {
			GRAPHICS::DRAW_RECT(0.825f, ((currentOption * 0.035f) + 0.1415f), 0.23f, 0.035f, scrollerColor.r, scrollerColor.g, scrollerColor.b, scrollerColor.a); // Scroller
		}
		if (currentOption != optionCount) {
			GRAPHICS::DRAW_RECT(0.825f, ((maxOptions * 0.035f) + 0.161f), 0.23f, 0.005f, indicatorColor.r, indicatorColor.g, indicatorColor.b, indicatorColor.a); // Down indicator
		}
	}
	else {
		GRAPHICS::DRAW_RECT(0.825f, (((optionCount * 0.035f) / 2) + 0.159f), 0.23f, (optionCount * 0.035f), bodyColor.r, bodyColor.g, bodyColor.b, bodyColor.a); // Body
		GRAPHICS::DRAW_RECT(0.825f, ((currentOption * 0.035f) + 0.1415f), 0.23f, 0.035f, scrollerColor.r, scrollerColor.g, scrollerColor.b, scrollerColor.a); // Scroller
	}

	// Draw instructions
	if (instructions) {
		if (xInstruction) {
			addInstruction(Scaleform_Button_X, "Select");
		}
		if (squareInstruction) {
			addInstruction(Scaleform_Button_Square, "Keyboard");
		}
		if (lrInstruction) {
			addInstruction(Scaleform_Button_Dpad_Left_Right, "Scroll");
		}
		addInstruction(Scaleform_Button_Dpad_Up_Down, "Scroll");
		addInstruction(Scaleform_Button_Circle, (currentMenu == mainMenu) ? "Close" : "Back");
		finishInstructions();
	}

	// Handle keyboard
	if (keyboardActive) {
		int keyboardStatus = GAMEPLAY::UPDATE_ONSCREEN_KEYBOARD();
		if (keyboardStatus == 1) {
			keyboardHandler(GAMEPLAY::GET_ONSCREEN_KEYBOARD_RESULT());
			keyboardActive = false;
		}
		else if (keyboardStatus == 2 || keyboardStatus == 3) {
			keyboardActive = false;
		}
	}
}

void Menu::changeSubmenu(Function submenu) {
	lastSubmenu[submenuLevel] = currentMenu;
	lastOption[submenuLevel] = currentOption;
	currentOption = 1;
	optionPress = false;
	currentMenu = submenu;
	submenuLevel++;
}

void Menu::openKeyboard(KeyboardHandler handler, int maxLength, char* defaultText) {
	GAMEPLAY::DISPLAY_ONSCREEN_KEYBOARD(0, "FMMC_KEY_TIP8", "", defaultText, "", "", "", maxLength);
	keyboardHandler = handler;
	keyboardActive = true;
}

Menu::scrollData<int> Menu::intScrollData;
Menu::scrollData<float> Menu::floatScrollData;
void Menu::intScrollKeyboardHandler(char* text) {
	int i = atoi(text);
	if (i <= intScrollData.max && i >= intScrollData.min) {
		*intScrollData.var = i;
	}
	else {
		char buffer[70];
		sprintf(buffer, "~r~Error: input must be between %i and %i", intScrollData.min, intScrollData.max);
		drawCenterNotification(buffer);
	}
}
void Menu::floatScrollKeyboardHandler(char* text) {
	float f = (float)atof(text);
	if (f <= floatScrollData.max && f >= floatScrollData.min) {
		*floatScrollData.var = f;
	}
	else {
		char buffer1[70];
		char buffer2[70];
		sprintf(buffer1, "~r~Error: input must be between %%.%if and %%.%if", floatScrollData.decimals, floatScrollData.decimals);
		sprintf(buffer2, buffer1, floatScrollData.min, floatScrollData.max);
		drawCenterNotification(buffer2);
	}
}

void Menu::banner(char* text) {
	title = text;
}

bool Menu::hovered() {
	return currentOption == optionCount;
}
bool Menu::pressed() {
	if (hovered()) {
		xInstruction = true;
		if (optionPress) {
			return true;
		}
	}
	return false;
}
bool Menu::scrolled() {
	if (hovered()) {
		lrInstruction = true;
		if (rightPress || leftPress || (fastScrolling && rightHold) || (fastScrolling && leftHold)) {
			return true;
		}
	}
	return false;
}

void Menu::positionMenuText(char* text, float xPos, Alignment alignment) {
	Color optionColor = hovered() ? optionsActiveColor : optionsInactiveColor;

	int optionIndex = 0;
	if (currentOption <= maxOptions && optionCount <= maxOptions) {
		optionIndex = optionCount;
	}
	else if ((optionCount > (currentOption - maxOptions)) && optionCount <= currentOption) {
		optionIndex = optionCount - (currentOption - maxOptions);
	}
	if (optionIndex != 0) {
		drawText(text, { xPos, optionIndex * 0.035f + 0.125f }, 0.4f, optionsFont, optionColor, alignment, false);
	}
}
Menu& Menu::option(char* text) {
	optionCount++;
	positionMenuText(text, 0.715f, Left);
	return *this;
}
void Menu::spacer(char* text) {
	char buffer[60];
	sprintf(buffer, "~italic~%s", text);

	optionCount++;
	positionMenuText(buffer, 0.825f, Center);

	if (hovered()) {
		if (upPress) {
			currentOption--;
		}
		else if (downPress) {
			currentOption++;
		}
	}
}
Menu& Menu::data(char* text) {
	positionMenuText(text, 0.935f, Right);
	return *this;
}
Menu& Menu::data(bool b) {
	return b ? data("~g~On") : data("~r~Off");
}
Menu& Menu::data(int i) {
	char buffer[30];
	sprintf(buffer, "%i", i);
	return data(buffer);
}
Menu& Menu::data(float f, int decimalPlaces) {
	char formatBuffer[10];
	char dataBuffer[30];
	sprintf(formatBuffer, "%%.%if", decimalPlaces);
	sprintf(dataBuffer, formatBuffer, f);
	return data(dataBuffer);
}

Menu& Menu::scroller(int *i, int min, int max, bool fast, bool keyboard) {
	char buffer[30];

	if (hovered()) {
		lrInstruction = true;
		fastScrolling = fast;
		if (rightPress || (rightHold && fast)) {
			playSound("NAV_UP_DOWN");
			if (*i >= max) {
				*i = min;
			}
			else {
				*i = *i + 1;
			}
		}
		else if (leftPress || (leftHold && fast)) {
			playSound("NAV_UP_DOWN");
			if (*i <= min) {
				*i = max;
			}
			else {
				*i = *i - 1;
			}
		}
		if (keyboard) {
			squareInstruction = true;
			if (squarePress) {
				intScrollData = { i, min, max, 0 };
				sprintf(buffer, "%i", max);
				openKeyboard(intScrollKeyboardHandler, strlen(buffer) + 1);
			}
		}
	}

	if (hovered()) {
		sprintf(buffer, "< %i >", *i);
		return data(buffer);
	}
	return data(*i);
}
Menu& Menu::scroller(float *f, float min, float max, float increment, int decimalPlaces, bool fast, bool keyboard) {
	char buffer1[30];

	if (hovered()) {
		lrInstruction = true;
		fastScrolling = fast;
		if (rightPress || (rightHold && fast)) {
			playSound("NAV_UP_DOWN");
			if (*f >= max) {
				*f = min;
			}
			else {
				*f = *f + increment;
			}
		}
		else if (leftPress || (leftHold && fast)) {
			playSound("NAV_UP_DOWN");
			if (*f <= min) {
				*f = max;
			}
			else {
				*f = *f - increment;
			}
		}
		if (keyboard) {
			squareInstruction = true;
			if (squarePress) {
				floatScrollData = { f, min, max, decimalPlaces };
				sprintf(buffer1, "%i", (int)max);
				openKeyboard(floatScrollKeyboardHandler, strlen(buffer1) + decimalPlaces + 1);
			}
		}
	}

	if (hovered()) {
		char buffer2[30];
		sprintf(buffer1, "< %%.%if >", decimalPlaces);
		sprintf(buffer2, buffer1, *f);
		return data(buffer2);
	}
	return data(*f, decimalPlaces);
}
Menu& Menu::scroller(char** textArray, int* index, int numItems, bool fast) {
	char buffer[60];

	numItems--;
	if (hovered()) {
		lrInstruction = true;
		fastScrolling = fast;
		if (rightPress || (rightHold && fast)) {
			playSound("NAV_UP_DOWN");
			if (*index >= numItems) {
				*index = 0;
			}
			else {
				*index = *index + 1;
			}
		}
		else if (leftPress || (leftHold && fast)) {
			playSound("NAV_UP_DOWN");
			if (*index <= 0) {
				*index = numItems;
			}
			else {
				*index = *index - 1;
			}
		}
	}

	if (hovered()) {
		sprintf(buffer, "< %s >", textArray[*index]);
		return data(buffer);
	}
	return data(textArray[*index]);
}
Menu& Menu::scroller(Font* font) {
	int fontID;
	switch (*font) {
	case Font_Chalet_Comprime:
		fontID = 3;
		break;
	case Font_Pricedown:
		fontID = 4;
		break;
	default:
		fontID = (int)*font;
	}

	char* fontNames[] = { "Chalet London", "House Script", "Monospace", "Chalet Comprime", "Pricedown" };
	if (scroller(fontNames, &fontID, 5, false).scrolled()) {
		switch (fontID) {
		case 3:
			*font = Font_Chalet_Comprime;
			break;
		case 4:
			*font = Font_Pricedown;
			break;
		default:
			*font = (Font)fontID;
		}
	}
}

Menu& Menu::toggle(bool *b) {
	if (pressed()) {
		*b = !*b;
	}
	return data(*b);
}
Menu& Menu::tip(char* text) {
	if (hovered()) {
		tipText = text;
	}
	return *this;
}
Menu& Menu::submenu(Function sub) {
	if (pressed()) {
		changeSubmenu(sub);
	}
	return *this;
}
Menu& Menu::keyboard(KeyboardHandler handler, int maxLength, char* defaultText) {
	if (pressed()) {
		openKeyboard(handler, maxLength, defaultText);
	}
	return *this;
}
Menu& Menu::vehicleSpawn(Hash vehicleHash) {
	if (pressed()) {
		vehicleToSpawn = vehicleHash;
	}
	return *this;
}

Menu& Menu::editColor(Color* color, bool editAlpha, Function onChangeCallback) {
	if (pressed()) {
		colorToEdit = color;
		editingAlpha = editAlpha;
		colorChangeCallback = onChangeCallback;
		changeSubmenu(nullptr);
		colorEditing = true;
	}
}
void Menu::colorEditor() {
	banner("Color Editor");
	option("Red").scroller(&colorToEdit->r, 0, 255, true, false);
	option("Green").scroller(&colorToEdit->g, 0, 255, true, false);
	option("Blue").scroller(&colorToEdit->b, 0, 255, true, false);
	if (editingAlpha) {
		option("Alpha").scroller(&colorToEdit->a, 0, 255, true, false);
	}
	if ((leftHold || rightHold) && colorChangeCallback != nullptr) {
		colorChangeCallback();
	}
}