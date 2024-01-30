#include <iostream>
using namespace std;


class Matrix {
private:
	int row, column;//行列
	int* mp;//数组
	
public:
	Matrix(int r = 0, int c = 0) : row(r), column(c)
	{
		mp = new int[r * c];
	}

	void input(int i,int in)
	{
		*(mp + i) = in;
	}
	Matrix operator+(Matrix m)
	{
		Matrix neww(row, column);
		for (int i = 0; i < row * column; i++)
		{
			*(neww.mp + i) = *(mp + i) + *(m.mp + i);
		}
		return neww;
	}

	Matrix operator-(Matrix m)
	{
		Matrix neww(row, column);
		for (int i = 0; i < row * column; i++)
		{
			*(neww.mp + i) = *(mp + i) - *(m.mp + i);
		}
		return neww;

	}

	void show()
	{
		for (int i = 0; i < row * column;)
		{
			cout << *(mp + i) << ' ';
			i++;
			if (i % column == 0)
			{
				cout << endl;
			}
		}
	}
};

int main()
{
	int r, c,in;

	cout << "please input the row: ";
	cin >> r;
	cout << "please input the column: ";
	cin >> c;

	Matrix m1(r, c);
	Matrix m2(r, c);
	Matrix m3(r, c);

	cout << "Now input the content of the first matrix" << endl;
	for (int i = 0; i < r * c; i++)
	{
		cin >> in;
		m1.input(i, in);
	}
	//cout << "The first matrix is " << endl;
	//m1.show();
	cout << "Now input the content of the second matrix" << endl;
	for (int i = 0; i < r * c; i++)
	{
		cin >> in;
		m2.input(i, in);
	}
	//cout << "The second matrix is " << endl;
	//m2.show();

	m3 = m1 + m2;
	cout << "The result of m1 + m2 is " << endl;
	m3.show();

	m3 = m1 - m2;
	cout << "The result of m1 - m2 is" << endl;
	m3.show();
	return 0;
}
