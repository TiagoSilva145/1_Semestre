#include <stdio.h>
int main () {
 int aux;

  printf ("Digite um numero inteiro : ");
  scanf  ("%d", &aux);
  printf ("%f", (float)aux);   /*Foi necess�rio implementar o (float) para a vari�vel aux ser interpretada como float, mesmo
                               sendo int */
  return 0;
}
