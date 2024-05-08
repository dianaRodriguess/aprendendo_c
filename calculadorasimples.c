#include <stdio.h>

int main(void)
{
    int n1;
    int n2;
    int soma, sub, mult, div;
    int op;

    printf("Seja bem-vindo. \nEssa é uma calculadora simples em linguagem C. \nVocê digita dois números inteiros e escolhe a operação que deseja realizar.\n");
    // printf();
    printf("Digite o primeiro número: ");
    scanf("%d", &n1);
    printf("Digite o segundo número: ");
    scanf("%d", &n2);

    printf("Qual operação quer realizar? \n1 - soma \n2 - subtração \n3 - multiplicação \n4 - divisão \n:");
    scanf("%d", &op);

    if (op == 1)
    {
        soma = n1 + n2;
        printf("A soma entre %d e %d é: %d", n1, n2, soma);
    }
    else if (op == 2)
    {
        if (n1 > n2)
        {
            sub = n1 - n2;
            printf("A subtração entre %d e %d é: %d", n1, n2, sub);
        }
        else if (n1 < n2)
        {
            sub = n2 - n1;
            printf("A subtração entre %d e %d é: %d", n2, n1, sub);
            
        }
    }
    else if (op == 3)
    {
        mult = n1 * n2;
        printf("A multiplicação entre %d e %d é: %d", n1, n2, mult);
    }
    else if (op == 4)
    {
        if (n1 > n2)
        {
            div = n1 / n2;
            printf("A divisão entre %d e %d é: %d", n1, n2, div);

        }
        else if (n1 < n2)
        {
            div = n2 / n1;
            printf("A divisão entre %d e %d é: %d", n2, n1, div);

        }
    }
    else
    {
        printf("Opção inválida!");
    }

    return 0;
}