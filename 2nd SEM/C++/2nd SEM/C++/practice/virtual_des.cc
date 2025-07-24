#include<iostream>
using namespace std;
class Parent
{
    public:
    Parent()
    {
        cout<<"Parent cons"<<endl;
    }
    ~Parent()
    {
        cout<<"Parent dest"<<endl;
    }
};

class Child : public Parent
{
    public:
    Child()
    {
        cout<<"Child cons"<<endl;
    }
    ~Child()
    {
        cout<<"Child dest"<<endl;
    }
};

int main()
{
    Parent *ptr = new Child();
    delete ptr;
}