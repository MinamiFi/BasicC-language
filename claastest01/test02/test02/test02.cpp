// test02.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//23game

#include <iostream>
using namespace std;

int main()
{
	int num = 23;//剩余签数
	int withdraw;
	cout << "Game Start!" << endl;
	while(num>0)
	{
		cout << "How many ticks do u want to withdraw?(1/2/3)" << endl;
		LOOP:cin >> withdraw;
		if (num - withdraw <= 0)
		{
			cout << "There are not so many stick." << endl;
			goto LOOP;
		}
		else if (withdraw < 1 || withdraw>3)
		{
			cout << "Please input a number in 1 2 or 3" << endl;
			goto LOOP;
		}
		num -= withdraw;

		if (num > 4)
		{
			num = num - (4 - withdraw);
			cout << "I withdraw " << 4 - withdraw << " sticks.Now " << num << " left." << endl;
		}
		else if (num == 1)
		{
			num--;
			cout << "I withdraw 1 sticks. You win the gamme!" << endl;
		}
		else
		{
			cout << "I withdraw " << num-1 << " sticks.Now 1 left.You lose the game." << endl;
			num = 0;
		}

	}
}

