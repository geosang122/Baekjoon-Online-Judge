#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int a=0, b=0, c=0;
    while (1) {
        scanf("%d%d%d", &a, &b, &c); // a<=b<=c로 정렬
        if (a == 0 && b == 0 && c == 0) break;
        if (a > b) {
            b = a + b;
            a = b - a;
            b = b - a;
        }
        if (b > c) {
            c = b + c;
            b = c - b;
            c = c - b;
        }
        if (a > b) {
            b = a + b;
            a = b - a;
            b = b - a;
        }
        if (a == b && b == c) printf("Equilateral\n");
        else if (c>=a+b) printf("Invalid\n");
        else if (a == b || b == c) printf("Isosceles\n");
        else printf("Scalene\n");
    }
    return 0;
}