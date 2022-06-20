#pragma once

#include <string>

#include "Facade.h"
#include "Implimentation.h"

class ImplimentationCollisionAxisPointTest
{
public:
	ImplimentationCollisionAxisPointTest();
	~ImplimentationCollisionAxisPointTest();

	std::string test();

private:
	collision3D::Facade* unit;
};
