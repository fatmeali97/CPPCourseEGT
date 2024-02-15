#pragma once
#include "Game.h"

class Shapes {
public:
    static void drawCircle(SDL_Renderer* renderer, int posX, 
        int posY, int radius);
 
    static void drawPentagon(SDL_Renderer* renderer, int posX,
        int posY, int side);
    static void drawHexagon(SDL_Renderer* renderer, int posX,
        int posY, int side);
    static void drawRectangleWithBorder(SDL_Renderer* renderer,
        int posX, int posY, int width, int height, int border);
    static int reguarPolygonSides;
    static SDL_Color col;
    static int rgb[];

 
};



