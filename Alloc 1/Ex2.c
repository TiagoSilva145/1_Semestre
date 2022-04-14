#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

#define L 3
#define C 3
#define Q 3

#define BU 1024

char* empacota_string (char* string)
{
    char *s1, tam;

    tam = strlen(string);

    s1 = (char*) malloc(tam * sizeof(char));

    strcpy(s1,string);

    return s1;
}

int main ()
{
    char s1[BU] = {"Oi"}, *s2;

    s2 = empacota_string(s1);

    puts(s2);
    printf("%d", strlen(s2));
}
