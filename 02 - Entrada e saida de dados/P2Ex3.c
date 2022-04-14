#include <stdio.h>
#include <math.h>
int main () {

    int a,b,c,mab,mabc;

    printf("Por favor, digite tres inteiros, separados por enter:\n");
    scanf("%d\n%d\n%\d", &a,&b,&c);

    mab  = (a+b+abs(a-b))/2;
    mabc = (mab+c+abs(mab-c))/2;

    printf("O maior entre os tres eh: %d", mabc);


return 0;}
