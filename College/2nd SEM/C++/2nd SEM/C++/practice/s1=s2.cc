#include<iostream>
#include<string>
#include<cstring>
using namespace std;
class String
{
    char name[20];
    public:
    String(char *s)
    {
        strcpy(name,s);
    }
    void display()
    {
        cout<<"String:"<<name<<endl;
    }

    friend void operator==(String &x,String &y);
};

void operator==(String &x,String &y)
{
    if(strcmp(x.name,y.name)==0)
    {
        cout<<"Same:"<<endl;
    }
    else
    {
        cout<<"notSame:"<<endl;
    }
}

int main()
{
    String s1("ab");
    String s2("abb");
    s1.display();
    s2.display();
    s1==s2;
    
}