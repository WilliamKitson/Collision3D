#include "AxisAxisInvertedTester.h"

AxisAxisInvertedTester::AxisAxisInvertedTester()
{
}

AxisAxisInvertedTester::~AxisAxisInvertedTester()
{
}

std::string AxisAxisInvertedTester::test()
{
	std::string output{ "" };

	output += testAB();

	return output;
}

std::string AxisAxisInvertedTester::testAB()
{
	return AxisAxisInvertedABTester().test();
}
