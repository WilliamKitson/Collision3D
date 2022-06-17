#include "ImplimentationCollisionTester.h"

ImplimentationCollisionTester::ImplimentationCollisionTester()
{
}

ImplimentationCollisionTester::~ImplimentationCollisionTester()
{
}

std::string ImplimentationCollisionTester::test()
{
	std::string output{ "" };

	output += testPointPoint();

	return output;
}

std::string ImplimentationCollisionTester::testPointPoint()
{
	return ImplimentationCollisionPointPointTest().test();
}
