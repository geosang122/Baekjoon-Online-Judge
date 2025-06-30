#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int t = 0;
	scanf("%d", &t);
	if (t % 10 != 0) {
		printf("-1");
		return 0;
	}
	printf("%d ", t / 300);
	printf("%d ", (t % 300) / 60);
	printf("%d", (t % 60) / 10);
}