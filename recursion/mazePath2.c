#include <stdio.h>

int maze2(int r, int c);

int main()
{
    int r, c;
    printf("Enter the Rows and Colums number of Maze : ");
    scanf("%d %d", &r, &c);
    int path = maze2(r, c);
    printf("The no of ways is : %d ", path);
}

int maze2(int r, int c)
{
    int rightWays = 0;
    int downWays = 0;
    if (r == 1 && c == 1)
    {
        return 1;
    }

    if (c == 1) // can not go right
    {
        downWays += maze2(r - 1, c);
    }

    if (r == 1) // cannot go down
    {
        rightWays += maze2(r, c - 1);
    }

    if (r > 1 && c > 1)
    {
        rightWays += maze2(r, c - 1);
        downWays += maze2(r - 1, c);
    }
    int totalWays = rightWays + downWays;
    return totalWays;
}