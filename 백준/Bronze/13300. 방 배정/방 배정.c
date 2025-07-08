#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int ary[6][2] = { 0 };
	int n = 0, k = 0;//학생수,한 방 최대 인원 수
	int s = 0, y = 0;//성별, 학년
	scanf("%d %d", &n, &k);
	while (n--) {
		scanf("%d %d", &s, &y);
		ary[y-1][s]++;
	}
	int sum = 0;
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 2; j++) {
			if (ary[i][j] == 0) continue;
			else sum += ary[i][j] / 3 + 1;
		}
	}
	printf("%d", sum);
}
