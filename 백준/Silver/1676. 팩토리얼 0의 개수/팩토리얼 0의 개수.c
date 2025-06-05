#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n = 0;
	scanf("%d", &n);
	printf("%d", (n / 5) + (n / 25) + (n/125));
}
