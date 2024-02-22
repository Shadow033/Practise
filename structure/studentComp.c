#include <stdio.h>
#include <string.h>

typedef struct student
{
    int rollNumber;
    char name[10];
    char department[15];
    char course[20];
    int yearOfJoining;
} student;

void compare(student s1, student s2);

int main()
{
    student s1, s2;
    strcpy(s1.department, "Electronics");
    strcpy(s2.department, "Electronics");
    compare(s1, s2);
    return 0;
}

void compare(student s1, student s2){
    if(!strcmp(s1.department,s2.department)){
        printf("Both are same");
    } else{
        printf("different");
    }
}
