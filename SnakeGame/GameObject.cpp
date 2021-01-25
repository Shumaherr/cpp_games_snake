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
		
	bool Transform2D::Equal(const Transform2D right)
	{	
			if (this->x == right.x && this->y == right.y)
			{
				return true;
			}
			return false;		
	}
	inline bool operator==(const Transform2D& left, const Transform2D& right) {
		return (left.x == right.x) && (left.y == right.y);
	}
