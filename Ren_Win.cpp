#include<iostream>
#include<SDL.h>
#include<SDL_image.h>
#include"Ren_Win.h"

render_window::render_window(const char* title, int width, int height) 
	:window(NULL), renderer(NULL)
{
	window = SDL_CreateWindow(title, SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, width, height, SDL_WINDOW_SHOWN);			
	//this function returns a pointer to an sdl window

	if (window == NULL)
		std::cout << "Window failed to init. Error: " << SDL_GetError() << std::endl;

	renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);		
	//render on window,
	//second index to a grapic driver(-1 means use the first one that satifies our needs)
	//if grapihics card is present use it.

}

void render_window::cleanUp()
{
	SDL_DestroyWindow(window);
}