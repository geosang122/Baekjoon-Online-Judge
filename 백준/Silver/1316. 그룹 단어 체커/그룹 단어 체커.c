#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n;
	int count = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		int w = 0;
		int a[26] = { 0, };
		char str[101] = { 0, };
		scanf(" %s", str);
		for (int j = 0; str[j]; j++) {
			if (j==0) a[str[j] - 'a']++;
			if (str[j] != str[j - 1]&&j>=1) a[str[j] - 'a']++;
		}
		for (w = 0; w < 26; w++) {
			if (a[w] > 1) break;
		}
		if (w == 26) count++;
	}
	printf("%d", count);
	
	return 0;
}
