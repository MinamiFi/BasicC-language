#include "Figure.h"
#ifndef TRIANGLE_H
#define	TRIANGLE_H
class Triangle :public Figure
{
public:
	double Area()
	{
		return len * high / 2;
	}
	Triangle(double l = 0, double h = 0) :len(l), high(h), Figure() {  }
private:
	double len, high;
};
#endif