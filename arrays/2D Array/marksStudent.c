#include <stdio.h>

int main(){
    int r,a[r][4];
    printf("Enter the number of students : ");
    scanf("%d",&r);
    printf("Enter the roll number and marks of students : ");
    for(int i=0;i<r;i++){
        for(int j=0;j<4;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("The roll number and marks of students are : \n");
    for(int i=0;i<r;i++){
        for(int j=0;j<4;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}