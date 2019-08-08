#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>

int main() {
	int n, m, i;
	int a[101], b[101];
	while (scanf("%d%d", &n, &m) != EOF) {
		int count = 0, sum = 0, k = 0;
		for (i = 1; i <= n; i++)
			a[i] = 2 * i;
		for (i = 1; i <= n; i++) {
			count++;
			sum += a[i];
			if (count == m) {
				b[k++] = sum / m;
				sum = 0;
				count = 0;
			}
		}
		//如果最后不足m个，则以实际数量求平均值 
		if (n % m != 0) {
			b[k] = sum / (n % m);
			k++;
		}
		for (i = 0; i < k - 1; i++) {
			printf("%d ", b[i]);
		}
		printf("%d\n", b[k - 1]);
	}
	return 0;
}