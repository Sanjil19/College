#include <iostream>
using namespace std;

class Time
{
private:
    int hrs;
    int mins;
    int sec;

public:
    Time()
    {
        hrs = 0;
        mins = 0;
        sec = 0;
    }
    Time(int t)
    {
        hrs = t / 3600;
        mins = (t % 3600) / 60;
        sec = (t % 3600) % 60;
    }

    void display()
    {
        cout << "Hrs=" << hrs << endl;
        cout << "mins=" << mins << endl;
        cout << "sec=" << sec << endl;
    }
};

int main()
{
    Time tt;
    int duration = 4270;
    tt = duration; // t.Time(duration)
    tt.display();
}