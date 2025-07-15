#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	char str[31] = { 0 };
	int valid = 1, sum = 0;
	scanf("%s", str);
	char stack[31] = { 0 };
	int snum[31] = { 0 };
	int i = 0, j = 0, w = 0, temp = 0;
	for (; str[i]; i++) {
		int temp = 1;
		if (str[i] == '(') {
			stack[j++] = '(';
			snum[w++]=2;
		}
		else if (str[i] == '[') {
			stack[j++] = '[';
			snum[w++]=3;
		}

		else if (str[i] == ')') {
			if (stack[j - 1] == '(') { //괄호가 닫힘
				j--, w--;
				if (str[i-1]!=')'&&str[i-1]!=']') {
					for (int p = w; p >= 0; p--) {
						temp *= snum[p];
					}
					sum += temp;
				}
			}
			else {
				valid = 0;
				break;
			}
		}
		else if (str[i] == ']') {
			if (stack[j - 1] == '[') {
				j--, w--;
				if (str[i - 1] != ')' && str[i - 1] != ']') {
					for (int p = w; p >= 0; p--) {
						temp *= snum[p];
					}
					sum += temp;
				}
			}
			else {
				valid = 0;
				break;
			}
		}
	}
	if (valid && j == 0) printf("%d", sum);
	else printf("0");
}
