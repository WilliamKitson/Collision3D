#pragma once

#include <string>

#include "ImplimentationEvasionPointPointTest.h"
#include "ImplimentationEvasionCirclePointTest.h"
#include "ImplimentationEvasionCircleCircleTest.h"
#include "ImplimentationEvasionAxisPointTest.h"
#include "ImplimentationEvasionAxisCircleTest.h"
#include "ImplimentationEvasionAxisAxisTest.h"

class ImplimentationEvasionTester
{
public:
	ImplimentationEvasionTester();
	~ImplimentationEvasionTester();

	std::string test();

private:
	std::string testPointPoint();
	std::string testCirclePoint();
	std::string testCircleCircle();
	std::string testAxisPoint();
	std::string testAxisCircle();
	std::string testAxisAxis();
};
