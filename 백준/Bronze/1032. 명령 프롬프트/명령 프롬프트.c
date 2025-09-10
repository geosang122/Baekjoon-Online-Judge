#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char c1[51] = { 0 };
	int n = 0;
	scanf("%d", &n);
	scanf("%s", c1);
	char c2[51] = { 0 };
	while (--n) {
		scanf("%s", c2);
		for (int i = 0; c2[i]; i++) {
			if (c1[i] != c2[i]) {
				c1[i] = '?';
			}
		}
	}
	printf("%s", c1);
}