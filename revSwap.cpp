#include<bits/stdc++.h>
using namespace std;

void rev_digit(int *r){
    int n=0, a;
    while (*r)
    {
        a=*r%10;
        n=n*10+a;
        *r=*r/10;
    }
    *r=n;  
}

void iswap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
 
int main()
{
    int x=123, y=678;

    rev_digit(&x);
    cout<<"reverse x: "<<x<<endl;
    rev_digit(&y);

    iswap(&x, &y);
    cout<<"swap x: "<<x<<endl;
    cout<<"swap y: "<<y<<endl;
 
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// void reverse_dig(int *r)
// {
//     int n=0, a;
//     while (*r)
//     {
//         a=*r%10;
//         n=n*10+a; 
//         *r=*r/10;
//     }
//     *r=n;
// }

// void iswap(int *a, int *b)
// {
//     int temp;
//     temp=*a;
//     *a=*b;
//     *b=temp ;
// }

// int main()78
// {
//     int x=123, y=456;
//     reverse_dig(&x);
//     cout<<"reverse x: "<<x<<endl;
//     reverse_dig(&y);
//     cout<<"reverse y: "<<y<<endl;

//     iswap(&x, &y);
//     cout<<"swap x: "<<x<<endl;
//     cout<<"swap y: "<<y<<endl;
//     return 0;
// }