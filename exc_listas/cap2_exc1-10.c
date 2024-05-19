# include <stdio.h>

// 1. Faça um programa que exiba a mensagem "Olá Mundo!" para o usuário.
// int main(){
//     printf("Olá Mundo\n!");
//     return 0;
// }

// 2. Faça um programa que declare uma variável inteira e mostre seu conteúdo para o usuário. Execute o programa algumas vezes. Qual o significado do valor que está sendo impresso pelo programa?
// int main(){
//     int a = 5;
//     printf("variavel inteira: %d\n", a);
//     return 0;
// }

// 3. Faça um programa que declare uma variável real com precisão simples, atribua a essa variável o valor do número π (3.1415) e mostre, para o usuário, o conteúdo dessa variável.
// int main(){
//     float a = 3.1415;
//     printf("variavel real: %f\n",a);
//     return 0;
// }

// 4. Faça um programa que declare uma variável capaz de armazenar um caractere, atribua a letra 'a' a essa variável e mostre na tela o conteúdo da variável.
// int main(){
//     char a = 'a';
//     printf("variavel caractere: %c\n", a);
//     return 0;
// }

// 5. Faça um programa que declare uma variável inteira, atribua a essa variável o valor 2.97 e mostre na tela o conteúdo da variável. 
/*Que valor é mostrado na tela? 2
Por que isso acontece? pq o a rebresentação do binario de número inteiro é diferente da de pf
Como pode ser evitado esse tipo de problema? declarando uma variavel de pf e atribuindo o valor a ela*/
// int main(){
//     int a = 2.97;
//     printf("variavel inteira: %d\n", a);
//     return 0;
// }

// 6. Faça um programa que declare uma variável real com precisão dupla, atribua a essa variável a expressão 123/456 e mostre o resultado que está armazenado na variável? 
/*Que valor é mostrado na tela? 0.000000
Por que isso acontece? pq está sendo realizada uma divisão com inteiros.
Como pode ser evitado esse tipo de problema? fazendo 123.0/456.0, garantindo que a divsão seja feita no domínio dos pf*/
// int main(){
//     double a = 123/456;
//     printf("variavel double: %lf\n", a);
//     return 0;
// }


// 7. Faça um programa capaz de ler um carectere, informado pelo usuário, e mostrar o caractere escolhido pelo usuário.
// int main(){
//     char a;
//     printf("Informe um caractere: ");
//     scanf("%c", &a);
//     printf("O caractere digitado foi: %c\n", a);
//     return 0;
// }

// 8. Faça um programa que leia um número inteiro e um número real de precisão simples. Mostre na tela ambos os valores.
// int main(){
//     int a;
//     float b;
//     printf("Inteiro: ");
//     scanf("%d", &a);
//     printf("Decimal: ");
//     scanf("%f", &b);
//     printf("Inteiro, %d, decimal, %f\n", a, b);
//     return 0;
// }

// 9. Faça um program que leia um valor inteiro e mostre este mesmo valor nas bases hexa-decimal e octal. Dica: a função printf possui opções de formatação que fazem isso.
// int main(){
//     int a;
//     printf("Digite um valor inteiro: ");
//     scanf("%d", &a);
//     printf("Hexa: %X\n", a);
//     printf("Octa: %o\n", a);
//     return 0;
// }

// 10. Ler um valor real e exibir este valor com a precisão de duas cadas decimais (nem mais nem menos).
int main(){
    float a;
    printf("Valor decimal, mais de dua casas decimais: ");
    scanf("%f", &a);
    printf("Valor: %.2f\n", a);
    return 0;
}
