/*
Create a class Time having hrs, min and sec as data members.
In your program you should be able to use statement d=t where t is the object and d is an integer number
*/

#include <iostream>
using namespace std;

class Time
{
private:
    int hrs, min, sec;

public:
    Time()
    {
        hrs = 0;
        min = 0;
    }
    Time(int x, int y)
    {
        hrs = x;
        min = y;
    }

    operator int()
    {
        int duration;
        duration = hrs * 60 + min;
        return duration;
    }
    void display()
    {
        cout << "Hrs=" << hrs << endl;
        cout << "mins=" << min << endl;
    }
};

int main()
{
    Time t(1, 40);
    int duration;
    duration = t;
    cout << "Duration in min = " << duration;
}