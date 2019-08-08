#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main()
{
	int n, length, flag = 0;
	string str;
	cin >> n;
	//获取回车，否则出错
	getchar();
	for (int i = 0; i < n; i++)
	{
		//获取一整行字符串
		getline(cin, str);

		length = str.size();

		for (int j = 0; j < length; j++)
		{
			//开头必须是字母或者下划线
			if (j == 0)
			{
				if (str[0] >= 'A' && str[0] <= 'Z' || str[0] >= 'a' && str[0] <= 'z' || str[0] == '_')
				{
					++flag;
					//必须有continue
					continue;
				}
				else
				{
					cout << "no" << endl;
					break;

				}
			}
			//除了开头，合法的字符串时下划线，字母，数字
			if (str[j] >= 'A' && str[j] <= 'Z' || str[j] >= 'a' && str[j] <= 'z' || str[j] == '_' || str[j] >= '0' && str[j] <= '9')
			{
				++flag;
			}
			else
			{
				cout << "no" << endl;
				break;
			}

		}
		//如果正确的字符位数等于长度，说明是合法的字符串
		if (flag == length)
			cout << "yes" << endl;

		flag = 0;
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
