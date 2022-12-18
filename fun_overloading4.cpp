#include<bits/stdc++.h>
using namespace std;
 
class Bank{
    public:
        int getBalance(){
            return 0;
        }
};

class BankA:public Bank{
    public:
        int getBalance(int a){
            return a;
        }
};
class BankB:public Bank{
    public:
        int getBalance(int b){
            return b;
        }
};
class BankC:public Bank{
    public:
        int getBalance(int c){
            return c;
        }
};

int main()
{
    BankA a;
    BankB b;
    BankC c;

    cout<<a.getBalance(1000)<<endl;
    cout<<b.getBalance(1500)<<endl;
    cout<<c.getBalance(2000)<<endl;
 
    return 0;
}