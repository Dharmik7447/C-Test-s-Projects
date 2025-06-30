#include <iostream>

using namespace std;

class Calculator 
{
    public:
        double add(double a, double b) 
        {
            return a + b;
        }

        double subtract(double a, double b) 
        {
            return a - b;
        }

        double multiply(double a, double b) 
        {
            return a * b;
        }

        double divide(double a, double b) 
        {
            if (b == 0) 
            {
                throw "Division by zero error";
            }
            
            return a / b;
        }
};

int main() 
{
    Calculator calc;
    double a = 10, b = 0;
    
    try 
    {
        cout << "Addition: " << calc.add(a, 5) << endl;
        cout << "Subtraction: " << calc.subtract(a, 5) << endl;
        cout << "Multiplication: " << calc.multiply(a, 5) << endl;
        cout << "Division: " << calc.divide(a, 5) << endl;
        cout << "Division by zero: " << calc.divide(a, b) << endl;
    } 
    
    catch (const char* msg) 
    {
        cout << "Exception caught: " << msg << endl;
    }

    try 
    {
        cout << "Invalid operation: " << calc.divide(a, 0) << endl;
    } 
    
    catch (const char* msg) 
    {
        cout << "Exception caught: " << msg << endl;
    }
    return 0;
}
