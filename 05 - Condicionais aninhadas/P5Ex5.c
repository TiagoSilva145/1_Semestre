# include <stdio.h>

int main ()
{

    int n1, n2, n3, aux ;     // 1) Se atribuirmos 1, 2 e 3, respectivamente, o programa vai imprimir 1 2 3;
                              // 2) Se atribuirmos 20, 10 e 30,respectivamente, o programa vai imprimir 10, 20, 30;
    if ( n2 >= n3 )           // 3) Se atribuirmos 5*5, n1/2 e n2+1,respectivamente, o programa vai imprimir 12 13 25;
    {                         // 4) O programa testa se n2 é maior ou igual a n3, se for verdade, ele vai
        aux = n2 ;            //    fazer uma troca de valores entre n2 e n3. Em seguida ele vai testar se n1 é maior ou
        n2 = n3 ;             //    ou igual a n2, se for verdade, ele vai fazer uma troca de valores entre n1 e n2 e vai testar
        n3 = aux ;            //    se n2 é maior ou igual a n3, se for verdade, ele vai fazer uma troca  de valores
    }                         //    entre n2 e n3. Após todos os testes de "ifs" ele vai printar n1, n2 e n3, nessa ordem.
    if ( n1 >= n2 )
    {
        aux = n1 ;
        n1 = n2 ;
        n2 = aux ;

        if ( n2 >= n3 )
        {
            aux = n2 ;
            n2 = n3 ;
            n3 = aux ;
        }
    }
    printf ("%d %d %d\n", n1, n2, n3 ) ;
    return (0) ;
}

