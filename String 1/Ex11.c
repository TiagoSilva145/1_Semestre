#include <stdio.h>
#include <string.h>

#define TAM 100

int main ()
{
    char s1[TAM], s2[TAM], s3[TAM];
    int i=0,j=0;

    fgets(s1,TAM,stdin);
    s1[strlen(s1)-1] = '\0';

    fgets(s2,TAM,stdin);
    s2[strlen(s2)-1] = '\0';

    while(s1[i++])
        if(s1[i] == 'a' || s1[i] == 'e' || s1[i] == 'i' || s1[i] == 'o' || s1[i] == 'u' || s1[i] == 'A' || s1[i] == 'E' || s1[i] == 'I' || s1[i] == 'O' || s1[i] == 'U')
            s3[j++] = s1[i];

    i=0;

    while(s2[i++])
        if(s2[i] == 'a' || s2[i] == 'e' || s2[i] == 'i' || s2[i] == 'o' || s2[i] == 'u' || s2[i] == 'A' || s2[i] == 'E' || s2[i] == 'I' || s2[i] == 'O' || s2[i] == 'U')
            s3[j++] = s2[i];

    s3[j] = '\0';

    puts(s3);
}
