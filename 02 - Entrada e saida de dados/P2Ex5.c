#include <stdio.h>

int main () {

    int i,q100,q50,q20,q10,q5,q2,q1,r100,r50,r20,r10,r5,r2; // q = quantidade, r = resto.

    printf("Por favor, digite o valor inteiro, em reais e sem o prefixo R$\n");
    scanf ("%d", &i);

    q100 = i/100;   r100 = i%100;
    q50  = r100/50; r50 = r100%50;
    q20  = r50/20;  r20 = r50%20;
    q10  = r20/10;  r10 = r20%10;
    q5   = r10/5;   r5  = r10%5;
    q2   = r5/2;    r2  = r5%2;
    q1   = r2;


    printf("O valor R$%d pode ser representado por %d cedulas de 100, %d cedulas de 50, %d cedulas de 20, %d cedulas de 10, %d cedulas de 5, %d cedulas de 2 e %d cedulas de 1.", i,q100,q50,q20,q10,q5,q2,q1);


return 0;}
