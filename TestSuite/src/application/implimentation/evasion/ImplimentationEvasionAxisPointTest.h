#pragma once

#include <string>

#include "Facade.h"
#include "Implimentation.h"

class ImplimentationEvasionAxisPointTest
{
public:
	ImplimentationEvasionAxisPointTest();
	~ImplimentationEvasionAxisPointTest();

	std::string test();

private:
	collision3D::Facade* unit;
};
