#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>

int main() {
	int alpha[26] = { 0, };
	char word[1000001] = { 0, };
	scanf("%s", word);
	for (int i = 0; word[i]; i++) {
		word[i]=toupper((unsigned char) word[i]);
	}
	for (int i = 0; word[i]; i++) {
		alpha[word[i] - 'A']++;
	}
	int max = 0;
	for (int j = 0; j < 26; j++) {
		if (max < alpha[j]) max = alpha[j];
	}
	int count = 0;
	for (int j = 0; j < 26; j++) {
		if (max == alpha[j]) count++;
	}
	if (count == 1) {
		for (int j = 0; j < 26; j++) {
			if (max == alpha[j]) printf("%c", 'A' + j);
		}
	}
	else printf("?");
}
