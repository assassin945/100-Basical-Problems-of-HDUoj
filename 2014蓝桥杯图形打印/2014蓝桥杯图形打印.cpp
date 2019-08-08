#define _CRT_SECURE_NO_DEPRECATE
#include <iostream>

#define N 10
using namespace std;


void f(char a[][N], int rank, int row, int col)
{
	if (rank == 1) {
		cout << "row = " << row << " col= " << col << endl;
		a[row][col] = '*';
		return;
	}

	int w = 1;
	int i;

	for (i = 0; i < rank - 1; i++) {
		w *= 2;
	}

	f(a, rank - 1, row, col + w / 2); //填空 当前行 
	f(a, rank - 1, row + w / 2, col);
	f(a, rank - 1, row + w / 2, col + w);
}

int main()
{
	char a[N][N];
	int i, j;
	for (i = 0; i < N; i++)
		for (j = 0; j < N; j++) a[i][j] = ' ';

	f(a, 5, 0, 0);

	for (i = 0; i < N; i++) {
		for (j = 0; j < N; j++) printf("%c", a[i][j]);
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
