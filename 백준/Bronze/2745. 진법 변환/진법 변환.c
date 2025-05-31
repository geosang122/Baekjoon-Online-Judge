#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	int b = 0;
	char n[30] = { 0 };
	//b진법 수 n
	scanf(" %s %d", n, &b);
	int i = strlen(n)-1;
	int sum=0;
	int k = 1;
	for (i; i >= 0; i--) {
		if (n[i] < 58) sum += (n[i] - '0') * k;
		else sum += (n[i] - 'A' + 10) * k;
		k *= b;
	}
	printf("%d", sum);
}
