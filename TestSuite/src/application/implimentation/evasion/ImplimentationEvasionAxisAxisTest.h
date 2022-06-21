#pragma once

#include <string>

#include "Facade.h"
#include "Implimentation.h"

class ImplimentationEvasionAxisAxisTest
{
public:
	ImplimentationEvasionAxisAxisTest();
	~ImplimentationEvasionAxisAxisTest();

	std::string test();

private:
	collision3D::Facade* unit;
};
