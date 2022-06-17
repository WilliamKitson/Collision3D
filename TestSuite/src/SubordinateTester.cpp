#include "SubordinateTester.h"

SubordinateTester::SubordinateTester()
{
}

SubordinateTester::~SubordinateTester()
{
}

std::string SubordinateTester::test()
{
	std::string output{ "" };

	output += testDomain();
	output += testPresentation();

	return output;
}

std::string SubordinateTester::testDomain()
{
	return DomainTester().test();
}

std::string SubordinateTester::testPresentation()
{
	return PresentationTester().test();
}
