#include "Figure.h"
#ifndef TRAPEZOID_H
#define	TRAPEZOID_H
class Trapezoid :public Figure
{
public:
	Trapezoid(double u = 0, double d = 0, double h = 0) :upedge(u), downedge(d), height(h), Figure() {  }
	double Area()
	{
		return (upedge + downedge) * height / 2;
	}
private:
	double upedge, downedge, height;
};
#endif