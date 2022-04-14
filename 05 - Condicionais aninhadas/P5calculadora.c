#include <math.h>
#include <stdio.h>

int main ()
{
    float A,B,r;
    char o;

    printf("Por favor, me informe qual operacao voce deseja realizar:\n");
    printf("Digite s para somar A e B");
    printf("\nDigite b para subtrair A e B");
    printf("\nDigite m para multiplicar A e B");
    printf("\nDigite d para dividir A por B");
    printf("\nDigite q para calcular o quociente de A por B");
    printf("\nDigite r para calcular o resto da divisao de A por B");
    printf("\nDigite e para calcular A^B");
    printf("\nDigite z para calcular B^(1/A)\n");
    scanf("%c", &o);

    printf("Por favor, digite dois valores reais para A e para B, separando-os por espaco: ");
    scanf ("%f%f", &A,&B);

    if (o == 's')
        r = A + B;
    else if (o == 'b')
        r = A - B;
    else if (o == 'm')
        r = A * B;
    else if (o == 'd')
        {
         if (B == 0)
         {printf("Impossivel dividir por 0");
         return 0;}
         else
         r = A / B;
        }
    else if (o == 'q')
        {
         if (B == 0)
         {printf("Impossivel dividir por 0");
         return 0;}
         else
         r = (int)A / (int)B;
        }
    else if (o == 'r')
        {
         if (B == 0)
         {printf("Impossivel dividir por 0");
         return 0;}
         else
         r = (int)A % (int)B;
        }
    else if (o == 'e')
        r = pow(A,B);
    else if (o == 'z')
        r = pow(A,(1/B));

    printf("\n%f", r);


return 0;
}

