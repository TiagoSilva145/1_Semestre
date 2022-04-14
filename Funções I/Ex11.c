float imc(float a,float p)
{
    return(p/(a*a));
}

void tipoimc (float imc)
{
    if (imc < 18.5)
        printf("abaixo do peso");
    else if (imc >= 18.5 && imc < 25)
        printf("com o peso normal");
    else if (imc >= 25 && imc <= 30)
        printf("acima do peso");
    else
        printf("obeso(a)");
}

int main()
{
    float p,a;

    printf("Digite seu peso e sua altura: ");
    scanf("%f%f", &p,&a);
    printf("Voce esta ");
    tipoimc (imc(1.74,63.0));
}
