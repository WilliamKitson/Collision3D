#pragma once

#include <string>

#include "Facade.h"
#include "Implimentation.h"

class ImplimentationCollisionPointPointTest
{
public:
	ImplimentationCollisionPointPointTest();
	~ImplimentationCollisionPointPointTest();

	std::string test();

private:
	collision3D::Facade* unit;
};
