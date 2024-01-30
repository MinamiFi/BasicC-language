#include "Bankbook.h"
#include "Creditaccount.h"
int main()
{
	Bankbook* b[5];
	b[0] = new Bankbook(1001, "Kun Kun",1000);
	b[0]->getMessage();
	b[0]->withdraw(100);//取出100
	cout << endl;

	b[1] = new Bankbook(1002, "Ding Zhen",2000);
	b[1]->getMessage();
	b[1]->deposit(50);//存入50
	cout << endl;

	b[2] = new Bankbook(1003, "Niko", 10000);
	b[2]->getMessage();
	b[2]->checkBalance();//查询余额
	cout << endl;

	b[3] = new Creditaccount(1145, "Homo", 14191);
	b[3]->getMessage();
	b[3]->withdraw(15000);
	cout << endl;
	Bankbook* newA = b[3]->newAccount();//新开一个户
	newA->getMessage();
	newA->deposit(100);
	cout << endl;

	b[4] = new Creditaccount(2333, "JKS", 1000);
	b[4]->getMessage();
	b[4]->withdraw(4000);

	return 0;
}