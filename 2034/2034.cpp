#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>

void Insertion_Sort(int a[], int n)//直接插入排序
{
	int i, j;
	for (i = 1; i < n; i++) {
		int temp = a[i];
		for (j = i; j > 0 && a[j - 1] > temp; --j)
			a[j] = a[j - 1];
		a[j] = temp;
	}
}

int main() {
	int n, m;
	int a[100], b[100], c[100];
	while (~scanf("%d %d", &n, &m) && n != 0 || m != 0) {
		for (int i = 0; i < n; i++) {
			scanf("%d", &a[i]);
		}
		for (int i = 0; i < m; i++) {
			scanf("%d", &b[i]);
		}
		int flag = 1, k = 0;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (a[i] == b[j]) {
					flag = 0;
				}
			}
			if (flag) {
				c[k] = a[i];
				k++;
			}
			flag = 1;
		}
		if (k == 0) {
			printf("NULL");
		}
		else {
			Insertion_Sort(c, k);
			//            printf("%d", c[0]);
			for (int i = 0; i < k; i++) {
				printf("%d ", c[i]);
			}
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
