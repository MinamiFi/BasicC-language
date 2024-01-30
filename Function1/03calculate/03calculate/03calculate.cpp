
#include <iostream>
using namespace std;

int main()
{
	double sum = 1;
	double an;//第n项
	double x;
	int f = 1;//用于改变加减符号
	int i = 1;

	cout << "请输入x:" << endl;
	cin >> x;

	an = x / i;//第二项开始
	while (an > 1e-8)
	{
		sum += f * an;
		f = -f;
		i++;
		an = an * x / i;
	}
	cout << sum << endl;
	return 0;
}
