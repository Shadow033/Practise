#include <stdio.h>

int main(){
    int n;
    printf("Enter the rows/columns of matrix : ");
    scanf("%d",&n);
    int arr[n][n];
    printf("Enter the elements of matrix : ");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Entered matrix is : \n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int tmp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=tmp;
            
        }
    }

    printf("The transposed matrix is : \n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}