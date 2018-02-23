

#include <stdio.h>
#include <stdlib.h>

/*  6. Faça um programa que:
a. declare duas variáveis a e b do tipo float;
b. declare um ponteiro “p” para o tipo float;
c. Peça que o usuário digite um número do tipo real, e o armazene em a;
d. Imprima o conteúdo de a;
e. Imprima o endereço de a;
f. Imprima o conteúdo de p;
g. Imprima o endereço de p;
h. Imprima o conteúdo do endereço apontado por p;
i. Imprima o conteúdo de b;
j. Imprima o endereço de b; */

int main() {
	float a, b;
	//apontando para A
	float *p=&a;	
	printf ("digite um numero real: ");
	//salva no ponteiro
	scanf ("%f", p);
	printf ("conteudo armazenado em a: %.0f\n", a);
	printf ("endereco do a: %.0d\n", &a);
	printf ("conteudo armazenado em p: %.0f\n", p);
	printf ("endereco de p: %.0d\n", &p);
	printf ("conteudo do endereco apontado por p: %.0f\n", *p);
	printf ("conteudo armazenado em b: %.0f\n", b);
	printf ("endereco de b: %.0d\n", &b);
	
	return 0;
}
