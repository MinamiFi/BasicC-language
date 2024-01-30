// 04the volume of the cuboid.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;

int getvolume(int a, int b, int c = 12);
double getvolume(double a, double b, double c = 12);

int main()
{
	double a, b, c;
	double v;
	int x, y, z;
	char f;
LOOP:cout << "所求长方体的边长有小数吗(Y/N)" << endl;
	cin >> f;
	if (f == 'Y')
	{
		cout << "请输入长方体的长宽高：" << endl;
		cin >> a >> b >> c;
		cout << getvolume(a, b, c);
		
	}
	else if (f == 'N')
	{
		cout << "请输入长方体的长宽高：" << endl;
		cin >> x >> y >> z;
		cout << getvolume(x, y, z);
	}
	else
	{
		cout << "请输入Y/N" << endl;
		goto LOOP;
	}
	return 0;
}
int getvolume(int a, int b, int c)
{
	return a * b * c;
}
double getvolume(double a, double b, double c)
{
	return a * b * c;
}
