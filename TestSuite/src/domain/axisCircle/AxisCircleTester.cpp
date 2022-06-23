#include "AxisCircleTester.h"

AxisCircleTester::AxisCircleTester()
{
}

AxisCircleTester::~AxisCircleTester()
{
}

std::string AxisCircleTester::test()
{
	std::string output{ "" };

	output += testDefault();
	output += testEvasion();
	output += testCollision();

	return output;
}

std::string AxisCircleTester::testDefault()
{
	return AxisCircleDefaultTest().test();
}

std::string AxisCircleTester::testEvasion()
{
	return AxisCircleEvasionTest().test();
}

std::string AxisCircleTester::testCollision()
{
	return AxisCircleCollisionTester().test();
}
