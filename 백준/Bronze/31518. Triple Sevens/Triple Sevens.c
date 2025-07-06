#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	int a = 0, j = 0;
	for (int i = 0; i < 3; i++) {
		int count = 0;
		for (j=0; j < n; j++) {
			scanf("%d", &a);
			if (a != 7) count++;
		}
		if (count >= n) {
			printf("0");
			return 0;
		}
	}
	printf("777");
}
