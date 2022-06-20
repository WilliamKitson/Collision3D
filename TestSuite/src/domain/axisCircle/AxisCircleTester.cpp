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

	return output;
}

std::string AxisCircleTester::testDefault()
{
	return AxisCircleDefaultTest().test();
}
