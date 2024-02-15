#include "Shapes.h"

/*Draw Circle using Midpoint Circle Algorithm
renderer - renderer context
centerX, centerY - center of circle
radius - radius in pixels
*/
void Shapes::drawCircle(SDL_Renderer* renderer, 
	int posX, int  posY, int radius)
{
	const int diameter = radius * 2;
	int x = (radius - 1);
	int y = 0;
	int tx = 1;
	int ty = 1;
	int error = tx - diameter;
	while (x >= y) {
		SDL_RenderDrawPoint(renderer, posX + x, posY - y);
		SDL_RenderDrawPoint(renderer, posX + x, posY + y);
		SDL_RenderDrawPoint(renderer, posX - x, posY - y);
		SDL_RenderDrawPoint(renderer, posX - x, posY + y);
		SDL_RenderDrawPoint(renderer, posX + y, posY - x);
		SDL_RenderDrawPoint(renderer, posX + y, posY + x);
		SDL_RenderDrawPoint(renderer, posX - y, posY - x);
		SDL_RenderDrawPoint(renderer, posX - y, posY + x);
		if (error <= 0) {
			y++;
			error += ty;
			ty += 2;
		}
		if (error > 0) {
			x--;
			tx += 2;
			error += tx - diameter;
		}
	}
}




void Shapes::drawPentagon(SDL_Renderer* renderer,
	int posX, int posY, int side)
{
	int x, y;
	const double PI = 3.14159265359;
	double angle = (2 * PI) / 5;
	double radius = side / (2 * sin(PI / 5));
	SDL_Point points[5 + 1];
	for (int i = 0; i < 5 + 1; ++i) {
		y = (int)round(sin(angle * i) * radius);
		x = (int)round(cos(angle * i) * radius);
		points[i] = { x + posX, y + posY };
	}
	const SDL_Point* pts = points;
	SDL_RenderDrawLines(renderer, pts, 5 + 1);
}

void Shapes::drawHexagon(SDL_Renderer* renderer,
	int posX, int posY, int side)
{
	int x, y;
	const double PI = 3.14159265359;
	double angle = (2 * PI) / 6;
	double radius = side / (2 * sin(PI / 6));
	SDL_Point points[6 + 1];
	for (int i = 0; i < 6 + 1; ++i) {
		y = (int)round(sin(angle * i) * radius);
		x = (int)round(cos(angle * i) * radius);
		points[i] = { x + posX, y + posY };
	}
	const SDL_Point* pts = points;
	SDL_RenderDrawLines(renderer, pts, 6 + 1);
}

void Shapes::drawRectangleWithBorder(SDL_Renderer* renderer,
	int posX, int posY, int width,
	int height, int border) 
{

	SDL_SetRenderDrawColor(renderer, 255,0, 0, 255);
	SDL_Rect outerRect = { posX, posY, width, height };
	SDL_RenderFillRect(renderer, &outerRect);

	SDL_SetRenderDrawColor(renderer, 255,
		255, 0, 255);
	SDL_Rect innerRect = { posX + border, posY + border,
		width - (2 * border), height - (2 * border) };
	SDL_RenderFillRect(renderer, &innerRect);

}
