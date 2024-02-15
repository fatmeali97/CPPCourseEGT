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


TextureManager* TextureManager::instance = 0;