#include "AxisCircleEvasionTester.h"

AxisCircleEvasionTester::AxisCircleEvasionTester()
{
}

AxisCircleEvasionTester::~AxisCircleEvasionTester()
{
}

std::string AxisCircleEvasionTester::test()
{
	std::string output{ "" };

	output += testLeft();
	output += testRight();
	output += testBottom();
	output += testTop();

	return output;
}

std::string AxisCircleEvasionTester::testLeft()
{
	return AxisCircleEvasionLeftTest().test();
}

std::string AxisCircleEvasionTester::testRight()
{
	return AxisCircleEvasionRightTest().test();
}

std::string AxisCircleEvasionTester::testBottom()
{
	return AxisCircleEvasionBottomTest().test();
}

std::string AxisCircleEvasionTester::testTop()
{
	return AxisCircleEvasionTopTest().test();
}
