#include <stdio.h>
#include <stdlib.h>

<<<<<<< HEAD
char token[] = "ox";
int joueur = 0; // Joueur 1 = 0, Joueur 2 =1

int main ()
  printf ("Welcome in Puissance 4!\n");

  do

    {

      if (token[joueur] == 0)
	token[joueur] = "o"
      else (token[joueur] == 1)
        token[joueur] = "x"
	   
    
    // fin de boucle de jeu: inversion joueur:
    joueur = !joueur;
    
    return 0;
}
=======
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
    else if (chosennumber == 2)
      printf("You are player 2 : Your sign is x!\n");
    else
      printf("Please choose a number between 1 and 2.\n");
  } while (chosennumber != 1&&2);

  return 0;
    }
>>>>>>> 0bbf54c627049d2cac040cb85d8160365b5268a2
