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

	return output;
}

std::string AxisCircleEvasionTester::testLeft()
{
	return AxisCircleEvasionLeftTest().test();
}
