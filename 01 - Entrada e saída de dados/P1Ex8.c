#include <stdio.h>
int main () {

    char mai;
    int  min;

    printf ("Por favor, digite uma letra maiuscula ");
    scanf  ("%c", &mai);

    // Em ascii, o c�digo de uma letra min�scula � o c�digo da letra mai�scula + 32

    min = 32 + mai;

    printf("%c", min);

return 0;}
