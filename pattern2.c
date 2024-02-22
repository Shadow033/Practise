#include <stdio.h>

int main(){
    for(int i = 0; i<=2; i++){
        for(int j=0; j<=4; j++){
            if(j==0 || i==0 || i==2 || j==4){
            printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}