// test01.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//a program that computes the cost of a long-distance call

#include <iostream>
using namespace std;

int main()
{
	int i, j;
	int h,min;//打电话的时刻几时几分
	char day[3];//打电话的星期
	int spend,f=0;//打电话耗时，进入与退出系统的判定
	char no;//用于消除时间的:
	double ans;


	while(1)
	{
		f = 0;
		cout << "输入1开始计算，输入0退出系统" << endl;
		cin >> f;

		if (f)
		{
			//输入部分
			cout << "请输入电话拨打的星期" << endl;
			cin >> day;
			for (i = 0; i < 1; i++)//允许用户输入大小写字母，转换为小写
			{
				if (day[i] >= 'A' && day[i] <= 'Z')
				{
					day[i] = day[i] + 32;
				}
			}
			cout << "请输入电话拨打的开始时刻(24:00)" << endl;
			cin >> h;
			no = getchar();
			cin >> min;
			cout << "请输入电话拨打的时长" << endl;
			cin >> spend;


			
			//判断星期并计算话费
			if (day[0] == 's')
			{
				ans = 0.15 * spend;
			}
			else
			{
				if (h >= 8 && h <= 18)
				{
					ans = 0.4 * spend;
				}
				else
				{
					ans = 0.25 * spend;
				}
			}
			cout << "The cost of a long-distance call is " << ans << "$" << endl;

		}
		else
		{
			break;
		}
	}


}

