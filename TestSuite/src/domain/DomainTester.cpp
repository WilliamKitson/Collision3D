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
