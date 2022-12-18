#include <bits/stdc++.h>
using namespace std;

class Rectangle
{
    int a, b, areab;

public:
    Rectangle()
    {
        cout << "Enter a:" << endl;
        cin >> a;
        cout << "Enter b:" << endl;
        cin >> b;
    }

    // int area(cout << "Enter a:"<<endl;)
    void area()
    {
        areab = a * b;
        // cout << areab << endl;
    }

    void output()
    {
        cout << areab;
    }
};

int main()
{
    Rectangle b;
    b.output();
    // b.area(4, 5);

    return 0;
}