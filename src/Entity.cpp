#include<iostream>
#include<SDL.h>
#include<SDL_image.h>

#include"Entity.h"

Entity::Entity(float px, float py, SDL_Texture* ptex): x(px), y(py), tex(ptex)
{
	currentFrame.x = 0;
	currentFrame.y = 0;
	currentFrame.w = 1920;
	currentFrame.h = 1080;
}

float Entity::getX()
{
	return x;
}

float Entity::getY()
{
	return y;
}

SDL_Texture* Entity::getTex()
{
	return tex;
}

SDL_Rect Entity::getCurrentFrame()
{
	return currentFrame;
}