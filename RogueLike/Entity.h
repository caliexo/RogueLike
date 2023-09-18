#pragma once
#include<iostream>
#include<SDL.h>

#include"Renderer.h"
#include"Vector2D.h"

enum EntityTypes
{
	NPC = 1,
	Player = 2
};

class Entity
{
private:

	Vector2D* Position;
	Vector2D* Velocity;
	Vector2D* TextureSpritePosition;

	SDL_Texture* EntityTexture;

	SDL_Rect SrcRect;
	SDL_Rect DestRect;

public:

	Entity(SDL_Renderer* Rend, const char* TexturePath, float InitX = 0, float InitY = 0, float Vx = 5, float Vy = 5, int Width = 0, int Height = 0)
	{
		Position = new Vector2D{InitX, InitY};
		Velocity = new Vector2D{ Vx, Vy };
			
		TextureSpritePosition = new Vector2D;

		EntityTexture = Renderer::CreateTextureFromImage(Rend, TexturePath);

		if (EntityTexture == NULL)
		{
			std::cerr << "Failed to load character texture"<<std::endl;
		}

		SrcRect.x = static_cast<int>(TextureSpritePosition->GetX());
		SrcRect.y = static_cast<int>(TextureSpritePosition->GetY());
		SrcRect.w = Width;
		SrcRect.h = Height;

		DestRect.x = static_cast<int>(Position->GetX());
		DestRect.y = static_cast<int>(Position->GetY());
		DestRect.w = Width;
		DestRect.h = Height;
	}

	~Entity()
	{
		delete Position;
		delete Velocity;
	}

	void RenderEntity(SDL_Renderer* Rend);

	void MoveLeft();
	void MoveRight();
	void MoveUp();
	void MoveDown();
};

class Player
{
private:

public:

};