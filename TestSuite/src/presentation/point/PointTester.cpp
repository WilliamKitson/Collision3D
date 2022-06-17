#include "PointTester.h"

PointTester::PointTester()
{
}

PointTester::~PointTester()
{
}

std::string PointTester::test()
{
	std::string output{ "" };

	output += testXpos();
	output += testYpos();
	output += testZpos();

	return output;
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
