#pragma once

#include <string>
#include "AxisCircle.h"

class AxisCircleCollisionLeftTest
{
public:
	AxisCircleCollisionLeftTest();
	~AxisCircleCollisionLeftTest();

	std::string test();

private:
	float distance(float, float);
};
