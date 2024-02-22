#include <stdio.h>
#include <string.h>

typedef struct cricketer
{
    char firstname[20], lastname[20];
    int age, numOfMatch;
    float aveRun;

} cricketer;

int main()
{
    cricketer cric[20];
    for (int i = 0; i < 20; i++)
    {
        printf("Enter the First Name of cricketer %d : \n", i + 1);
        scanf("%s", cric[i].firstname);
        //printf("Enter the Last Name of cricketer %d : \n", i + 1);
        scanf("%s", cric[i].lastname);
        printf("Enter the Age of cricketer %d : ", i + 1);
        scanf("%d", &cric[i].age);
        printf("Enter the Total Matches of cricketer %d : ", i + 1);
        scanf("%d", &cric[i].numOfMatch);
        printf("Enter the Average Run of cricketer %d : ", i + 1);
        scanf("%f", &cric[i].aveRun);
        printf("\n");
    }
    for (int i = 0; i < 20; i++)
    {
        printf("Name : %s %s\n", cric[i].firstname, cric[i].lastname);
        printf("Age : %d\n", cric[i].age);
        printf("Number Of Matches : %d\n", cric[i].numOfMatch);
        printf("Average Run %f\n\n", cric[i].aveRun);
    }
    return 0;
}