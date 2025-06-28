#include <stdio.h>

int main(){
    char arr[15];
    scanf("%s",arr);
    if(arr[0]=='S') printf("HIGHSCHOOL");
    else if(arr[0]=='C') printf("MASTER");
    else if(arr[0]=='A') printf("CONTEST");
    else printf("0611");
}