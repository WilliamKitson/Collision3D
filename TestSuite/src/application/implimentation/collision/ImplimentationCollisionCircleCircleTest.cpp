#include "ImplimentationCollisionCircleCircleTest.h"

ImplimentationCollisionCircleCircleTest::ImplimentationCollisionCircleCircleTest()
	: unit{ new collision3D::Implimentation }
{
}

ImplimentationCollisionCircleCircleTest::~ImplimentationCollisionCircleCircleTest()
{
	delete unit;
	unit = nullptr;
}

std::string ImplimentationCollisionCircleCircleTest::test()
{
	unit->calculate(
		collision3D::Circle(),
		collision3D::Circle()
	);

	if (unit->getCollision())
	{
		return std::string();
	}

	return "implimentation collision circle circle test\n";
}
