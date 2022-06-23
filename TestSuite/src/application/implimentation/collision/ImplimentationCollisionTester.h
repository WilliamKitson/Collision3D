#pragma once

#include <string>

#include "ImplimentationCollisionPointPointTest.h"
#include "ImplimentationCollisionCirclePointTest.h"
#include "ImplimentationCollisionCircleCircleTest.h"
#include "ImplimentationCollisionAxisPointTest.h"
#include "ImplimentationCollisionAxisCircleTest.h"
#include "ImplimentationCollisionAxisAxisTest.h"

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
	std::string testAxisPoint();
	std::string testAxisCircle();
	std::string testAxisAxis();
};
