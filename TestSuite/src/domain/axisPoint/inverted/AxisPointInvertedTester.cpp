#include "AxisPointInvertedTester.h"

AxisPointInvertedTester::AxisPointInvertedTester()
{
}

AxisPointInvertedTester::~AxisPointInvertedTester()
{
}

std::string AxisPointInvertedTester::test()
{
	std::string output{ "" };

	output += testLeft();

	return output;
}

std::string AxisPointInvertedTester::testLeft()
{
	return AxisPointInvertedLeftTest().test();
}
