#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	int sum = 1;
	for (int i = 0; i < n; i++) {
		sum *= 2;
	}
	printf("%d", sum);
}
