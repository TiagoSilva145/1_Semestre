#include <stdio.h>

int regular (int n)
{
        while(n%2==0)
            n=n/2;
        while(n%3==0)
            n=n/3;
        while(n%5==0)
            n=n/5;

        if(n==1)
            return 1;
        else
            return 0;
}

int main ()
{
    printf("%d", regular(34));
}
