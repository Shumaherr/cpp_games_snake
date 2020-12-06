#pragma once
#include "GameObject.h"
#include <vector>
enum Direction
{
	UP,
	RIGHT,
	DOWN,
	LEFT
};
class Snake : public GameObject  {
public:
	Snake();
	Snake(int x, int y, int segmentRadius);
	void ChangeDirection(Direction dir);
	int GetSegmentsCount();
	void AddSegment();
	Vector2D GetSegment(int n);
	void MoveSegment(int n, Vector2D newPos);
	Direction GetDirection();
private:
	Direction direction;
	std::vector<Vector2D> segments;
	int segmentRadius;
};