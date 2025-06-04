#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n = 0, m = 0, k = 0;
	scanf("%d %d %d", &n, &m, &k);
	int diff = m > k ? m - k : k - m;
	printf("%d", n-diff);
}
