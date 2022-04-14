void determinavalores (int n)
{
    int a,b,c;

    for(a=0;a<=n;a++)
    {
        for(b=0;b<=n;b++)
        {
            for(c=0;c<=n;c++)
                if(a+b+c==n)
                    printf("%d + %d + %d = %d\n", a,b,c,n);
        }
    }
}

