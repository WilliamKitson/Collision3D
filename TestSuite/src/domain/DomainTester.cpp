#include "DomainTester.h"

DomainTester::DomainTester()
{
}

DomainTester::~DomainTester()
{
}

std::string DomainTester::test()
{
	std::string failures{ "" };

	failures += testPointPoint();

	return failures;
}

std::string DomainTester::testPointPoint()
{
	return PointPointTester().test();
}
