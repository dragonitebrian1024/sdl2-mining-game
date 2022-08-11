#pragma once
#define SDL_MAIN_HANDLED
#include "SDL.h"
#include "SDL_image.h"
#include <iostream>
#include <string>
#include "InputManager.h"
#include "blocks.h"
#include "SDL_Mixer.h"
#include <random>
static SDL_Renderer* renderer;
static int testnumber;
class Game {
public:
	Game();
	~Game();

	void init(const char* title, int xpos, int ypos, int width, int height, bool fullscreen);

	void handleevents();
	void update();
	void render();
	void clean();
	bool running() { return isRunning; }
	void block_logic(SDL_Texture* blocktex, int blocknumber, SDL_Rect block);

	SDL_Rect drilll;

	SDL_Texture* drill;
	SDL_Rect drilll1;
	SDL_Rect drillhitbox;
	SDL_Rect drillhitterbox;
	SDL_Rect drill1hitbox;
	SDL_Rect drill1hitterbox;

	Mix_Chunk* hit;
	Mix_Chunk* win;
	Mix_Chunk* lose;
	Mix_Music* background;
	SDL_Texture* drill1;
	int drill1equip;
	int drill2equip;
	float timer1, timer2, time;
	float t, o, p;
	int howmanybroken = 0;
	int testnumber;
	bool blocktouched1;
	bool blocktouched2;
	bool blocktouched3;
	bool blocktouched4;
	bool blocktouched5;
	bool blocktouched6;//delete the "= falses"
	bool blocktouched7;
	bool blocktouched8;
	bool blocktouched9;
	bool blocktouched10;
	bool blocktouched11;
	bool blocktouched12;
	bool blocktouched13;
	bool blocktouched14;
	bool blocktouched15;
	bool blocktouched16;
	bool blocktouched17;
	bool blocktouched18;
	bool blocktouched19;
	bool blocktouched20;
	bool blocktouched21;
	bool blocktouched22;
	bool blocktouched23;
	bool blocktouched24;
	bool blocktouched25;
	bool blocktouched26;
	bool blocktouched27;
	bool blocktouched28;
	bool blocktouched29;
	bool blocktouched30;
	bool blocktouched31;
	bool blocktouched32;
	bool blocktouched33;
	bool blocktouched34;
	bool blocktouched35;
	bool blocktouched36;
	bool blocktouched37;
	bool blocktouched38;
	bool blocktouched39;
	bool blocktouched40;
	bool blocktouched41;
	bool blocktouched42;
	bool blocktouched43;
	bool blocktouched44;
	bool blocktouched45;
	bool blocktouched46;
	bool blocktouched47;
	bool blocktouched48;
	bool blocktouched49;
	bool blocktouched50;
	bool blocktouched51;
	bool blocktouched52;
	bool blocktouched53;
	bool blocktouched54;
	bool blocktouched55;
	bool blocktouched56;
	bool blocktouched57;
	bool blocktouched58;
	bool blocktouched59;
	bool blocktouched60;
	bool blocktouched61;
	bool blocktouched62;
	bool blocktouched63;
	bool blocktouched64;
	bool blocktouched65;
	bool blocktouched66;
	bool blocktouched67;
	bool blocktouched68;
	bool blocktouched69;
	bool blocktouched70;
	bool blocktouched71;
	bool blocktouched72;
	bool blocktouched73;
	bool blocktouched74;
	bool blocktouched75;
	bool blocktouched76;
	bool blocktouched77;
	bool blocktouched78;
	bool blocktouched79;
	bool blocktouched80;
	bool blocktouched81;
	bool blocktouched82;
	bool blocktouched83;
	bool blocktouched84;
	bool blocktouched85;
	bool blocktouched86;
	bool blocktouched87;
	bool blocktouched88;
	bool blocktouched89;
	bool blocktouched90;
	bool blocktouched91;
	bool blocktouched92;
	bool blocktouched93;
	bool blocktouched94;
	bool blocktouched95;
	bool blocktouched96;
	bool blocktouched97;

private:
	bool isRunning;
	bool lost;
	bool player1wins;
	bool player2wins;
	bool wins;
	SDL_Window* window;
	InputManager* inputmanager;
};