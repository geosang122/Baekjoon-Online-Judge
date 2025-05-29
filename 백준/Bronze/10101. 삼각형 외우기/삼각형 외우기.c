#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int a = 0, b = 0, c = 0;
    scanf("%d %d %d", &a, &b, &c);
    if (a + b + c != 180) printf("Error");
    else if (a == 60 && b == 60) printf("Equilateral");
    else if (a == b || b == c || a == c) printf("Isosceles");
    else printf("Scalene");
}