#pragma once

#include <string>

#include "Facade.h"
#include "Implimentation.h"

class ImplimentationEvasionCirclePointTest
{
public:
	ImplimentationEvasionCirclePointTest();
	~ImplimentationEvasionCirclePointTest();

	std::string test();

private:
	collision3D::Facade* unit;
};
