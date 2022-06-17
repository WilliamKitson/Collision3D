#include "Implimentation.h"

collision3D::Implimentation::Implimentation()
	: Facade(), collision{ false }
{
}

collision3D::Implimentation::~Implimentation()
{
}

void collision3D::Implimentation::calculate(Point a, Point b)
{
	float pointA[3]{
		a.xpos,
		a.ypos,
		a.zpos
	};

	float pointB[3]{
		b.xpos,
		b.ypos,
		b.zpos
	};

	PointPoint output;
	
	output.calculate(
		pointA,
		pointB
	);

	collision = output.getCollision();
}

bool collision3D::Implimentation::getCollision()
{
	return collision;
}
