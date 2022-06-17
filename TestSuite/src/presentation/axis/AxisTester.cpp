#include "AxisTester.h"

AxisTester::AxisTester()
{
}

AxisTester::~AxisTester()
{
}

std::string AxisTester::test()
{
	std::string failures{ "" };

	failures += testXpos();
	failures += testYpos();
	failures += testWidth();
	failures += testHeight();

	return failures;
}

std::string AxisTester::testXpos()
{
	return AxisXposTest().test();
}

std::string AxisTester::testYpos()
{
	return AxisYposTest().test();
}

std::string AxisTester::testWidth()
{
	return AxisWidthTest().test();
}

std::string AxisTester::testHeight()
{
	return AxisHeightTest().test();
}
