#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a[26] = { 3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,8,8,8,8,9,9,9,10,10,10,10 };
	int count = 0;
	char str[16];
	scanf("%s", str);
	int i = 0;
	while (str[i] != '\0') {
		count += a[str[i] - 'A'];
		i++;
	}
	printf("%d", count);
}

