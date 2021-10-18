#include <stdio.h>
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
  while OnOff != 1 {
      
      while Victory != 1 || AccountRound < 42 {
      
      choice();
	}
    }
