//définition de tout plein de trucs
#include <stdlib.h>
#include <stdio.h>
#include "../headers/menu.h"
#include "../headers/game.h"


#define NBL 6
#define NBC 7


//fonction main éxécutant toute les autres fonctions
int main(){

  int c,l;
  int choice;
  char game[NBL][NBC];
  char x;
  int AccountRound = 1;
  int next;
  char token[] = "ox";
  int player = 0; // Joueur 1 = 0, Joueur 2 =1
  logo();
  menus();
  InitTab(l,c,NBL,NBC,game);
  yellow();
  printf("\nVeuillez choisir un chiffre correspondant à une colonne \n");
  reset();
  choose( next, player , AccountRound, l,c,NBL,  NBC ,token ,*game);
  PrintTab(l,c,NBL,NBC,game);
}

 
