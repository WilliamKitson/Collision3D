#include "AxisCircleInvertedTester.h"

AxisCircleInvertedTester::AxisCircleInvertedTester()
{
}

AxisCircleInvertedTester::~AxisCircleInvertedTester()
{
}

std::string AxisCircleInvertedTester::test()
{
	std::string output{ "" };

	output += testCollision();

	return output;
}

std::string AxisCircleInvertedTester::testCollision()
{
	return AxisCircleInvertedCollisionTest().test();
}
