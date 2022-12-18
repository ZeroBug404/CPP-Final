#include<bits/stdc++.h>
using namespace std;

class Student{
    private:
        string name, address;
        int age;
    public:
        Student(){
            name = "unknown";
            address = "not available";
            age = 0;
        }
        setInfo(string n, int a){
            name = n;
            age = a;
            cout<<n<<endl<<a<<endl;
        }
        setInfo(string n, int a, string ad){
            name = n;
            age = a;
            address = ad;
            cout<<n<<endl<<a<<endl<<ad;
        }
};
 
int main()
{
    string name[10], address[10];
    int age[10];
    Student S[10];
    
    for (int i = 1; i < 10; i++)
    {
        cin>>name[i];
        cin>>address[i];
        cin>>age[i];
    }
    for (int i = 0; i < 9; i++)
    {
        S[i].setInfo(name[i], age[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        S[i].setInfo(name[i], age[i], address[i]);
    }
    
 
    return 0;
}