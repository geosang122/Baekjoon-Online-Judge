#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int n;
    int a = 0, b = 0;
    int sum_a = 100, sum_b = 100;
    scanf("%d", &n);
    while (n--) {
        scanf("%d %d", &a, &b);
        if (a < b) sum_a -= b;
        else if (b < a) sum_b -= a;
    }
    printf("%d\n%d", sum_a, sum_b);
}