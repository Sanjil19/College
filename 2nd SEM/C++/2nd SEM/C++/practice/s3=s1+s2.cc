#include<iostream>
#include<cstring>
using namespace std;
class String
{
    char name[20];
    public:
    String()
    {
        strcpy(name,"");
    }
    String(const char *s)
    {
        strcpy(name,s);
    }
    void display()
    {
        cout<<"String is:"<<name;
    }
    friend String operator+(const String &x,const String &y);
};

String operator+(const String &x,const String &y)
{
    String temp;
    strcpy(temp.name,x.name);
    strcat(temp.name,y.name);
    return temp;
}

int main()
{
    String s1("Sanjil ");
    String s2("Dahal");
    String s3;
    s3=s1+s2;
    s3.display();
}