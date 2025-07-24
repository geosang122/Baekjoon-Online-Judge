#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int head = 0;
    int st[1000005] = { 0 };
    int n = 0,cmd=0,x;
    scanf("%d", &n);
    while (n--) {
        scanf("%d", &cmd);
        switch (cmd) {
            case 1:
                scanf("%d\n", &x);
                st[head++] = x;
                break;
            case 2:
                if (head == 0) printf("-1\n");
                else printf("%d\n", st[--head]);
                break;
            case 3:
                printf("%d\n", head);
                break;
            case 4:
                if (head == 0) printf("1\n");
                else printf("0\n");
                break;
            case 5:
                if (head == 0) printf("-1\n");
                else printf("%d\n",st[head-1]);
        }
    }
}