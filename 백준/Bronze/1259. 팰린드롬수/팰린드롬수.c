#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	while (1) {
		char num[6] = { 0 };
		scanf("%s", num);
		if (num[0] == '0') break;
		int len = strlen(num);
		int k = len;
		int i = 0;
		for (i=0; i < len / 2; i++, k--) {
			if (num[i] != num[k-1]) {
				printf("no\n");
				break;
			}
		}
		if (i >= len / 2) printf("yes\n");
	}
}