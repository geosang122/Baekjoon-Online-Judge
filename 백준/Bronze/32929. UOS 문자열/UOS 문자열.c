#include <stdio.h>

int main(){
    int x;
    scanf("%d",&x);
    switch (x%3){
        case 0:
            printf("S");
            break;
        case 1:
            printf("U");
            break;
        case 2:
            printf("O");
    }
}