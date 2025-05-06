#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a, b;
	int gcd, lcm;//최대공약수 최소공배수
	scanf("%d %d", &a, &b);
	if (a < b) { //a를 b이상으로 만들기
		a = a + b; //다른 변수 선언 없이 두 수 교환
		b = a - b;
		a = a - b;
	}
	for (int i = 1;;i++) { //최소공배수 구하기
		lcm = b * i;
		if (lcm % a == 0) break;
	}
	gcd = a * b / lcm; // (최대공약수)*(최소공배수)==(두 수의 곱)
	printf("%d\n", gcd);
	printf("%d\n", lcm);
}