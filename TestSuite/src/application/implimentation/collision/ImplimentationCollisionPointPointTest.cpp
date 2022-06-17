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
	unit->calculate(
		collision3D::Point(),
		collision3D::Point()
	);

	if (unit->getCollision())
	{
		return std::string();
	}

	return "implimentation collision point point test failed\n";
}
