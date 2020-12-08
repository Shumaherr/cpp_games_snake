#include "GameObject.h"

GameObject::GameObject()
{
}

GameObject::GameObject(int x, int y)
	{
		this->position.x = x;
		this->position.y = y;
		this->position.rotation = UP;
	}
	Transform2D GameObject::Move(Transform2D deltaMove)
	{
		this->position.x += deltaMove.x;
		this->position.y += deltaMove.y;
		return this->position;
	}
		
	