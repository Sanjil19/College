// DMA
// farak farak length ko string pathauda runtime ma farak farak time ma memory ko size determine hunxa
#include <iostream>
using namespace std;
class Demo
{
    int *a;

public:
    Demo()
    {
        a = new int;
        *a = 10;
    }
    Demo(int x)
    {
        a = new int;
        *a = x + 1;
    }
    void display()
    {
        cout << *a << endl;
    }
    ~Demo()
    {
        delete a;
    }
};

int main()
{
    Demo obj1;
    Demo obj2(20);
    obj1.display();
    obj2.display();
    return 0;
}