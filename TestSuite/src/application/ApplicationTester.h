#pragma once

#include <string>
#include "implimentation/ImplimentationTester.h"

class ApplicationTester
{
public:
	ApplicationTester();
	~ApplicationTester();

	std::string test();

private:
	std::string testImplimentation();
};
