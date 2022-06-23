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

	return output;
}

std::string AxisCircleInvertedTester::testLeft()
{
	return AxisCircleInvertedLeftTest().test();
}
