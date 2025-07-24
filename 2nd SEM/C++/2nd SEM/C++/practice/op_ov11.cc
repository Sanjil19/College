#include <iostream>
using namespace std;

class Data
{
public:
    int val;

    Data(int v = 0)
    {
        val = v;
    }

    Data operator+(Data other)
    {
        return Data(val + other.val);
    }
};

int main()
{
    Data obj1(10), obj2(20), obj3(30);

    obj3 = obj1 + obj2 + obj3;

    cout << "obj3 = " << obj3.val << endl; // Output: 60

    return 0;
}
