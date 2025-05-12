#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//Contest > Croatian Open Competition in Informatics > COCI 2011/2012 > Contest #6 num1
//brute force

int main() {
	int n; //number of cards
	int m; //The closest number to M&&under M
	int a[100] = { 0 };
	int max = 0;
	scanf("%d %d", &n, &m);
	for (int i = 0;i < n;i++) {
		scanf("%d", &a[i]);
	}
	for (int j = 0;j < n - 2;j++) {
		for (int w = j+1;w < n - 1;w++) {
			for (int u = w + 1;u < n;u++) {
				if (a[j] + a[w] + a[u] <= m && a[j] + a[w] + a[u] > max)
					max = a[j] + a[w] + a[u];
			}
		}
	}
	printf("%d", max);
}