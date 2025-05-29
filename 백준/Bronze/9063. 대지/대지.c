#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int x = 0, y = 0;
	int min_x = 10000, max_x = -10000;
	int min_y = 10000, max_y = -10000;
	int n = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d %d", &x, &y);
		if (x < min_x) min_x = x;
		if (x > max_x) max_x = x;
		if (y < min_y) min_y = y;
		if (y > max_y) max_y = y;
	}
	printf("%d", (max_x - min_x) * (max_y - min_y));
}