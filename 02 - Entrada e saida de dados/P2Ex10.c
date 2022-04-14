#include <stdio.h>

int main () {

    float n1,n2,n3,nf;

    printf("Por favor, digite as tres notas do aluno, separando-as por enter\n");
    scanf ("%f\n%f\n%f", &n1,&n2,&n3);

    nf = n1*0.2+n2*0.3+n3*0.5;

    printf("A nota final do aluno eh: %.1f", nf);

return 0;}
