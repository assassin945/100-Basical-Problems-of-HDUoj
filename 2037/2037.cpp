#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main() {
	vector<int> timeBegin;
	vector<int> timeEnd;
	int n, c;
	int temp, temp1,temp2;
	while (cin>>n && n != 0)
	{
		c = 1;
		for (int i = 0; i < n; i++)
		{
			cin >> temp1;
			cin >> temp2;
			timeBegin.push_back(temp1);
			timeEnd.push_back(temp2);
		}
		for (int j = 1; j < n; j++)
		{
			for (int k = 0; k < n - 1; k++)
			{
				if (timeEnd[k] > timeEnd[k + 1])
				{
					temp = timeEnd[k];
					timeEnd[k] = timeEnd[k + 1];
					timeEnd[k + 1] = temp;
					temp = timeBegin[k];
					timeBegin[k] = timeBegin[k + 1];
					timeBegin[k + 1] = temp;
				}
				if (timeEnd[k] == timeEnd[k+1])
				{
					if (timeBegin[k] > timeBegin[k+1])
					{
						temp = timeBegin[k];
						timeBegin[k] = timeBegin[k + 1];
						timeBegin[k + 1] = temp;
					}
				}
			}
		}
		int begin = timeEnd[0];
		for (int p = 0; p < n - 1; p++)
		{
			for (int q = p + 1; q < n; q++)
			{
				if (timeBegin[q] >= begin)
				{
					p = q;
					c = c + 1;
					begin = timeEnd[q];
				}
			}
		}
		cout << c << endl;
	}
}