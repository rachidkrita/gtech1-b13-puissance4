#include <stdio.h>
#include <stdlib.h>

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
