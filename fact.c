#include <stdio.h>

int main(){
    int n;
    printf("Enter the number : \n");
    scanf("%d", &n);
    long int fact =1;
    for(int i=1; i<=n; i++){
        fact *= i;
   }
   printf("Factorial of %d is : %ld", n, fact);
}