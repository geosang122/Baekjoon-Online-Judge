#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char s[1000001];
	scanf("%[^\n]", s);
	int count = 1;
	int i = 0;
	while (s[i] == ' ') i++;
	if (s[i] == '\0') {
		printf("0");
		return 0;
	}
	for (; s[i] != '\0'; i++) {
		if (s[i] == ' ') count++;
	}
	if (s[i - 1] == ' ') count--;
	printf("%d", count);
	
}

