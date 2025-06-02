#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		char s[51] = { 0 };
		int count = 0;
		scanf("%s", s);
		for (int j = 0; s[j]; j++) {
			if (s[j] == '(') count++;
			else if (s[j] == ')') count--;
			if (count < 0) {
				printf("NO\n");
				break;
			}
		}
		if (count > 0) {
			printf("NO\n");
			continue;
		}
		else if(count==0) printf("YES\n");
	}
}