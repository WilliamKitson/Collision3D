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
	output += testBottom();
	output += testTop();
	output += testBack();

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

std::string AxisAxisInvertedABTester::testBottom()
{
	return AxisAxisInvertedABBottomTest().test();
}

std::string AxisAxisInvertedABTester::testTop()
{
	return AxisAxisInvertedABTopTest().test();
}

std::string AxisAxisInvertedABTester::testBack()
{
	return AxisAxisInvertedABBackTest().test();
}
