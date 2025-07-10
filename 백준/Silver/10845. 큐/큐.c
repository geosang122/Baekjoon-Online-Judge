#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int dat[10005];
int n,x,head,tail;
char cmd[10];

void push(int x) {
	dat[tail++] = x;
}
int pop() {
	return tail == head ? -1 : dat[head++];
}

int main() {
	scanf("%d", &n);
	while (n--) {
		scanf(" %s", cmd);
		if (strcmp(cmd, "push") == 0) {
			scanf("%d\n", &x);
			push(x);
		}
		else if (strcmp(cmd, "pop") == 0) printf("%d\n", pop());
		else if (strcmp(cmd, "size") == 0)	printf("%d\n", tail - head);
		else if (strcmp(cmd, "empty") == 0) printf("%d\n", tail == head ? 1 : 0);
		else if (strcmp(cmd, "front") == 0) printf("%d\n", tail == head ? -1: dat[head]);
		else printf("%d\n", tail == head ? -1 : dat[tail-1]);
	}
}