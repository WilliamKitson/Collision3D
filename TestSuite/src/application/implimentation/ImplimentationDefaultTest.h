#pragma once

#include <string>

#include "Facade.h"
#include "Implimentation.h"

class ImplimentationDefaultTest
{
public:
	ImplimentationDefaultTest();
	~ImplimentationDefaultTest();

	std::string test();

private:
	collision3D::Facade* unit;
};
