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

	return output;
}

std::string AxisAxisInvertedABTester::testLeft()
{
	return AxisAxisInvertedABLeftTest().test();
}
