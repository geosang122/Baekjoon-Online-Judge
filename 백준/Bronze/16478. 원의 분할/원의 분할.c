#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	long double a, b, c;
	scanf("%Lf %Lf %Lf", &a, &b, &c);
	printf("%Lf", a * c / b);
}