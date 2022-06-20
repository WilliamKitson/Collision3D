#include "ImplimentationEvasionCircleCircleTest.h"

ImplimentationEvasionCircleCircleTest::ImplimentationEvasionCircleCircleTest()
	: unit{ new collision3D::Implimentation }
{
}

ImplimentationEvasionCircleCircleTest::~ImplimentationEvasionCircleCircleTest()
{
	delete unit;
	unit = nullptr;
}

std::string ImplimentationEvasionCircleCircleTest::test()
{
	collision3D::Circle circle{
		1.0f,
		1.0f,
		1.0f,
		0.0f
	};

	unit->calculate(
		collision3D::Circle(),
		circle
	);

	if (!unit->getCollision())
	{
		return std::string();
	}

	return "implimentation evasion circle circle test failed\n";
}
