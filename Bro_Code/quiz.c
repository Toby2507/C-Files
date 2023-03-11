#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
  char questions[][100] = {
      "1. What year did the C language debut?: ",
      "2. Who is credited with creating C?: ",
      "3. What is the predecessor of C?: "};

  char options[][100] = {
      "A. 1969", "B. 1972", "C. 1975", "D. 1999",
      "A. Dennis Ritchie", "B. Nikola Tesla", "C. John Carmack", "D. Doc Brown",
      "A. Objective C", "B. B", "C. C++", "D. C#"};
  char answers[3] = {'B', 'A', 'B'};
  int noOfQues = sizeof(questions) / sizeof(questions[0]);
  char guess;
  char newline;
  int score;

  puts("QUIZ GAME");
  for (int i = 0; i < noOfQues; i++)
  {
    puts("************************");
    printf("%s\n", questions[i]);
    puts("************************\n");
    for (int j = (i * 4); j < (i * 4) + 4; j++)
    {
      printf("%s\n", options[j]);
    }

    printf("Guess: ");
    scanf("%c", &guess);
    scanf("%c", &newline);

    guess = toupper(guess);

    if (guess == answers[i])
    {
      puts("CORRECT!\n");
      score++;
    }
    else
    {
      puts("WRONG!\n");
    }
  }

  puts("******************************");
  printf("FINAL SCORE: %d/%d", score, noOfQues);
  puts("******************************");

  return 0;
}