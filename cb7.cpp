#include<bits/stdc++.h>
using namespace std;

class Area{
    int q;
    int w;
public:
    void areaInput(int a, int b){
        cout<<"Enter the value of length: ";
        cin>>a;
        q = a;
        cout<<"Enter the value of breadth: ";
        cin>>b;
        w = b;
    }

    int returnArea(){
        int result = q*w;
        return result;
    }
};
 
int main()
{
    Area area;
    int x, y;
    area.areaInput(x, y);
    cout << "area: " << area.returnArea();
    return 0;
}