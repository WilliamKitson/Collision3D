#include "ApplicationTester.h"

ApplicationTester::ApplicationTester()
{
}

ApplicationTester::~ApplicationTester()
{
}

std::string ApplicationTester::test()
{
	std::string output{ "" };

	output += testImplimentation();

	return output;
}

std::string ApplicationTester::testImplimentation()
{
	return ImplimentationTester().test();
}
