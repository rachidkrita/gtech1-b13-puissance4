//définition de plein de trucs
#include <stdlib.h>
#include <stdio.h>
#define NBL 6
#define NBC 7
int c,l;
int choice;
char game[NBL][NBC];
char x;
char token[] = "ox";
int joueur = 0; // Joueur 1 = 0, Joueur 2 =1

void welcome(){
  printf("Bienvenue dans Puissance 4!\n") && printf("Si vous voulez jouer au Puissance 4 écrivez 'puissance 4' et si vous voulez connaître les règles tapez 'regles'.\n");

}

void menu(){

    printf ("1.Regles\n");
    printf ("2.Comment jouer\n");
    printf ("3.Puissance 4\n");
    printf ("4.Quitter\n");

}       

int menus(){

  int choi, fin = 1;
    menu();
  while (fin){
    printf ("Votre choix ?\n");
    scanf ("&d",&choi);
    switch(choi){
    case 1 :
      printf ("Le but du jeu est d'aligner une suite de 4 pions de même couleur sur une grille comptant 6 rangées et 7 colonnes. Chaque joueur dispose de 21 pions d'une couleur (par convention, en général jaune ou rouge). Tour à tour, les deux joueurs placent un pion dans la colonne de leur choix, le pion coulisse alors jusqu'à la position la plus basse possible dans la dite colonne à la suite de quoi c'est à l'adversaire de jouer. Le vainqueur est le joueur qui réalise le premier un alignement (horizontal, vertical ou diagonal) consécutif d'au moins quatre pions de sa couleur. Si, alors que toutes les cases de la grille de jeu sont remplies, aucun des deux joueurs n'a réalisé un tel alignement, la partie est déclarée nulle.\n");
      break;
    case 2 :
      printf ("Choissisez un chiffre entre 1 et 7\n");
      break;
    case 3 :
       ;
      break;
    case 4 :
      exit (-1);
      break;
    default :
      printf ("Choissisez un choix valide.\n");
      break;
    }
    return 0;
}
	
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
    joueur = !joueur ;
    token[joueur];
  while (Victory != 1 || AccountRound < 42) {
    Victory == 1;
    OnOff == 1;
    AccountRound++;
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
  choose();}
 
