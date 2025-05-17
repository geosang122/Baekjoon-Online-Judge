#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int t;
	scanf("%d", &t);
	char a[1000];
	for (int i = 0; i < t; i++) {
		scanf("%s", a);
		printf("%c", a[0]);
		for (int j = 0; j < 1000; j++) {
			if (a[j] == '\0') {
				printf("%c", a[j - 1]);
				break;
			}
		}
		puts("");
	}
}