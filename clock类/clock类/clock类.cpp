#include <iostream>
#include <iomanip>
using namespace std;


class Clock {
protected:
	int hour, minute, second;

public:
	friend ostream& operator<<(ostream& out, const Clock& c) {
		out << setw(2) << setfill('0') << c.hour << ':' << setw(2) << setfill('0') << c.minute << ':' << setw(2) << setfill('0') << c.second;
		return out;
	}

	Clock(int h = 0, int m = 0, int s = 0)
	{
		hour = h;
		minute = m;
		second = s;
	}
	void showTime()
	{
		cout << setw(2) << setfill('0') << hour << ':' << setw(2) << setfill('0') << minute << ':' << setw(2) << setfill('0') << second << endl;
	}

	Clock& operator++()
	{
		second++;
		if (second == 60)
		{
			second = 0;
			minute++;
			if (minute == 60)
			{
				minute = 0;
				hour++;
				if (hour == 24)
				{
					hour = 0;
				}
			}
		}
		return *this;
	}

	Clock operator++(int)
	{
		Clock newc;
		++(*this);
		return newc;
	}
};

class De :private Clock
{
public:
	int a = hour;

	void show()
	{	
		cout << a << endl << m << endl;
		a = hour + m;
		cout << a << endl;
	}
private:
	int m = 76;
};
int main()
{
	De x;
	x.show();
	Clock myClock(23, 59, 59);
	cout << "First time output: " << endl;
	myClock.showTime();
	cout << "show myClock++" << endl;
	(myClock++).showTime();
	cout << "show ++myClock" << endl;
	(++myClock).showTime();


	cout << "show myClock ostream" << endl;
	cout << myClock;
	return 0;
}