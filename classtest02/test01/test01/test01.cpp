#include <iostream>
#include <iomanip>
using namespace std;

//要求1 创造一个time类有时分秒成员
class Time {
private:
	int hour, minute, second;

public:
	Time(int h = 0, int m = 0, int s = 0);
	void show();
	Time operator+(Time t);
};

//要求2 构造函数 初始化 无值默认赋固定值0
Time::Time(int h,int m,int s) :hour(h), minute(m), second(s){}

//要求3 以固定格式输出time数据
void Time::show()
{
	cout << setw(2) << setfill('0') << hour << ':' << setw(2) << setfill('0') << minute << ':' << setw(2) << setfill('0') << second << endl;
	return;
}
//要求4 重载+运算符
Time Time::operator+(Time t)
{
	Time newTime(0);
	newTime.second = second + t.second;
	if (newTime.second >= 60)
	{
		newTime.second = newTime.second % 60;
		newTime.minute = 1;
	}

	newTime.minute += minute + t.minute;
	if (newTime.minute >= 60)
	{
		newTime.minute = newTime.minute % 60;
		newTime.hour = 1;
	}
	newTime.hour += hour + t.hour;
	if (newTime.hour >= 24)
	{
		newTime.hour = newTime.hour % 24;
	}
	return newTime;
}



//要求5 定义两个初始化的对象和一个未初始化的对象，实现加法
int main()
{
	//两个初始化的对象
	Time t1(23, 59, 59);
	cout << "第一个初始化的对象t1" << endl;
	t1.show();
	Time t2(12, 0, 0);
	cout << "第二个初始化的对象t2" << endl;
	t2.show();
	//一个未初始化的对象
	Time t3;


	t3 = t1 + t2;
	cout << "t1和t2相加的结果" << endl;
	t3.show();
	return 0;
}