#include "DomainTester.h"

DomainTester::DomainTester()
{
}

DomainTester::~DomainTester()
{
}

std::string DomainTester::test()
{
	std::string output{ "" };

	output += testPointPoint();
	output += testCirclePoint();
	output += testCircleCircle();
	output += testAxisPoint();
	output += testAxisCircle();
	output += testAxisAxis();

	return output;
}

std::string DomainTester::testPointPoint()
{
	return PointPointTester().test();
}

std::string DomainTester::testCirclePoint()
{
	return PointCircleTester().test();
}

std::string DomainTester::testCircleCircle()
{
	return CircleCircleTester().test();
}

std::string DomainTester::testAxisPoint()
{
	return AxisPointTester().test();
}

std::string DomainTester::testAxisCircle()
{
	return AxisCircleTester().test();
}

std::string DomainTester::testAxisAxis()
{
	return AxisAxisTester().test();
}
