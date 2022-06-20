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
	output += testBottom();
	output += testTop();
	output += testBack();
	output += testFront();

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

std::string AxisPointInvertedTester::testBottom()
{
	return AxisPointInvertedBottomTest().test();
}

std::string AxisPointInvertedTester::testTop()
{
	return AxisPointInvertedTopTest().test();
}

std::string AxisPointInvertedTester::testBack()
{
	return AxisPointInvertedBackTest().test();
}

std::string AxisPointInvertedTester::testFront()
{
	return AxisPointInvertedFrontTest().test();
}
