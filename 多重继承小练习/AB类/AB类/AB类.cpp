#include <iostream>
using namespace std;

class BaseA {
public:
	BaseA(int a = 0, int b = 0);
	~BaseA();
protected:
	int m_a;
	int m_b;
};

class BaseB {
public:
	BaseB(int a = 0, int b = 0);
	~BaseB();
protected:
	int m_a;
	int m_b;
};

class Derived :public BaseA, protected BaseB
{
public:
	Derived(int a = 0, int b = 0, int c = 0, int d = 0, int e = 0);
	~Derived();

private:
	int m_e;
};

BaseA::BaseA(int a, int b) :m_a(a), m_b(b) { cout << "A构造函数" << endl; }
BaseA::~BaseA() { cout << "A析构函数" << endl; }
BaseB::BaseB(int a, int b) :m_a(a), m_b(b) { cout << "B构造函数" << endl; }
BaseB::~BaseB() { cout << "B析构函数" << endl; }
Derived::Derived(int a, int b, int c, int d, int e) :BaseB(c, d), BaseA(a, b), m_e(e) {  cout << "Derived构造函数" << endl; }
Derived::~Derived() { cout << "Derived析构函数" << endl; }

int main()
{
	BaseA a;
	BaseB b;
	Derived d;

	return 0;
}