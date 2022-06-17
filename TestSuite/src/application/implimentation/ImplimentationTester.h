#pragma once

#include <string>

#include "ImplimentationDefaultTest.h"
#include "ImplimentationPointPointTest.h"

class ImplimentationTester
{
public:
	ImplimentationTester();
	~ImplimentationTester();

	std::string test();

private:
	std::string testDefault();
	std::string testPointPoint();
};
