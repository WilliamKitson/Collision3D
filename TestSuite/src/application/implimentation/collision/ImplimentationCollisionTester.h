#pragma once

#include <string>

#include "ImplimentationCollisionPointPointTest.h"
#include "ImplimentationCollisionCirclePointTest.h"
#include "ImplimentationCollisionCircleCircleTest.h"

class ImplimentationCollisionTester
{
public:
	ImplimentationCollisionTester();
	~ImplimentationCollisionTester();

	std::string test();

private:
	std::string testPointPoint();
	std::string testCirclePoint();
	std::string testCircleCircle();
};
