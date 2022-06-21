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
