#include "AxisCircleCollisionTester.h"

AxisCircleCollisionTester::AxisCircleCollisionTester()
{
}

AxisCircleCollisionTester::~AxisCircleCollisionTester()
{
}

std::string AxisCircleCollisionTester::test()
{
	std::string output{ "" };

	output += testLeft();

	return output;
}

std::string AxisCircleCollisionTester::testLeft()
{
	return AxisCircleCollisionLeftTest().test();
}
