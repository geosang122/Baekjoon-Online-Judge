#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int dot(int num){
	if (num <= 1) return 9;
	else return pow((2 * sqrt(dot(num - 1)) - 1), 2);
	}
int main() {
	int n;
	scanf("%d", &n);
	printf("%d", dot(n));
}