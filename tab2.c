//définition de plein de trucs
#include <stdio.h>
#define NBL 6
#define NBC 7
int c,l;
int choice;
char game[NBL][NBC];
char x;
char token[] = "ox";
int joueur = 0; // Joueur 1 = 0, Joueur 2 =1

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
      game[l][c] = '.';
      game[5][choice] = 'x';
      printf (" %c", game[l][c]);
    }
    printf(" |\n");
  }
  printf("+ 1-2-3-4-5-6-7 + \n");
}    

void loop(){
  int Victory = 0;
  int OnOff = 0;
  int AccountRound = 1;
  while (OnOff != 1) {
    OnOff == 0;
    token[joueur];
    printf("Bienvenue au jeu du Puissance 4 \n\n");
    while (Victory != 1 || AccountRound < 42) {
      Victory == 1;
      OnOff == 1;
      joueur = !joueur;
    }
  }
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
