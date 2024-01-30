#include <iostream>
using namespace std;

class Mammal {
public:
	virtual void speak() {
		cout << "I don't know what to speak" << endl;
	}
};

class Dog :public Mammal {
public:
	//virtual void speak() {
	void speak() {
		cout << "wang" << endl;
	}
};

class Cat :public Mammal {
public:
	//virtual void speak() {
	void speak() {
		cout << "miao" << endl;
	}
};

void Func(Mammal& m)
{
	m.speak();
}
int main() 
{
	Mammal m;
	Dog d;
	Cat c;
	Func(m);
	Func(d);
	Func(c);

	return 0;
}

