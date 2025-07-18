#include <stdio.h>

int num;

int main(){
    while(1){
        scanf("%d",&num);
        if(num==0) return 0;
        printf("%d\n",num*(num+1)/2);
    }
}