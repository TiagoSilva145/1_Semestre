#include <stdio.h>
int main () {

    float base,altura,perimetro;

    printf("Por favor, digite a base e a altura do retangulo, separadas por enter:\n");
    scanf ("%f\n%f", &base,&altura);

    perimetro = 2*base + 2*altura;

    printf("Perimetro do retangulo = %.2f", perimetro);


return 0;}
