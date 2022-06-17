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
	output += testCollision();
	output += testEvasion();

	return output;
}

std::string ImplimentationTester::testDefault()
{
	return ImplimentationDefaultTest().test();
}

std::string ImplimentationTester::testCollision()
{
	return ImplimentationCollisionTester().test();
}

std::string ImplimentationTester::testEvasion()
{
	return ImplimentationEvasionTester().test();
}
