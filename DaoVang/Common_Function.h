
#ifndef COMMON_FUNCTION_H_
#define COMMON_FUNCTION_H_

#include <bits/stdc++.h>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_mixer.h>
#include <SDL2/SDL_ttf.h>
#include <SDL2/SDL_render.h>

#include "Data.h"
#include "BaseObject.h"
#include "TextObject.h"
#include "resProperties.h"

#define ID_DIAMOND_ALW	1.3
#define ID_SSTONE_ALW	1.5
#define ID_BSTONE_ALW   1.9
#define ID_BAG_ALW	1.7
#define ID_BGOLD_ALW	2.0
#define ID_SGOLD_ALW    1.0


static SDL_Window* g_window = NULL;
static SDL_Renderer* g_screen = NULL;
static SDL_Event g_event;

/// Screen

const std::string WINDOW_TITLE = "Đào vàng";
const int SCREEN_WIDTH = 1280;
const int SCREEN_HEIGHT = 720;
const int SCREEN_BPP = 32;
const int FPS = 60;
const double PRE_FRAME_TICKS = (double)1000 / FPS;


enum resImgId
{
	ID_STARTBG = 0,
	ID_LIGHT = 1,
	ID_STARTBUTTON = 2,
	ID_SSTONE = 3,
	ID_BSTONE = 4,
	ID_DIAMOND = 5,
	ID_BGOLD = 6,
	ID_BAG = 7,
	ID_GOALBG = 8,
	ID_GAMEBG = 9,
	ID_HOOK = 10,
	ID_LINE = 11,
	ID_SGOLD = 12,
	ID_GAMEBG1 = 13,
	ID_GAMEBG12 = 14,
	ID_DUONGRAY = 15,
	ID_COT1 = 16,
	ID_COT2 = 17,
	ID_ONGLAO = 18,
	ID_ONGLAO1,
	ID_ONGLAO2,
	ID_ONGLAO3,
	ID_ONGLAO4,
	ID_ONGLAO5,
	ID_ONGLAO6,
	ID_ONGLAO7,
	ID_ONGLAO8,
	ID_ONGLAO9,
	ID_ONGLAO10,
	ID_ONGLAO11,
	ID_ONGLAO12,
	ID_HOOK1
};

enum resSoundId
{
	ID_MOUSEIN = 0,
	ID_DIG = 1,
	ID_EXPLOSIVE = 2,
	ID_HIGHVAL = 3,
	ID_LOWVAL = 4,
	ID_NORVAL = 5,
	ID_PULL = 6,
	ID_SCORE1 = 7,
	ID_SCORE2 = 8
};

struct resPos
{
	int id;
	SDL_Point position;
};

struct levelInfo {
	int level;
	int levelGoal;
	int totalRes;
	int idBg;
	struct resPos* reses;
};
#endif // COMMON_FUNCTION_H_
