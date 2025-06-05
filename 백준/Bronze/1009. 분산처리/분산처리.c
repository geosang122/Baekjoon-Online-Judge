#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		int a = 0, b = 0,ans=1;
		scanf("%d %d", &a, &b);
		a %= 10;
		for (int j = 0; j < b; j++) {
			ans *= a;
			ans %= 10;
		}
		if (ans == 0) printf("10\n");
		else printf("%d\n", ans);
	}
}
