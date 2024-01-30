#include <iostream>
using namespace std;
class Employee {
public:
	//构造函数
	Employee(string newName = "", string newID = "") :name(newName), id(newID), salary(0) {}
	//析构函数
	~Employee() {}
	//获得月薪总额
	virtual double getSalary() = 0;//抽象类
	virtual void getMessage() = 0;
protected:
	string name;//姓名
	string id;//员工编号
	double salary;//月薪总额
};

class Manager :public Employee{
public:
	Manager(string newName = "", string newID = "") :Employee(newName, newID) {}
	~Manager() {}
	double getSalary()
	{
		salary = 28000;
		return salary;
	}
	void getMessage()
	{
		cout << "姓名：" << name << endl;
		cout << "工号" << id << endl;
		cout << "职位：经理" << endl;
		cout << "月薪总额：" << salary << endl;
	}
private:

};
class Technical :public Employee {
public:
	Technical(string newName = "", string newID = "", double newHour = 0) :Employee(newName, newID), workhour(newHour) {}
	~Technical() {}
	double getSalary()
	{
		salary = 200 * workhour;
		return salary;
	}
	void getMessage()
	{
		cout << "姓名：" << name << endl;
		cout << "工号" << id << endl;
		cout << "职位：兼职技术人员" << endl;
		cout << "月薪总额：" << salary << endl;
	}
private:
	double workhour;
};
class Salesman :public Employee {
public:
	Salesman(string newName = "", string newID = "", double newSales = 0) :Employee(newName, newID), sales(newSales) {}
	~Salesman() {}
	double getSalary()
	{
		salary = 3000 + sales * 0.04;
		return salary;
	}
	void getMessage()
	{
		cout << "姓名：" << name << endl;
		cout << "工号" << id << endl;
		cout << "职位：推销员" << endl;
		cout << "月薪总额：" << salary << endl;
	}
private:
	double sales;
};

class SalesManager :public Employee {
public:
	SalesManager(string newName = "", string newID = "", double newSales = 0) :Employee(newName, newID), sales(newSales) {}
	~SalesManager() {}
	double getSalary() 
	{
		salary = 7000 + sales * 0.05;
		return salary;
	}
	void getMessage()
	{
		cout << "姓名：" << name << endl;
		cout << "工号" << id << endl;
		cout << "职位：销售经理" << endl;
		cout << "月薪总额：" << salary << endl;
	}
private:
	double sales;
};

void getS(Employee& e)//虚函数的多态
{
	e.getSalary();
}

int main()
{
	string name, id;
	double sales, hour;
	Employee* employee[4];
	cout << "请输入经理的姓名：";
	cin >> name;
	cout <<  "请输入经理的员工编号：";
	cin >> id;
	employee[0] = new Manager(name, id);
	cout << endl;

	cout << "请输入兼职技术人员的姓名：";
	cin >> name;
	cout << "请输入兼职技术人员的员工编号：";
	cin >> id;
	cout << "请输入兼职技术人员的工作小时数：";
	cin >> hour;
	employee[1] = new Technical(name, id, hour);;
	cout << endl;

	cout << "请输入推销员的姓名：";
	cin >> name;
	cout << "请输入推销员的员工编号：";
	cin >> id;
	cout << "请输入推销员的推销额：";
	cin >> sales;
	employee[2] = new Salesman(name, id, sales);
	cout << endl;

	cout << "请输入推销经理的姓名：";
	cin >> name;
	cout << "请输入推销经理的员工编号：";
	cin >> id;
	cout << "请输入推销经理所管辖部门的总推销额：";
	cin >> sales;
	employee[3] = new SalesManager(name, id, sales);
	cout << endl;

	cout << "现在输出四位员工的信息" << endl;
	for (int i = 0; i < 4; i++)
	{
		getS(*employee[i]);
		employee[i]->getMessage();
	}
}
