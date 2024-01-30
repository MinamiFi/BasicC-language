#include "Bankbook.h"
#ifndef CREDITACCOUNT_H
#define CREDITACCOUNT_H

class Creditaccount :public Bankbook {
public:
	Creditaccount(unsigned acc = 0, string nam = "", double b = 0) : Bankbook(acc, nam, b) {}
	void withdraw(double num)
	{
		if (balance >= num)
		{
			cout << "取款成功，账户原先余额为" << balance << "元" << endl;
			balance -= num;
			cout << "取款" << num << "元后，账户余额还剩" << balance << "元" << endl;
		}
		else if (balance + 2000 >= num)
		{
			cout << "取款成功，账户原先余额为" << balance << "元" << endl;
			balance -= num;
			cout << "取款" << num << "元后，账户透支了" << balance << "元" << endl;
		}
		else
		{
			cout << "没有更大的余额来透支了" << endl;
		}
	}
};

#endif