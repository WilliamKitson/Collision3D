#pragma once

#include <string>

#include "ImplimentationEvasionPointPointTest.h"
#include "ImplimentationEvasionCirclePointTest.h"

class ImplimentationEvasionTester
{
public:
	ImplimentationEvasionTester();
	~ImplimentationEvasionTester();

	std::string test();

private:
	std::string testPointPoint();
	std::string testCirclePoint();
};
