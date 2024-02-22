#include <stdio.h>
#include <string.h>

int main()
{
    struct book
    {
        char name[50];
        float price;
        int pages;
    } a, b;

    struct book c;
    strcpy(c.name, "Shadow Shoot");
    c.pages = 69;
    c.price = 420;

    printf("%s\n", c.name);
    printf("%f\n", c.price);
    printf("%d\n", c.pages);

    return 0;
}