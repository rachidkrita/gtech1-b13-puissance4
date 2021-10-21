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
int AccountRound = 1;
int next;

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

//boucle de jeu
void loop(){
  int Victory = 0;
  int OnOff = 0;
  int AccountRound = 1;
    while (Victory !=1 || AccountRound < 42) {
      Victory++;
      OnOff == 1;
      joueur = !joueur;
  }
}

//fonction pour poser sur les tokens
void gravity(){
  if game[5-next][choice]="o,x"
	   l--;


//fonction pour choisir
void choose(){
  choice--;
  printf("\n");
  while (AccountRound < 42){
    PrintTab();
    printf("Veuillez choisir un chiffre correspondant à une colonne \n\n");
    scanf("%d",  &choice);
    choice--;
    game[5-next][choice]= token[joueur];
    joueur = !joueur;
    AccountRound++;
      }
  printf(" |\n");
}
    
//fonction principale avec le tableau et le choix
int main(void){
  InitTab();
  choose();
}
