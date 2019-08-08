#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
int main(void)
{
	double n, m, a, b;
	int i, j, A, B;
	double e[50][5];
	double f[5];
	while (scanf("%lf %lf", &n, &m) != EOF)
	{
		a = 0;
		b = 0;
		B = 0;
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < m; j++)
			{
				scanf("%lf", &e[i][j]);
			}
		}

		for (j = 0; j < n; j++)
		{
			a = 0;
			for (i = 0; i < m; i++)
			{
				a += e[j][i];
			}

			if (j == 0)
			{
				printf("%.2f", a / m);
			}
			else
			{
				printf(" %.2f", a / m);
			}
		}
		printf("\n");
		for (i = 0; i < m; i++)
		{
			b = 0;
			for (j = 0; j < n; j++)
			{
				b += e[j][i];
			}
			f[i] = b / n;
			if (i == 0)
			{
				printf("%.2f", f[i]);
			}
			else
			{
				printf(" %.2f", f[i]);
			}
		}
		printf("\n");
		for (i = 0; i < n; i++)
		{
			A = 0;
			for (j = 0; j < m; j++)
			{
				if (e[i][j] >= f[j])
					A++;
			}
			if (A == m)
				B++;
		}
		printf("%d\n\n", B);
	}
	return 0;
}
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
