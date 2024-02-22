#include<stdio.h>

int main(){
    int n;
    printf("Enter the number \n");
    scanf("%d", &n);
    for(int i =1; i<=n; i++){
        for(int j=65;j<=64+n;j++){
            printf("%c ",j);
        }
        printf("\n");
    }
}