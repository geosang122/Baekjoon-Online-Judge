#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int tem;
	int sum = 0, min = 100;
	for (int j = 0; j < 7; j++) {
		scanf("%d", &tem);
		if (tem % 2) {
			sum += tem;
			if (min > tem) min = tem;
		}
	}
	if (sum == 0) printf("-1");
	else printf("%d\n%d", sum, min);
}
