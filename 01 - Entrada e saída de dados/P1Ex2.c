#include <stdio.h>
int main()
{
    int   idade;
    float peso;
    char  letra;

    printf("Por favor, digite sua idade, seu peso e a primeira letra de seu nome, apertando enter depois de cada entrada\n");

    scanf("%d\n%f\n%c", &idade,&peso,&letra);
    printf("Voce tem %d anos, pesa %.2f kg, e seu nome comeca com %c.", idade,peso,letra);





return 0; }

