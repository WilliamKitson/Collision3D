#pragma once

#include <string>
#include "PointPoint.h"

class PointPointYposTest
{
public:
	PointPointYposTest();
	~PointPointYposTest();

	std::string test();

private:
	int successes();

private:
	int itterations;
};
