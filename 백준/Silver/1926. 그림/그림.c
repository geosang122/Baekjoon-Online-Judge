#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	short int n, m, ary[500][500] = { 0 }, mark[500][500] = { 0 };
	int count = 0, max = 0;
	int ridx[4] = { -1,0,1,0 };
	int cidx[4] = { 0,1,0,-1 };
	short int queue[2][250000] = { 0 };
	int qtail = 0;
	int qhead = 0;
	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) scanf("%d", &ary[i][j]);
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (mark[i][j] == 0 && ary[i][j] == 1) {
				count++;
				int area = 0;
				/*BFS 알고리즘 구현*/
				queue[0][qtail] = i, queue[1][qtail] = j;
				qtail++;
				mark[i][j] = 1;
				while (qhead!=qtail) {
					
					area++;
					for (int w = 0; w < 4; w++) {//사방에 대해 해당되면 큐에 추가
						int newrow = queue[0][qhead] + ridx[w], newcol = queue[1][qhead] + cidx[w];
						if (newrow >= 0 && newrow < n && newcol >= 0 && newcol < m && mark[newrow][newcol] == 0 && ary[newrow][newcol] == 1) {
							mark[newrow][newcol] = 1;
							queue[0][qtail] = newrow, queue[1][qtail] = newcol;
							qtail++;
						}
					}
					qhead++;
				}
				if (area >= max) max = area;
			}
		}
	}
	printf("%d\n%d", count, max);
}
