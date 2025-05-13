#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int n;
	scanf("%d", &n);
	//upper
	for (int i = 1;i <= n;i++) {
		for (int j = n - i;j > 0;j--) printf(" ");
		for (int w = 1;w <= i;w++)printf("*");
		puts("");
	}

	//lower
	for (int i = 1;i < n;i++) {
		for (int j = 1;j <= i;j++) printf(" ");
		for (int w = 1;w <= n - i;w++)printf("*");
		puts("");
	}
}