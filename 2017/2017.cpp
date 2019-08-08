#define _CRT_SECURE_NO_DEPRECATE
#include <iostream>
#include <string>

using namespace std;
int main()
{
	char str[100];
	int n, i;
	int res;
	cin >> n;
	while (n--)
	{
		cin >> str;
		res = 0;
		for (i = 0; str[i] != '\0'; i++) {
			if (str[i] >= '0' && str[i] <= '9')
			{
				res++;
			}
		}
		cout << res << endl;
	}
}
/*
Problem Description
对于给定的一个字符串，统计其中数字字符出现的次数。


Input
输入数据有多行，第一行是一个整数n，表示测试实例的个数，后面跟着n行，每行包括一个由字母和数字组成的字符串。


Output
对于每个测试实例，输出该串中数值的个数，每个输出占一行。


Sample Input
2
asdfasdf123123asdfasdf
asdf111111111asdfasdfasdf


Sample Output
6
9


Author
lcy


Source
C语言程序设计练习（三）
*/