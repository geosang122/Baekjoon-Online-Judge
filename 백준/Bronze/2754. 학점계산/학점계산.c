#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char s[3] = { 0 };
	double score = 0;
	scanf("%s", s);
	if (s[0] == 'A') score = 4.0;
	else if (s[0] == 'B') score = 3.0;
	else if (s[0] == 'C') score = 2.0;
	else if (s[0] == 'D') score = 1.0;
	if (s[1] == '+') score += 0.3;
	else if (s[1] == '-')score -= 0.3;
	printf("%.1lf", score);
}