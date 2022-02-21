#include<stdio.h>
#include <stdlib.h>
#include "../headers/game.h"
#include "../headers/menu.h"

void InitTab(int l,int c,int NBL, int NBC, char **game){
  for (l=0; l<NBL; l++){
    for (c=0; c<NBC; c++){
      game[l][c]='.';
    }
  }
}

//empty le journal d'entrée
void flushstdin() {
  int c;
  while((c = getchar()) != '\n' && c != EOF);}

//def de la fonction affichant le tab
void PrintTab(int l,int c,int NBL, int NBC, char **game){
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
int Verif(int next,int choice,int player ,int AccountRound , char **game ) {
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
      }lsls
      else {
        next --;
        exit ++;
        return 1;
      }
    }
  }
}

//fonction pour choisir
int choose(int next,int player ,int AccountRound,int l,int c,int NBL, int NBC ,char *token ,char **game ){
  int scanerror;
  printf("\n");
  while (AccountRound < 43) {
    PrintTab(l, c, NBL,  NBC,  game);
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
      choose( next, choice,player , AccountRound, l, c, NBL,  NBC ,  token,game);
    }
    Verif(next, choice, player , AccountRound , game);
    game[next][choice]= token[player];
    player = !player;
    AccountRound++;
  }
}