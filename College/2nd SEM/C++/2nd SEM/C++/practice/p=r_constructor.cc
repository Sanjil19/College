#include <iostream>
#include <cmath>
using namespace std;
class Rectangle
{
private:
    int x;
    int y;

public:
    Rectangle()
    {
        x = 0;
        y = 0;
    }

    Rectangle(int aa, int bb)
    {
        x=aa;
        y=bb;
    }

    int getX()
    {
        return x;
    }
    int getY()
    {
        return y;
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

    Polar(Rectangle r)
    {
        radius = sqrt((r.getX()) * (r.getX()) + (r.getY()) * (r.getY()));
        angle = atan(r.getY() / r.getX());
    }

    void display()
    {
        cout << "Radius : " << radius << endl;
        cout << "Angle : " << angle << endl;
    }
};

int main()
{
    Rectangle r(10, 10);
    Polar p;
    p = r;
    p.display();
}