#pragma once
struct Vector2D
{
	int x, y;
};
class GameObject {
public:
	GameObject();
	GameObject(int x, int y);
	Vector2D Move(Vector2D deltaMove);
private:
	Vector2D position; //Position of object

};