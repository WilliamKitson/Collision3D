#include "CircleTester.h"

CircleTester::CircleTester()
{
}

CircleTester::~CircleTester()
{
}

std::string CircleTester::test()
{
	std::string failures{ "" };

	failures += testXpos();
	failures += testYpos();
	failures += testZpos();
	failures += testRadius();

	return failures;
}

std::string CircleTester::testXpos()
{
	return CircleXposTest().test();
}

std::string CircleTester::testYpos()
{
	return CircleYposTest().test();
}

std::string CircleTester::testZpos()
{
	return CircleZposTest().test();
}

std::string CircleTester::testRadius()
{
	return CircleRadiusTest().test();
}
