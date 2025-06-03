#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
	int n = 0, command = 0;
	scanf("%d %d", &n, &command);
	int light[4001] = { 0 };
	int a = 0, b = 0, c = 0;
	for (int i = 0; i < n; i++) {
		scanf("%d", &light[i]);
	}
	for (int j = 0; j < command; j++) {
		scanf("%d %d %d", &a, &b, &c);
		if (a == 1) {
			light[b - 1] = c;
		}
		else if (a == 2) {
			for (int w = b - 1; w < c; w++)
				light[w] ^= 1;
		}
		else if(a == 3) {
			for (int w = b - 1; w < c; w++) light[w] = 0;
		}
		else if (a == 4) {
			for (int w = b - 1; w < c; w++) light[w] = 1;
		}
	}
	for (int p = 0; p < n; p++) {
		printf("%d ", light[p]);
	}
}