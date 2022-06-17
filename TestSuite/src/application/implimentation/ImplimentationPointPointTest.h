#pragma once

#include <string>

#include "Facade.h"
#include "Implimentation.h"

class ImplimentationPointPointTest
{
public:
	ImplimentationPointPointTest();
	~ImplimentationPointPointTest();

	std::string test();

private:
	collision3D::Facade* unit;
};
