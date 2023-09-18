#pragma once
#include<iostream>
#include<vector>
#include<SDL.h>
#include<SDL_image.h>
#include<chrono>


class Renderer
{
private:

	int ScreenW;
	int ScreenH;

	SDL_WindowFlags WinFlag;
	int RendererIndex;

	bool Init(int ScreenWidth, int ScreenHeight, const char* WindowName, SDL_WindowFlags WindowFlag, int RendererIndex);

public:

	SDL_Renderer* _Renderer;
	SDL_Window* Window;

	int GetSW() { return this->ScreenW; }
	int GetSH() { return this->ScreenH; }

	void ChangeSW(int NewW) { this->ScreenW = NewW; };
	void ChangeSH(int NewH) { this->ScreenH = NewH; };


	Renderer(int ScreenW = 1920, int ScreenH = 1080, int RendererIndex = -1, SDL_WindowFlags WinFlag = SDL_WINDOW_FULLSCREEN_DESKTOP) :

		WinFlag(WinFlag),
		ScreenW(ScreenW),
		ScreenH(ScreenH),
		RendererIndex(RendererIndex)

	{
		if (!Init(this->ScreenW, this->ScreenH, "Limitless Engine", WinFlag, RendererIndex))
		{
			std::cerr << "Renderer2D couldnot load: " << SDL_GetError() << std::endl;
			return;
		}
	}

	~Renderer(); 

	static SDL_Texture* CreateTextureFromImage(SDL_Renderer* Renderer, const char* imagepath);

};

