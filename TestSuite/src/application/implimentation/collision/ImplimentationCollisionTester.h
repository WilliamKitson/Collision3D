#pragma once

#include <string>
#include "ImplimentationCollisionPointPointTest.h"

class ImplimentationCollisionTester
{
public:
	ImplimentationCollisionTester();
	~ImplimentationCollisionTester();

	std::string test();

private:
	std::string testPointPoint();
};
