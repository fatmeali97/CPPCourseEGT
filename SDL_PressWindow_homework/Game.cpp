#include "Game.h"
#include <iostream>

bool Game::init(const char* title, int xpos, int ypos, int width, int height, int flags) 
{
	if (SDL_Init(SDL_INIT_EVERYTHING) == 0)
	{
		std::cout << "SDL running\n";

		window = SDL_CreateWindow(title, xpos, ypos, width, height, flags);
		if (window != 0) 
		{
			std::cout << "Window created\n";
			renderer = SDL_CreateRenderer(window, -1, 0);
			if (renderer != 0) 
			{
				std::cout << "Renderer created\n";
				SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
				TextureManager::Instance()->loadTexture("assets/first.jpg", "first", renderer);
				TextureManager::Instance()->loadTexture("assets/second.jpg", "second", renderer);
				TextureManager::Instance()->loadTexture("assets/thirth.jpg", "thirth", renderer);
				TextureManager::Instance()->loadTexture("assets/fourth.jpg", "fourth", renderer);

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
	std::cout << "Initialization successful\n";
	running = true;
	return true;
}

enum Quadrant { first = 0, second = 1, thirth = 10, fourth = 11, UNDEFINED = 100 };

Quadrant mouseDownIn = UNDEFINED; 
Quadrant mouseDownOut = UNDEFINED;

void Game::render() {
	SDL_SetRenderDrawColor(renderer, 242, 154, 207, 255);
	SDL_RenderClear(renderer); 

	int ww, wh;
	SDL_GetWindowSize(window, &ww, &wh); 


	TextureManager::Instance()->drawTexture("first", { 0, 0, ww / 2, wh / 2 }, renderer);
	TextureManager::Instance()->drawTexture("second", { ww / 2, 0, ww / 2, wh / 2 }, renderer);
	TextureManager::Instance()->drawTexture("thirth", { 0, wh / 2, ww / 2, wh / 2 }, renderer);
	TextureManager::Instance()->drawTexture("fourth", { ww / 2, wh / 2, ww / 2, wh / 2 }, renderer);


	SDL_SetRenderDrawColor(renderer, 251, 15, 65, 255);

	for (double i = 0.0; i <= 1.0; i += 0.5) 
	{
		SDL_RenderDrawLine(renderer, (ww - i) * i, 0, (ww - i) * i, wh);
		SDL_RenderDrawLine(renderer, 0, (wh - i) * i, ww, (wh - i) * i);
	}

	SDL_RenderPresent(renderer); 
}

void Game::handleEvents() {
	SDL_Event event;
	if (SDL_PollEvent(&event)) 
	{
		int mouseX, mouseY, ww, wh;
	
		SDL_GetWindowSize(window, &ww, &wh); 
		switch (event.type) 
		{
		case SDL_QUIT: running = false; break; 

		case SDL_MOUSEBUTTONDOWN: 
		{
			SDL_GetMouseState(&mouseX, &mouseY);

			if (event.button.button == SDL_BUTTON_LEFT) 
			{
				switch (((mouseX > ww / 2) + (mouseY > wh / 2) * 10)) 
				{
				case 0: 	
					mouseDownIn = first;
					break;
				case 1: 	
					mouseDownIn = second;
					break;
				case 10: 	
					mouseDownIn = thirth;
					break;
				case 11: 	
					mouseDownIn = fourth;
					break;
				default: break;
				}
			}
		}; break;

		case SDL_MOUSEBUTTONUP: {
			
			SDL_GetMouseState(&mouseX, &mouseY);

			if (event.button.button == SDL_BUTTON_LEFT) 
			{
				switch (((mouseX > ww / 2) + (mouseY > wh / 2) * 10))
				{
					case 0: 
					{
					mouseDownOut = first;
						if (mouseDownIn == mouseDownOut) 
						{
							TextureManager::Instance()->Visibility("first"); 
						}
					};
					break;

					case 1: 
					{
						mouseDownOut = second;
						if (mouseDownIn == mouseDownOut)
						{
							TextureManager::Instance()->Visibility("second");
						}
					};
					break;

					case 10:
					{
						mouseDownOut = thirth;
						if (mouseDownIn == mouseDownOut)
						{
							TextureManager::Instance()->Visibility("thirth"); 
						}
					};
					break;

					case 11: 
					{
						mouseDownOut = fourth;
						if (mouseDownIn == mouseDownOut)
						{
							TextureManager::Instance()->Visibility("fourth");
						}
					};
					break;


				default: 
					break;
				}
			}

		}; break;
		
		default:
			break;
		}
	}
}
void Game::update() {}

void Game::clean() 
{
	std::cout << "cleaning game\n";
	SDL_DestroyWindow(window);
	SDL_DestroyRenderer(renderer);
	SDL_Quit();
}
bool Game::isRunning()
{
	return Game::running;
}

Game::Game() 
{
	Game::window = NULL;
	Game::renderer = NULL;
	Game::running = true;

}
Game::~Game() {}