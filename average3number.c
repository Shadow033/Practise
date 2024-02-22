#include <stdio.h>
#include <math.h>

int main(){
    int a, b, c, average;
    printf("Enter the Numbers: \n");
    scanf("%d %d %d",  &a, &b, &c);
    average = (a+b+c)/3;
    printf("average of entered numbers is %d", average);

    return 0;

}