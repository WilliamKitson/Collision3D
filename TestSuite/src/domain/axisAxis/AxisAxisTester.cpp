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
