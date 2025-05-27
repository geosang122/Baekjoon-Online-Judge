#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	int n = 0;
	while (scanf("%d", &n)) {
		int sum = 0, count = 0;
		if (n == -1) break;
		int a[130] = { 0 };
		for (int i = 1; i < n; i++) {
			if (n % i == 0) {
				a[count] = i;
				count++;
			}
		}
		for (int i = 0; i < count; i++) {
			sum += a[i];
		}
		if (n == sum) {
			printf("%d = %d", n, a[0]);
			for (int i = 1; i < count; i++) {
				printf(" + %d", a[i]);
			}
			puts("");
		}
		else
			printf("%d is NOT perfect.\n", n);
	}
	
}
