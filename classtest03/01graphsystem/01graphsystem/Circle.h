#include "Figure.h"
#ifndef CIRCLE_H
#define	CIRCLE_H
class Circle :public Figure
{
public:
	double Area()
	{
		return 3.14 * radius * radius;
	}
	Circle(double r = 0) : radius(r), Figure() {  }
private:
	double radius;
};
#endif