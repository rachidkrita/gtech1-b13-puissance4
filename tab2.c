#include <stdlib.h>
#include <stdio.h>
#define NBL 6
#define NBC 7
int c,l;
int choice;
char game[NBL][NBC];
char x;
int AccountRound = 1;
int next;
char token[] = "ox";
int player = 0; // Joueur 1 = 0, Joueur 2 =1
int good = 0;

//de belles couleurs :)))))))
void red(){
  printf("\033[1;31m");
}
void yellow(){
  printf("\033[1;33m");
}
void white(){
  printf("\033[0;37m");
}
void reset(){
  printf("\033[0m");
}

void blue(){
  printf("\033[0;34m");
}

//logo trop styléééééééééééé
int logo() {
  blue();
  printf(R"EOF(
                             _________      .__                                               _____
                             \______  \__ __|__|______ ____________    ____   ____  ____     /  |  |
                             |     ___/  |  \  |/  ___/   ___/\__  \  /    \_/ ___\/ __ \   /   |  |_               \
                             |    |   |  |  /  |\___ \ \___ \  / __ \|   |  \  \__\  ___/  /    ^   /
                             |____|   |____/|__/____  >____  >/____  /___|  /\___  >___  > \____   |
                                                    \/     \/      \/     \/     \/    \/       |__|
               )EOF");
  reset();
}

void menu(){

  printf("\n1.Règles\n");
  printf("2.Puissance 4\n");
  printf("3.Quitter\n");
}

//fonction initialisant le tab
void InitTab(){
  for (l=0; l<NBL; l++){
    for (c=0; c<NBC; c++){
      game[l][c]='.';
    }
  }
  //empty le journal d'entrée
void flushstdin() {
  int c;
  while((c = getchar()) != '\n' && c != EOF);}

//def de la fonction affichant le tab
void PrintTab(){
  printf("\n");
  printf("+ - - - - - - - + \n");
  for (l=0; l<NBL; l++){
    printf("|");
    for (c=0; c<NBC; c++){
      printf(" %c", game[l][c]);
    }
    printf(" |\n");
  }
  printf("+ 1-2-3-4-5-6-7 + \n");
}

//Fonction permettant d'empiler les jetons
int Verif() {
  int exit = 0;
  next = 0;
  while (exit != 1 && next < 5) {
    if (game[next][choice] == '.') {
      next ++;
      exit = 0;
    }
    if (game[next][choice] == 'x' || game[next][choice] == 'o') {
      if (next == 0) {
        red();
        printf("\nCette colonne est pleine...\n");
        reset();
        exit ++;
        player=!player;
        AccountRound--;
        return 0;
      }
      else {
        next --;
        exit ++;
        return 1;
      }
    }
  }
}

//fonction pour choisir
int choose(){
  int scanerror;
  printf("\n");
  while (AccountRound < 42) {
    int good = 0;
    PrintTab();
    yellow();
    printf("\nVotre chiffre: ");
    reset();
    scanerror=scanf("%d", &choice);
    choice--;
    if (scanerror==0){
      flushstdin();
      red();
      printf("\nCe n'est pas un chiffre :(\n");
      reset();
      continue;
    }
    if (choice <= -1 || choice >= 7){
      red();
      printf("\nVeuillez mettre un chiffre entre 1 et 7");
      reset();
      choose();
    }
    good = Verif();
    if (good = 1) {
      game[next][choice]= token[player];
      player = !player;
      AccountRound++;
    }
  }
}

int menus(){
  int option;
  menu();
  printf ("Votre choix ?\n");
  scanf("%d", &option);
  switch(option){
  case 1 :
    printf ("Le but du jeu est d'aligner une suite de 4 pions de même couleur sur une grille comptant 6 rangées et 7\
 colonnes. Chaque joueur dispose de 21 pions d'une couleur (par convention, en général jaune ou rouge). Tour à tour,\
 les deux joueurs placent un pion dans la colonne de leur choix, le pion coulisse alors jusqu'à la position la plus \
basse possible dans la dite colonne à la suite de quoi c'est à l'adversaire de jouer. Le vainqueurest le joueur qui \
réalise le premier un alignement (horizontal, vertical ou diagonal) consécutif d'au moins quatre pions de sa couleur\
. Si, alors que toutes les cases de la grille de jeu sont remplies, aucun des deux joueurs n'a réalisé un tel aligne\
ment, la partie est déclarée nulle.\n");
    break;
  case 2 :
    InitTab();
    yellow();
    printf("\nVeuillez choisir un chiffre correstpondant à une colonne\n");
    reset();
    choose();
  case 3 :
    exit (-1);
    break;
  default :
    printf ("Choissisez un choix valide.\n");
    break;
  }
  return 0;
    int main(){
      logo();
      menus();
      InitTab();
      yellow();
      printf("\nVeuillez choisir un chiffre correspondant à une colonne \n");
      reset();
      choose();
  }
