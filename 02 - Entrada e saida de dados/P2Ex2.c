 #include <stdio.h>
int main () {

    float pi=3.14159,r,v;

    printf("Por favor, digite o raio da esfera:\n");
    scanf ("%f", &r);

    v = (float)4/3*pi*r*r*r; // Coloquei (float) antes do 4 porque 4/3 é 1 se ambos forem inteiros.

    printf("Volume da esfera = %.3f", v);

return 0;}
