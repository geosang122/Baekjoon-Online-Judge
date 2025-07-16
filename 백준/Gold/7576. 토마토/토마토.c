#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int tmt[1000][1000] = { 0 };
int q[2][1000000] = { 0 };

int main() {
	int m, n;
	scanf("%d %d", &m, &n);
	int head = 0, tail = 0;
	int ridx[4] = { -1,0,1,0 };
	int cidx[4] = { 0,1,0,-1 };
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			scanf("%d", &tmt[i][j]);
			if (tmt[i][j] == 1) {
				q[0][head] = i;
				q[1][head++] = j;
			}
		}
	}
	while (head != tail) {
		int currow = q[0][tail];
		int curcol = q[1][tail];
		for (int w = 0; w < 4; w++) {
			int newrow = currow + ridx[w];
			int newcol = curcol + cidx[w];
			if (newrow >= 0 && newrow < n && newcol >= 0 && newcol < m && tmt[newrow][newcol] == 0) {
				q[0][head] = newrow;
				q[1][head++] = newcol;
				tmt[newrow][newcol] = tmt[currow][curcol] + 1;
			}
		}
		tail++;
	}
	int max = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (tmt[i][j] == 0) {
				printf("-1");
				return 0;
			}
			if (max < tmt[i][j]) max = tmt[i][j];
		}
	}
	printf("%d", max - 1);
}