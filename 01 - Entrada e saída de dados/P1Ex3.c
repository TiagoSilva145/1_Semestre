#include <stdio.h>
int main (){
                                               // Vou indicar os erros com os comentarios.
    int aux;                                   // Faltou o ; depois de "aux".

    printf("Digite um numero inteiro: ");
    scanf("%d", &aux);                         // foi digitado #d em vez de %d e a variavel estava com o nome todo em caixa alta.
    printf("%d", aux);                         // foi digitado prinf em vez de printf e no comando de imprimir não se usa o &.
    return 0;                                  // faltou o ; depois de return 0.




}
