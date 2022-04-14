int idade(int d,int m, int a)
{
    int aa,ma,da,i;

    printf("Digite a data de hoje: ");
    scanf ("%d/%d/%d", &da,&ma,&aa);

    i = aa - a;

    if (ma < m)
        i--;
    else if (ma == m && da < d)
        i--;

    return i;
}

int main ()
{
    int a,m,d,i;
    while(1)
    {
        printf("Digite sua data de nascimento: ");
        scanf ("%d/%d/%d", &d,&m,&a);

        i=idade(d,m,a);

        printf("Voce tem %d anos e", i);

        if (i < 18)
            printf(" nao eh maior de idade.\n");
        else
            printf(" eh maior de idade.\n");
    }










}
