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
	output += testInversion();

	return output;
}

std::string PointCircleTester::testDefault()
{
	return CirclePointDefaultTest().test();
}

std::string PointCircleTester::testCollision()
{
	return PointCircleCollisionTest().test();
}

std::string PointCircleTester::testEvasion()
{
	return PointCircleEvasionTest().test();
}

std::string PointCircleTester::testInversion()
{
	return PointCircleInversionTest().test();
}
