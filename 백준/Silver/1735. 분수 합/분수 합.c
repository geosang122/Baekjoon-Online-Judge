#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a1, b1, a2, b2, tmp;
	scanf("%d %d %d %d", &a1, &b1, &a2, &b2);
	int b = b1 * b2;
	int a = a1 * b2 + b1 * a2;
	while (b != 0) {
		tmp = a % b;
		a = b;
		b = tmp;
	}
	printf("%d %d", (a1 * b2 + b1 * a2) / a, b1 * b2 / a);
}