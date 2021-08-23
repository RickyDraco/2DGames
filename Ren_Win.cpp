#include<iostream>
#include<SDL.h>
#include<SDL_image.h>
#include"Ren_Win.h"

RenderWindow::RenderWindow(const char* title, int width, int height) 
	:window(NULL), renderer(NULL)
{
	window = SDL_CreateWindow(title, SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, width, height, SDL_WINDOW_SHOWN);			
	//this function returns a pointer to an sdl window

	if (window == NULL)
		std::cout << "Window failed to init. Error03: " << SDL_GetError() << std::endl;

	renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);		
	//render on window,
	//second index to a grapic driver(-1 means use the first one that satifies our needs)
	//if grapihics card is present use it.
}

SDL_Texture* RenderWindow::loadTexture(const char* filePath)
{
	SDL_Texture* texture = NULL;
	texture = IMG_LoadTexture(renderer, filePath);
	if (texture == NULL)
		std::cout << "Failed to load texture. Error04: " << SDL_GetError() << std::endl;

	return texture;
}

void RenderWindow::cleanUp()
{
	SDL_DestroyWindow(window);
}

void RenderWindow::clear()
{
	SDL_RenderClear(renderer);
}

void RenderWindow::render(SDL_Texture* tex)
{
	SDL_RenderCopy(renderer, tex, NULL, NULL);
	// The last 2 variables represents the viewable portion of the texture, NULL means to fill the entire screen.
}

void RenderWindow::display()
{
	SDL_RenderPresent(renderer);
}