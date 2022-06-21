#include "AxisAxisTester.h"

AxisAxisTester::AxisAxisTester()
{
}

AxisAxisTester::~AxisAxisTester()
{
}

std::string AxisAxisTester::test()
{
	std::string output{ "" };

	output += testDefault();
	output += testCollision();
	output += testEvasion();
	output += testInverted();

	return output;
}

std::string AxisAxisTester::testDefault()
{
	return AxisAxisDefaultTest().test();
}

std::string AxisAxisTester::testCollision()
{
	return AxisAxisCollisionTest().test();
}

std::string AxisAxisTester::testEvasion()
{
	return AxisAxisEvasionTester().test();
}

std::string AxisAxisTester::testInverted()
{
	return AxisAxisInvertedTester().test();
}
