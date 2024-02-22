#include <stdio.h>

int main(){
int n;
while(1){
    printf("enter the number : \n");
    scanf("%d", &n);
    n= n%7;
    if (n==0){
        printf(" number \n");
        break;
    }
}
printf("the end");
//return 0;
}