#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n, m;
	scanf("%d %d", &n, &m);
	int head = 1, tail = n+1;
	int ary[500000] = { 0 };//크기 50만
	for (int i = 1; i <= n; i++) ary[i] = i;
	printf("<%d",m);
	for(int w=1;w<m;w++) ary[tail++] = ary[head++];
	head++;
	while (head != tail) {
		for (int w = 1; w < m; w++) ary[tail++] = ary[head++];
		printf(", %d",ary[head++]);
	}
	printf(">");
}