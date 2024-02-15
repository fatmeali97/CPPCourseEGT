#pragma once
#include <SDL.h>
#include <SDL_image.h>
#include <SDL_ttf.h>


class Game {
public:
	Game();
	~Game();
	bool init(const char* title,
		int xpos,
		int ypos,
		int width,
		int height,
		int flags);
	void render();
	void update();
	void handleEvents();
	void clean();
	bool isRunning();

private:
	SDL_Window* window = NULL;
	SDL_Renderer* renderer = NULL;
	bool running;

	int heartPosY;
	int heartPosX;
	//SDL_Rect destX, destY;
	bool moveToRight = true;
	int heartHeight = 130;
	int heartWidht = 150;

	int currentFrame;
	bool anim_state = false;
	SDL_RendererFlip frameFlip = SDL_FLIP_NONE;
	int SpriteX = 0, SpriteY = 0;


};