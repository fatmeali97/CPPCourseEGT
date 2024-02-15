#include "TextureManager.h"
#include <iostream>
using namespace std;

bool TextureManager::loadTexture(const char* fileName, std::string id, SDL_Renderer* ren) 
{
    SDL_Surface* tempSurface = IMG_Load(fileName);

    if (tempSurface == 0) {
        cout << "can't load image!" << endl;
        return false;
    }

    SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, tempSurface); 
    SDL_FreeSurface(tempSurface); 

    if (tex != 0) 
    {
        textureMap[id] = tex; 
        visible[id] = 0; 
        return true;
    }

    return false;
}

void TextureManager::drawTexture(std::string id, 
    SDL_Rect destRect,
    SDL_Renderer* ren,
    SDL_RendererFlip flip)
{
    if (visible[id]) // ако е труе;
    { 
        SDL_RenderCopyEx(ren, textureMap[id], NULL, &destRect, 0, 0, flip);
    }
    
}


void TextureManager::Visibility(std::string id) 
{

    bool state = visible[id];

    if (state)
    {
        state = false;
    }

    else
    {
        state = true;
    }

    visible[id] = state;

}


TextureManager* TextureManager::instance = 0;