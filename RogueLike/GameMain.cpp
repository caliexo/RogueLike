#include "GameMain.h"

void GameMain::Run()
{
	Renderer* Rend = new Renderer;
	Entity* Player = new Entity{ Rend->_Renderer, "KnightPngExample.png", 500, 500, 5, 5, 650, 490 };
	bool quit = false;
	SDL_Event event;

	while (!quit)
	{
		while (SDL_PollEvent(&event))
		{
			if (event.type == SDL_QUIT)
			{
				quit = true;
			}
		}


		SDL_RenderClear(Rend->_Renderer);

		Player->RenderEntity(Rend->_Renderer);

		SDL_RenderPresent(Rend->_Renderer);
	}

	delete Player;
	delete Rend;
}
