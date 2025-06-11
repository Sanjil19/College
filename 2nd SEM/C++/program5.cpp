// DMA2

#include <iostream>
using namespace std;

class Add
{
private:
    int *a;
    int *b;

public:
    Add()
    {
        a = new int;
        *a = 10;
        b = new int;
        *b = 20;
    }
    int Sum()
    {
        int sum;
        sum = *a + *b;  // Local Variable
        return sum;
    }
    void display()
    {
        cout << "Sum=" << Sum() << endl;
    }
    ~Add()
    {
        delete a;
        delete b;
    }
};

int main()
{
    Add a;
    a.Sum();
    a.display();
    return 0;
}