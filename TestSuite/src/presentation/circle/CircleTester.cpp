#include "CircleTester.h"

CircleTester::CircleTester()
{
}

CircleTester::~CircleTester()
{
}

std::string CircleTester::test()
{
	std::string output{ "" };

	output += testXpos();
	output += testYpos();
	output += testZpos();
	output += testRadius();

	return output;
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
