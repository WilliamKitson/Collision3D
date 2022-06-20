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
