#include <iostream>
using namespace std;

class Fraction {

private:
	//要求1 定义分数类
	int num, den;//分子和分母

public:
    void lowterms();//约分函数

	//要求2 定义双参数构造函数
	Fraction(int n = 1, int d = 1) : num(n), den(d)
    {
        lowterms();
    }

	//要求3定义该类的加减乘除的成员函数
	Fraction operator+(Fraction f)
	{
		Fraction newf;
        newf.den = den * f.den;
        newf.num = num * f.den + f.num * den;
        newf.lowterms();
        return newf;
	}
    Fraction operator-(Fraction f)
    {
        Fraction newf;
        newf.den = den * f.den;
        newf.num = num * f.den - f.num * den;
        newf.lowterms();
        return newf;
    }
    Fraction operator*(Fraction f)
    {
        Fraction newf;
        newf.den = den * f.den;
        newf.num = num * f.num;
        newf.lowterms();
        return newf;
    }
    Fraction operator/(Fraction f)
    {
        Fraction newf;
        newf.den = den * f.num;
        newf.num = num * f.den;
        newf.lowterms();
        return newf;
    }


    //要求4 输入输出函数
    void show()
    {
        if (den == 1)
        {
            cout << num << endl;
        }
        else
        {
            cout << num << '/' << den << endl;
        }
        return;
    }
    void input(int n, int d)
    {
        num = n;
        den = d;
        lowterms();
    }
};


int main()
{
    int n, d;
    char c;
    Fraction f1, f2, f3;

    //输入f1
    cout << "input your f1: (1/2) " << endl;
    cin >> n >> c >> d;
    f1.input(n, d);
    cout << "the value of f1 is :";
    f1.show();

    cout << endl;
    //输入f2
    cout << "input your f2: (1/2) " << endl;
    cin >> n >> c >> d;
    f2.input(n, d);
    cout << "the value of f2 is :";
    f2.show();
    
    cout << endl;

    //f1与f2的加减乘除
    cout << "f1 + f2 = ";
    f3 = f1 + f2;
    f3.show();

    cout << endl;

    cout << "f1 - f2 = ";
    f3 = f1 - f2;
    f3.show();

    cout << endl;

    cout << "f1 * f2 = ";
    f3 = f1 * f2;
    f3.show();

    cout << endl;

    cout << "f1 / f2 = ";
    f3 = f1 / f2;
    f3.show();

    return 0;
}



void Fraction::lowterms() // change ourself to lowest terms
{
    long tnum, tden, temp, gcd;
    tnum = labs(num); // use non-negative copies
    tden = labs(den); // (needs cmath)
    if (tden == 0) // check for n/0
    {
        cout << "Illegal fraction : division by 0";
        exit(1);
    }
    else if (tnum == 0) // check for 0/n
    {
        num = 0; den = 1;
        return;
    }
    // this ‘while’ loop finds the gcd of tnum and tden
    while (tnum != 0)
    {
        if (tnum < tden) // ensure numerator larger
        {
            temp = tnum; tnum = tden; tden = temp;
        } // swap them
        tnum = tnum - tden; // subtract them
    }
    gcd = tden; // this is greatest common divisor
    num = num / gcd; // divide both num and den by gcd
    den = den / gcd; // to reduce frac to lowest terms
}