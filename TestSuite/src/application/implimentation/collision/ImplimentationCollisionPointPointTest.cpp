#include "ImplimentationCollisionPointPointTest.h"

ImplimentationCollisionPointPointTest::ImplimentationCollisionPointPointTest()
	: unit{ new collision3D::Implimentation }
{
}

ImplimentationCollisionPointPointTest::~ImplimentationCollisionPointPointTest()
{
	delete unit;
	unit = nullptr;
}

std::string ImplimentationCollisionPointPointTest::test()
{
	collision3D::Point point{
		1.0f,
		2.0f,
		3.0f
	};

	unit->calculate(
		point,
		point
	);

	if (unit->getCollision())
	{
		return std::string();
	}

	return "implimentation collision point point test failed\n";
}
