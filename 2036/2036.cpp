﻿// 2036.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
struct points {
	int x;
	int y;
};
int main() {
	//p为原点，也可以为任意点
	points p;
	p.x = 0;
	p.y = 0;
	points a[100];
	int n;
	while (cin >> n && n != 0) {
		double res = 0.0;
		for (int i = 0; i < n; i++) {
			cin >> a[i].x >> a[i].y;
		}
		for (int j = 0; j < n - 1; j++) {
			//偷懒没有把p点带进来，若p为任意点，向量坐标表示要把p点坐标代进去
			res += a[j].x * a[j + 1].y - a[j].y * a[j + 1].x;
		}
		//保证逆时针首尾相连
		res += a[n - 1].x * a[0].y - a[n - 1].y * a[0].x;
		res /= 2;
		cout.precision(1);
		cout << fixed << res << endl;
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
