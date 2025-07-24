#include <iostream>
using namespace std;
template <typename T>
T add(T x, T y)
{
    return x + y;
}

int main()
{
    int intres = add(10, 20);
    float floatres = add(10.00, 20.5);
    cout << "Int sum = " << intres << endl;
    cout << "Float sum = " << floatres << endl;
}