#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	int n, t,m,y,msum=0,ysum=0;
	scanf("%d", &n);
	while (n--) {
		scanf("%d", &t);
		y = (t / 30 + 1) * 10;
		m = (t / 60 + 1) * 15;
		ysum += y;
		msum += m;
	}
	if (ysum == msum) printf("Y M %d", ysum);
	else if (ysum < msum) printf("Y %d", ysum);
	else printf("M %d", msum);
}
