#include<bits/stdc++.h>
using namespace std;

class Apples{
public:
    int apples = 10;
    void displayApples(){
        cout<<apples<<endl;
    }
};
class Mangoes{
public:
    int mangoes = 15;
    void displayMangoes(){
        cout<<mangoes<<endl;
    }
};

class Fruit:public Apples, public Mangoes{
public:
    int totalFruits;
    void total(){
        totalFruits = apples + mangoes;
        cout<<totalFruits; 
    }
};
 
int main()
{
    Fruit F;
    F.displayApples();
    F.displayMangoes();
    F.total();
 
    return 0;
}