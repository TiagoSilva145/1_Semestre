#include <math.h>
#include <stdio.h>

int main ()
{
    float n1,n2,n3,nf;

    printf("Por favor, digite as notas do aluno, separando os valores por enter:\n");
    scanf ("%f\n%f\n%f", &n1,&n2,&n3);

    nf = (n1+n2+n3)/3;

    printf("A media do aluno eh: %.1f, o aluno esta", nf);

    if (nf >= 7)
    {
        printf(" aprovado, boas ferias!");
    }

    if (nf < 7 && nf >= 4)
    {
        printf(" exame final, estude bastante!");
    }

    if (nf < 4)
    {
        printf(" reprovado, nos vemos no proximo semestre ;)");
    }


return 0;
}
