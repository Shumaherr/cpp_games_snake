#include "GameObject.h"

GameObject::GameObject()
{
}

GameObject::GameObject(int x, int y)
	{
		position.x = x;
		position.y = y;
		position.rotation = UP;
	}
	Transform2D GameObject::Move(Transform2D deltaMove)
	{
		position.x += deltaMove.x;
		position.y += deltaMove.y;
		return position;
	}
		
	bool Transform2D::Equal(const Transform2D right)
	{	
			if (this->x == right.x && this->y == right.y)
			{
				return true;
			}
			return false;		
	}
