#include "AxisCircleInvertedTester.h"

AxisCircleInvertedTester::AxisCircleInvertedTester()
{
}

AxisCircleInvertedTester::~AxisCircleInvertedTester()
{
}

std::string AxisCircleInvertedTester::test()
{
	std::string output{ "" };

	output += testLeft();
	output += testRight();

	return output;
}

std::string AxisCircleInvertedTester::testLeft()
{
	return AxisCircleInvertedLeftTest().test();
}

std::string AxisCircleInvertedTester::testRight()
{
	return AxisCircleInvertedRightTest().test();
}
