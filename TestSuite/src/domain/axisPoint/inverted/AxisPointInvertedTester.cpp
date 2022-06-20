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
	output += testRight();

	return output;
}

std::string AxisPointInvertedTester::testLeft()
{
	return AxisPointInvertedLeftTest().test();
}

std::string AxisPointInvertedTester::testRight()
{
	return AxisPointInvertedRightTest().test();
}
