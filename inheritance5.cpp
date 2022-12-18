#include<bits/stdc++.h>
using namespace std;

class Shape{
    public: 
        void display(){
            cout<<"This is a shape"<<endl;
        }
};

class Polygon:public Shape{
    public: 
        void display(){
            cout<<"Polygon is a shape"<<endl;
        }
};
class Rectangle:public Shape{
    public: 
        void display(){
            cout<<"Rectangle is a polygon"<<endl;
        }
};
class Triangle:public Shape{
    public: 
        void display(){
            cout<<"Triangle is a polygon"<<endl;
        }
};
class Square:public Shape{
    public: 
        void display(){
            cout<<"Square is a rectangle"<<endl;
        }
};

int main()
{
    Shape S;
    Polygon P;
    Rectangle R;
    Triangle T;
    Square SQ;

    S.display();
    P.display();
    R.display();
    T.display();
    SQ.display();
 
    return 0;
}