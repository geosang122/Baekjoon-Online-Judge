#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a[6];
	int n;
	scanf("%d", &n);
	for (int i = 0; i < 6; i++) scanf("%d", &a[i]);
	int t, p;
	scanf("%d %d", &t, &p);
	int cnt = 0;
	int ans2, ans3;

	for (int i = 0; i < 6; i++) {
		if (a[i] % t == 0) cnt += (a[i] / t);
		else cnt+= (a[i] / t+1);
	}
	printf("%d\n", cnt);
	ans2 = n / p;
	ans3 = n % p;
	printf("%d %d", ans2, ans3);
}
