#include <stdio.h>

int main(){
    int n,fibonacci=1;
    printf("Enter the number \n");
    scanf("%d",&n);
    int temp1=1, temp2=1;
    for(int i=1;i<=n-2;i++){
        fibonacci = temp1 + temp2;
        temp1= temp2;
        temp2 = fibonacci;

    }
    printf("The %dth fibonacci number is : %d\n",n,fibonacci);
}