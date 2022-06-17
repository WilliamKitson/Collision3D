#include "PointCirlceTester.h"

PointCircleTester::PointCircleTester()
{
}

PointCircleTester::~PointCircleTester()
{
}

std::string PointCircleTester::test()
{
	std::string failures{ "" };

	failures += testDefault();
	failures += testCollision();
	failures += testEvasion();
	failures += testInversion();

	return failures;
}

std::string PointCircleTester::testDefault()
{
	return PointCircleDefaultTest().test();
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
