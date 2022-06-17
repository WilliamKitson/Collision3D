#pragma once

#include <string>
#include "PointPoint.h"

class PointPointZposTest
{
public:
	PointPointZposTest();
	~PointPointZposTest();

	std::string test();

private:
	int successes();

private:
	int itterations;
};
