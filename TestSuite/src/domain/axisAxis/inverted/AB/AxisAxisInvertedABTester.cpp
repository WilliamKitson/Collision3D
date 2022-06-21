#include "AxisAxisInvertedABTester.h"

AxisAxisInvertedABTester::AxisAxisInvertedABTester()
{
}

AxisAxisInvertedABTester::~AxisAxisInvertedABTester()
{
}

std::string AxisAxisInvertedABTester::test()
{
	std::string output{ "" };

	output += testLeft();
	output += testRight();

	return output;
}

std::string AxisAxisInvertedABTester::testLeft()
{
	return AxisAxisInvertedABLeftTest().test();
}

std::string AxisAxisInvertedABTester::testRight()
{
	return AxisAxisInvertedABRightTest().test();
}
