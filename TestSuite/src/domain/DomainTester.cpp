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

	return output;
}

std::string DomainTester::testPointPoint()
{
	return PointPointTester().test();
}
