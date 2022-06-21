#include "AxisAxisInvertedBATester.h"

AxisAxisInvertedBATester::AxisAxisInvertedBATester()
{
}

AxisAxisInvertedBATester::~AxisAxisInvertedBATester()
{
}

std::string AxisAxisInvertedBATester::test()
{
	std::string output{ "" };

	output += testLeft();
	output += testRight();
	output += testBottom();
	output += testTop();
	output += testBack();

	return output;
}

std::string AxisAxisInvertedBATester::testLeft()
{
	return AxisAxisInvertedBALeftTest().test();
}

std::string AxisAxisInvertedBATester::testRight()
{
	return AxisAxisInvertedBARightTest().test();
}

std::string AxisAxisInvertedBATester::testBottom()
{
	return AxisAxisInvertedBottomTest().test();
}

std::string AxisAxisInvertedBATester::testTop()
{
	return AxisAxisInvertedBATopTest().test();
}

std::string AxisAxisInvertedBATester::testBack()
{
	return AxisAxisInvertedBABackTest().test();
}
