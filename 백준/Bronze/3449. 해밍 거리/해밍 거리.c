#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	
	int t = 0;
	scanf("%d", &t);
	while (t--) {
		int count = 0;
		char a[100] = { 0 };
		char b[100] = { 0 };
		scanf("%s", a);
		scanf("%s", b);
		int len = strlen(a);
		for (int j = 0; j < len; j++) {
			if (a[j] != b[j]) count++;
		}
		printf("Hamming distance is %d.\n", count);
	}
}