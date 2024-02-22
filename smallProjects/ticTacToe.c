#include <stdio.h>
#include <stdlib.h>

// initialize the board
void initializeBoard(char board[3][3])
{
    char count = '1';
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            board[i][j] = count++;
        }
    }
}

//Display the Tic-Tac-Toe board
void displayBoard(char board[3][3])
{
    //system("clear");
    printf("\n\tTic Tac Toe\n\n");
    //printf("\t-------------\n");
    for (int i = 0; i < 3; i++)
    {
        printf("\t| %c | %c | %c |\n", board[i][0], board[i][1], board[i][2]);
       if(i<2){
         //printf("\t-------------\n");
       }
    }
}

// Function to check if a player has won
int checkWin(char board[3][3], char symbol)
{
    for (int i = 0; i < 3; i++)
    {
        if ((board[i][0] == symbol && board[i][1] == symbol && board[i][2] == symbol) ||
            (board[0][i] == symbol && board[1][i] == symbol && board[2][i] == symbol))
        {
            return 1; // Win
        }
    }

    if ((board[0][0] == symbol && board[1][1] == symbol && board[2][2] == symbol) ||
        (board[0][2] == symbol && board[1][1] == symbol && board[2][0] == symbol))
    {
        return 1; // Win
    }

    return 0; // No win
}

// Function to check if the board is full
int isBoardFull(char board[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (board[i][j] != 'X' && board[i][j] != 'O')
            {
                return 0; // Board is not full
            }
        }
    }
    return 1; // Board is full
}

// Function to perform a player's move
void playerMove(char board[3][3], char symbol, int playerNumber)
{
    int position;
    int validMove = 0;

    while (!validMove)
    {
        printf("\nPlayer %d's move (1-9): ", playerNumber);
        scanf("%d", &position);

        if (position >= 1 && position <= 9)
        {
            int row = (position - 1) / 3;
            int col = (position - 1) % 3;

            if (board[row][col] != 'X' && board[row][col] != 'O')
            {
                board[row][col] = symbol;
                validMove = 1;
            }
            else
            {
                printf("Position already taken. Choose a different position.\n");
            }
        }
        else
        {
            printf("Invalid move. Please choose a number between 1 and 9.\n");
        }
    }
}

// Function to run the Tic-Tac-Toe game
void playTicTacToe()
{
    char board[3][3];
    char currentPlayer = 'X';
    int gameStatus = 0; // 0: In progress, 1: Player 1 wins, 2: Player 2 wins, 3: Draw

    initializeBoard(board);

    while (gameStatus == 0)
    {
        displayBoard(board);
        int CPNumber;
        if (currentPlayer == 'X')
        {
            CPNumber = 1;
        }
        else
        {
            CPNumber = 2;
        }
        playerMove(board, currentPlayer, CPNumber);

        if (checkWin(board, currentPlayer))
        {
            if (currentPlayer == 'X')
            {
                gameStatus = 1;
            }
            else
            {
                gameStatus = 2;
            }
        }
        else if (isBoardFull(board))
        {
            gameStatus = 3;
        }

        // Switch player
        if (currentPlayer == 'X')
        {
            currentPlayer = 'O';
        }
        else
        {
            currentPlayer = 'X';
        }
    }

    displayBoard(board);

    if (gameStatus == 1)
    {
        printf("\nPlayer 1 wins!\n");
    }
    else if (gameStatus == 2)
    {
        printf("\nPlayer 2 wins!\n");
    }
    else
    {
        printf("\nIt's a draw!\n");
    }
}

int main()
{
    playTicTacToe();
    return 0;
}
