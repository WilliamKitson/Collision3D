#include "CircleCircleTester.h"

CircleCircleTester::CircleCircleTester()
{
}

CircleCircleTester::~CircleCircleTester()
{
}

std::string CircleCircleTester::test()
{
	std::string output{ "" };

	output += testDefault();

	return output;
}

std::string CircleCircleTester::testDefault()
{
	return CircleCircleDefaultTest().test();
}
