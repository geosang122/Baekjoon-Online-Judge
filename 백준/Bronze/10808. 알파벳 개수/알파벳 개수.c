#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	char s[105];
	scanf("%s", s);
	int alpha[26] = { 0 };
	for (int j = 0; s[j]; j++) {
		alpha[s[j] - 'a'] += 1;
	}
	for(int i=0;i<26;i++) printf("%d ", alpha[i]);
}