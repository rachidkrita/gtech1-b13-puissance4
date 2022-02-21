
#include<stdio.h>
#include <stdlib.h>
#include "../headers/menu.h"
#include "../headers/game.h"

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
void logo() {
  blue();
  printf("Puiisance 4");
  reset();
}

//fonction affichant le début du menu
void menu(){
  yellow();
  printf("\n1.Règles\n");
  printf("2.Puissance 4\n");
  printf("3.Quitter\n");
  reset();
}



//Fonction affichant un menu pour consulter les règles
int menus(){
  int option;
  menu();
  printf ("\nVotre choix ? ");
  scanf("%d", &option);
  switch(option){
  case 1 :
    yellow();
    printf("%s","\nPour gagner une partie de puissance 4,");
    printf("%s"," il suffit d'être le premier à aligner 4 jetons de sa couleur horizontalement,");
    printf("%s", " verticalement et diagonalement.\nSi lors d'une partie,");
    printf("%s", " tous les jetons sont joués sans qu'il y est d'alignement de jetons,");
    printf("%s", " la partie est déclaré nulle.\n");
    reset();
    menus();
  case 2 :
    break;
  case 3 :
    printf("\n:(\n\n");
    exit (-1);
    break;
  default :
    red();
    printf ("\nChoissisez un choix valide.\n");
    reset();
    flushstdin();
    menus();
  } 
}