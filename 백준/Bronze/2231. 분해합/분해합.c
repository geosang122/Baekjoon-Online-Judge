#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n = 0;
	scanf("%d", &n);
	for (int i = (n-63>1?n-63:1); i < n; i++) {
		int sum = 0;
		int nn = i;
		while (nn) {
			sum += nn % 10;
			nn /= 10;
		}
		if (sum+i == n) {
			printf("%d", i);
			return 0;
		}
	}
	printf("0");
}
