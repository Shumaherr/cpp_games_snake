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
public:
	Transform2D(int x, int y, Direction dir) :x(x), y(y), rotation(dir) {}
	Transform2D(int x, int y) :x(x), y(y) {}
	Transform2D(){}
};
class GameObject {
public:
	GameObject();
	GameObject(int x, int y);
	Transform2D Move(Transform2D deltaMove);
protected:
	Transform2D position; //Position of object
};
inline bool operator==(const Transform2D& left, const Transform2D& right) {
	return (left.x == right.x) && (left.y == right.y);
}