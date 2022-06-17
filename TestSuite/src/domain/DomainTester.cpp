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
	output += testPointCircle();

	return output;
}

std::string DomainTester::testPointPoint()
{
	return PointPointTester().test();
}

std::string DomainTester::testPointCircle()
{
	return PointCircleTester().test();
}
