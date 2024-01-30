#include <iostream>
using namespace std;

class Base
{
public:
    Base() { B2 = 2; B3 = 3; }

    static void BF1()
    {
        cout << B1 << " BF1 static in Base \n";
        B1 = 4;
    }

    void BF2()
    {
        cout << B1 << "  " << B2 << " BF2 in Base \n";
        B2 = 5;
    }
private:
    static int B1;
    int B2;
    int B3;
};
int Base::B1 = 1;

int main()
{
    Base a, b;

    a.BF2();
    a.BF1();
    a.BF2();
    b.BF2();
    Base::BF1();
    b.BF2();
    return 0;
}
