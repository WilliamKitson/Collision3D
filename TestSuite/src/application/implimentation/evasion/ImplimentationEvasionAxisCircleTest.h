#pragma once

#include <string>

#include "Facade.h"
#include "Implimentation.h"

class ImplimentationEvasionAxisCircleTest
{
public:
	ImplimentationEvasionAxisCircleTest();
	~ImplimentationEvasionAxisCircleTest();

	std::string test();

private:
	collision3D::Facade* unit;
};
