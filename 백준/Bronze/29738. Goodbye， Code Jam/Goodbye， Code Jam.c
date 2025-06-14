#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int t = 0,r=0;
	scanf("%d", &t);
	for (int i = 1; i <= t; i++) {
		scanf("%d", &r);
		if (r <= 25) printf("Case #%d: World Finals\n",i);
		else if (r <= 1000)printf("Case #%d: Round 3\n",i);
		else if (r <= 4500)printf("Case #%d: Round 2\n",i);
		else-printf("Case #%d: Round 1\n",i);
	}
}