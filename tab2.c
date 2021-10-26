//définition de plein de trucs
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
int joueur = 0; // Joueur 1 = 0, Joueur 2 =1

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
  int verifyerror;
  printf("%d", verifyerror);
  printf("\n");
  while (AccountRound < 42){
    PrintTab();
    printf("\nVotre chiffre: ");
    scanf("%d", &choice);
    choice--;
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

//fonction principale avec le tableau et le choix
int main(void){
  InitTab();
  yellow();
  printf("\nVeuillez choisir un chiffre correspondant à une colonne \n");
  reset();
  choose();
}
