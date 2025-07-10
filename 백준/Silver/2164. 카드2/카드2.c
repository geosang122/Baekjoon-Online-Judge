#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int dat[1000005];
int n;
int pos = 2;
int i = 1;

int main() {
	scanf("%d", &n);
	if (n == 1) {
		printf("1");
		return 0;
	}
	for (; i < n; i++) {
		dat[i] = i;
	}
	dat[n] = n;
	while (pos!=i) {
		dat[++i] = dat[pos++];
		pos++;
	}
	printf("%d", dat[pos]);
}