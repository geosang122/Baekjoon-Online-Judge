#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	if (a > b) {
		int temp = a;
		a = b;
		b = temp;
	}
	if (a == b){
		printf("0");
		return 0;
	}
	else printf("%d\n",b - a - 1);
	for (int i = a+1; i < b; i++) {
		printf("%d ", i);
	}

}
