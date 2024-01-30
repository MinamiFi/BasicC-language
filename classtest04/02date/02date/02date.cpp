#include <iostream>
using namespace std;

class Date {
private:
	int year, month, day;
public:
	virtual void show() {
		cout << year << "年" << month << "月" << day << "日";
	}
	Date(int y = 0, int m = 0, int d = 0)
	{
		year = y;
		month = m;
		day = d;
	}
};

class Vehicle {
public:
	Vehicle(int y = 0, int m = 0, int d = 0, int p = 0) :d(y, m, d)
	{
		price = p;
	}
	virtual void show() {
		cout << "出厂日期：";
		d.show();
		cout << endl << "价格：" << price << endl;
	}
private:
	int price;
	Date d;
};

class Car :private Vehicle {
public:
	Car(int y = 0, int m = 0, int d = 0, int pri = 0, int pnu = 0) : Vehicle(y, m, d, pri)
	{
		pnum = pnu;
	}
	virtual void show(){
		cout << "种类：汽车" << endl;
		Vehicle::show();
		cout << "载人数量：" << pnum << endl;
	}
private:
	int pnum;//载人数量
};

class Truck :private Vehicle {
public:
	Truck(int y = 0, int m = 0, int d = 0, int pri = 0, int pnu = 0,int qnu=0) : Vehicle(y, m, d, pri)
	{
		pnum = pnu;
		qnum = qnu;
	}
	virtual void show() {
		cout << "种类：卡车" << endl;
		Vehicle::show();
		cout << "载人数量：" << pnum << endl;
		cout << "载货量：" << qnum << "吨" << endl;
	}
private:
	int pnum;//载人数量
	int qnum;//载货量
};

int main()
{
	Car c(2019, 3, 30, 200000, 5);
	Truck t(2015, 12, 10, 100000, 2, 20);
	c.show();
	t.show();

	return 0;
}