// 2033.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
int main()
{
	int n, i;
	int second, min;
	cin >> n;
	int input[6];
	int output[3];
	while (n--)
	{
		second = 0;
		min = 0;
		output[0] = 0;
		output[1] = 0;
		output[2] = 0;
		for (i = 0; i < 6; i++)
		{
			cin >> input[i];
		}
		if ((input[5] + input[2]) > 60)
		{
			output[2] = (input[5] + input[2]) % 60;
			second++;
		}
		else {
			output[2] = input[5] + input[2];
		}
		if ((input[4] + input[1]) > 60)
		{
			output[1] = ((input[4] + input[1]) % 60) + second;
			min++;
		}
		else
		{
			output[1] = input[4] + input[1] + second;
		}
		output[0] = input[3] + input[0] + min;
		cout << output[0] << " " << output[1] << " " << output[2] << endl;
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
