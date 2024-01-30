#include <iostream>
using namespace std;
class Shape
{
public:
    virtual double getV() = 0;
};


class Circle :public Shape {
public:
    double getV() { return 0; }
};

int main()
{
    Circle c;
    std::cout << "Hello World!\n";
}
