#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	char str[101] = { 0 };
	while (1) {
		int i = 0, j = 0,valid=1;
		char par[101] = { 0 };
		scanf("%[^\n]", str);
		getchar();
		if (str[0] == '.') break;
		for (i = 0,j=0; str[i]; i++) {
			if (str[i] == '(') par[j++] = '(';
			else if (str[i] == '[') par[j++] = '[';
			else if (str[i] == ')') {
				if (par[j - 1] == '(') j--;
				else valid = 0;
			}
			else if (str[i] == ']'){
				if (par[j - 1] == '[') j--;
				else valid = 0;
			}
		}
		if (valid && j == 0) printf("yes\n");
		else printf("no\n");
	}
}