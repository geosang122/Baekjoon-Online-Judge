#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int var, sum=0, max=0, min=100000;
	for (int i = 0; i < 4; i++) {
		scanf("%d", &var);
		sum += var;
		if (max < var) max = var;
		if (min > var) min = var;
	}
	int p = sum - 2 * (min + max);
	p = p > 0 ? p : (-1) * p;
	printf("%d", p);
}