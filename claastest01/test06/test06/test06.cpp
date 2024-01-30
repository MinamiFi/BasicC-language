// test06.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//飞机上的乘客分配座位系统

#include <iostream>
using namespace std;

void output(int(&seat)[7][4]);//输出座位信息
void input(int(&seat)[7][4]);//请求选座


int Count=28;//查看座位是否选满
int main()
{
	int seat[7][4] = {};
	int f = 1;

	while(1)
	{
		cout << "输入1进行选座，输入0退出系统" << endl;
		cin >> f;


		if (Count >= 4 * 7)
		{
			cout << "座位已满，将退出系统" << endl;
			system("pause");
			break;
		}
		else if (f)
		{
			cout << "您可选的座位如下图（X表示已经被选）：" << endl;
			output(seat);//输出座位信息
			input(seat);//请求选座
		}
		else
		{
			break;
		}
	}
	return 0;
}
void output(int(&seat)[7][4])//输出座位信息函数
{
	int i, j;
	for (i = 0; i < 7; i++)
	{
		cout << i + 1;
		for (j = 0; j < 4; j++)
		{
			cout << " ";
			if (seat[i][j])
			{
				cout << "X";
			}
			else
			{
				cout << char('A' + j);
			}
		}
		cout << endl;
	}
}

void input(int(&seat)[7][4])
{
	int row;
	char c;

	cout << "请输入您要选择的座位号（如第一排A座为1A）" << endl;
	cin >> row >> c;


	if (row > 7 || (c > 'D' || c < 'A'))//将该座位添加到数组
	{
		cout << "该座位不存在，请重新输入";
		input(seat);
	}
	else if (seat[row - 1][c - 'A'])
	{
		cout << "这个座位号已经有人选了，请选择别的座位号。" << endl;
		input(seat);
	}
	else
	{
		seat[row - 1][c - 'A'] = 1;
		cout << "选座成功，您的座位号是" << row << c << endl;
		Count++;
	}
	return;
}
