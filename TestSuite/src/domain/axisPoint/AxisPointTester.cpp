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
