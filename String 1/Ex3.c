#include <stdio.h>
#include <string.h>

int main ()
{
    char t[142];
    int i=0;

    fgets(t,142,stdin);
    t[strlen(t)-1] = '\0';

    while(t[i])
    {
        if(t[i] > 96 && t[i] < 123)
            t[i] = (int)t[i] - 32;
        i++;
    }
    fputs(t,stdout);
}
