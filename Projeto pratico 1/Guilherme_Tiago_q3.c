/* Guilherme Aguilar de Oliveira: 2127954
   Tiago Goncalves da Silva:2023644
 */
#include <stdio.h>
#define BITSIGNIFICATIVO (1 << 7) //Constante do bit mais significativo

int bits1(int n) // retorna o numero de bits "1" no binario de um numero inteiro fornecido
{
    int bits1=0,i;
    
    for (i = 0; i <= 7; i++) {
        if (n & (1 << i)) {
        bits1++;
        }
    }
    
    return bits1;
}

void codificar_mensagem ()
{   //Codifica a mensagem: se o caracter tiver o numero de uns de bit impar, será adicionado 1 bit na casa mais significativa e depois mostrado na tela o valor decimal.
    unsigned char caracter; //Usa-se o unsigned pois a variavel char nao vai alem de 128

    scanf("\n%c", &caracter);

    if(bits1(caracter)%2==1)
        caracter=caracter + BITSIGNIFICATIVO; //Equivalente a somar 1 no bit mais significativo, pois char nunca sera 10000000

    printf("%d ", caracter);

    while (caracter != 46) // 46 = ascii do caracter 
    {
        scanf("%c", &caracter);

        if(bits1(caracter)%2==1)
            caracter=caracter + BITSIGNIFICATIVO;

        printf("%d ", caracter);
    }
}

void decodificar_mensagem ()
{   //Faz o processo reverso da função de codificar a mensagem e mostra na tela a mensagem decodificada
    int letra;

    do
    {
        scanf("%d", &letra);
        if (bits1(letra) % 2 == 1)
            putchar('*');

        else {
            if (letra > BITSIGNIFICATIVO) {
                letra -= BITSIGNIFICATIVO;
            }
            putchar(letra);
        }

    } while(letra != 46);
    
    putchar('\n');
}

int main ()
{
    //Variaveis
    int opcao;

    //Programa =)
    do {
        printf("\n1 - Escrever mensagem e codificar ela\n2 - Receber mensagem e decodificar\n3 - Sair do programa");
        printf("\nEscolha uma opcao: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            //Procedimento A
            codificar_mensagem();
        }

        else if (opcao == 2) {
            //Procedimento B
            decodificar_mensagem();
        }

        else if (opcao != 3) {
            printf("\nDigite uma opcao valida\n\n");
        }

    } while (opcao != 3);




    return 0;
}
