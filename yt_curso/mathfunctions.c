#include <stdio.h>
#include <math.h> // para usar tem que incluir isso

int main(){

    // double A = sqrt(9); // raiz quadrada
    // double B = pow(2, 4); //potencia - 2⁴
    // int C = round(3.14); //arredonda
    // int D = ceil(3.14); // arredonda para cima
    // int E = floor(3.99); // arredonda para baixo
    // double F = fabs(-100); // valor absoluto
    // double G = log(3); // logaritimo de um número
    // double H = sin(45); // seno de 45°
    // double I = cos(45);// cosseno de 45°
    // double J = tan(45);// tangente de 45°

    // printf("\n%lf", A);

    // calcular a circunferência

    // const double PI = 3.14159;
    // double raio;
    // double circunferencia;
    // double area;

    // printf("\nDigite o raio do ciuculo: ");
    // scanf("%lf", &raio);

    // circunferencia = 2 * PI * raio;
    // area = PI * raio * raio;

    // printf("\nCircunferência: %lf", circunferencia);
    // printf("\nÁrea: %lf", area);

    // Calcular a hiputenusa

    double a;
    double b;
    double c;

    printf("Lado a: ");
    scanf("%lf", &a);
    printf("\nLado b: ");
    scanf("%lf", &b);

    c = sqrt(a*a + b*b);
    
    printf("\nHipotenusa: %lf", c);
    
    printf("\n\n");
    return 0;

}