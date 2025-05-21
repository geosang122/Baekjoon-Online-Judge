#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){
    int x,y;
    scanf("%d %d",&x,&y);
    int a=0,b=0;
    for (int i=0;i<x;i++) a=a*10+1;
    for (int i=0;i<y;i++) b=b*10+1;
    printf("%d",a+b);
}