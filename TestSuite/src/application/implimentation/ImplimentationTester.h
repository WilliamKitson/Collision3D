#pragma once

#include <string>

#include "ImplimentationDefaultTest.h"
#include "collision/ImplimentationCollisionTester.h"
#include "evasion/ImplimentationEvasionTester.h"

class ImplimentationTester
{
public:
	ImplimentationTester();
	~ImplimentationTester();

	std::string test();

private:
	std::string testDefault();
	std::string testCollision();
	std::string testEvasion();
};
