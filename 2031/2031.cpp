#define _CRT_SECURE_NO_DEPRECATE
#include <iostream>
#include <cmath>

using namespace std;
int main()
{
	int N, R;
	while (~scanf("%d %d", &N, &R)) {
		int num, i = 0, c[10000];
		for (num = abs(N); num > 0; i++) {
			c[i] = num % R;
			num /= R;
		}
		i--;
		if (N < 0)//当输入的数是负数时，需要输出负号
			printf("-");
		for (; i >= 0; i--)
		{
			if (c[i] < 10)
				printf("%d", c[i]);
			else if (c[i] == 10)
				printf("A");
			else if (c[i] == 11)
				printf("B");
			else if (c[i] == 12)
				printf("C");
			else if (c[i] == 13)
				printf("D");
			else if (c[i] == 14)
				printf("E");
			else if (c[i] == 15)
				printf("F");
		}
		printf("\n");
	}
	return 0;
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
