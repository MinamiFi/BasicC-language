#include <iostream>
#include "Figure.h"
#include "Rectangle.h"
#include "Trapezoid.h"
#include "Triangle.h"
#include "Square.h"
#include "Circle.h"

double getA(Figure& f)
{
    return f.Area();
}

int main()
{
    using namespace std;
    Figure* f[5];
    f[0] = new Rectangle(2, 3);//长和宽
    f[1] = new Trapezoid(2, 3, 10);//上底 下底 高
    f[2] = new Triangle(2, 3);//底 高
    f[3] = new Square(10);//边长
    f[4] = new Circle(10);//半径

    cout << getA(*f[0]) << endl;//2 * 3 = 6
    cout << getA(*f[1]) << endl;//(2 + 3) * 10 / 2 = 25
    cout << getA(*f[2]) << endl;//2 * 3 / 2 = 3
    cout << getA(*f[3]) << endl;//10 * 10 = 100
    cout << getA(*f[4]) << endl;//3.14 * 10 * 10 = 314
    
    double sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum += getA(*f[i]);
    }
    cout << sum;
    return 0;
}

