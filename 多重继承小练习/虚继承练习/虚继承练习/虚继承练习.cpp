#include <iostream>
using namespace std;

const double PI = 3.14;

class Shape {
public:
    double getArea(double r)
    {
        return PI * r * r;
    }
    double getArea(double a, double b)
    {
        return a * b;
    }
    Shape(){}
};

class Circle :protected Shape{
public:
    double getA()
    {
        return getArea(r);
    }
    Circle(double newr=0):Shape()
    {
        r = newr;
    }
private:
    double r;//半径
};

class Rect :protected Shape {
public:
    double getA()
    {
        return getArea(a, b);
    }
    Rect(double newa,double newb):Shape()
    {
        a = newa;
        b = newb;
    }
private:
    double a, b;//长宽 
};

int main()
{
    Rect r(1.5, 2);
    Circle c(10);
    cout << r.getA() << endl;
    cout << r.getArea() << endl;
    cout << c.getA() << endl;
}
