#include <stdio.h>
#include <string.h>

int main(){
    char str[40];
    printf("Enter the string : ");
    scanf("%[^\n]s",str); // or gets(str);
    int size =0,k=0;
    while (str[k]!='\0')
    {
        size++;
        k++;
    }
    for(int i=0,j=size-1;i<=j;i++,j--){
        char temp = str[i];
        str[i]=str[j];
        str[j]=temp;
    }
    puts("The reverse of the string is : ");
    puts(str);
    //printf("The reverse is : \n%s",str);
    return 0;
    
}