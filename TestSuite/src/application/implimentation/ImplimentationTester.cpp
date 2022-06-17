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
