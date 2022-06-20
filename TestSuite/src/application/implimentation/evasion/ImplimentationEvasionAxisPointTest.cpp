#include "ImplimentationEvasionAxisPointTest.h"

ImplimentationEvasionAxisPointTest::ImplimentationEvasionAxisPointTest()
	: unit{ new collision3D::Implimentation }
{
}

ImplimentationEvasionAxisPointTest::~ImplimentationEvasionAxisPointTest()
{
	delete unit;
	unit = nullptr;
}

std::string ImplimentationEvasionAxisPointTest::test()
{
	collision3D::Point point{
		1.0f,
		1.0f,
		1.0f
	};

	unit->calculate(
		collision3D::Axis(),
		point
	);

	if (!unit->getCollision())
	{
		return std::string();
	}

	return "implimentation evasion axis point test failed\n";
}
