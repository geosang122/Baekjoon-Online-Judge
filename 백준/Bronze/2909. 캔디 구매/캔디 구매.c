#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	int c, k,div=1,val;
	scanf("%d %d", &c, &k);
	if (k == 0)
	{
		printf("%d", c);
		return 0;
	}
	for (int i = 0; i < k; i++) div *= 10;
	if (c % div < div / 2) val = (c / div) * div;
	else val = (c / div+1) * div;
	printf("%d", val);
}