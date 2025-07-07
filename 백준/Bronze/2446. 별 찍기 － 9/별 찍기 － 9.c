#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	for (int i = 2 * n - 1; i >= 1; i -= 2) {
		for (int j = 0; j < (2 * n - 1-i)/2;j++) printf(" ");
		for (int j = 0; j < i; j++) printf("*");
		puts("");
	}
	for (int i = 3; i <= 2*n-1; i += 2) {
		for (int j = 0; j < (2 * n - 1 - i) / 2; j++) printf(" ");
		for (int j = 0; j < i; j++) printf("*");
		puts("");
	}
}
