#pragma once

#include <string>
#include "PointPoint.h"

class PointPointXposTest
{
public:
	PointPointXposTest();
	~PointPointXposTest();

	std::string test();

private:
	int successes();

private:
	int itterations;
};
