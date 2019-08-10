#define _CRT_SECURE_NO_DEPRECATE
#include <iostream>
using namespace std;

int dp[31][31];
int main() {
	int n, i, j;
	while (~scanf("%d", &n)) {
		for (i = 1; i <= n; ++i) {
			dp[i][1] = 1;
			dp[i][i] = 1;
		}
		for (i = 3; i <= n; ++i) {
			for (j = 2; j < i; ++j) {
				dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j];
			}
		}
		for (i = 1; i <= n; ++i) {
			printf("%d", dp[i][1]);
			for (j = 2; j <= i; ++j) {
				printf(" %d", dp[i][j]);
			}
			printf("\n");
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
