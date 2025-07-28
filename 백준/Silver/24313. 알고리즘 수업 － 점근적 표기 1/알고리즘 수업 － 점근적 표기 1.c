#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int a1, a0, c, n0;
    scanf("%d %d %d %d", &a1, &a0, &c, &n0);
    if (a1 <= c && a1 * n0 + a0 <= c*n0) printf("1");
    else printf("0");
}