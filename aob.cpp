#include <bits/stdc++.h>
using namespace std;

class Student
{
    int year;
    string name, address;

public:
    Student ()
    {
        cout << "Enter name of the students: ";
        cin >> name;
        cout << "Enter address of the students: ";
        cin >> address;
        cout << "Enter year of the students: ";
        cin >> year;
    }
    void output()
    {
        cout << name << "\t\t\t\t" << year << "\t\t\t\t" << address << "\t\t\t\t" << endl;
    }
};

int main()
{
    Student student[3];
    // for (int i = 0; i < 3; i++)
    // {
    //     student[i].input();
    // }
    cout << "Name of the students: \t\t"
         << "Year of the students: \t\t"
         << "Address of the students: \t\t" << endl;
    for (int i = 0; i < 3; i++)
    {
        student[i].output();
    }

    return 0;
}