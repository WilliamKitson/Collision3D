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
