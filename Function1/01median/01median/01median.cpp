// 01median.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//1) Input six numbers from the keyboard and output them in the order of small to large； 
//2) Output the median(中位数) of the above six numbers.


#include <iostream>
using namespace std;

int main()
{
	int a[6],sum=0;
	int t;//用于交换
	
	//输入
	for (int i = 0; i < 6; i++)
	{
		cin >> a[i];
		sum += a[i];
	}

	//冒泡排序
	for (int i = 0; i < 6; i++)
	{
		for (int j = 5; j > i; j--)
		{
			if (a[j] < a[j - 1])
			{
				t = a[j];
				a[j] = a[j - 1];
				a[j - 1] = t;
			}
		}
		cout << a[i] << ' ';
	}
	cout << endl;
	cout << sum / 6.0 << endl;
	return 0;
}

