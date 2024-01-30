// 02primenumberjudge.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int x, f = 0;
	
	cout << "请输入一个数" << endl;
	cin >> x;

	if (x == 2 || x == 3)
	{
		f = 1;
	}
	else if (x > 3)
	{
		f = 1;
		for (int i = 2; i <= sqrt(x); i++)
		{
			if (x % i == 0)
			{
				f = 0;
				break;
			}
		}
	}
	if (f)
	{
		cout << "Yes" << endl;
	}
	else
	{
		cout << "No" << endl;
	}
	return 0;
}
