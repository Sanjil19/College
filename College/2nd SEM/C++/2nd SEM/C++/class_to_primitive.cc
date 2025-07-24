#include <iostream>
using namespace std;
class Time
{
private:
    int hr;
    int min;
    int sec;

public:
    Time()
    {
        hr = 0;
        min = 0;
        sec = 0;
    }
    Time(int x, int y)
    {
        hr = x;
        min = y;
    }
    operator int()
    {
        int duration;
        duration = hr * 60 + min;
        return duration;
    }
    void display()
    {
        cout << "HR =" << hr << endl;
        cout << "Mins =" << min;
    }
};
int main()
{

    Time t(1, 25);
    int duration;
    duration = t;
    cout << "Duration in min = " << duration;
}
