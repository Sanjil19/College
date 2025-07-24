#include <iostream>
using namespace std;

class Sample
{
private:
    int x, y, z;

public:
    void setData(int x, int y, int z)
    {
        this->x = x;
        this->y = y;
        this->z = z;
    }

    void getData()
    {
        cout << x << endl;
        cout << y << endl;
        cout << z << endl;
    }

    void operator-() 
    {
        x=-x;
        y=-y;
        z=-z;
    }

};

int main()
{
    Sample s;
    s.setData(1,-1,9);
    -s;
    s.getData();
}