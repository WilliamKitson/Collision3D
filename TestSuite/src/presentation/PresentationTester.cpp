#include "PresentationTester.h"

PresentationTester::PresentationTester()
{
}

PresentationTester::~PresentationTester()
{
}

std::string PresentationTester::test()
{
	std::string output{ "" };

	output += testPoint();
	output += testCircle();
	output += testAxis();

	return output;
}

std::string PresentationTester::testPoint()
{
	return PointTester().test();
}

std::string PresentationTester::testCircle()
{
	return CircleTester().test();
}

std::string PresentationTester::testAxis()
{
	return AxisTester().test();
}
