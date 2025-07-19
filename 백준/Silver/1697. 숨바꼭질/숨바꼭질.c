#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int q[1000000] = { 0 };
int n, k;//n->k
int count = 0;
int head = 0, tail = 0;
int repeat = 1;
int repeat_minus;
int sum_repeat_minus;
short int visited[100005] = { 0 };

int main() {
	scanf("%d %d", &n, &k);
	if (n > k) {
		printf("%d", n - k);
		return 0;
	}
	q[head++] = n;
	while (head > tail) {
		sum_repeat_minus = 0;
		for (int i = 0; i < repeat; i++) {
			repeat_minus = 3;
			if (q[tail] == k) {
				printf("%d", count);
				return 0;
			}
			if (q[tail] > 0)
			{
				if (visited[q[tail] - 1] == 0) {
					visited[q[tail] - 1] = 1;
					q[head++] = q[tail] - 1;
					repeat_minus--;
				}
				if (q[tail]*2<=100000 && visited[q[tail] *2] == 0) {
					visited[q[tail] *2] = 1;
					q[head++] = q[tail] * 2;
					repeat_minus--;
				}
			}
			if (visited[q[tail] + 1] == 0) {
				q[head++] = q[tail] + 1;
				visited[q[tail] + 1] = 1;
				repeat_minus--;
			}
			tail++;
			sum_repeat_minus += repeat_minus;
		}
		count++;
		repeat = repeat * 3 - sum_repeat_minus;
	}
}