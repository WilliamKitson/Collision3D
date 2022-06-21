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
	output += testBA();

	return output;
}

std::string AxisAxisInvertedTester::testAB()
{
	return AxisAxisInvertedABTester().test();
}

std::string AxisAxisInvertedTester::testBA()
{
	return AxisAxisInvertedBATester().test();
}
