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
	output += testCirclePoint();

	return output;
}

std::string ImplimentationEvasionTester::testPointPoint()
{
	return ImplimentationEvasionPointPointTest().test();
}

std::string ImplimentationEvasionTester::testCirclePoint()
{
	return ImplimentationEvasionCirclePointTest().test();
}
