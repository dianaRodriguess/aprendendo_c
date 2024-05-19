#include <stdio.h>

// 11. Ler um valor inteiro e exibir este valor com pelo menos três dígitos.
// Exemplo:
// • valor lido:7 -> valor exibido:007
// • valor lido:17 -> valor exibido: 017
// • valor lido:1024 -> valor exibido: 1024
// Dica: a função printf possui opções de formatação que fazem isso.
// int main(){
//     int a;
//     printf("Valor inteiro: ");
//     scanf("%d", &a);
//     printf("Valor: %03d\n", a);
//     return 0;
// }

// 12. Faça um programa que leia uma data no formato (dd/mm/aaaa) e mostre a data fornecida no formato (aaaa/mm/dd). Dica: é possível especificar as barras no formato de entrada dentro da função scanf.
// int main(){
//     int dia, mes, ano;
//     printf("Insira uma data. dd/mm/aaaa: ");
//     scanf("%d/%d/%d", &dia, &mes, &ano);
//     printf("Data invertida. aaaa/mm/dd: %04d/%02d/%02d\n", ano, mes, dia);
//     return 0;
// }

// 13. Faça um programa que leia um número inteiro, calcule o seu quadrado e exiba o resultado.
// int main(){
//     int a, b;
//     printf("Inteiro: ");
//     scanf("%d", &a);
//     b = a*a;
//     printf("Quadrado: %d\n", b);
//     return 0;
// }

// 14. Faça um programa que leia um número inteiro, calcule a décima parte deste número e exiba o resultado.
// int main(){
//     int a;
//     double b;
//     printf("Inteiro: ");
//     scanf("%d", &a);
//     b = 0.1* (double) a;
//     printf("Décima parte de %d: %.2lf\n", a, b);
//     return 0;
// }

// 15. Faça um programa que leia dois números, some estes números e exiba o resultado.
// int main(){
//     double a, b, soma;
//     printf("Insira dois números: ");
//     scanf("%lf %lf", &a, &b);
//     soma = a + b;
//     printf("Soma: %.2lf\n", soma);
//     return 0;
// }

// 16. Faça um programa capaz de multiplicar dois números fornecidos pelo usuário.
// int main(){
//     double a, b, produto;
//     printf("Insira dois números: ");
//     scanf("%lf %lf", &a, &b);
//     produto = a * b;
//     printf("Produto: %.2lf\n", produto); 
//     return 0;
// }

// 17. Faça um programa que leia dois números inteiros e calcule sua soma, subtração multiplicação e divisão.
// int main(){
//     double a, b;
//     double soma, sub, mult, div;
//     printf("Insira dois números: ");
//     scanf("%lf %lf", &a, &b);
//     soma = a + b;
//     sub = a - b;
//     mult = a * b;
//     div = a / b;
//     printf("Soma: %.2lf\n", soma);
//     printf("Subtração: %.2lf\n", sub);
//     printf("Multiplicação: %.2lf\n", mult);
//     printf("Divisão: %.2lf\n", div);
//     return 0;
// }

// 18. Faça um programa para calcular a soma de três valores informados pelo usuário.
// int main(){
//     double a, b, c, soma;
//     printf("Insira três números: ");
//     scanf("%lf %lf %lf", &a, &b, &c);
//     soma = a + b + c;
//     printf("Soma: %.2lf\n", soma);
//     return 0;
// }

// 19. Faça um programa para ler uma temperatura em graus Celsius e mostrar seu valor convertido para graus Fahrenheit.
// int main(){
//     float c, f;
//     printf("Digite a temperatura em Celcius: ");
//     scanf("%f", &c);
//     f = 1.8 * c + 32;
//     printf("Temperatura em Fahrnheit: %.1f°F\n", f);
//     return 0;
// }

// 20. Faça um programa para ler uma temperatura em graus Fahrenheit e apresentar seu valor convertido para graus Celsius.
int main(){
    float c, f;
    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%f", &f);
    c = (f - 32)* 5/9;
    printf("Temperatura em Celsius: %.1f°C\n", c);
    return 0;
}
