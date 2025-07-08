#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char a[1005] = { 0 };
	char b[1005] = { 0 };
	int sum = 0;
	scanf("%s", a);
	scanf("%s", b);
	short int counta[1005] = { 0 };
	short int countb[1005] = { 0 };
	for (int i = 0; a[i]; i++) {
		counta[a[i] - 'a']++;
	}
	for (int i = 0; b[i]; i++) {
		countb[b[i] - 'a']++;
	}
	for (int i = 0; i < 26; i++) {
		short int s = counta[i] < countb[i] ? countb[i]- counta[i] : counta[i] -countb[i];
		sum += s;
	}
	printf("%d", sum);
}
