#include "PointCirlceTester.h"

PointCircleTester::PointCircleTester()
{
}

PointCircleTester::~PointCircleTester()
{
}

std::string PointCircleTester::test()
{
	std::string output{ "" };

	output += testDefault();
	output += testCollision();
	output += testEvasion();

	return output;
}

std::string PointCircleTester::testDefault()
{
	return CirclePointDefaultTest().test();
}

std::string PointCircleTester::testCollision()
{
	return CirclePointCollisionTest().test();
}

std::string PointCircleTester::testEvasion()
{
	return CirclePointEvasionTest().test();
}
