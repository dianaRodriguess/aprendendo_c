#include <stdio.h>

int main(void)
{

    // int n;
    // printf("Digite um número inteiro: ");
    // scanf("%d", &n);

    // if (n % 2 == 0)
    // {
    //     printf("%d é par.\n ", n);
    // }
    // else
    // {
    //     printf("%d é ímpar.\n", n);
    // }
    float t;
    printf("Digite a temperatura atual: ");
    scanf("%f", &t);

    if (t < 10)
    {
        printf("Temperatura muito fria. \n");
    }
    else if (t < 20)
    {
        printf("Temperatura fria. \n");
    }
    else if (t < 30)
    {
        printf("Temperatura agradável. \n");
    }
    else
    {
        printf("Temperatura muito quente. \n");
    }
    return 0;
}