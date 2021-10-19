#include <stdio.h>
#define NBL 6
#define NBC 7
int c, l;

//def de la fonction affichant le tableau
void initTab(){
 char game[NBL][NBC];  
  game[NBL][NBC] = '.';
  for (l=0; l<NBL; l++){
    printf("|");

    for (c=0; c<NBC; c++){
      printf (" %c", game[NBL][NBC]);
    }
    printf(" |\n");
  }
}


//nouveau prototype de placement\Choix du placement du joueur
#define t1 x
#define t2 o
char t1, t2;
int choice;
void choose(){
  char game[NBL][choice];
  int NBl=6;
  printf("Veuillez choisir un chiffre correspondant à une colonne \n");
  scanf("%d", &choice);
  if (choice != 0);{
    NBl--;
  }
  game[NBl][choice] = x;
  printf("\n");
  printf("+ - - - - - - - + \n");
  printf(" %c",  game[NBL][NBC]);
  printf("+ 1-2-3-4-5-6-7 + \n");
}

//fonction principale avec le tableau et le choix
int main(void){
  char game[NBL][NBC];
  game[NBL][NBC] = '.';
  printf("\n");
  printf("+ - - - - - - - + \n");
  initTab();
  printf("+ 1-2-3-4-5-6-7 + \n");
  choose();
}
