#pragma once

#include <string>
#include "ImplimentationDefaultTest.h"

class ImplimentationTester
{
public:
	ImplimentationTester();
	~ImplimentationTester();

	std::string test();

private:
	std::string testDefault();
};
