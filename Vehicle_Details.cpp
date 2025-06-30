#include <iostream>

using namespace std;

class Vehicle 
{
    public:
        virtual void startEngine() = 0;

        virtual void drive() = 0;
        
        virtual ~Vehicle() {}
};

class Car : public Vehicle 
{
    public:
        void startEngine() 
        {
            cout << "Car engine started." << endl;
        }

        void drive() 
        {
            cout << "Car is driving." << endl;
        }
};

class Bike : public Vehicle 
{
    public:
        void startEngine() 
        {
            cout << "Bike engine started." << endl;
        }

        void drive() 
        {
            cout << "Bike is driving." << endl;
        }
};

int main() 
{
    Vehicle* vehicles[2];

    vehicles[0] = new Car();
    vehicles[1] = new Bike();

    for (int i = 0; i < 2; ++i) 
    {
        vehicles[i]->startEngine();
        vehicles[i]->drive();
    }

    for (int i = 0; i < 2; ++i) 
    {
        delete vehicles[i];
    }

    return 0;
}