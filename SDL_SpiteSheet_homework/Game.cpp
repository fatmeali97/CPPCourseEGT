//Game.cpp
#include "Game.h"
#include "TextureManager.h"
#include <iostream>

bool Game::init(const char* title, int xpos, int ypos, int width, int height, int flags) {

	if (SDL_Init(SDL_INIT_EVERYTHING) == 0) {
		std::cout << "SDL init success\n";

		window = SDL_CreateWindow(title, xpos, ypos, width, height, flags);
		if (window != 0) //window init success
		{
			std::cout << "window creation success\n";
			renderer = SDL_CreateRenderer(window, -1, 0);
			if (renderer != 0) //renderer init success
			{
				std::cout << "renderer creation success\n";
				SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);


				TextureManager::Instance()->loadTexture("./assets/tup_tup.png",
					"heart",
					renderer);
				TextureManager::Instance()->loadTexture("./assets/adventurer_sprite_sheet_v1.1.png",
					"sprite_sheet",
					renderer);


			}
			else {
				std::cout << "renderer init failed\n";
				return false;
			}
		}
		else {
			std::cout << "window init failed\n";
			return false;
		}
	}
	else {
		std::cout << "SDL init fail\n";
		return false;
	}
	std::cout << "init success\n";
	running = true;
	return true;
}



void Game::render() {
	SDL_RenderClear(renderer);

	int ww, wh;
	SDL_GetWindowSize(window, &ww, &wh);


	TextureManager::Instance()->drawTexture("heart", (ww / 2) - heartWidht / 2 ,
		(wh / 2) - heartHeight / 2 ,130 , 120, renderer);

	TextureManager::Instance()->drawOneFrameFromTexture
	("sprite_sheet", SpriteX, SpriteY, 32, 32, 1,
		currentFrame, renderer, frameFlip);

	SDL_RenderPresent(renderer);
}

void Game::handleEvents()
{
	SDL_Event event;
	if (SDL_PollEvent(&event))
	{
		switch (event.type)
		{
		case SDL_QUIT: running = false; break;
		case SDL_KEYDOWN:
		{
			if (event.key.keysym.sym == SDLK_LEFT)
			{
				SpriteX--;
			}
			if (event.key.keysym.sym == SDLK_RIGHT)
			{
				SpriteX++;

			}
			if (event.key.keysym.sym == SDLK_UP)
			{
				SpriteY--;

			}
			if (event.key.keysym.sym == SDLK_DOWN)
			{
				SpriteY++;

			}
		}; break;

		default: break;
		}
	}
}

void Game::update()
{
	int ww, wh;
	SDL_GetWindowSize(window, &ww, &wh);

	int FramesInSpriteSheet = 13;
	int speed = 70; 

	currentFrame = int(((SDL_GetTicks() / speed) % FramesInSpriteSheet));
	


}

void Game::clean()
{
	std::cout << "cleaning game\n";
	SDL_DestroyWindow(window);
	SDL_DestroyRenderer(renderer);
	SDL_Quit();
}

bool Game::isRunning() {
	return Game::running;
}



Game::Game() {
	Game::window = NULL;
	Game::renderer = NULL;
	Game::running = true;
	Game::heartPosX = 0;
	Game::heartPosX = 0;

}

Game::~Game() {
	delete window;
	delete renderer;
}