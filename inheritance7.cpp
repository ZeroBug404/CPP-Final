#include<bits/stdc++.h>
using namespace std;

class Number{
    protected:
        int num, sqr, cube;
    public:
        Number(){
            cin>>num;
        }
};

class Square:protected Number{
    public: 
        Square(){
            sqr = num * num;
        }
        
        void display(){
            cout<<sqr<<endl;
        }
};

class Cube:protected Number{
    public: 
        Cube(){
            cube = num * num * num;
        }
        
        void print(){
            cout<<cube;
        }
};
 
int main()
{
    Square S;
    Cube C;

    S.display();
    C.print();
 
    return 0;
}