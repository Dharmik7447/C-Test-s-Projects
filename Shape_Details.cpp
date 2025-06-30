#include <iostream>
#include <string>

using namespace std;

// Base class Shape
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
        
        double getRadius() const 
        { 
            return radius; 
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
        
        double getLength() const 
        { 
            return length; 
        }
        
        double getWidth() const 
        { 
            return width; 
        }
};

int main() 
{
    Shape* s1 = new Circle(5.0, "Red");
    Shape* s2 = new Rectangle(4.0, 6.0, "Blue");

    s1->calculateArea();
    s2->calculateArea();

    cout << "Circle: Color = " << s1->getColor() << ", Area = " << s1->getArea() << endl;
    cout << "Rectangle: Color = " << s2->getColor() << ", Area = " << s2->getArea() << endl;

    delete s1;
    delete s2;

    return 0;
}
