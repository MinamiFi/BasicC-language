#include <iostream>
using namespace std;


class String {
public:
    String(char* str = NULL);
    String(const char* str, int i, int j);
    void show() {
        cout << p << endl;
    }
private:
    char* p = NULL;
};

String::String(char* str)
{
    if (*str == NULL)
    {
        p = new char[1];
        if (p == NULL)
        {
            cout << "default" << endl;
            exit(1);
        }
        else
        {
            *p = '\0';
        }
    }
    else
    {
        int k;
        int len = strlen(str) + 1;
        p = new char[len];
        if (p == NULL)
        {
            cout << "default" << endl;
            exit(1);
        }
        else
        {
            for (k = 0; k < len; k++)
            {
                *(p + k) = *(str + k);
            }
        }
    }
}

String::String(const char* str, int i, int j)
{
    int k;
    p = new char[j+1];
    if (p != NULL)
    {
        for (k = 0; k < j; k++)
        {
            *(p + k) = *(str + i + k);
        }
    }
    else
    {
        cout << "default" << endl;
        exit(1);
    }
    *(p + j) = '\0';
}

int main()
{
    String str("I love C++", 0, 8);
    str.show();
    char str2[] = { "I am Nanfei" };
    String s(str2);
    s.show();
}
