#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	char p[100005] = { 0 };
	scanf("%s", p);
	char p2[100005] = { 0 };
	int i = 1, j = 1, sum = 0;;
	p2[0] = p[0];
	for (; p[i]; i++) {
		if (p[i] == ')') {
			if (p[i - 1] == '(') {
				sum += --j;
			}
			else {
				sum += 1;
				j--;
			}
		}
		else if (p[i] == '(') {
			p[j++] = p[i];
		}
	}
	printf("%d", sum);
}
