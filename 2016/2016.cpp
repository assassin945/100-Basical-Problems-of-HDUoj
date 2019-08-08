#define _CRT_SECURE_NO_DEPRECATE
#define N 100
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	int a[N];
	vector<int> vec;
	int m, n, i, j, k;
	while (cin >> n && n!=0) {
		int temp = 0;
		for (i = 0; i < n; i++) {
			cin >> m;
			a[i] = m;
			vec.push_back(m);
		}
		sort(vec.begin(), vec.end());
		for (j = 0; j < n; j++) {
			if (a[j] == vec[0]) {
				temp = a[0];
				a[0] = vec[0];
				a[j] = temp;
			}
		}
		vec.clear();
		for (k = 0; k < n; k++) {
			cout << a[k];
			if (k == (n - 1)) {
				break;
			}
			cout << " ";
		}
		cout << endl;
	}
	return 0;
}
/*
Problem Description
输入n(n<100)个数，找出其中最小的数，将它与最前面的数交换后输出这些数。
 
Input
输入数据有多组，每组占一行，每行的开始是一个整数n，表示这个测试实例的数值的个数，跟着就是n个整数。n=0表示输入的结束，不做处理。

Output
对于每组输入数据，输出交换后的数列，每组输出占一行。
 
Sample Input
4 2 1 3 4
5 5 4 3 2 1
0
 
Sample Output
1 2 3 4
1 4 3 2 5
 
Author
lcy
 
Source
C语言程序设计练习（三）
*/