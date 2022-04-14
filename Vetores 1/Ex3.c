#define N 20

int main ()
{
    int v[N],i,j,k=1;

    for(i=0;i<=19;i++)
    {
        v[i]=(rand()%20)-15;
    }

    for(i=0;i<=19;i++)
    {
        printf("%2d ", v[i]);
    }

    printf("\n");

    do
    {
        scanf("%d", &j);

        for(i=0;i<=19;i++)
        {
            if(j==v[i])
            {
                k=0;
                break;
            }
        }
        if (k==1)
            printf("NAO ACHEI");

    } while (k);

    printf("ACHEI");

}
