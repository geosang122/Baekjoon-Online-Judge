#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int maze[1000][1000] = { 0 };
int fire[1000][1000] = { 0 };
int r, c;
char tmp;
int queue[2][2000000];
int fq[2][2000000];
int head = 1, tail = 0;
int fhead = 0, ftail = 0;
int ridx[4] = { -1,0,1,0 };
int cidx[4] = { 0,1,0,-1 };
int currow, curcol, newrow, newcol;
int fcurrow, fcurcol, fnewrow, fnewcol;

int main() {
	scanf("%d %d", &r, &c);
	/*
	미로 입력받기
	지훈=1 , 불=-1, 벽=-1000000
	*/
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			scanf(" %c", &tmp);
			if (tmp == '#') maze[i][j] = -100000;
			else if (tmp == 'F') {
				fire[i][j] = 0;
				maze[i][j] = -1;
				fq[0][fhead] = i;
				fq[1][fhead++] = j;
			}
			else if (tmp == 'J') {
				maze[i][j] = 1;
				queue[0][0] = i;
				queue[1][0] = j;
			}
		}
	}
	if (queue[0][0] == r - 1 || queue[0][0] == 0 || queue[1][0] == c - 1 || queue[1][0] == 0) {
		printf("%d", 1);
		return 0;
	}
	//불 BFS
	while (fhead != ftail) {
		fcurrow = fq[0][ftail];
		fcurcol = fq[1][ftail];
		for (int i = 0; i < 4; i++) {
			fnewrow = fcurrow + ridx[i];
			fnewcol = fcurcol + cidx[i];
			if (fnewrow >= 0 && fnewrow < r && fnewcol >= 0 && fnewcol < c && maze[fnewrow][fnewcol] >= 0 && fire[fnewrow][fnewcol] == 0) {
				fire[fnewrow][fnewcol] = fire[fcurrow][fcurcol] + 1;
				fq[0][fhead] = fnewrow;
				fq[1][fhead++] = fnewcol;
			}
		}
		ftail++;
	}
	/* BFS 알고리즘 구현 */
	while (head != tail) {
		//지훈
		currow = queue[0][tail];
		curcol = queue[1][tail];
		for (int i = 0; i < 4; i++) {
			newrow = currow + ridx[i];
			newcol = curcol + cidx[i];
			if ((newrow == r - 1 || newrow == 0 || newcol == c - 1 || newcol == 0) && maze[newrow][newcol] >=0&& (maze[currow][curcol] < fire[newrow][newcol] || fire[newrow][newcol] == 0))
			{
				printf("%d", maze[currow][curcol] + 1);
				return 0;
			}
			else if (maze[newrow][newcol] == 0 && (maze[currow][curcol] < fire[newrow][newcol] || fire[newrow][newcol] == 0))
			{
				maze[newrow][newcol] = maze[currow][curcol] + 1;
				queue[0][head] = newrow;
				queue[1][head++] = newcol;
			}
		}
		tail++;
	}
	printf("IMPOSSIBLE");
}