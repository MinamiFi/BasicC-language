#include "Figure.h"
#ifndef RECTANGLE_H
#define	RECTANGLE_H
class Rectangle :public Figure
{
public:
	double Area()
	{
		return len * wid;
	}
	Rectangle(double l = 0, double w = 0) :len(l), wid(w), Figure() {  }
private:
	double len, wid;
};
#endif