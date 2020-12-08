#pragma once
#include <vector>

enum Direction
{
	UP,
	RIGHT,
	DOWN,
	LEFT
};

struct Transform2D
{
	int x, y;
	Direction rotation;

};
class GameObject {
public:
	GameObject();
	GameObject(int x, int y);
	Transform2D Move(Transform2D deltaMove);
protected:
	Transform2D position; //Position of object
};