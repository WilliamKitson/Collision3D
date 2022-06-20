#pragma once

#include <string>

#include "Facade.h"
#include "Implimentation.h"

class ImplimentationCollisionCircleCircleTest
{
public:
	ImplimentationCollisionCircleCircleTest();
	~ImplimentationCollisionCircleCircleTest();

	std::string test();

private:
	collision3D::Facade* unit;
};
