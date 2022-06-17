#include "SubordinateTester.h"

SubordinateTester::SubordinateTester()
{
}

SubordinateTester::~SubordinateTester()
{
}

std::string SubordinateTester::test()
{
	std::string failures{ "" };

	failures += testDomain();

	return failures;
}

std::string SubordinateTester::testDomain()
{
	return DomainTester().test();
}
