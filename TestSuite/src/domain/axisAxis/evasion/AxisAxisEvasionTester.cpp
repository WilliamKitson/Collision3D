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

	return output;
}

std::string AxisAxisEvasionTester::testLeft()
{
	return AxisAxisEvasionLeftTest().test();
}
