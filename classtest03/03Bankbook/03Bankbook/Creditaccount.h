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
			cout << "ȡ��ɹ����˻�ԭ�����Ϊ" << balance << "Ԫ" << endl;
			balance -= num;
			cout << "ȡ��" << num << "Ԫ���˻���ʣ" << balance << "Ԫ" << endl;
		}
		else if (balance + 2000 >= num)
		{
			cout << "ȡ��ɹ����˻�ԭ�����Ϊ" << balance << "Ԫ" << endl;
			balance -= num;
			cout << "ȡ��" << num << "Ԫ���˻�͸֧��" << balance << "Ԫ" << endl;
		}
		else
		{
			cout << "û�и���������͸֧��" << endl;
		}
	}
};

#endif