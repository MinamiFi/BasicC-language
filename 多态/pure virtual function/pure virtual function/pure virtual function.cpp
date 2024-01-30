#include <iostream>
using namespace std;

const double PI = 3.14;
class Volume {
public:
    virtual double getV() = 0;

};

class Cuboid :public Volume {
public:
    Cuboid(double newa = 0, double newb = 0, double newc = 0) :Volume(), a(newa), b(newb), c(newc) {}
    double getV()
    {
        return a * b * c;
    }
private:
    double a, b, c;
};

class Cube :public Volume {
public:
    Cube(double newa = 0) :Volume(), a(newa) {}
    double getV()
    {
        return a * a * a;
    }
private:
    double a;
};

class Cylinder :public Volume {
public:
    Cylinder(double newh = 0, double newr = 0) :Volume(), h(newh), r(newr) {}
    double getV()
    {
        return PI * h * r * r;
    }
private:
    double h, r;
};


class Cone :public Volume {
public:
    Cone(double newr = 0, double newh = 0) :Volume(), r(newr), h(newh) {}
    double getV()
    {
        return PI * r * r * h / 3;
    }
private:
    double r, h;
};

double Func(Volume& v)
{
    cout << v.getV() << endl;
    return v.getV();
}

int main()
{
    Cuboid cuboid(1, 2, 1);
    Cube cube(1);
    Cylinder cylinder(1, 10);
    Cone cone(10, 3);
    cout << Func(cuboid) + Func(cube) + Func(cylinder) + Func(cone) << endl;
}
