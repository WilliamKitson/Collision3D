#include "ImplimentationEvasionPointPointTest.h"

ImplimentationEvasionPointPointTest::ImplimentationEvasionPointPointTest()
	: unit{ new collision3D::Implimentation }
{
}

ImplimentationEvasionPointPointTest::~ImplimentationEvasionPointPointTest()
{
	delete unit;
	unit = nullptr;
}

std::string ImplimentationEvasionPointPointTest::test()
{
	collision3D::Point pointA{
		0.0f,
		0.0f,
		0.0f
	};

	collision3D::Point pointB{
		1.0f,
		1.0f,
		1.0f
	};

	unit->calculate(
		pointA,
		pointB
	);

	if (!unit->getCollision())
	{
		return std::string();
	}

	return "implimentation evasion point point test failed\n";
}
