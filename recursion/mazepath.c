#include <stdio.h>

int maze(int cr, int cc, int er, int ec);

int main()
{
    int r, c;
    printf("Enter the Rows and Colums number of Maze : ");
    scanf("%d %d", &r, &c);
    int path = maze(1, 1, r, c);
    printf("The no of ways is : %d ", path);
}

int maze(int cr, int cc, int er, int ec)
{
    int rightWays = 0;
    int downWays = 0;
    if (cr == ec && cc == ec)
    {
        return 1;
    }

    if (cc == ec)
    {
        downWays += maze(cr + 1, cc, er, ec);
    }

    if (cr == er)
    {
        rightWays += maze(cr, cc + 1, er, ec);
    }

    if (cr < er && cc < ec)
    {
        rightWays += maze(cr, cc + 1, er, ec);
        downWays += maze(cr + 1, cc, er, ec);
    }
    int totalWays = rightWays + downWays;
    return totalWays;
}