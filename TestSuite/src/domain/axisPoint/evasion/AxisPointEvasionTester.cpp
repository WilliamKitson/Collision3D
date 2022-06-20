#include "AxisPointEvasionTester.h"

AxisPointEvasionTester::AxisPointEvasionTester()
{
}

AxisPointEvasionTester::~AxisPointEvasionTester()
{
}

std::string AxisPointEvasionTester::test()
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

std::string AxisPointEvasionTester::testLeft()
{
	return AxisPointEvasionLeftTest().test();
}

std::string AxisPointEvasionTester::testRight()
{
	return AxisPointEvasionRightTest().test();
}

std::string AxisPointEvasionTester::testBottom()
{
	return AxisPointEvasionBottomTest().test();
}

std::string AxisPointEvasionTester::testTop()
{
	return AxisPointEvasionTopTest().test();
}

std::string AxisPointEvasionTester::testBack()
{
	return AxisPointEvasionBackTest().test();
}

std::string AxisPointEvasionTester::testFront()
{
	return AxisPointEvasionFrontTest().test();
}
