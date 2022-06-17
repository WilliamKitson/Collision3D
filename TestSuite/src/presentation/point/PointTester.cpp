#include "PointTester.h"

PointTester::PointTester()
{
}

PointTester::~PointTester()
{
}

std::string PointTester::test()
{
	std::string failures{ "" };

	failures += testXpos();
	failures += testYpos();
	failures += testZpos();

	return failures;
}

std::string PointTester::testXpos()
{
	return PointXposTest().test();
}

std::string PointTester::testYpos()
{
	return PointYposTest().test();
}

std::string PointTester::testZpos()
{
	return PointZposTest().test();
}
