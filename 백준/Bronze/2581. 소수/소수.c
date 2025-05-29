#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() {
	int m=0, n=0,i=0,j=0;
	int count = 0;
	scanf("%d %d", &m, &n);//m이상 n이하
	int a[1300] = { 0 };
	for (i = m; i <= n; i++) {
		if (i < 2) continue;
		for (j = 2; j *j<=i; j++) {
			if (i % j == 0) break;
		}
		if (j *j>i) {
			a[count] = i;
			count++;
		}
	}
	long long sum = 0;
	for (int w = 0; a[w]; w++) sum += a[w];
	if (count == 0) printf("-1");
	else printf("%lld\n%d",sum,a[0]);
}
