#include "ImplimentationEvasionAxisAxisTest.h"

ImplimentationEvasionAxisAxisTest::ImplimentationEvasionAxisAxisTest()
	:unit{ new collision3D::Implimentation }
{
}

ImplimentationEvasionAxisAxisTest::~ImplimentationEvasionAxisAxisTest()
{
	delete unit;
	unit = nullptr;
}

std::string ImplimentationEvasionAxisAxisTest::test()
{
	collision3D::Axis axis{
		1.0f,
		1.0f,
		1.0f,
		1.0f,
		1.0f,
		1.0f
	};

	unit->calculate(
		axis,
		collision3D::Axis()
	);

	if (!unit->getCollision())
	{
		return std::string();
	}

	return "implimentation evasion axis axis test failed\n";
}
