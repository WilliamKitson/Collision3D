#include "AxisAxisEvasionTester.h"

AxisAxisEvasionTester::AxisAxisEvasionTester()
{
}

AxisAxisEvasionTester::~AxisAxisEvasionTester()
{
}

std::string AxisAxisEvasionTester::test()
{
	std::string output{ "" };

	output += testLeft();
	output += testRight();
	output += testBottom();
	output += testTop();

	return output;
}

std::string AxisAxisEvasionTester::testLeft()
{
	return AxisAxisEvasionLeftTest().test();
}

std::string AxisAxisEvasionTester::testRight()
{
	return AxisAxisEvasionRightTest().test();
}

std::string AxisAxisEvasionTester::testBottom()
{
	return AxisAxisEvasionBottomTest().test();
}

std::string AxisAxisEvasionTester::testTop()
{
	return AxisAxisEvasionTopTest().test();
}
