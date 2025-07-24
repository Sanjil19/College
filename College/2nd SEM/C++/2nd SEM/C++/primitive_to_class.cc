#include <iostream>
using namespace std;
class Time
{
private:
    int hrs;
    int mins;

public:
    Time()
    {
        hrs = 0;
        mins = 0;
    }

    Time(int t)
    {
        hrs = t / 60;
        mins = t % 60;
    }
    void display()
    {
        cout << "Hrs=" << hrs << endl;
        cout << "mins=" << mins << endl;
    }
};

int main()
{
    Time t;
    int duration = 85;
    t = duration; // t.Time(duration);   -- yesle parameterized constructor khojxa -- 
    t.display();
}