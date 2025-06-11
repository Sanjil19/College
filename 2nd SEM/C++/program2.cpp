#include <iostream>
using namespace std;
class Animal
{

private:
int number=100;
public:
    void speak()
    {
        cout << "Woof" << endl;
    }

    void inherit()
    {
        cout << "This sentence is being inherited from Animal class." << endl;
    }
    
    int returNum(){
        return number;
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
    cout<<d1.returNum();
    return 0;
}
