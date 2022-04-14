#include <stdio.h>
int main () {
 int aux;

  printf ("Digite um numero inteiro : ");
  scanf  ("%d", &aux);
  printf ("%f", (float)aux);   /*Foi necessário implementar o (float) para a variável aux ser interpretada como float, mesmo
                               sendo int */
  return 0;
}
