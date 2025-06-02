#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
	int n=0,i=0;
	int where[11] = { 2,2,2,2,2,2,2,2,2,2,2 };
	int loc;
	scanf("%d", &n);
	int count = 0;
	while (n--) {
		int loc=2;
		scanf("%d %d", &i, &loc);
		if (where[i-1]==2) {
			where[i - 1] = loc;
		}
		else if (where[i - 1] != loc) {
			where[i - 1] = loc;
			count++;
		}
	}
	printf("%d", count);
}