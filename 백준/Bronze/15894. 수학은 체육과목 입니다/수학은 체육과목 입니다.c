#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n = 0;
	long long count=0;
	long long m_count=0;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) count += 4*i;
	for (int j = 1; j < n; j++) m_count += 4 * j;
	printf("%lld", count - m_count);
}