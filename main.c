
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
  int cnum, mynum;
  srand(time(NULL));
  cnum = rand() % 10;
  printf("\nI have a number in my mind(0-9).Can you guess it?\n ");
  while (1)
  {
    printf("Enter your Guess->");
    scanf("%d", &mynum);

    if (cnum == mynum)
    {
      printf("You are right..! ;-)\n\n");
      break;
    }

    else if (cnum > mynum)
    {
      printf("Wrong guess...TRY AGAIN<<<Guess bigger than %d\n\n", mynum);
    }
    else
    {
      printf("Wrong guess...TRY AGAIN>>>Guess smaller than %d\n\n", mynum);
    }
  }
  return 0;
}