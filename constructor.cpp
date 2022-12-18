#include<bits/stdc++.h>
using namespace std;

class Area
{
public:
    int x,y;
    Area(int a, int b)
    {
        x=a;
        y=b;
    }
    int returnArea()
    {
        return x*y;
    }
    ~Area(){
        cout<<"Destructor";
    }
};

int main()
{
    int l,b;
    cin>>l>>b;
    Area result(l,b);
    cout<<result.returnArea()<<endl;
 
    return 0;
}