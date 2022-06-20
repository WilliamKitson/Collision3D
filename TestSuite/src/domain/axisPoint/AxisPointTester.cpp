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

	return output;
}

std::string AxisPointTester::testDefault()
{
	return AxisPointDefaultTest().test();
}
