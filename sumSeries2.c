#include <stdio.h>

int main(){
    int n, sum=0;
    printf("Enter the number \n");
    scanf("%d",&n);
    
        if(n%2 ==0){
            sum = -n/2;
        }else{
           sum = -n/2 + n;
        }

    printf("Sum of the numbers is %d",sum);
}