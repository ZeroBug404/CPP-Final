#include <bits/stdc++.h>
using namespace std;

class Mammals
{
public:
    void mammals()
    {
        cout<<"I am a mammal"<<endl;
    }
}; class MarineAnimals
{
public:
    void marineAnimals()
    {
        cout<<"I am a marine animal"<<endl;
    }
};

class BlueWhale : public Mammals,
                  public MarineAnimals
{
public:
    void blueWhale()
    {
        cout<<"I belong to both the categories : Mammals as well as Marine Animals"<<endl;
    }
};

int
main()
{
    Mammals M;
    MarineAnimals MA;
    BlueWhale BW;
    M.mammals();
    MA.marineAnimals();
    BW.blueWhale();
    BW.mammals();
    BW.marineAnimals();

    return 0;
}