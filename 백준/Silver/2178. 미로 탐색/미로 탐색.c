#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n, m;
	scanf("%d %d", &n, &m);
	char maze[100][100] = { 0 };
	int dis[100][100] = { 0 };
	int ridx[4] = { -1,0,1,0 };
	int cidx[4] = { 0,1,0,-1 };
	int q[2][100000] = { 0 };
	int head = 1, tail = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			scanf(" %c", &maze[i][j]);
		}
	}
	dis[0][0] = 1;
	q[0][0] = 0;
	q[1][0] = 0;
	while (tail != head) {
		int currow = q[0][tail];
		int curcol = q[1][tail];
		for (int w = 0; w < 4; w++) {
			int newrow = currow + ridx[w];
			int newcol = curcol + cidx[w];
			if (newrow >= 0 && newrow < n && newcol >= 0 && newcol < m && dis[newrow][newcol] == 0 && maze[newrow][newcol] == '1') {
				dis[newrow][newcol] = dis[currow][curcol] + 1;
				q[0][head] = newrow;
				q[1][head] = newcol;
				head++;
			}
		}
		tail++;
	}
	printf("%d", dis[n - 1][m - 1]);
}