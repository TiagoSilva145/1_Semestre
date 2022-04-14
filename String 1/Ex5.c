#include <stdio.h>
#include <string.h>

int main ()
{
    char f[100],p[100];
    int tamp,i,j,cont=0;

    printf("Digite a frase: ");
    fgets(f,100,stdin);
    f[strlen(f)-1] = '\0';

    printf("Digite a palavra: ");
    fgets(p,100,stdin);
    p[strlen(p)-1] = '\0';

    tamp=strlen(p);

    for(i=0; i<=strlen(f)-tamp; i++)
    {
        for(j=0; j<tamp; j++)
            if(f[i+j] != p[j])
                break;
        if(j==tamp)
            cont++;
    }

    printf("%d", cont);

}
