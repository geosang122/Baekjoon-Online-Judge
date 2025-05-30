#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int a = 0, b = 0, c = 0;
    scanf("%d %d %d", &a, &b, &c);
    int max = 0;
    int minus = 0;
    max = a > b ? (a>c?a:c):(b>c?b:c);
    if (max  >= a + b + c-max) minus = 2* max - a - b - c + 1;
    printf("%d", a + b + c - minus);
}