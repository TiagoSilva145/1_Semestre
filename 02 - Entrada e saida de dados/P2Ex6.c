#include <stdio.h>

int main () {

    int s,qm,qh,qd,rm,rh,rd; // q = quantidade, r = resto.

    printf("Por favor, digite um valor inteiro correspondente aos segundos:\n");
    scanf ("%d", &s);

    qd = s/86400; rd = s%86400;
    qh = rd/3600; rh = rd%3600;
    qm = rh/60  ; rm = rh%60;

    printf("%d correspondem a %d dias, %d horas, %d minutos e %d segundos.", s,qd,qh,qm,rm);


return 0;}
