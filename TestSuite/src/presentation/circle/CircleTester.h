#pragma once

#include <string>

#include "CircleXposTest.h"
#include "CircleYposTest.h"
#include "CircleRadiusTest.h"

class CircleTester
{
public:
	CircleTester();
	~CircleTester();

	std::string test();

private:
	std::string testXpos();
	std::string testYpos();
	std::string testRadius();
};
