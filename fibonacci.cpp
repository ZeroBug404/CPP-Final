#include<iostream>
using namespace std;

int t1=0, t2=1, nextTerm=0, n, n2;

void fibo(int* n)
{
    for ( int i=0; i < *n-2; i++)
    {
        cout<<nextTerm<<", ";
        t1 = t2;
        t2=nextTerm;
        nextTerm=t1+t2;
    }
}
 
int main()
{
    cin>>n;
    cout<<"Fibonacci series: "<<t1<<", "<<t2<<", ";
    nextTerm = t1 + t2;

    fibo(&n);
    
    return 0;
}