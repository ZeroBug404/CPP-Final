#include<bits/stdc++.h>
using namespace std;

class Number{
    private:
    int x;
    char y;
    public:
        void num(int n, char c){
            x = n;
            y = c;
            cout<<x<<endl;
            cout<<y<<endl;
        }
        void num(char c, int n){
            x = n;
            y = c;
            cout<<x<<endl;
            cout<<y;
        }
};
 
int main()
{
    Number N;
    N.num(5, 'r');
    N.num('s', 6);
    return 0;
}
