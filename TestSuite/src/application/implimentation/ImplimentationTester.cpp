#include "ImplimentationTester.h"

ImplimentationTester::ImplimentationTester()
{
}

ImplimentationTester::~ImplimentationTester()
{
}

std::string ImplimentationTester::test()
{
	std::string output{ "" };

	output += testDefault();

	return output;
}

std::string ImplimentationTester::testDefault()
{
	return ImplimentationDefaultTest().test();
}
