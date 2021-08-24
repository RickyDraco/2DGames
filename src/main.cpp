#include<iostream>
#include<vector>
#include<SDL.h>
#include<SDL_image.h>

#include"Ren_Win.h"
#include"Entity.h"
#include"physics.h"

int main(int argc, char* args[])
{
	if (SDL_Init(SDL_INIT_VIDEO) > 0)
		std::cout << "SDL could not initilize. SDL Error01: " << SDL_GetError() << std::endl;

	if (!IMG_Init(IMG_INIT_PNG))
		std::cout << "Image could not initilize. SDL Error02: " << SDL_GetError() << std::endl;

	RenderWindow window("Space Man Ricky", 1280, 720);

	SDL_Texture* backgroundTexture = window.loadTexture("res/gfx/graveyard.png");

	std::vector<Entity> entities
	{
		Entity(vector2f(0, 0), backgroundTexture),
		//Entity(200, 100, backgroundTexture)
	};

	bool GameRunning = true;
	SDL_Event event;

	while (GameRunning)
	{
		while (SDL_PollEvent(&event))										//PollEvent removes next event from the event stack and return 1. If no event are left it returns 0.
		{
			if (event.type == SDL_QUIT)
				GameRunning = false;
		}
		window.clear();
		for(Entity& e : entities)
			window.render(e);

		window.display();
	}

	window.cleanUp();
	SDL_Quit();

	return 0;
}