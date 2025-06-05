#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n = 0, k = 0;
	scanf("%d %d", &n, &k);
	int sum = 1;
	for (int i = 0; i < k; i++, n--) sum *= n;
	for (int j = 1; j <= k; j++) sum /= j;
	printf("%d", sum);
}
