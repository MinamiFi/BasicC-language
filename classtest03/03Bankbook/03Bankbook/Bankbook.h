#include <iostream>
using namespace std;
#ifndef BANKBOOK_H
#define BANKBOOK_H
class Bankbook {
public:
	Bankbook(unsigned acc = 0, string newname = "", double b = 0) :account(acc), name(newname), balance(b) {}
	Bankbook* newAccount(unsigned a = 0);
	void deposit(double num);//存款
	virtual void withdraw(double num);//取款
	void checkBalance();//查看余额
	void getMessage();
protected:
	unsigned account;//账户
	string name;//名字
	double balance;//余额
};

Bankbook* Bankbook::newAccount(unsigned a)
{
	return new Bankbook(a, name);
}

void Bankbook::deposit(double num)
{
	cout << "原先余额为：" << balance << "元" << endl;
	balance += num;
	cout << "存款" << num << "元后，余额为" << balance << "元" << endl;
}

void Bankbook::withdraw(double num)
{
	if (num <= balance)
	{
		cout << "取款成功，账户原先余额为" << balance << "元" << endl;
		balance -= num;
		cout << "取款" << num << "元后，账户余额还剩" << balance << "元" << endl;
	}
	else
	{
		cout << "账户余额不足取款金额，取款失败";
	}
}

void Bankbook::checkBalance() { cout << "您账户中的余额还剩" << balance << "元" << endl; }

void Bankbook::getMessage() { cout << "用户：" << name << endl << "账户：" << account << endl << "余额：" << balance << endl; }
#endif
