#pragma once
#include<SDL.h>
#include<SDL_image.h>

class Entity
{
public:
	Entity(float px, float py, SDL_Texture* ptex);
	float getX();
	float getY();
	SDL_Texture* getTex();
	SDL_Rect getCurrentFrame();

private:
	float x, y;
	SDL_Rect currentFrame;
	SDL_Texture* tex;
};