#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	char str[100005] = { 0 };
	int n,count=0;
	scanf("%d", &n);
	while (n--) {
		char stack[100005] = { 0 };
		scanf(" %s", str);
		stack[0] = str[0];
		int i = 1, j = 1;
		for (; str[i]; i++) {
			if (j == 0 || str[i] != stack[j - 1]) stack[j++] = str[i];
			else j--;
		}
		if (j == 0) count++;
	}
	printf("%d", count);
}
