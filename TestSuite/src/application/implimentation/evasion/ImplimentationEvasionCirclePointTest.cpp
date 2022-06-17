#include "ImplimentationEvasionCirclePointTest.h"

ImplimentationEvasionCirclePointTest::ImplimentationEvasionCirclePointTest()
	: unit{ new collision3D::Implimentation }
{
}

ImplimentationEvasionCirclePointTest::~ImplimentationEvasionCirclePointTest()
{
	delete unit;
	unit = nullptr;
}

std::string ImplimentationEvasionCirclePointTest::test()
{
	collision3D::Point point{
		1.0f,
		1.0f,
		1.0f
	};

	unit->calculate(
		collision3D::Circle(),
		point
	);

	if (!unit->getCollision())
	{
		return std::string();
	}

	return "implimentation evasion circle point test failed\n";
}
