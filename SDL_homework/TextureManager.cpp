#include "TextureManager.h"

bool TextureManager::loadTexture(const char* fileName,
	std::string id,
	SDL_Renderer* ren)
{
	SDL_Surface* tempSurface = IMG_Load(fileName); // директорията към снимката

	if (tempSurface == 0)
	{
		return false;
	}

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, tempSurface);
	SDL_FreeSurface(tempSurface);

	if (tex != 0) {
		textureMap[id] = tex;
		return true;
	}

	return false; // something went wrong
}

void TextureManager::drawTexture(std::string id,
	SDL_Rect destRect,
	SDL_Renderer* ren,
	SDL_RendererFlip flip)
{
	
	SDL_RenderCopyEx(ren, textureMap[id], NULL, &destRect, 0, 0, flip);

}

void TextureManager::drawOneFrameFromTexture(std::string id, // id of texture to draw
	int x, int y, //window x, y
	int width, int height,  // img width and height
	int currrentRow,  // row starts from 1
	int currentFrame,
	SDL_Renderer* ren,
	SDL_RendererFlip flip) //flag to flip texture
{
	// currentFrame - коя  от картинките да вземе;
	// currrentRow - на кой ред е картинката;

	SDL_Rect srcRect;
	SDL_Rect destRect;
	srcRect.x = width * currentFrame;
	srcRect.y = height * (currrentRow - 1);
	srcRect.w = destRect.w = width;
	srcRect.h = destRect.h = height;
	destRect.x = x;
	destRect.y = y;

	SDL_RenderCopyEx(ren, textureMap[id], &srcRect, &destRect, 0, 0, flip);
}


TextureManager* TextureManager::instance = 0;