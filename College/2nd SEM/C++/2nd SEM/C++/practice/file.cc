#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
class Students
{
public:
    char name[20];
    int roll;
    char address[20];

    void setinfo()
    {
        cout << "Enter name,address,roll:";
        cin >> name >> address >> roll;
    }
    void showinfo()
    {
        cout << "name,address,roll:" << " " << name << " " << address << " " << roll;
    }
};

int main()
{
    Students s[100];
    fstream file;
    file.open("/home/sd/Desktop/c++/testcpp.txt", ios::out);
    int n;
    cout << "Enter n:" << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        s[i].setinfo();
        file.write((char *)&s[i], sizeof(s[i]));
    }
    file.close();
    file.open("/home/sd/Desktop/c++/testcpp.txt", ios::in);

    for (int i = 0; i < n; i++)
    {
        file.read((char *)&s[i], sizeof(s[i]));

        if (strcmp(s[i].address, "Kathmandu") == 0)
        {
            s[i].showinfo();
        }
    }
    file.close();
}
