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

	return output;
}

std::string PointCircleTester::testDefault()
{
	return CirclePointDefaultTest().test();
}
