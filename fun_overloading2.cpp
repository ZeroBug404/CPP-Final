#include<bits/stdc++.h>
using namespace std;

class Area{
    private:
        int a;
        int b;
    public:
        void area(int x, int y){
            a = x * y;
            cout<<a<<endl;
        }
        void area(int z){
            b = z * z;
            cout<<b;
        }
};

int main()
{
    Area A;
    A.area(5, 5);
    A.area(6);
 
    return 0;
}