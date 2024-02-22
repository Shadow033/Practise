#include <stdio.h>
#include <math.h>

int main(){
    int n,rem;
    int sum=0;
    printf("Enter the number to check armstrong : \n");
    scanf("%d", &n);

    int temp=n;

    while(n>0){
        rem = n % 10;
        sum = sum + pow (rem, 3);
        n = n/10;
    }

    if (temp == sum){
        printf("Entered number is Armstrong : %d", temp);
    } else {
        printf("Entered number is not Armstrong : %d", temp);
    }
}