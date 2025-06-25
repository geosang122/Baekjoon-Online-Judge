#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n = 0;
	scanf("%d", &n);
	int w = 0;
	while (n--) {
		scanf("%d", &w);
		while (w--) {
			printf("=");
		}
		puts("");
	}
}
