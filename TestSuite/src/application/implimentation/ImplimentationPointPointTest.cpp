#include "ImplimentationPointPointTest.h"

ImplimentationPointPointTest::ImplimentationPointPointTest()
	: unit{ new collision3D::Implimentation }
{
}

ImplimentationPointPointTest::~ImplimentationPointPointTest()
{
	delete unit;
	unit = nullptr;
}

std::string ImplimentationPointPointTest::test()
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

	return "implimentation point point test failed\n";
}
