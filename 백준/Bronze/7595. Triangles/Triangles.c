#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n = 0;
	while (1) {
		scanf("%d", &n);
		if (n == 0) return 0;
		for (int i = 1; i <= n; i++) {
			for (int j = 0; j < i; j++) {
				printf("*");
			}
			puts("");
		}
	}
}
