#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	int ary[1000005] = { 0 };
	int ary2[1000005] = { 0 };
	int n = 0, num = 0, count = 0;
	scanf("%d", &n);
	int i = 0;
	for (int w = 0; w < n; w++) {
		scanf("%d", &num);
		ary[i++] = num;
	}
	scanf("%d", &num);
	ary2[ary[0]] = 1;
	for (int i = 1; i < n; i++) {
		if (ary2[num - ary[i]] == 1) count++;
		else ary2[ary[i]] = 1;
	}
	printf("%d", count);
}
