#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	int n;
	scanf("%d", &n);
	
	for (int i = 0; i < n; i++) {
		char a[81] = { 0 };
		int score = 0;
		int s[81] = { 0 };
		scanf("%s", a);
		for (int j = 0; j < strlen(a); j++) {
			if (a[j - 1] == 'O' && a[j] == 'O') s[j] = s[j - 1] + 1;
			else if (a[j] == 'O') s[j] = 1;
		}
		for (int w = 0; w < strlen(a); w++) {
			score += s[w];
		}
		printf("%d\n", score);
	}
}
