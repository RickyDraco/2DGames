#pragma once
#include<SDL.h>
#include<SDL_image.h>

#include"physics.h"

class Entity
{
public:
	Entity(vector2f ppos, SDL_Texture* ptex);
	vector2f& getPos();
	SDL_Texture* getTex();
	SDL_Rect getCurrentFrame();

private:
	vector2f pos;
	SDL_Rect currentFrame;
	SDL_Texture* tex;
	
};