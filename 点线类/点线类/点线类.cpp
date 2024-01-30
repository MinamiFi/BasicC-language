#include <iostream>
using namespace std;

class Point {
public:
	Point(double nx = 0, double ny = 0)
	{
		x = nx;
		y = ny;
	}
	Point(const Point& p)
	{
		x = p.x;
		y = p.y;
	}
	double getX()
	{
		return x;
	}
	double getY()
	{
		return y;
	}
private:
	double x, y;
};

class Line{
public:
	double getLen() {
		return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
	}
	Line(Point p1, Point p2)
	{
		x1 = p1.getX();
		y1 = p1.getY();
		x2 = p2.getX();
		y2 = p2.getY();
	}
	Line(const Line& l)
	{
		x1 = l.x1;
		y1 = l.y1;
		x2 = l.x2;
		y2 = l.y2;
	}
private:
	double x1, x2, y1, y2;
};

int main()
{
	Point myp1(1.2, 1.3), myp2(5.5, 15.9);
	Line line(myp1, myp2);
	Line line2(line);

	cout << "The length of line is:";
	cout << line.getLen() << endl;
	cout << "The length of line2 is:";
	cout << line2.getLen() << endl;
}
