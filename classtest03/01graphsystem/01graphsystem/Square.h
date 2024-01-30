#include "Figure.h"
#ifndef SQUARE_H
#define	SQUARE_H
class Square :public Figure
{
public:
	double Area()
	{
		return edge * edge;
	}
	Square(double e = 0) :edge(e), Figure() {  }
private:
	double edge;
};
#endif