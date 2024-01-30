// test03.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//find a address

#include <iostream>
using namespace std;

int main()
{
	int x;//数字
	int ge, shi, bai, qian;//个十百千
	int sum;
	
	for (x = 1000; x < 9999; x++)
	{
		ge = x % 10;
		shi = (x % 100) / 10;
		bai = (x % 1000) / 100;
		qian = x / 1000;
		sum = ge + shi + bai + qian;
		if (sum != 27)
		{
			continue;
		}
		else if (qian != 3 * shi)
		{
			continue;
		}
		else if (x%2==0)
		{
			continue;
		}
		else if (ge == shi || ge == bai || ge == qian || shi == bai || shi == qian || bai == qian)
		{
			continue;
		}
		break;
	}
	cout << x;
}

