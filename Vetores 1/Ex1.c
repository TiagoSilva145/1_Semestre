int main ()
{
    int v[5],i,j,aux;

    for(i=0;i<=4;i++)
    {
        scanf("%d", &v[i]);
    }

    scanf("%d%d", &i,&j);

    aux = v[i];
    v[i] = v[j];
    v[j] = aux;

    for(i=0;i<=4;i++)
    {
        printf("%d ", v[i]);
    }

    return 0;
}
