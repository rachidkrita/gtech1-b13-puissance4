*#include <stdio.h>
#include <stdlib.h>

int main ()
{
  int chosennumber = 0;
  printf ("Welcome in Puissance 4!\n") && printf ("Please choose your sign.\n");

  do
 
  {
    char token [] = "ox";
    scanf("%d",&chosennumber);

    if (chosennumber == 1)
      printf("You are player 1 : Your sign is o!\n");
      j1 = "o";
    else if (chosennumber == 2)
      printf("You are player 2 : Your sign is x!\n");
      j2 = "x";
    else
      printf("Please choose a number between 1 and 2.\n");
  } while (chosennumber != 1&&2);

  return 0;
    }
