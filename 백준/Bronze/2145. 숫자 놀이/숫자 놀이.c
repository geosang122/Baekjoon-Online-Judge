#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	while (1) {
		int n = 0 , k  = 0;
		scanf("%d", &n);
		if (n == 0) break;
		k = n % 9 ? n % 9 : 9;
		printf("%d\n", k);
	}
}
