#include <iostream>
using namespace std;

class Square {
public:
	Square(double side = 0) :sideLen(side) {}
	virtual double area() {
		return sideLen * sideLen;
	}
protected:
	double sideLen;
};

class Rectangle :public Square {
protected:
	double sideWid;

public:
	Rectangle(double len = 0, double wid = 0) :Square(len), sideWid(wid) {}
	double area() {
		return sideWid * sideLen;
	}
};


int main()
{
	Square squa(10);
	cout << "正方形的面积是" << squa.area() << endl;
	Rectangle rect(2, 3);
	cout << "长方形的面积是" << rect.area() << endl;

	return 0;
}
