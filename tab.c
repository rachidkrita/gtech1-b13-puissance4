#include <stdio.h>
#include <stdlib.h>
#define NBL 6
#define NBC 7

int c, l;

int main(void){
  char game[NBL][NBC];
  game[NBL][NBC] = '.';
  printf("\n");
  printf("+ - - - - - - - + \n");
  for (l=0; l<NBL; l++){
    printf("|");
    
    for (c=0; c<NBC; c++){
      printf (" %c", game[NBL][NBC]);
    }
    printf(" |\n");
  }
  printf("+ 1-2-3-4-5-6-7 + \n");
}    

int init(void){ 
  printf("%c", main());
}

int Game(void) {
  int Victory = 0;
  int OnOff = 0;
  int AccountRound = 1;
  while (OnOff != 1) {
      OnOff == 0;
      printf("Bienvenue au jeu du Puissance 4 \n\n");
      
      while (Victory != 1 || AccountRound < 42) {
	  Victory == 1;
	  OnOff == 1;
	}
    }
}
