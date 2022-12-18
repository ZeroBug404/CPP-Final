#include <bits/stdc++.h>
using namespace std;

class Vehicle
{
protected:
    float mileage, price;
};
class Car : public Vehicle
{
protected:
    float cost;
    int warranty, seating_capacity;
    string fuel_type;
};
class Bike : public Vehicle
{
protected:
    int num_of_cyl, num_of_gear;
    string cooling_type, wheel_type;
    float tank_size;
}; class Audi : public Car
{
    string model;

public:
    Audi()
    {
        cout << "Enter the model type of an Audi car: ";
        cin >> model;
        cout << "Enter price of Audi in USD: ";
        cin >> price;
        cout << "Enter ownership cost of Audi in USD: ";
        cin >> cost;
        cout << "Enter warranty of Audi (in years): ";
        cin >> warranty;
        cout << "Enter seating capacity of Audi (in person): ";
        cin >> seating_capacity;
        cout << "Enter fuel type of Audi: ";
        cin >> fuel_type;
        cout << "Enter mileage(in km) for Audi: ";
        cin >> mileage;
    }
    void displayAudi()
    {
        cout << endl;
        cout << "Model type of Audi = " << model << endl;
        cout << "Price of Audi = $ " << price << endl;
        cout << "Ownership cost of Audi = $ " << cost << endl;
        cout << "Warranty of Audi (in years) = " << warranty << endl;
        cout << "Seating capacity of Audi = " << seating_capacity << " person" << endl;
        cout << "Fuel type of Audi = " << fuel_type << endl;
        cout << "Mileage of Audi = " << mileage << " km" << endl
             << endl;
    }
};

class Ford : public Car
{
    string model;

public:
    Ford()
    {
        cout << endl
             << "Enter the model type of a Ford car: ";
        cin >> model;
        cout << "Enter price of Ford in USD: ";
        cin >> price;
        cout << "Enter ownership cost of Ford in USD: ";
        cin >> cost;
        cout << "Enter warranty of Ford (in years): ";
        cin >> warranty;
        cout << "Enter seating capacity of Ford (in person): ";
        cin >> seating_capacity;
        cout << "Enter fuel type of Ford: ";
        cin >> fuel_type;
        cout << "Enter mileage(in km) for Ford: ";
        cin >> mileage;
    }
    void displayFord()
    {
        cout << endl;
        cout << "Model type of Ford = " << model << endl;
        cout << "Price of Ford = $ " << price << endl;
        cout << "Ownership cost of Ford = $ " << cost << endl;
        cout << "Warranty of Ford (in years) = " << warranty << endl;
        cout << "Seating capacity of Ford = " << seating_capacity << " person" << endl;
        cout << "Fuel type of Ford = " << fuel_type << endl;
        cout << "Mileage of Ford = " << mileage << " km" << endl
             << endl;
    }
};

class Bajaj : public Bike
{
    string make_type;

public:
    Bajaj()
    {
        cout << endl;
        cout << "Enter make type of a Bajaj bike: ";
        cin >> make_type;
        cout << "Enter the price of Bajaj (in USD): ";
        cin >> price;
        cout << "Enter the mileage of Bajaj (in km): ";
        cin >> mileage;
        cout << "Enter the number of cylinders of Bajaj: ";
        cin >> num_of_cyl;
        cout << "Enter the number of gears of Bajaj: ";
        cin >> num_of_gear;
        cout << "Enter cooling type of Bajaj: ";
        cin >> cooling_type;
        cout << "Enter wheel type of Bajaj: ";
        cin >> wheel_type;
        cout << "Enter fuel tank size(in inches) of Bajaj: ";
        cin >> tank_size;
    }
    void displayBajaj()
    {
        cout << endl;
        cout << "Make type of Bajaj bike = " << make_type << endl;
        ;
        cout << "Price of Bajaj = $ " << price << endl;
        cout << "Mileage of Bajaj = " << mileage << " km" << endl;
        cout << "Number of cylinders of Bajaj = " << num_of_cyl << endl;
        cout << "Number of gears of Bajaj = " << num_of_gear << endl;
        cout << "Cooling type of Bajaj = " << cooling_type << endl;
        cout << "Wheel type of Bajaj = " << wheel_type << endl;
        cout << "Fuel tank size of Bajaj = " << tank_size << " inches" << endl;
    }
};
class TVS : public Bike
{
    string make_type;

public:
    TVS()
    {
        cout << endl;
        cout << "Enter make type of a TVS bike: ";
        cin >> make_type;
        cout << "Enter the price of TVS (in USD): ";
        cin >> price;
        cout << "Enter the mileage of TVS (in km): ";
        cin >> mileage;
        cout << "Enter the number of cylinders of TVS: ";
        cin >> num_of_cyl;
        cout << "Enter the number of gears of TVS: ";
        cin >> num_of_gear;
        cout << "Enter cooling type of TVS: ";
        cin >> cooling_type;
        cout << "Enter wheel type of TVS: ";
        cin >> wheel_type;
        cout << "Enter fuel tank size(in inches) of TVS: ";
        cin >> tank_size;
    }
    void displayTVS()
    {
        cout << endl;
        cout << "Make type of TVS bike = " << make_type << endl;
        ;
        cout << "Price of TVS = $ " << price << endl;
        cout << "Mileage of TVS = " << mileage << " km" << endl;
        cout << "Number of cylinders of TVS = " << num_of_cyl << endl;
        cout << "Number of gears of TVS = " << num_of_gear << endl;
        cout << "Cooling type of TVS = " << cooling_type << endl;
        cout << "Wheel type of TVS = " << wheel_type << endl;
        cout << "Fuel tank size of TVS = " << tank_size << " inches" << endl;
    }
};

int
main()
{   
    Audi A;
    Ford F;
    Bajaj B;
    TVS T;

    A.displayAudi();
    F.displayFord();
    B.displayBajaj();
    T.displayTVS();

    return 0;
}