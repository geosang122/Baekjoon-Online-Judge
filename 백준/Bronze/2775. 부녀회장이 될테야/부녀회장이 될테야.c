#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a[15][14] = { 0 };
	int sum = 0;
	for (int i = 0; i < 14; i++) a[0][i] = i + 1;
	for (int i = 1; i <= 14; i++)
	{
		for (int j = 0; j < 14; j++)
		{
			sum = 0;
			for (int w = 0; w <= j; w++) sum += a[i-1][w];
			a[i][j] = sum;
		}
	}
	int t, k, n;
	scanf("%d", &t);
	while (t--) {
		scanf("%d %d", &k, &n);
		printf("%d\n", a[k][n - 1]);
	}
}