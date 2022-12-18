#include<bits/stdc++.h>
using namespace std;

class Area
{
public:
    int a,b;
    Area(int x, int y){
        a = x;
        b = y;
    }

    void output(){
        cout<<a<<"\t"<<b;
    }
};

int main()
{
    Area a(10, 20);
    a.output();
 
    return 0;
}