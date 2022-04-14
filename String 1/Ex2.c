#include <string.h>
#include <stdio.h>

int main ()
{
    char s[100],fim[] = "FIM";

    fgets(s,100,stdin);
    s[strlen(s)-1] = '\0';

    while (strcmp(s,fim))
    {
        printf("Tamanho: %d\n", strlen(s));
        fgets(s,100,stdin);
        s[strlen(s)-1] = '\0';
    }
    return 0;
}
