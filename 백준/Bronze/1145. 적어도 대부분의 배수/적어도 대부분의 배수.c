#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n[6] = { 0 };
	int max = 0;
	for (int i = 0; i < 5; i++) {
		scanf("%d", &n[i]);
	}
	for (int j = 1;; j++) {
		int count = 0;
		for (int w = 0; w < 5; w++) {
			if (j % n[w] == 0) count++;
		}
		if (count >= 3) {
			printf("%d", j);
			return 0;
		}
	}
	
}