#include <iostream>
#include <string>

using namespace std;

class Shape 
{
    private:
        string color;
        double area;

    public:
        void setColor(const string& c) 
        { 
            color = c; 
        }

        string getColor() const 
        {
            return color;
        }

        void setArea(double a) 
        { 
            area = a; 
        }
        
        double getArea() const 
        { 
            return area; 
        }
        
        virtual void calculateArea() = 0;

        virtual void displayDetails() = 0;

        virtual ~Shape() {}
};

class Circle : public Shape 
{
    private:
        double radius;

    public:
        Circle(double r, const string& c) : radius(r) 
        { 
            setColor(c); 
        }

        void calculateArea() 
        {
            double a = 3.14 * radius * radius;
            setArea(a);
        }

        void displayDetails() 
        {
            cout << "Circle: Color = " << getColor() << ", Radius = " << radius << ", Area = " << getArea() << endl;
        }
};

class Rectangle : public Shape 
{
private:
    double length, width;

public:
    Rectangle(double l, double w, const string& c) : length(l), width(w) 
    { 
        setColor(c); 
    }

    void calculateArea() 
    {
        double a = length * width;
        setArea(a);
    }
    
    void displayDetails() 
    {
        cout << "Rectangle: Color = " << getColor() << ", Length = " << length << ", Width = " << width << ", Area = " << getArea() << endl;
    }
};

int main() 
{
    Shape* shapes[2];

    shapes[0] = new Circle(5.0, "Red");
    shapes[1] = new Rectangle(4.0, 6.0, "Blue");

    for (int i = 0; i < 2; ++i) 
    {
        shapes[i]->calculateArea();
        shapes[i]->displayDetails();
    }

    for (int i = 0; i < 2; ++i) 
    {
        delete shapes[i];
    }
    
    return 0;
}
