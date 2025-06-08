#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int zero[42] = { 1,0 };
	int one[42] = { 0,1 };
	for (int i = 2; i < 42; i++) {
		zero[i] = zero[i - 1] + zero[i - 2];
		one[i] = one[i - 1] + one[i - 2];
	}
	int num=0,t=0;
	scanf("%d", &t);
	for (int j = 0; j < t; j++) {
		scanf("%d", &num);
		printf("%d %d\n", zero[num], one[num]);
	}
	return 0;
}
