#include "GameObject.h"
#include "Snake.h"
#include <algorithm>

Snake::Snake()
{
}

Snake::Snake(int x, int y, int segmentRadius) : GameObject::GameObject(x,y) {
		direction = Direction::LEFT;
		Transform2D p1 = { 150,150 }; //TODO Refactor this
		p1.rotation = LEFT;
		Transform2D p2 = { 150 + 2 * segmentRadius, 150 };
		p2.rotation = LEFT;
		Transform2D p3 = { 150 + 4 * segmentRadius, 150 };
		p3.rotation = LEFT;
		Transform2D p4 = { 150 + 6 * segmentRadius, 150 };
		p4.rotation = LEFT;
		Transform2D p5 = { 150 + 8 * segmentRadius, 150 };
		p5.rotation = LEFT;
		segments.push_back(p1);
		segments.push_back(p2);
		segments.push_back(p3);
		segments.push_back(p4);
		segments.push_back(p5);
	}
	void Snake::ChangeDirection(Direction dir)
	{
		direction = dir;
		rotationPoints.push_back(Transform2D{ GetSegment(0).x, GetSegment(0).y, dir });
		segments[0].rotation = dir;
		canRotate = false;
	}
	int Snake::GetSegmentsCount()
	{
		return segments.size();
	}

	void Snake::AddSegment()
	{
		Transform2D newP = { segments[segments.size() - 1].x + 2 * segmentRadius, segments[segments.size() - 1].y };
		segments.push_back(newP);
	}

	Transform2D Snake::GetSegment(int n)
	{
		return segments[n];
	}

	void Snake::MoveSegment(int n, Transform2D newPos)
	{
		segments[n] = newPos;
	}

	Direction Snake::GetDirection()
	{
		return direction;
	}

	void Snake::RotateSegment(int i, Direction dir)
	{
		segments[i].rotation = dir;
	}

	std::vector<Transform2D> Snake::GetRotationPoints()
	{
		return rotationPoints;
	}

	void Snake::RemoveRotationPoint(Transform2D& point)
	{
		this->rotationPoints.erase(std::remove(rotationPoints.begin(), rotationPoints.end(), point), rotationPoints.end());
	}

	bool Snake::CanRotate()
	{
		return canRotate;
	}

	void Snake::CanRotate(bool can)
	{
		canRotate = can;
	}
