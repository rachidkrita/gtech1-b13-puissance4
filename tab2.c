//définition de plein de trucs
#include <stdio.h>
#define NBL 6
#define NBC 7
int c,l;
int choice;
char game[NBL][NBC];
char token [] = "ox";
int joueur = 0; 
  
//def de la fonction initiant le tab
void initTab(){
  for (l=0; l<NBL; l++){
    printf("|");

    for (c=0; c<NBC; c++){
      printf (" %c", game[NBL][NBC]);
    }
    printf(" |\n");
  }
}

//fonction pour choisir
void choose(){
  game[NBL][NBC] = '.';
  printf("Veuillez choisir un chiffre correspondant à une colonne \n");
  printf("\n");
  scanf("%d",  &choice);
  choice--;
  printf("\n");
  printf("+ - - - - - - - + \n");
  for (l=0; l<NBL; l++){
    printf("|");

    for (c=0; c<NBC; c++){
<<<<<<< HEAD
      game[l][c] = token[joueur];
=======
      game[l][c] = '.';
      game[5][choice] = 'x';
>>>>>>> 2f80d15fae99840b78fd5ea09c8d116f86d275e9
      printf (" %c", game[l][c]);
    }
    printf(" |\n");
  }
  printf("+ 1-2-3-4-5-6-7 + \n");
<<<<<<< HEAD
  joueur = !joueur; 
=======
>>>>>>> 2f80d15fae99840b78fd5ea09c8d116f86d275e9
}    

				     
//fonction principale avec le tableau et le choix
int main(void){
  game[NBL][NBC] = '.';
  printf("\n");
  printf("+ - - - - - - - + \n");
  initTab();
  printf("+ 1-2-3-4-5-6-7 + \n");
  choose();
}
