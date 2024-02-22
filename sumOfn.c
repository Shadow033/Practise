#include <stdio.h>

int main(){
    int n, sum;
    printf("enter the number : \n");
    scanf("%d", &n);
    // for(int i=0; i<=n; i++){        
    //     sum= sum+i;     
    // }
    int i=0;
    do{
        sum=sum+i;
        i++;
    }while(i<=n);

    printf("sum of number is : %d \n", sum);
    return 0;

}