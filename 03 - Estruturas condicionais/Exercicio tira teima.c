#include <math.h>
#include <stdio.h>

int main ()
{
  int x,y;

  printf("Por favor, digite os valores para x e y, separando os valores por enter:\n");
  scanf ("%d\n%d", &x,&y);

  if (x > 432 || y > 468 || x < 0 || y < 0) { printf ("F\n");}
  if (x < 432 && y < 468 && x > 0 && y > 0) { printf ("D\n");}

  printf("Precisa de var?");

}
