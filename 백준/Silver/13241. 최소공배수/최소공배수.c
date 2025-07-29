#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	long long int a, b,tem;
	scanf("%lld %lld", &a, &b);
	long long int sum = a * b;
	if (a < b) { //a를 크게
		tem = a;
		a = b;
		b = tem;
	}
	while (b != 0) {
		a %= b;
		tem = a;
		a = b;
		b = tem;
	}
	printf("%lld",sum/a );
}