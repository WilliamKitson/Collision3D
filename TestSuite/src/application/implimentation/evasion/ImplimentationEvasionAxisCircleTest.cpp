#include "ImplimentationEvasionAxisCircleTest.h"

ImplimentationEvasionAxisCircleTest::ImplimentationEvasionAxisCircleTest()
	: unit{ new collision3D::Implimentation }
{
}

ImplimentationEvasionAxisCircleTest::~ImplimentationEvasionAxisCircleTest()
{
	delete unit;
	unit = nullptr;
}

std::string ImplimentationEvasionAxisCircleTest::test()
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
		collision3D::Circle()
	);

	if (!unit->getCollision())
	{
		return std::string();
	}

	return "implimentation evasion axis circle test failed\n";
}
