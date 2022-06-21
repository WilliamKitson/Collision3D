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

	return output;
}

std::string AxisAxisInvertedBATester::testLeft()
{
	return AxisAxisInvertedBALeftTest().test();
}
