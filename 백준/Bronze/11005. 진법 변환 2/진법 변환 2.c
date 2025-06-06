#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	long long n = 0;
	int b = 0; //n을 b진법으로
	scanf("%lld %d", &n, &b);
	long long div = b;
	if (n == 0) {
		printf("0");
		return 0;
	}
	if (n < b) n > 9 ? printf("%c", 'A' + n - 10) : printf("%lld", n);
	else {
		while (div * b <= n) {
			div *= b;
		}
		while (div >= 1) {
			n / div > 9 ? printf("%c", 'A' + n / div - 10) : printf("%lld", n / div);
			n %= div;
			div /= b;

		}
	}
}