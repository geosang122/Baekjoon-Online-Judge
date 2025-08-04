#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	a /= 100;
	a *= 100;
	for (int i = 0; i < 100; i++)
	{
		if ((a + i) % b == 0)
		{
			printf("%02d", (a + i) % 100);
			return 0;
		}
	}
}