#pragma once

#include <string>

#include "Facade.h"
#include "Implimentation.h"

class ImplimentationCollisionCirclePointTest
{
public:
	ImplimentationCollisionCirclePointTest();
	~ImplimentationCollisionCirclePointTest();

	std::string test();

private:
	collision3D::Facade* unit;
};
