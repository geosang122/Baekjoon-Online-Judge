#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	char words[101] = { 0 };
	scanf("%s", words);
	int count = strlen(words);
	for (int i = 0; i < strlen(words); i++) {
		if (words[i] == 'c') {
			if (words[i + 1] == '=') count--;
			if (words[i + 1] == '-') count--;
		}
		if (words[i] == 'd') {
			if (words[i + 1] == 'z'&& words[i + 2] == '=') count-=2;
			if (words[i + 1] == '-') count--;
		}
		if (words[i] == 'l' && words[i + 1] == 'j') count--;
		if (words[i] == 'n' && words[i + 1] == 'j') count--;
		if (words[i] == 's' && words[i + 1] == '=') count--;
		if (words[i] == 'z' && words[i + 1] == '='&&words[i-1]!='d') count--;
	}
	printf("%d", count);
}
