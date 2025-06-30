#include <iostream>
#include <string>

using namespace std;

class Laptop 
{
    private:
 
    string name;
    double price;
    string processor;

    public:

    Laptop(string n, double p, string proc) : name(n), price(p), processor(proc) {}

    void display() 
    {
        cout << "Name: " << name << endl;
        cout << "Price: $" << price << endl;
        cout << "Processor: " << processor << endl;
    }
};

int main() 
{
    Laptop laptop1("Dell XPS 13", 999.99, "Intel i7");

    Laptop laptop2("MacBook Air", 1199.99, "Apple M2");

    cout << "Laptop 1 details:" << endl;

    laptop1.display();

    cout << endl;

    cout << "Laptop 2 details:" << endl;

    laptop2.display();

    return 0;
}