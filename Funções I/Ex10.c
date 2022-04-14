int fibonacci (int n)
{
    int a=0,b=1,c,i;

    for(i=3;i<=n;i++)
    {
        c=a+b;
        a=b;
        b=c;
    }
    return c;
}
