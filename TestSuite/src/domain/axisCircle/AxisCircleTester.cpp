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
	output += testCollision();
	output += testEvasion();

	return output;
}

std::string AxisCircleTester::testDefault()
{
	return AxisCircleDefaultTest().test();
}

std::string AxisCircleTester::testCollision()
{
	return AxisCircleCollisionTest().test();
}

std::string AxisCircleTester::testEvasion()
{
	return AxisCircleEvasionTester().test();
}
