

#include <stdio.h>
#include <stdlib.h>

/*  6. Fa�a um programa que:
a. declare duas vari�veis a e b do tipo float;
b. declare um ponteiro �p� para o tipo float;
c. Pe�a que o usu�rio digite um n�mero do tipo real, e o armazene em a;
d. Imprima o conte�do de a;
e. Imprima o endere�o de a;
f. Imprima o conte�do de p;
g. Imprima o endere�o de p;
h. Imprima o conte�do do endere�o apontado por p;
i. Imprima o conte�do de b;
j. Imprima o endere�o de b; */

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
