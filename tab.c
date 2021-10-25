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
int joueur = 0; // Joueur 1 = 0, Joueur 2 = 1
int AccountRound = 1;
int next;

void welcome(){
  printf("Bienvenue dans Puissance 4!\n") && printf("Si vous voulez jouer au Puissance 4 écrivez 'puissance 4' et si\
 vous voulez connaître les règles tapez 'regles'.\n");
}

void menu(){

  printf ("1.Regles\n");
  printf ("2.Puissance 4\n");
  printf ("3.Quitter\n");

}
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

//fonction initialisant le tab
void InitTab(){
  for (l=0; l<NBL; l++){
    for (c=0; c<NBC; c++){
      game[l][c]='.';
    }
  }
}

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
  //fonction pour choisir
  void choose(){
    printf("\n");
    while (AccountRound < 42){
      PrintTab();
      printf("\nVotre chiffre: ");
      scanf("%d", &choice);
      choice--;
      printf("%d", choice);
      if (choice <= -1, choice >= 7){
        red();
        printf("\nVotre chiffre ne corresponds pas à une colonne \n");
        reset();
        choose();
      }
      game[5-next][choice]= token[joueur];
      joueur = !joueur;
      AccountRound++;
    }
    printf(" |\n");
  }


  int menus(){

    int option = 1;
    welcome();
    menu();
      printf ("Votre choix ?\n");
      scanf ("&d", &option);
      switch(option){
      case 1 :
        printf ("Le but du jeu est d'aligner une suite de 4 pions de même couleur sur une grille comptant 6 rangées \
et 7 colonnes. Chaque joueur dispose de 21 pions d'une couleur (par convention, en général jaune ou rouge). Tour à t\
our, les deux joueurs placent un pion dans la colonne de leur choix, le pion coulisse alors jusqu'à la position la p\
lus basse possible dans la dite colonne à la suite de quoi c'est à l'adversaire de jouer. Le vainqueurest le joueur \
qui réalise le premier un alignement (horizontal, vertical ou diagonal) consécutif d'au moins quatre pions de sa cou\
leur. Si, alors que toutes les cases de la grille de jeu sont remplies, aucun des deux joueurs n'a réalisé un tel al\
ignement, la partie est déclarée nulle.\n");
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
    }

  int main(){
      menus();
      InitTab();
      yellow();
      printf("\nVeuillez choisir un chiffre correspondant à une colonne \n");
      reset();
      choose();
}
