#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int array[100005] = { 0 };

int main() {
	int k = 0, num = 0, pos = 0, sum = 0;
	scanf("%d", &k);
	while (k--) {
		scanf("%d", &num);
		if (num != 0) array[pos++] = num;
		else array[--pos] = num;
	}
	for (int i = 0; i < pos; i++) {
		sum += array[i];
	}
	printf("%d", sum);
}
