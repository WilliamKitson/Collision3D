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

	return output;
}

std::string AxisPointEvasionTester::testLeft()
{
	return AxisPointEvasionLeftTest().test();
}
