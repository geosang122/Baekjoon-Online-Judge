#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n, m,sum=0,val,max=0;
	scanf("%d %d", &n, &m);
	while (n--) {
		scanf("%d", &val);
		if (val > max) max = val;
	}
	sum += max;
	max = 0, val = 0;
	while (m--) {
		scanf("%d", &val);
		if (val > max) max = val;
	}
	sum += max;
	printf("%d", sum);
}
