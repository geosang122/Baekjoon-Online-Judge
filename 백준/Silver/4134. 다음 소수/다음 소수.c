#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	long long int n,num,flag;
	scanf("%lld", &n);
	while (n--) {
		scanf("%lld", &num);
		if (num <= 2) printf("2\n");
		else
		{
			for (long long int i = num;; i++)
			{
				flag = 1;
				for (long long int j = 2; j * j <= i; j++)
				{
					if (i % j == 0) {
						flag = 0;
						break;
					}
				}
				if (flag)
				{
					printf("%lld\n", i);
					break;
				}
			}
		}
	}
}