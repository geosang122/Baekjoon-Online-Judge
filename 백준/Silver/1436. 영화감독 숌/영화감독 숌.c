#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
    int count = 0;
    int num;
    int arr[10] = { 0 };
    for (int i = 1; i < 9; i++) arr[i] = -1;
    int ans[10] = { 0 };
    int c = 10;
    scanf("%d", &num);
    while (1) {
        arr[0]++;
        for (int i = 0; i<8; i++)
        {
            if (arr[i] >= 10)
            {
                arr[i] -= 10;
                if (arr[i + 1] <= 0) arr[i + 1] = 1;
                else arr[i + 1]++;
            }
        }
        for (int j = 0; j<8; j++)
        {
            if (arr[j] == 6 && arr[j + 1] == 6 && arr[j + 2] == 6)
            {
                count++;
                break;
            }
        }
        if (count == num) break;
    }
    for (int i = 0,j=9; arr[i]!=-1; i++,j--) {
        ans[j] = arr[i];
        c--;
    }
    for (int w = c; w < 10; w++) printf("%d", ans[w]);
}