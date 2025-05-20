#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	char s[101];
	scanf("%s", s);
	int len = strlen(s);
	for (int i = 0; i <len/2 ;i++ ) {
		if (s[i] != s[len - i - 1]) {
			printf("0");
			return 0;
		}
	}
	printf("1");
}
