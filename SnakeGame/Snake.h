#pragma once
#include "GameObject.h"
#include <vector>

class Snake : public GameObject  {
public:
	Snake();
	Snake(int x, int y, int segmentRadius);
	void ChangeDirection(Direction dir);
	int GetSegmentsCount();
	void AddSegment();
	Transform2D* GetSegment(int n);
	void MoveSegment(int n, Transform2D newPos);
	Direction GetDirection();
	void RotateSegment(int i, Direction dir);
	std::vector<Transform2D> GetRotationPoints();
	void RemoveRotationPoint(Transform2D& point);
	bool CanRotate();
	void CanRotate(bool can);
	int GetSegmentRadius();
private:
	Direction direction;
	std::vector<Transform2D> segments;
	int segmentRadius;
	bool canRotate;
	std::vector<Transform2D> rotationPoints;
};