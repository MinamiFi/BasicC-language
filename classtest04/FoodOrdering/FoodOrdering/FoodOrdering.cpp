#include <iostream>
using namespace std;

class Student {//学生信息
public:
	//构造函数
	Student(string n = "", string i = "", int d = 0)
	{
		name = n;
		id = i;
		dorm = d;
	}


protected:
	string name;//姓名
	string id;//学号
	int dorm;//宿舍楼编号
};

class Canteen {//食堂信息
public:
	//构造函数
	Canteen(string *cui, int *pri)
	{
		for (int i = 0; i < 5; i++)
		{
			cuisine[i] = cui[i];
			price[i] = pri[i];
		}
	}
protected:
	string cuisine[5];//菜品名字
	int price[5];//对应的价格
};

class OrderSystem :public Student, public Canteen {
public:
	void getOrder()//获取订单信息
	{
		cout << "订单人：" << name << endl;
		cout << "学号：" << id << endl;
		cout << "地址：" << dorm << "号楼" << endl;
		cout << "订餐内容:" << endl;
		for (int i = 0; i < 5; i++)
		{
			if (cuisine[i] == "" || price[i] == 0)
			{
				break;
			}
			else
			{
				cout << cuisine[i] << "——" << price[i] << "元" << endl;
			}
		}
		cout << "总费用：" << sum;
	}
	OrderSystem(string n, string i, int d, string *cui, int *pri) :Student(n, i, d), Canteen(cui, pri) 
	{
		sum = 0;
		for (int i = 0; i < 5; i++)
		{
			sum += price[i];
		}
	}
protected:
	int sum;//总费用
};

int main()
{
	string cui[5] = { "番茄炒蛋","红烧肉","炒包菜" };
	int pri[5] = { 4,8,3 };
	string n = "homo";
	string i = "114514";
	int d = 13;
	OrderSystem order(n, i, d, cui, pri);
	order.getOrder();

	return 0;
}
