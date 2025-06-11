#include <iostream>
using namespace std;
class Animal
{
public:
    void speak()
    {
        cout << "Woof" << endl;
    }

    void inherit()
    {
        cout << "This sentence is being inherited from Animal class." << endl;
    }
};

class Dog : public Animal
{
};

int main()
{
    Dog d1;
    d1.speak();
    d1.inherit();
    return 0;
}
