#include "PresentationTester.h"

PresentationTester::PresentationTester()
{
}

PresentationTester::~PresentationTester()
{
}

std::string PresentationTester::test()
{
	std::string failures{ "" };

	failures += testPoint();
	failures += testCircle();
	failures += testAxis();

	return failures;
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
