#include <iostream>
#include <cmath>
using namespace std;

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
    Rectangle(float x, float y)
    {
        this->x = x;
        this->y = y;
    }

    void getData()
    {
        cout << "x : " << x << endl;
        cout << "y : " << y << endl;
    }
};

class Polar
{
private:
    float radius;
    float angle;

public:
    Polar()
    {
        radius = 0;
        angle = 0;
    }

    Polar(float radius, float angle)
    {
        this->radius = radius;
        this->angle = angle;
    }

    operator Rectangle()
    {
        float x, y;
        x = radius * cos(angle);
        y = radius * sin(angle);
        Rectangle r(x, y);
        return r;
    }

    void getData()
    {
        cout << "Radius : " << radius << endl;
        cout << "Angle : " << angle << endl;
    }
};

int main()
{
    Polar p(100, 45);
    Rectangle r;
    r = p;
    p.getData();
    r.getData();
    return 0;
}
