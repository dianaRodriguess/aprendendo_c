#include <stdio.h>

float converter(float h)
{
    int f;
    float p;
    // float h;

    h = 100 * h;
    f = (int)(h / 30.48);
    p = (h - f * 30.48) / 2.54;

    printf("Altura em pés: %.1dft %.1fpol\n", f, p);

    return f, p;
}

int main(void)
{
    float altura;
    int altura_pes;

    printf("Qual a sua altura em metros? ");
    scanf("%f", &altura);

    int alt_cm = altura * 100;
    altura_pes = converter(altura);
    printf("Sua altura em cemtímetros é: %dcm\n", alt_cm);

    return 0;
}