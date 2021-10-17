#include <stdio.h>
#include <stdlib.h>

int main ()
{
  int nombrechoisi = 0;
  printf ("Bienvenue dans Puissance 4!\n") && printf ("Veuillez choisir votre signe.\n");

  do
 
  {
    char token [] = "ox";
    scanf("%d",&nombrechoisi);

    if (nombrechoisi == 1)
      printf("Vous êtes joueur 1 : votre signe est o!\n");
    else if (nombrechoisi == 2)
      printf("Vous êtes joueur 2 : votre signe est x!\n");
    else
      printf("Veuillez choisir entre 1 et 2.\n");
  } while (nombrechoisi != 1&&2);

  return 0;
    }
