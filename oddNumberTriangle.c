#include <stdio.h>

int main(){
    int n;
    printf("Enter the number : \n");
    scanf("%d",&n);
    
    for(int i=1; i<=n;i++){
        int a = 1;
        for(int j=1; j<=i;j++){
        printf("%d ",a);
        a = a+ 2;
        }
        printf("\n");
    }

    // for(int i=1; i<=2*n-1;i=i+2){ //using Arithmetic progression
    //     printf("%d ",i);
    // }
}