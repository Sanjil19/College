#include <iostream>
using namespace std;

class Time {
private:
    int hrs, mins, sec;

public:
    Time() : hrs(0), mins(0), sec(0) {}

    // Primitive to class: int (seconds) to Time
    Time(int totalSeconds) {
        hrs = totalSeconds / 3600;
        totalSeconds %= 3600;
        mins = totalSeconds / 60;
        sec = totalSeconds % 60;
    }

    // Class to primitive: Time to int (seconds)
    operator int() const {
        return hrs * 3600 + mins * 60 + sec;
    }

    void display() const {
        cout << hrs << " hrs " << mins << " mins " << sec << " sec" << endl;
    }
};

int main() {
    while (true) {
        cout << "Choose an option:\n";
        cout << "1. Primitive to class\n";
        cout << "2. Class to primitive\n";
        cout << "3. Exit\n";
        int choice;
        cin >> choice;

        if (choice == 1) {
            int seconds;
            cout << "Enter seconds: ";
            cin >> seconds;
            Time t = seconds; // primitive to class
            cout << "Time object: ";
            t.display();
        } else if (choice == 2) {
            int h, m, s;
            cout << "Enter hours: ";
            cin >> h;
            cout << "Enter minutes: ";
            cin >> m;
            cout << "Enter seconds: ";
            cin >> s;
            Time t;
            // Set values using assignment (could add a setter or parameterized constructor)
            t = Time(h * 3600 + m * 60 + s);
            int totalSeconds = t; // class to primitive
            cout << "Total seconds: " << totalSeconds << endl;
        } else if (choice == 3) {
            break;
        } else {
            cout << "Invalid choice. Try again.\n";
        }
    }
    return 0;
}
