#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int dat[20001];
int n = 0;
char cmd[12];
int head = 10000, tail = 10000;
int x;

int main() {
	scanf("%d", &n);
	while (n--) {
		scanf("%s", cmd);
		if (strcmp(cmd, "push_front") == 0) {
			scanf("%d", &x);
			dat[--head] = x;
		}
		else if (strcmp(cmd, "push_back") == 0) {
			scanf("%d", &x);
			dat[tail++] = x;
		}
		else if (strcmp(cmd, "pop_front") == 0) printf("%d\n", head == tail ? -1 : dat[head++]);
		else if (strcmp(cmd, "pop_back") == 0) printf("%d\n", head == tail ? -1 : dat[--tail]);
		else if (strcmp(cmd, "size") == 0) printf("%d\n", tail - head);
		else if (strcmp(cmd, "empty") == 0) printf("%d\n", tail == head ? 1 : 0);
		else if (strcmp(cmd, "front") == 0) printf("%d\n", head == tail ? -1 : dat[head]);
		else if (strcmp(cmd, "back") == 0) printf("%d\n", head == tail ? -1 : dat[tail-1]);
	}
}