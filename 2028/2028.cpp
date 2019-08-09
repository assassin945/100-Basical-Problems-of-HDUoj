#define _CRT_SECURE_NO_DEPRECATE
#include <iostream>

using namespace std;
int main()
{
	int n, i;
	int num[100], n1, n2, temp;//n1较大数，n2较小数
	while (~scanf("%d", &n)) {
		for (int j = 0; j < n; j++) {
			scanf("%d", &num[j]);
		}
		for (i = 0; i < n - 1; i++) {
			n1 = num[i];
			n2 = num[i + 1];
			// 辗转相除是用大的除以小的。如果n1<n2，第一次相当n1与n2值交换
			while (n1 % n2 != 0) {
				temp = n1 % n2;
				n1 = n2;
				n2 = temp;
			}
			num[i + 1] = num[i] / n2 * num[i + 1];//求最小公倍数
		}
		printf("%d\n", num[i]);
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
