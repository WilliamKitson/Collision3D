#include "ImplimentationCollisionAxisPointTest.h"

ImplimentationCollisionAxisPointTest::ImplimentationCollisionAxisPointTest()
	: unit{ new collision3D::Implimentation }
{
}

ImplimentationCollisionAxisPointTest::~ImplimentationCollisionAxisPointTest()
{
	delete unit;
	unit = nullptr;
}

std::string ImplimentationCollisionAxisPointTest::test()
{
	unit->calculate(
		collision3D::Axis(),
		collision3D::Point()
	);

	if (unit->getCollision())
	{
		return std::string();
	}

	return "implimentation collision axis point test failed\n";
}
