#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int x=0,a=0,b=0,count=0;
	scanf("%d", &x);
	int i = 0;
	int num = 0;
	while (num + (i + 1) < x) {
		i++;
		num += i;
	}
	if (i%2==0)printf("%d/%d", num - x + 2 + i, x - num);
	else printf("%d/%d",x-num,num-x+2+i);
}