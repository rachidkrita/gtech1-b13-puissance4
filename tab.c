#include <stdio.h>
#define NBL 6
#define NBC 7

char token[] = "ox";                                                                                                                                        int joueur = 0; // Joueur 1 = 0, Joueur 2 =1 
int c, l;

int main(void) { //Initialisation du tableau de jeu
  char game[NBL][NBC];
  game[NBL][NBC] = '.';
  printf("\n");
  printf("+ - - - - - - - + \n");
  for (l=0; l<NBL; l++){
    printf("|");
    
    for (c=0; c<NBC; c++){
      printf (" %c", game[NBL][NBC]);
    }
    printf(" |\n");
  }
  printf("+ 1-2-3-4-5-6-7 + \n");
}    

int init(void){ 
  printf("%c", main());
}

int Game(void) {
  int OnOff = 0; //Déclaration des variables pour les boucles
  int Victory = 0;
  int AccountRound = 0;
  
  while (OnOff != 1) { //Début de la boucle pour recommencer une partie
    
    while (Victory != 1) || (AccountRound < 42) { //Début de la boucle de jeu

	do    {
	  token[joueur];	      // fin de boucle de jeu: inversion joueur:
	  joueur =! joueur;
          return 0;
	}
      }
  }
