/* Guilherme Aguilar de Oliveira: 2127954
   Tiago Goncalves da Silva:2023644
 */
#include <math.h>
#include <stdio.h>

void soma_digitos (int cont, int *s1, int *s2, int numero)
{ //Soma os digitos para as duas possibilidades do luhn10, caso o numero de digitos do cartao seja impar ou par.
    if(cont%2 == 0)
    {
        *s1=*s1 + numero;
        *s2=*s2 + (numero*2/10) + (numero*2%10);
    }
    else
    {
        *s1=*s1+ (numero*2/10) + (numero*2%10);
        *s2=*s2+ numero;
    }
}

void verifica_operadora(int operadora, int cont)
{   //Verifica a operadora de acordo com a quantidade de digitos do cartao e com o prefixo
    if (cont == 16)
    {
        if(operadora/100 == 51 || operadora/100 == 55)
            printf("Mastercard. ");
        else if (operadora/1000 == 4)
            printf("Visa. ");
        else if (operadora == 6001)
            printf("Amex. ");
        else if (operadora/1000 == 3)
            printf("JCB. ");
        else
            printf("Desconhecida. ");
    }
    else if (cont == 15)
    {
        if(operadora/100 == 34 || operadora/100 == 37)
            printf("Amex. ");
        else if(operadora == 2014 || operadora == 2149)
            printf("enRoute. ");
        else if(operadora == 2131 || operadora == 1800)
            printf("JCB. ");
        else
            printf("Desconhecida. ");
    }
    else if (cont == 14)
    {
        if (operadora/100 == 30 || operadora/100 == 36 || operadora/100 == 38)
            printf("Dinners. ");
        else
            printf("Desconhecida. ");
    }
    else if (cont == 13)
    {
        if (operadora/1000 == 4)
            printf("Visa. ");
        else
            printf("Desconhecida. ");
    }
}

int main ()
{
    int numero,cont=0, //cont: quantidade de algarismos do numero do cartao
        s1=0,s2=0,sf; //s1, s2 e sf sao variaveis acumuladoras usadas para calcular o luhn10
    char caracter;
    double operadora=0; //Variavel que acumula o prefixo do numero do cartao

    printf("Digite o numero do cartao: ");

    scanf("%c", &caracter);

    while (caracter!=10)
    { //Verifica se os caracteres digitados sao numeros

        numero = (int)caracter - 48; // Deve-se fazer o casting pois os não se pode somar caractere com numero 
                                    // Subtrai 48 pois o codigo ascii do 0 eh 48
        if(numero > 9 || numero < 0) 
        {
            printf("Caracteres invalidos.\n");
            return 0;
        }

        if(cont < 4) //Obtem o prefixo a partir dos 4 primeiros numeros digitados
            operadora = operadora + numero*(pow(10,3-cont));

        soma_digitos(cont,&s1,&s2,numero);
        cont++;

        scanf("%c", &caracter);
    }

    if(cont > 16)
    {
        printf("Numero muito longo.");
        return 0;
    }
    if(cont < 13)
    {
        printf("Numero muito curto.");
        return 0;
    }

    printf("Operadora: ");
    verifica_operadora(operadora,cont);

    if (cont%2)     //Determina qual variavel acumulada deve ser usada
        sf=s1;      //Se o numero do cartao tiver uma quantidade impar de digitos, usa-se a s1, do contrario, usa-se a s2
    else
        sf=s2;

    if (sf%10 == 0) //Calculo do Luhn10
        printf("Numero valido.");
    else
        printf("Numero invalido.");

    return 0;
}
