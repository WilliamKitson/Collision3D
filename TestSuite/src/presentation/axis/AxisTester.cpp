#include "AxisTester.h"

AxisTester::AxisTester()
{
}

AxisTester::~AxisTester()
{
}

std::string AxisTester::test()
{
	std::string output{ "" };

	output += testXpos();
	output += testYpos();
	output += testZpos();
	output += testWidth();
	output += testHeight();
	output += testDepth();

	return output;
}

std::string AxisTester::testXpos()
{
	return AxisXposTest().test();
}

std::string AxisTester::testYpos()
{
	return AxisYposTest().test();
}

std::string AxisTester::testZpos()
{
	return AxisZposTest().test();
}

std::string AxisTester::testWidth()
{
	return AxisWidthTest().test();
}

std::string AxisTester::testHeight()
{
	return AxisHeightTest().test();
}

std::string AxisTester::testDepth()
{
	return AxisDepthTest().test();
}
