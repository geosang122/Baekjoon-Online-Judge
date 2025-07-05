#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int i = 1, j = 1, count = 0, n = 0;
	scanf("%d", &n);
	for (; i <= n; i++) {
		for (j=i; i * j <= n; j++) {
			count++;
		}
	}
	printf("%d", count);
}
