#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n, m, acount = 0, bcount = 0,min=1250;
	scanf("%d %d", &n, &m);
	char ch[51][51] = { 0 };
	for (int i = 0; i < n; i++) for (int j = 0; j < m; j++) scanf(" %c", &ch[i][j]);
	for (int i=0;i<n-7;i++) {
		for (int j = 0; j < m - 7; j++) {
			acount = 0, bcount = 0;
			for (int si = i; si < i + 8; si++) {
				for (int sj = j; sj < j+8; sj++) {
					if ((si + sj) % 2) {
						if (ch[si][sj] == 'W') acount++;
						else if (ch[si][sj] == 'B') bcount++;
					}
					else {
						if (ch[si][sj] == 'B') acount++;
						else if (ch[si][sj] == 'W') bcount++;
					}
				}
			}
			int abmin = acount < bcount ? acount : bcount;
			min > abmin ? min = abmin : 1;
		}
	}
	printf("%d",min);
}