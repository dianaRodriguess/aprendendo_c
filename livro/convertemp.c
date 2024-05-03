/*Converção de temperatura*/

#include <stdio.h>

/*função auxiliar*/
float converte (float c){
    float f;
    f = 1.8 * c + 32;
    return f;
}

/*função principal*/
int main (void){
    float t1;
    float t2;
    /*mostra mensagem para o usuário*/
    printf("Digite a temperatura em Celcius: ");
    /*captura o valor entrado via teclado*/
    scanf("%f", &t1);
    /*faz a conversão, chamando a função auxiliar*/
    t2 = converte(t1);
    /*exibe resultado*/
    printf("Temperatura em Fahrnheit: %.1f°F\n", t2);
    return 0;
}
