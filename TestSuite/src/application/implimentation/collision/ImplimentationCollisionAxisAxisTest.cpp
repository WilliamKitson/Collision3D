#include "ImplimentationCollisionAxisAxisTest.h"

ImplimentationCollisionAxisAxisTest::ImplimentationCollisionAxisAxisTest()
	: unit{ new collision3D::Implimentation }
{
}

ImplimentationCollisionAxisAxisTest::~ImplimentationCollisionAxisAxisTest()
{
	delete unit;
	unit = nullptr;
}

std::string ImplimentationCollisionAxisAxisTest::test()
{
	unit->calculate(
		collision3D::Axis(),
		collision3D::Axis()
	);

	if (unit->getCollision())
	{
		return std::string();
	}

	return "implimentation collision axis axis test failed\n";
}
