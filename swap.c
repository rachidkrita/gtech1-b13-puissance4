#include <stdio.h>

void swap1(int a, int b) {
  int tmp = a;
  a = b;
  b = tmp;
}

void swap2(int *a, int *b) {
  int tmp = *a;
  *a = *b;
  *b = tmp;
}

void main(void) {
  int a=1, b=2;
  printf("Début: a = 1 ; b = 2\n", a, b); // Complétez pour afficher les valeurs des entiers a et b.
  swap1(a, b);
  printf("Swap1: a = 2 ; b = 1\n", a, b); // Complétez pour afficher les valeurs des entiers a et b.
  swap2(&a, &b);
  printf("Swap2: a = 1 ; b = 2\n", a, b); // Complétez pour afficher les valeurs des entiers a et b.
}
