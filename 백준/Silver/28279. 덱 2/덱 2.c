#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int de[2000005] = { 0 };

int main() {
    int n;
    scanf("%d", &n);
    int temp;
    int x;
    int head = 1000001, tail = 1000000;
    while (n--) {
        scanf("%d", &temp);
        switch (temp) {
            case 1:
                scanf("%d", &x);
                de[head++] = x;
                break;
            case 2:
                scanf("%d", &x);
                de[tail--] = x;
                break;
            case 3:
                if (tail+1 == head) printf("-1\n");
                else printf("%d\n", de[--head]);
                break;
            case 4:
                if (tail + 1 == head) printf("-1\n");
                else printf("%d\n", de[++tail]);
                break;
            case 5:
                printf("%d\n", head - tail-1);
                break;
            case 6:
                if (tail + 1 == head) printf("1\n");
                else printf("0\n");
                break;
            case 7:
                if (tail + 1 == head) printf("-1\n");
                else printf("%d\n",de[head-1]);
                break;
            case 8:
                if (tail + 1 == head) printf("-1\n");
                else printf("%d\n", de[tail + 1]);
        }
    }
}