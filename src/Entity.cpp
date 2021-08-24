#include<iostream>
#include<SDL.h>
#include<SDL_image.h>

#include"Entity.h"

Entity::Entity(vector2f ppos, SDL_Texture* ptex): pos(ppos), tex(ptex)
{
	currentFrame.x = 0;
	currentFrame.y = 0;
	currentFrame.w = 1920;
	currentFrame.h = 1080;
}

vector2f& Entity::getPos()
{
	return pos;
}

SDL_Texture* Entity::getTex()
{
	return tex;
}

SDL_Rect Entity::getCurrentFrame()
{
	return currentFrame;
}