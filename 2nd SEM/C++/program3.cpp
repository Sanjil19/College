#include <iostream>
using namespace std;
class Animal
{
protected:
    int a = 100;

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

class Dog : protected Animal
{
private:
    int aa = 1000;

protected:
    int returna()
    {
        return a;
    }

public:
    void speakk()
    {
        return speak();
    }
    void inheritt()
    {
        return inherit();
    }
    int returnaa()
    {
        return aa;
    }
    int returnProtected_a()
    {
        return returna();
    }
};

int main()
{
    Dog d1;
    d1.speakk();
    d1.inheritt();
    cout << d1.returnaa() << endl;
    cout << d1.returnProtected_a() << endl;
    return 0;
}
