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
