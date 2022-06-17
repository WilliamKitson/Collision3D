#include "PointPointTester.h"

PointPointTester::PointPointTester()
{
}

PointPointTester::~PointPointTester()
{
}

std::string PointPointTester::test()
{
	std::string failures{ "" };

	failures += testDefault();
	failures += testCollision();
	failures += testXpos();
	failures += testYpos();
	failures += testZpos();

	return failures;
}

std::string PointPointTester::testDefault()
{
	return PointPointDefaultTest().test();
}

std::string PointPointTester::testCollision()
{
	return PointPointCollisionTest().test();
}

std::string PointPointTester::testXpos()
{
	return PointPointXposTest().test();
}

std::string PointPointTester::testYpos()
{
	return PointPointYposTest().test();
}

std::string PointPointTester::testZpos()
{
	return PointPointZposTest().test();
}
