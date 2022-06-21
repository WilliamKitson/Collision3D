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

	return output;
}

std::string AxisAxisTester::testDefault()
{
	return AxisAxisDefaultTest().test();
}
