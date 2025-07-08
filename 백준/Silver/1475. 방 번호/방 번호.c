#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	int ary[9] = { 0 };
	int num = 0, div = 10, max = 0;
	scanf("%d", &num);
	while (num!=0) {
		if (num % div == 9) ary[6]++;
		else ary[num % div]++;
		num /= div;
	}
	if (ary[6] % 2) ary[6]++;
	ary[6] /= 2;
	for (int i = 0; i < 9; i++) if (max < ary[i]) max = ary[i];
	printf("%d", max);
}
