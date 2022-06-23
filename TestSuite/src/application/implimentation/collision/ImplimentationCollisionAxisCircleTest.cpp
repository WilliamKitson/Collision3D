#include "ImplimentationCollisionAxisCircleTest.h"

ImplimentationCollisionAxisCircleTest::ImplimentationCollisionAxisCircleTest()
	: unit{ new collision3D::Implimentation }
{
}

ImplimentationCollisionAxisCircleTest::~ImplimentationCollisionAxisCircleTest()
{
	delete unit;
	unit = nullptr;
}

std::string ImplimentationCollisionAxisCircleTest::test()
{
	unit->calculate(
		collision3D::Axis(),
		collision3D::Circle()
	);

	if (unit->getCollision())
	{
		return std::string();
	}

	return "implimentation collision axis circle test failed\n";
}
