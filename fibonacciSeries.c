#include <stdio.h>

int main(){
    int n, fibonacci=1;
    printf("Enter the number for fibonacci series \n");
    scanf("%d",&n);
    int temp1=1, temp2=1;
    printf("The fibonacci series upto %d is : 1 1 ",n);

    for(int i =1;i<=n-2; i++){
        fibonacci = temp1 +temp2;
        temp1 =temp2;
        temp2 = fibonacci;
        printf("%d ",fibonacci);
    }
}