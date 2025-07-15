#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	char p[100005] = { 0 };
	scanf("%s", p);
	int stack = 0,sum=0;
	for (int i=0; p[i]; i++) {
		if (p[i] == ')') {
			if (p[i - 1] == '(') sum += --stack;
			else {
				sum += 1;
				stack--;
			}
		}
		else if (p[i] == '(') {
			stack++;
		}
	}
	printf("%d", sum);
}
