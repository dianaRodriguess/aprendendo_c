#include <stdio.h>
#include <math.h>

// 21. Faça um programa que ler uma temperatura em graus Celsius e convertê-la para Kelvin.
// 22. Faça um programa que converta uma temperatura em Kelvin para Celsius.
// 23. Faça um programa para converter de graus Fahrenheit para Kelvin.
// 24. Faça um programa para converter de Kelvin para graus Fahrenheit.
// 25. Faça um programa que leia uma temperatura em graus Celsius e mostre seu valor em graus Fahrenheit e Kelvin.
// int main(){
//     double c, k, f;
//     // printf("Celsius: ");              //21
//     // scanf("%lf", &c);
//     // k = c + 273.15;
//     // printf("Kelvin: %.1lf\n", k);

//     // printf("Kelvin: ");              //22
//     // scanf("%lf", &k);
//     // c = k - 273.15;
//     // printf("Celsius: %.1lf\n", c);

//     // printf("Fahrenheit: ");              //23
//     // scanf("%lf", &f);
//     // k = (f + 459.67) * 5/9;
//     // printf("Kelvin: %.1lf\n", k);

//     // printf("Kelvin: ");              //24
//     // scanf("%lf", &k);
//     // f = (k * 9/5) - 459.67;
//     // printf("Fahrenheit: %.1lf\n", f);

//     // printf("Celsius: ");              //25
//     // scanf("%lf", &c);
//     // k = c + 273.15;
//     // f = (c * 9/5) + 32;
//     // printf("Fahrenheit: %.1lf\n", f);
//     // printf("Kelvin: %.1lf\n", k);
//     return 0;
// }

// 26. Faça um programa para ler um ângulo em graus e convertê-lo em radianos.
// 27. Faça um programa para ler um ângulo em radianos e convertê-lo em graus.
// int main(){
//     double g, r;
//     const double PI = 3.14159;
//     // printf("Graus: ");              //26
//     // scanf("%lf", &g);
//     // r = g * (PI/180);
//     // printf("Radianos: %.3lf\n", r);

//     // printf("Radianos: ");              //27
//     // scanf("%lf", &r);
//     // g = r * (180/PI);
//     // printf("Graus: %.3lf\n", g);
//     return 0;
// }

// 28. Faça um programa que leia um número e exiba o seu antecessor e sucessor.
// int main(){
//     int n;
//     printf("Inteiro: ");
//     scanf("%d", &n);
//     printf("Antecessor de %d: %d\n", n, (n-1));
//     printf("Sucessor de %d: %d\n", n, (n+1));
//     return 0;
// }

// 29. Faça um programa para calcular a área de um quadrado. O tamanho do lado deve ser informado pelo usuário.
// 30. Faça um programa para calcular a área de um retângulo. O tamanho dos lados devem ser informados pelo usuário.
// int main(){
//     // double lado, area;              //29
//     // printf("Lado: ");
//     // scanf("%lf", &lado);
//     // area = lado * lado;
//     // printf("Área: %.2lfm²\n", area);

//     double base, altura, area;              //30
//     printf("Base: ");
//     scanf("%lf", &base);
//     printf("Altura: ");
//     scanf("%lf", &altura);
//     area = base * altura;
//     printf("Área: %.2lfm²\n", area);
//     return 0;
// }

// 31. Faça um programa para calcular a área de um triângulo retângulo. O tamanho da base e altura do triângulo devem ser informados pelo usuário.
// 32. Faça um programa para calcular a área de um triângulo qualquer. O tamanho dos lados devem ser informados pelo usuário.
int main(){
    // double base, altura, area;             //31
    // printf("Base: ");
    // scanf("%lf", &base);
    // printf("Altura: ");
    // scanf("%lf", &altura);
    // area = (base * altura) /2;
    // printf("Área: %.2lfm²\n", area);

    double lado_a, lado_b, angulo_c, angulo_c_rad, area;              //32
    const double PI = 3.14159;
    printf("Lado a: ");
    scanf("%lf", &lado_a);
    printf("Lado b: ");
    scanf("%lf", &lado_b);
    printf("Angulo oposto a c: ");
    scanf("%lf", &angulo_c);
    angulo_c_rad = angulo_c * (PI / 180.0);
    area = (lado_a*lado_b*sin(angulo_c_rad))/2;
    printf("Área: %.2lfm²\n", area);
    return 0;
}