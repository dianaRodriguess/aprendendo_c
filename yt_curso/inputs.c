#include <stdio.h>
#include <string.h>

int main(){
    char name[25]; //bytes
    int age;

    printf("\nWhat's your name? ");
    //scanf("%s", &name); // para no primeiro caractere de espaço que encontra
    fgets(name, 25, stdin); // ler os espaços, mas também ler os <Enter>
    name[strlen(name)-1] = '\0'; // remover o caractere de nova linha (<Enter>)

    printf("How old are you? ");
    scanf("%d", &age);

    printf("\nHello %s, how are you?", name);
    printf("\nYou are %d years old", age);

    return 0;
}