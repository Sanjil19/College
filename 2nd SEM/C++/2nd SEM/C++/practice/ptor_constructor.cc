#include <iostream>
#include <cmath>
using namespace std;

class Polar
{
private:
	float angle;
	float radius;

public:
	Polar()
	{
		angle = 0;
		radius = 0;
	}

	Polar(float angle, float radius)
	{
		this->angle = angle;
		this->radius = radius;
	}

	void getData()
	{
		cout << "Angle : " << angle << endl;
		cout << "Radius : " << radius << endl;
	}

	float getRadius()
	{
		return radius;
	}
	float getAngle()
	{
		return angle;
	}
};

class Rectangle
{
private:
	float x;
	float y;

public:
	Rectangle()
	{
		x = 0;
		y = 0;
	}

	Rectangle(Polar p)
	{
		x = p.getRadius() * (cos(p.getAngle()));
		y = p.getRadius() * (sin(p.getAngle()));
	}

	void getData()
	{
		cout << "x : " << x << endl;
		cout << "y : " << y << endl;
	}
};

int main()
{
	Polar p(10, 10);
	Rectangle r;
	r = p;
	p.getData();
	r.getData();
	return 0;
}