#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int p;
    scanf("%d", &p);
    while (p--) {
        int n, m, temp;
        scanf("%d %d", &n, &m);
        if (m < n) {
            temp = n;
            n = m;
            m = temp;
        }
        for (int i = 1;; i++) {
            if (n * i % m == 0) {
                printf("%d\n", n * i);
                break;
            }
        }
    }
}