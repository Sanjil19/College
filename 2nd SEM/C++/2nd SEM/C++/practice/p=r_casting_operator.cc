// Rectangle to Polar

#include <iostream>
#include <cmath>
using namespace std;
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
        this->angle = angle;
        this->radius = radius;
    }

    void display()
    {
        cout << "Radius :" << radius << endl;
        cout << "Angle :" << angle << endl;
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

    Rectangle(float x, float y)
    {
        this->y = y;
        this->x = x;
    }

    operator Polar()
    {
        float radius;
        float angle;
        Polar pp(radius, angle);
        return pp;
    }

    void display()
    {
        cout << "x: " << x << ", y: " << y << endl;
    }
};

int main()
{
    Rectangle r(10, 10);
    Polar p;
    p = r;
    p.display();
}