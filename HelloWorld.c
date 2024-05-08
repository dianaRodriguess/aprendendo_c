#include <stdio.h>

// #include - comando pre-processado que diz ao compilador para incluir o conteúdo de um arquivo
// <stdio.h> - o arquivo que vamos incluir
// 		std - standard, io - input, output, stdio - biblioteca padrão do C de entrada e saída de dados

int main() // função main obrigatótia
{
	// \n - new line
	// \t - tab
	printf("Hello World\n");
	printf("\ti'm programing in C\n");

	int a = 2;			   // inteiro
	float b = 2.3;		   // ponto flutuante
	char c = 'C';		   // single character
	char name[] = "Diana"; // já que C não é uma LOO não tem o tipo string (já que é um objeto), então para guardar uma série de caracteres, usamos um array de caracteres. uma combinação de single caracters
	printf("char %c", c);

	return 0; // retorna 0, se não tiver nada de errado no código, e 1 se tiver
};
