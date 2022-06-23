#pragma once

#include <string>

#include "Facade.h"
#include "Implimentation.h"

class ImplimentationCollisionAxisCircleTest
{
public:
	ImplimentationCollisionAxisCircleTest();
	~ImplimentationCollisionAxisCircleTest();

	std::string test();

private:
	collision3D::Facade* unit;
};
