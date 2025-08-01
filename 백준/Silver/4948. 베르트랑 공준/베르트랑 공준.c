#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n,count,flag;
	while (1) {
		count = 0;
		scanf("%d", &n);
		if (n == 0) return 0;
		else
		{
			for (int i = n+1; i <= 2 * n; i++)
			{
				flag = 1;
				for (int j = 2; j * j <= i; j++)
				{
					if (i % j == 0)
					{
						flag = 0;
						break;
					}
				}
				if (flag) count++;
			}
			printf("%d\n", count);
		}
	}
}