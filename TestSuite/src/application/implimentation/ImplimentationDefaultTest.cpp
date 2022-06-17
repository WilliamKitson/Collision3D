#include "ImplimentationDefaultTest.h"

ImplimentationDefaultTest::ImplimentationDefaultTest()
	: unit{ new collision3D::Implimentation }
{
}

ImplimentationDefaultTest::~ImplimentationDefaultTest()
{
	delete unit;
	unit = nullptr;
}

std::string ImplimentationDefaultTest::test()
{
	if (!unit->getCollision())
	{
		return std::string();
	}

	return "implimentation default test failed\n";
}
