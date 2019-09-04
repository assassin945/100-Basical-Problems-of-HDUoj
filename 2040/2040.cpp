// 2040.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int a, b;
	int sum1, sum2;
	while (n--) {
		cin >> a >> b;
		sum1 = 1;
		sum2 = 1;
		for (int i = 2; i < sqrt(a); i++)
		{
			if (a % i == 0)
			{
				sum1 = sum1 + i + a / i;
			}
		}
		if (sum1 != b)
		{
			cout << "NO" << endl;
		}
		else {
			for (int j = 2; j < sqrt(b); j++)
			{
				if (b % j == 0)
				{
					sum2 = sum2 + j + b / j;
				}
			}
			if (sum2 == a)
			{
				cout << "YES" << endl;
			}
			else {
				cout << "NO" << endl;
			}
		}
	}
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
