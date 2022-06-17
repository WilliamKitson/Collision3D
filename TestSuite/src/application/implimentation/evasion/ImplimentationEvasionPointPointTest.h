#pragma once

#include <string>

#include "Facade.h"
#include "Implimentation.h"

class ImplimentationEvasionPointPointTest
{
public:
	ImplimentationEvasionPointPointTest();
	~ImplimentationEvasionPointPointTest();

	std::string test();

private:
	collision3D::Facade* unit;
};
