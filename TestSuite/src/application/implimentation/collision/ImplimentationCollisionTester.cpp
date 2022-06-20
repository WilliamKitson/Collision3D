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
	output += testCirclePoint();
	output += testCircleCircle();

	return output;
}

std::string ImplimentationCollisionTester::testPointPoint()
{
	return ImplimentationCollisionPointPointTest().test();
}

std::string ImplimentationCollisionTester::testCirclePoint()
{
	return ImplimentationCollisionCirclePointTest().test();
}

std::string ImplimentationCollisionTester::testCircleCircle()
{
	return ImplimentationCollisionCircleCircleTest().test();
}
