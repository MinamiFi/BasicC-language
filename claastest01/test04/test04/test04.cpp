// test04.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//进行20位数的加法运算

#include <iostream>
using namespace std;

const int Max = 20;//定义最大位数


int main()
{
	int f, isover;//判断程序运行与是否位数过多
	int i, j;//循环用变量
	char a[Max+1] = {}, b[Max+1] = {};
	char ans[Max+1] = {};
	char no, t;//处理字符,交换字符
	int c0, c1=0;//ans当前位和下一位
	int lena=0, lenb=0, lenans=0;//各个数字的位数
	while (1)
	{
		f = 0;
		cout << "输入1开始计算，输入0退出" << endl;
		cin >> f;
		no = getchar();

		if (f)
		{
			//初始化
			lena = 0, lenb = 0, lenans = 0, c1 = 0, isover = 0;
			for (i = 0; i <= Max; i++)
			{
				a[i] = 0;
				b[i] = 0;
				ans[i] = 0;
			}

			//两个数的输入

			cout << "请输入第一个数：";
			cin >> a;

			for (i = 0, lena = 0; i < Max && a[i] != 0; i++, lena++);//算出a数组的长度
			lena--;

			//利用冒泡排序将a倒叙排列,即让其a[0]是其个位
			for (i = 0; i < lena; i++)
			{
				for (j = lena; j > i; j--)
				{
					t = a[j];
					a[j] = a[j - 1];
					a[j - 1] = t;
				}
			}


			cout << "请输入第二个数：";
			cin >> b;

			for (i = 0, lenb = 0; i < Max && b[i] != 0; i++, lenb++);//算出b数组的长度
			lenb--;

			//利用冒泡排序将b倒叙排列,即让其b[0]是其个位
			for (i = 0; i < lenb; i++)
			{
				for (j = lenb; j > i; j--)
				{
					t = b[j];
					b[j] = b[j - 1];
					b[j - 1] = t;
				}
			}

			//开始计算
			for (i = 0; i <= lena || i <= lenb || c1 != 0; i++)
			{
				if (i > lena && i > lenb)
				{
					c0 = c1;
				}
				else if (i > lena)
				{
					c0 = c1 + b[i] - '0';
				}
				else if (i > lenb)
				{
					c0 = c1 + a[i] - '0';
				}
				else
				{
					c0 = c1 + (a[i] - '0') + (b[i] - '0');
				}
				if (c0 > 9)
				{
					if (i + 1 == Max)
					{
						isover = 1;
						break;
					}
				}
				c1 = c0 / 10;
				c0 = c0 % 10;
				ans[i] = c0 + '0';
				lenans++;
			}
			lenans--;

			//输出
			if (isover)
			{
				cout << "integer overflow." << endl;
				continue;
			}
			else
			{
				//冒泡使得ans数组的数组正常
				for (i = 0; i < lenans; i++)
				{
					for (j = lenans; j > i; j--)
					{
						t = ans[j];
						ans[j] = ans[j - 1];
						ans[j - 1] = t;
					}
				}
				cout << ans << endl;
			}
		}
		else
		{
			break;//输入0退出
		}
	}
	return 0;
}