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
	collision3D::Point point{
		1.0f,
		1.0f,
		1.0f
	};

	unit->calculate(
		point,
		collision3D::Point()
	);

	if (!unit->getCollision())
	{
		return std::string();
	}

	return "implimentation evasion point point test failed\n";
}
