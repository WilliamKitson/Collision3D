#include "CirclePointInvertedTester.h"

CirclePointInvertedTester::CirclePointInvertedTester()
{
}

CirclePointInvertedTester::~CirclePointInvertedTester()
{
}

std::string CirclePointInvertedTester::test()
{
	std::string output{ "" };

	output += testCollision();
	output += testEvasion();

	return output;
}

std::string CirclePointInvertedTester::testCollision()
{
	return CirclePointInvertedCollisionTest().test();
}

std::string CirclePointInvertedTester::testEvasion()
{
	return CirclePointInvertedEvasonTest().test();
}
