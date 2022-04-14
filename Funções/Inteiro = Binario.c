#include <stdio.h>
#include <math.h>

int inteiroparabinario(int n)
{
    double bin=0;
    int uns=0,i;

    for(i=7;i>=0;i--)
    {
        if(n >= pow(2,i))
        {
            n = n - pow(2,i);
            bin = bin + pow(10,i);
            uns++;
        }
    }
    return bin;
}
