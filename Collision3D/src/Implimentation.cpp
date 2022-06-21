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

void collision3D::Implimentation::calculate(Circle a, Point b)
{
	float circle[4]{
		a.xpos,
		a.ypos,
		a.zpos,
		a.radius
	};

	float point[3]{
		b.xpos,
		b.ypos,
		b.zpos
	};

	CirclePoint output;

	output.calculate(
		circle,
		point
	);

	collision = output.getCollision();
}

void collision3D::Implimentation::calculate(Circle a, Circle b)
{
	float circleA[4]{
		a.xpos,
		a.ypos,
		a.zpos,
		a.radius
	};

	float circleB[4]{
		b.xpos,
		b.ypos,
		b.zpos,
		b.radius
	};

	CircleCircle output;

	output.calculate(
		circleA,
		circleB
	);

	collision = output.getCollision();
}

void collision3D::Implimentation::calculate(Axis a, Point b)
{
	float axis[6]{
		a.xpos,
		a.ypos,
		a.zpos,
		a.width,
		a.height,
		a.depth
	};

	float point[3]{
		b.xpos,
		b.ypos,
		b.zpos
	};

	AxisPoint output;

	output.calculate(
		axis,
		point
	);

	collision = output.getCollision();
}

void collision3D::Implimentation::calculate(Axis a, Axis b)
{
	float axisA[6]{
		a.xpos,
		a.ypos,
		a.zpos,
		a.width,
		a.height,
		a.depth
	};

	float axisB[6]{
		b.xpos,
		b.ypos,
		b.zpos,
		b.width,
		b.height,
		b.depth
	};

	AxisAxis output;

	output.calculate(
		axisA,
		axisB
	);

	collision = output.getCollision();
}

bool collision3D::Implimentation::getCollision()
{
	return collision;
}
