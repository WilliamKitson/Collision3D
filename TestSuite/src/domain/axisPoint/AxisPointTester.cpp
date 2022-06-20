#include "AxisPointTester.h"

AxisPointTester::AxisPointTester()
{
}

AxisPointTester::~AxisPointTester()
{
}

std::string AxisPointTester::test()
{
	std::string output{ "" };

	output += testDefault();
	output += testCollision();
	output += testEvasion();
	output += testInverted();

	return output;
}

std::string AxisPointTester::testDefault()
{
	return AxisPointDefaultTest().test();
}

std::string AxisPointTester::testCollision()
{
	return AxisPointCollisionTest().test();
}

std::string AxisPointTester::testEvasion()
{
	return AxisPointEvasionTester().test();
}

std::string AxisPointTester::testInverted()
{
	return AxisPointInvertedTester().test();
}
