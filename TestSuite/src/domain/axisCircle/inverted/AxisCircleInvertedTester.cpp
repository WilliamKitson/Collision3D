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
	output += testEvasion();

	return output;
}

std::string AxisCircleInvertedTester::testCollision()
{
	return AxisCircleInvertedCollisionTest().test();
}

std::string AxisCircleInvertedTester::testEvasion()
{
	return AxisCircleInvertedEvasionTest().test();
}
