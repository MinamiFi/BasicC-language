#include <iostream>
using namespace std;

template<typename T>
void Swap(T& x, T& y)
{
	T temp;
	temp = x;
	x = y;
	y = temp;
	return;
}

int main()
{
	int a = 0, b = 1;
	cout << a << " " << b << endl;
	Swap<int>(a, b);
	cout << a << " " << b << endl;
}
