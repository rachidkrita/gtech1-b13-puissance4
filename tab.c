#include <stdio.h>
#define NBL 6
#define NBC 7
char game[NBL][NBC];
int c, l;

<<<<<<< HEAD
int main(void){
  char game[NBL][NBC];
  game[NBL][NBC] = '.';
  printf("\n");
  printf("+ - - - - - - - + \n");
=======
//nouveau prototype de placement
#define t1 x
#define t2 o
char t1, t2;
int choice;
int choose(void){
  int NBl=6;
  printf("Veuillez choisir un chiffre correspondant à une colonne \n");
  scanf("%d", &choice);
  if (choice != 0);{
    NBl--;
  }
  game[2][4] = x; 
  printf ("%c", initTab());
}

void initTab(){
>>>>>>> d9db152ea09b494fae72fa026a106b01827d0129
  for (l=0; l<NBL; l++){
    printf("|");
    
    for (c=0; c<NBC; c++){
      printf (" %c", game[NBL][NBC]);
    }
    printf(" |\n");
    }
}


//affichage de tableau
int main(void){
  char game[NBL][NBC];
  game[NBL][NBC] = '.';
  printf("\n");
  printf("+ - - - - - - - + \n");
  initTab();
  }
  printf("+ 1-2-3-4-5-6-7 + \n");
  choose();
}    

<<<<<<< HEAD
int init(void){ 
  printf("%c", main());
}

int Game(void) {
  while OnOff != 1 {
      
      while Victory != 1 || AccountRound < 42 {
      
      choice();
	}
    }
=======

 
>>>>>>> d9db152ea09b494fae72fa026a106b01827d0129
