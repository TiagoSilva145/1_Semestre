#include <stdio.h>
int main () {

    char mai;
    int  min;

    printf ("Por favor, digite uma letra maiuscula ");
    scanf  ("%c", &mai);

    // Em ascii, o código de uma letra minúscula é o código da letra maiúscula + 32

    min = 32 + mai;

    printf("%c", min);

return 0;}
