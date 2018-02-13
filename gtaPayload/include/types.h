#pragma once

typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef unsigned long long u64;
typedef unsigned long int size_t;

typedef void* Void;
typedef int Any;
typedef unsigned int uint;
typedef int Hash;
typedef int BOOL;
typedef int Entity;
typedef int Player;
typedef int FireId;
typedef int Ped;
typedef int Vehicle;
typedef int Cam;
typedef int CarGenerator;
typedef int Group;
typedef int Train;
typedef int Pickup;
typedef int Object;
typedef int Weapon;
typedef int Interior;
typedef int Blip;
typedef int Texture;
typedef int TextureDict;
typedef int CoverPoint;
typedef int Camera;
typedef int TaskSequence;
typedef int ColourIndex;
typedef int Sphere;
typedef int ScrHandle;
typedef int Scaleform;

typedef struct {
	float x, y;
} Vector2;

typedef struct {
	float x, _padX, y, _padY, z, _padZ;
} Vector3;

typedef struct {
	float x, y, z, w;
} Vector4;

typedef struct {
	int r, g, b, a;
} Color;

enum Font {
	Font_Chalet_London = 0,
	Font_House_Script = 1,
	Font_Monospace = 2,
	Font_Chalet_Comprime = 4,
	Font_Pricedown = 7
};

enum Button {
	Button_Tpad = 0,
	Button_Tpad_X = 13,
	Button_Tpad_Y = 12,
	Button_X = 18,
	Button_Circle = 79,
	Button_Cirlce_2 = 56,
	Button_Triangle = 23,
	Button_Square = 22,
	Button_R1 = 44,
	Button_R2 = 11,
	Button_R3_X = 189,
	Button_R3_Y = 190,
	Button_R3_Right = 1,
	Button_R3_Down = 2,
	Button_R3_Left = 5,
	Button_R3_Up = 3,
	Button_R3_Push = 29,
	Button_L1 = 37,
	Button_L2 = 10,
	Button_L3_X = 187,
	Button_L3_Y = 188,
	Button_L3_Right = 9,
	Button_L3_Down = 8,
	Button_L3_Left = 34,
	Button_L3_Up = 32,
	Button_L3_Push = 36,
	Button_Dpad_Up = 27,
	Button_Dpad_Down = 19,
	Button_Dpad_Left = 15,
	Button_Dpad_Left_2 = 181,
	Button_Dpad_Right = 14,
	Button_Dpad_Right_2 = 182,
	Button_Options = 191
};

enum ScaleformSymbol {
	Scaleform_Arrow_Up,
	Scaleform_Arrow_Down,
	Scaleform_Arrow_Left,
	Scaleform_Arrow_Right,
	Scaleform_Button_Dpad_Up,
	Scaleform_Button_Dpad_Down,
	Scaleform_Button_Dpad_Right,
	Scaleform_Button_Dpad_Left,
	Scaleform_Button_Dpad_Blank,
	Scaleform_Button_Dpad_All,
	Scaleform_Button_Dpad_Up_Down,
	Scaleform_Button_Dpad_Left_Right,
	Scaleform_Button_L3_Up,
	Scaleform_Button_L3_Down,
	Scaleform_Button_L3_Left,
	Scaleform_Button_L3_Right,
	Scaleform_Button_L3,
	Scaleform_Button_L3_All,
	Scaleform_Button_L3_Up_Down,
	Scaleform_Button_L3_Left_Right,
	Scaleform_Button_L3_Rotate,
	Scaleform_Button_R3_Up,
	Scaleform_Button_R3_Down,
	Scaleform_Button_R3_Left,
	Scaleform_Button_R3_Right,
	Scaleform_Button_R3,
	Scaleform_Button_R3_All,
	Scaleform_Button_R3_Up_Down,
	Scaleform_Button_R3_Left_Right,
	Scaleform_Button_R3_Rotate,
	Scaleform_Button_X,
	Scaleform_Button_Circle,
	Scaleform_Button_Square,
	Scaleform_Button_Triangle,
	Scaleform_Button_L1,
	Scaleform_Button_L2,
	Scaleform_Button_R1,
	Scaleform_Button_R2,
	Scaleform_Button_Start,
	Scaleform_Button_Options,
	Scaleform_Red_Box,
	Scaleform_Red_Box_1,
	Scaleform_Red_Box_2,
	Scaleform_Red_Box_3,
	Scaleform_Loading_Half_Circle_Left,
	Scaleform_Arrow_Up_Down,
	Scaleform_Arrow_Left_Right,
	Scaleform_Arrow_All,
	Scaleform_Loading_Half_Circle_Left_2,
	Scaleform_Save_Half_Circle_Left,
	Scaleform_Loading_Half_Circle_Right,
};