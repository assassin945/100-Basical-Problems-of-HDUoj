#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	int m, n, i, j, sum;
	vector<int> vec;
	while (cin>>n)
	{
		sum = 0;
		for (i = 0; i < n; i++) {
			cin >> m;
			vec.push_back(m);
		}
		sort(vec.begin(), vec.end());
		vec.pop_back();
		for (j = 1; j < vec.size(); j++) {
			sum += vec[j];
		}
		cout.precision(2);
		cout << fixed << (double)sum / (n - 2)<< endl;
		vec.clear();
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
