// 2043.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n;
	int length;
	int flag1, flag2, flag3, flag4;
	string password;
	cin >> n;
	while (n--)
	{
		cin >> password;
		getchar();
		length = password.length();
		flag1 = 0;
		flag2 = 0;
		flag3 = 0;
		flag4 = 0;
		if (length < 8 || length > 16)
		{
			cout << "NO" << endl;
			continue;
		}
		for (int i = 0; i < length; i++)
		{
			if (password[i] >= 'A' && password[i] <= 'Z')
			{
				flag1 = 1;
				continue;
			}
			if (password[i] >= 'a' && password[i] <= 'z')
			{
				flag2 = 1;
				continue;
			}
			if (password[i] >= '0' && password[i] <= '9')
			{
				flag3 = 1;
				continue;
			}
			if (password[i] == '~' || password[i] == '!' || password[i] == '@' || password[i] == '#' || password[i] == '$' || password[i] == '%' || password[i] == '^')
			{
				flag4 = 1;
				continue;
			}
		}
		if ((flag1 + flag2 + flag3 + flag4) >= 3)
		{
			cout << "YES" << endl;
			continue;
		}
		else
		{
			cout << "NO" << endl;
			continue;
		}
		password = "";
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
