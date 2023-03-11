#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>

char board[3][3];
const char PLAYER = 'X';
const char COMPUTER = 'O';

void resetBoard();
void printBoard();
int checkFreeSpaces();
void playerMove();
void computerMove();
char checkWinner();
void printWinner(char);

int main()
{
  char winner = ' ';

  resetBoard();
  while (winner == ' ' || !checkFreeSpaces())
  {
    printBoard();
    playerMove();
    winner = checkWinner();
    if (winner != ' ' || !checkFreeSpaces())
    {
      break;
    }

    computerMove();
    winner = checkWinner();
    if (winner != ' ' || !checkFreeSpaces())
    {
      break;
    }
  }

  printBoard();
  printWinner(winner);

  return 0;
}

void resetBoard()
{
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      board[i][j] = ' ';
    }
  }
};

void printBoard()
{
  printf(" %c | %c | %c ", board[0][0], board[0][1], board[0][2]);
  puts("\n---|---|---");
  printf(" %c | %c | %c ", board[1][0], board[1][1], board[1][2]);
  puts("\n---|---|---");
  printf(" %c | %c | %c ", board[2][0], board[2][1], board[2][2]);
  puts("\n");
};

int checkFreeSpaces()
{
  int freeSpaces = 9;
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      if (board[i][j] != ' ')
      {
        freeSpaces--;
      }
    }
  }
  return freeSpaces;
};

void playerMove()
{
  int x, y;

  while (true)
  {
    printf("Enter row #(1-3): ");
    scanf("%d", &x);
    x--;
    printf("Enter column #(1-3): ");
    scanf("%d", &y);
    y--;
    if (board[x][y] != ' ')
    {
      puts("Invalid move!");
    }
    else
    {
      board[x][y] = PLAYER;
      break;
    }
  };
};

void computerMove()
{
  srand(time(0));
  int x, y;

  if (checkFreeSpaces())
  {
    while (true)
    {
      x = rand() % 3;
      y = rand() % 3;
      if (board[x][y] == ' ')
      {
        board[x][y] = COMPUTER;
        break;
      }
    }
  }
  else
  {
    printWinner(' ');
  }
};

char checkWinner()
{
  // Check rows
  for (int i = 0; i < 3; i++)
  {
    if (board[i][0] == board[i][1] && board[i][0] == board[i][2])
    {
      return board[i][0];
    }
  }
  // Check columns
  for (int i = 0; i < 3; i++)
  {
    if (board[0][i] == board[1][i] && board[0][i] == board[2][i])
    {
      return board[0][i];
    }
  }
  // Check diagonals
  if (board[0][0] == board[1][1] && board[0][0] == board[2][2])
  {
    return board[0][0];
  }
  if (board[0][2] == board[1][1] && board[2][0] == board[1][1])
  {
    return board[0][2];
  }
  return ' ';
};

void printWinner(char winner)
{
  if (winner == PLAYER)
  {
    puts("You WIN!");
  }
  else if (winner == COMPUTER)
  {
    puts("You LOSE!");
  }
  else
  {
    puts("It's a TIE!");
  }
};