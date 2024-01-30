#include <iostream>
using namespace std;


class RMB {
private:
	int yuan, jiao, fen;
	double money;
public:
	RMB(int y = 0, int j = 0, int f = 0) :yuan(y), jiao(j), fen(f)
	{
		money = yuan + 0.1 * jiao + 0.01 * fen;
	}
	RMB(double r)
	{
		money = r;
		yuan = (int)r;
		r = r * 10;
		jiao = (int)r % 10;
		r = r * 10;
		fen = (int)r % 10;
	}

	void show() 
	{
		cout << yuan << "元" << jiao << "角" << fen << "分" << endl;
	}

	RMB operator+(RMB r)
	{
		double m = money + r.money;
		RMB newr(m);
		return newr;
	}
	RMB operator-(RMB r)
	{
		double m = money - r.money;
		if (m < 0)
		{
			m = -m;
		}
		RMB newr(m);
		return newr;
	}
};

int main()
{
	RMB a(10, 3, 7), b(8, 4, 9);
	RMB c, e, f, g, d(3.25);
	c = a + b;
	e = d + a;
	f = b - a;
	g = d - a;
	c.show();
	e.show();
	f.show();
	g.show();
	return 0;

}
