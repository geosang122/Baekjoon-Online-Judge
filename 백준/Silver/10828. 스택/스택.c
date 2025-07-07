#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int data[10005];
int pos;

void push(int x) {
	data[pos++] = x;
}

int pop() {
	if (pos == 0) return -1;
	else return data[--pos];
}

int size() {
	return pos;
}

int empty() {
	if (pos == 0) return 1;
	else return 0;
}

int top() {
	if (pos == 0) return -1;
	else return data[pos - 1];
}
int main() {
	int n = 0;
	scanf("%d", &n);
	while (n--) {
		int k = 0;
		char cmd[7] = {0};
		scanf("%s", cmd);
		if (strcmp(cmd, "push") == 0) {
			scanf("%d", &k);
			push(k);
		}
		else if (strcmp(cmd, "pop") == 0) {
			printf("%d\n", pop());
		}
		else if (strcmp(cmd, "size") == 0) {
			printf("%d\n", size());
		}
		else if (strcmp(cmd, "empty") == 0) {
			printf("%d\n", empty());
		}
		else if (strcmp(cmd, "top") == 0) {
			printf("%d\n", top());
		}
	}
}