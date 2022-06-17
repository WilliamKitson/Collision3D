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
