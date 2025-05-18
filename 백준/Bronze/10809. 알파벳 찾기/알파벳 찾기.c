#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 'a'=97
int main() {
	char s[100];
	int a[26];
	int len = 0;
	scanf("%s", s);
	for (int i = 0; i < 26; i++) {
		a[i] = -1;
	}
	int j = 0;
	while (s[j] != '\0') {
		if (a[s[j] - 'a'] == -1 ) a[s[j] - 'a'] = j;
		j++;
	}
	for (int i = 0; i < 26; i++) {
		printf("%d ", a[i]);
	}
	
}
