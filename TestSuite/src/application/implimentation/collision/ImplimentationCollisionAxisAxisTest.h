#pragma once

#include <string>

#include "Facade.h"
#include "Implimentation.h"

class ImplimentationCollisionAxisAxisTest
{
public:
	ImplimentationCollisionAxisAxisTest();
	~ImplimentationCollisionAxisAxisTest();

	std::string test();

private:
	collision3D::Facade* unit;
};
