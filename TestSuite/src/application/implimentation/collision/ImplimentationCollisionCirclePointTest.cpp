#include "ImplimentationCollisionCirclePointTest.h"

ImplimentationCollisionCirclePointTest::ImplimentationCollisionCirclePointTest()
	: unit{ new collision3D::Implimentation }
{
}

ImplimentationCollisionCirclePointTest::~ImplimentationCollisionCirclePointTest()
{
	delete unit;
	unit = nullptr;
}

std::string ImplimentationCollisionCirclePointTest::test()
{
	unit->calculate(
		collision3D::Circle(),
		collision3D::Point()
	);

	if (unit->getCollision())
	{
		return std::string();
	}

	return "implimentation collision circle point test failed\n";
}
