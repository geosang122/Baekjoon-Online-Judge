#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a, b, c = 0;
	scanf("%d %d %d", &a, &b, &c);
	if (a > b) {
		if (b > c) printf("%d %d %d", c, b, a);
		else {
			printf("%d ", b);
			if (a > c) printf("%d %d", c, a);
			else printf("%d %d", a, c);
		}
		
	}
	else {
		if (a > c) printf("%d %d %d", c, a, b);
		else {
			if (c < b) printf("%d %d %d", a, c, b);
			else printf("%d %d %d", a, b, c);
		}
	}
}
