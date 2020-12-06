#include "GameObject.h"

GameObject::GameObject()
{
}

GameObject::GameObject(int x, int y)
	{
		this->position.x = x;
		this->position.y = y;
	}
	Vector2D GameObject::Move(Vector2D deltaMove)
	{
		this->position.x += deltaMove.x;
		this->position.y += deltaMove.y;
		return this->position;
	}
		
	