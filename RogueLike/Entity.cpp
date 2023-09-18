#include "Entity.h"

void Entity::RenderEntity(SDL_Renderer* Rend)
{
	SDL_RenderCopy(Rend, EntityTexture, &SrcRect, &DestRect);
}

void Entity::MoveLeft()
{
	Position->AddX(-1 * Velocity->GetX());
}

void Entity::MoveRight()
{
	Position->AddX(Velocity->GetX());
}

void Entity::MoveUp()
{
	Position->AddY(-1 * Velocity->GetY());

}

void Entity::MoveDown()
{
	Position->AddY(Velocity->GetY());
}
