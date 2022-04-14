/* Guilherme Aguilar de Oliveira: 2127954
   Tiago Goncalves da Silva:2023644
 */
#include <stdio.h>

int bisexto (int ano) // retorna se o ano eh bisexto
{
    if(ano%4 == 0 && (ano%100 != 0 || ano%400 == 0))
        return 1;
    else
        return 0;
}

int diadasemana (int ano) // retorna o dia da semana de primeiro de janeiro do ano fornecido
{
    int aux,aux2;

    aux=(ano-1)%100;
    aux2=(ano-1)/100;

    // a formula a seguir eh uma adaptacao da congruencia de zeller para calcular o dia da semana
    // de primeiro de janeiro de um ano fornecido.
    return ((1+((13+1)*26/10)+aux+(aux/4)+(aux2/4)+(5*aux2))%7);
}

void espacos(int espacos) //imprime espacos n vezes, sendo n o valor passado
{
    int i;

    for(i=1;i<=espacos;i++)
        printf(" ");
}

int tamanhodomes(int mes) // retorna o numero de dias do mes fornecido
{
    if(mes == 2)
        return 28;
    else if (mes == 4 || mes == 6 || mes == 9 || mes == 11)
        return 30;
    else
        return 31;
}

void imprimir_mes(int *dia_da_semana, int mes, int ano) // imprime a folha do mes fornecido, atualizando o dia da semana
{
    int c,dia_do_mes=1,tamanho_do_mes; // c = contadora do laço semana

    espacos (5*(*dia_da_semana-1)); // imprime espacos ate o dia da semana que comeca o mes

    tamanho_do_mes = tamanhodomes(mes);
    if (bisexto (ano) && mes==2)
        tamanho_do_mes++;

    while(dia_do_mes <= tamanho_do_mes)
    {
        for(c=*dia_da_semana;c<=7;c++) // imprime a semana e depois pula linha
        {
            printf("%3d  ", dia_do_mes);
            dia_do_mes++;
            if(dia_do_mes > tamanho_do_mes)
                break;
        }
        printf("\n");
        *dia_da_semana=1;
    }
    *dia_da_semana=c+1; //atualiza o dia da semana para o mes seguinte
    printf("\n");
}

void imprimircabecalho(int mes, int ano) // imprime o nome do mes e os nomes dos dias da semana
{
    if(mes == 1)
    {
        espacos(9);
        printf("Janeiro de %d\n", ano);
    }
    else if(mes == 2)
    {
        espacos(8);
        printf("Fevereiro de %d\n", ano);
    }
    else if(mes == 3)
    {
        espacos(10);
        printf("Marco de %d\n", ano);
    }
    else if(mes == 4)
    {
        espacos(10);
        printf("Abril de %d\n", ano);
    }
    else if(mes == 5)
    {
        espacos(10);
        printf("Maio de %d\n", ano);
    }
    else if(mes == 6)
    {
        espacos(10);
        printf("Junho de %d\n", ano);
    }
    else if(mes == 7)
    {
        espacos(10);
        printf("Julho de %d\n", ano);
    }
    else if(mes == 8)
    {
        espacos(9);
        printf("Agosto de %d\n", ano);
    }
    else if(mes == 9)
    {
        espacos(8);
        printf("Setembro de %d\n", ano);
    }
    else if(mes == 10)
    {
        espacos(9);
        printf("Outubro de %d\n", ano);
    }
    else if(mes == 11)
    {
        espacos(8);
        printf("Novembro de %d\n", ano);
    }
    else
    {
        espacos(8);
        printf("Dezembro de %d\n", ano);
    }

    printf("DOM  SEG  TER  QUA  QUI  SEX  SAB\n");
}

int main ()
{
    int ano,dia_da_semana,mes=1; // dia_da_semana: 1 para domingo, 2 para segunda, ..., 7 para sabado

    printf("Digite o ano: ");
    scanf ("%d", &ano);
    printf("\n");

    dia_da_semana=diadasemana(ano); // a congruencia de zeller retorna 0 para sabado, mas no calendario a posicao do sabado eh 7
    if (dia_da_semana==0)
        dia_da_semana=7;

    for(mes=1;mes<=12;mes++)
    {
        imprimircabecalho(mes,ano);
        imprimir_mes(&dia_da_semana,mes,ano);
    }

    return 0;
}
