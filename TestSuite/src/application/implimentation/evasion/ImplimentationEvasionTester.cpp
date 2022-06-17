#include "ImplimentationEvasionTester.h"

ImplimentationEvasionTester::ImplimentationEvasionTester()
{
}

ImplimentationEvasionTester::~ImplimentationEvasionTester()
{
}

std::string ImplimentationEvasionTester::test()
{
	std::string output{ "" };

	output += testPointPoint();

	return output;
}

std::string ImplimentationEvasionTester::testPointPoint()
{
	return ImplimentationEvasionPointPointTest().test();
}
