// test05.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//count letters

#include <iostream>
#include <iomanip>//输出位数对齐用头文件

using namespace std;


int main()
{
	int count = 0;//统计出现了几个字符
	char c;//逐个字符输入
	int num[26] = {};//存放个数
	int rank[26];//存放排名
	int t;//用于交换

	cout << "请输入一行由小写字符组成的字符串：" << endl;
	while ((c = getchar()) != '\n')
	{
		if (c >= 'a' && c <= 'z')
		{
			num[c - 'a']++;
		}
	}
	//排序
	for (int i = 0; i < 26; i++)
	{
		rank[i] = i;
	}

	for (int i = 0; i < 26; i++)
	{
		for (int j = 25; j > i; j--)
		{
			if (num[rank[j]] > num[rank[j - 1]])
			{
				t = rank[j];
				rank[j] = rank[j - 1];
				rank[j - 1] = t;
			}
		}
		if (num[rank[i]] != 0)
		{
			count++;
		}
	}

	//输出表格
	cout << "__________________________________" << endl;
	cout << "| Letter | Number of Occurrences |" << endl;
	for (int i = 0; i < count; i++)
	{
		cout << "| ";
		cout.setf(ios::left);//对齐方式左对齐
		cout.fill(' ');//填充方式为空格
		cout << setw(7) << char(rank[i] + 'a');
		cout << "| ";
		cout << setw(22) << num[rank[i]];
		cout << "|" << endl;
	}
	cout << "__________________________________";

	return 0;
}
