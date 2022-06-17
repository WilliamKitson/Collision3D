#pragma once

#include <string>
#include "ImplimentationEvasionPointPointTest.h"

class ImplimentationEvasionTester
{
public:
	ImplimentationEvasionTester();
	~ImplimentationEvasionTester();

	std::string test();

private:
	std::string testPointPoint();
};
