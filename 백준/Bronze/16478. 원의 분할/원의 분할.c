#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int num,i;
char str[100];

int main() {
	double a, b, c;
	scanf("%lf %lf %lf", &a, &b, &c);
	printf("%g", a * c / b);
}