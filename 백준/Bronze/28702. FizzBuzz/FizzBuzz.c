#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>

int num,i;
char str[100];

int main() {
	for (i = 3; i > 0; i--) {
		scanf("%s", str);
		if (isdigit(str[0])) {
			num = atoi(str) + i;
			break;
		}
	}

	if (num % 3 == 0)
	{
		if (num % 5 == 0) printf("FizzBuzz");
		else printf("Fizz");
	}
	else
	{
		if (num % 5 == 0) printf("Buzz");
		else printf("%d",num);
	}
}