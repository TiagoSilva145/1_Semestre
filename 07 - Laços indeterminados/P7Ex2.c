#include <math.h>
#include <stdio.h>

int main ()
{
    int s;

    while(s != 2002)
    {
        printf("Digite a senha: ");
        scanf ("%d", &s);
        if (s != 2002)
            printf("Senha invalida.\n");
        else
            printf("Acesso Permitido.");
    }


return 0;
}

