#include <iostream>
using namespace std;

class Rational {
private:
	int num, den;//分子和分母表示有理数
	double fraction;

public:
    Rational(int n = 0, int d = 0);
    Rational(double f);
    Rational(const Rational& r);
	void show();
	Rational operator++();//前置++
	Rational operator++(int);//后置++
};


Rational::Rational(int n, int d) :num(n), den(d)
{
    if (n == 0 && d == 0)
    {
        fraction = 0;
    }
    else
    {
        fraction = (double)n / d;
    }
}

Rational::Rational(double f) :fraction(f) 
{
    num = 1;
    den = 1;
}

Rational::Rational(const Rational& r)
{
    fraction = r.fraction;
    num = r.num;
    den = r.den;
}


Rational Rational::operator++()
{
    fraction++;
    return *this;
}

Rational Rational::operator++(int)
{
    Rational r(*this);
    ++(*this);
    return r;
}

void Rational::show()
{
    cout << fraction << endl;
}

int main()
{
	Rational a, b, r(-3, 4);
	a = ++r;
	a.show();
	r.show();
	b = r++;
	b.show();
	r.show();
	return 0;
}

