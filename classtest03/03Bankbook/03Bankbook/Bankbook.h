#include <iostream>
using namespace std;
#ifndef BANKBOOK_H
#define BANKBOOK_H
class Bankbook {
public:
	Bankbook(unsigned acc = 0, string newname = "", double b = 0) :account(acc), name(newname), balance(b) {}
	Bankbook* newAccount(unsigned a = 0);
	void deposit(double num);//���
	virtual void withdraw(double num);//ȡ��
	void checkBalance();//�鿴���
	void getMessage();
protected:
	unsigned account;//�˻�
	string name;//����
	double balance;//���
};

Bankbook* Bankbook::newAccount(unsigned a)
{
	return new Bankbook(a, name);
}

void Bankbook::deposit(double num)
{
	cout << "ԭ�����Ϊ��" << balance << "Ԫ" << endl;
	balance += num;
	cout << "���" << num << "Ԫ�����Ϊ" << balance << "Ԫ" << endl;
}

void Bankbook::withdraw(double num)
{
	if (num <= balance)
	{
		cout << "ȡ��ɹ����˻�ԭ�����Ϊ" << balance << "Ԫ" << endl;
		balance -= num;
		cout << "ȡ��" << num << "Ԫ���˻���ʣ" << balance << "Ԫ" << endl;
	}
	else
	{
		cout << "�˻�����ȡ���ȡ��ʧ��";
	}
}

void Bankbook::checkBalance() { cout << "���˻��е���ʣ" << balance << "Ԫ" << endl; }

void Bankbook::getMessage() { cout << "�û���" << name << endl << "�˻���" << account << endl << "��" << balance << endl; }
#endif
