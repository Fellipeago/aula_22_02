#include <stdio.h>
#include <stdlib.h>

/*  Analise o programa abaixo, verifique se está correto ou incorreto? Caso esteja incorreto, aponte
o erro e corrija-o.
main ( ) { int x, *p; x=10; p=x; printf( “%d\n”, *p); } */

int main() {
	int x, *p; 
	x=10;
	p=x; 
	// aqui imprimimos o valor contido em p, que veio de x
	printf( "%d\n", p);
	// aqui imprimimos a posição onde está o p e o x
	printf( "%d\n", &p);
	printf( "%d\n", &x);
	// o * é utilizado apenas para declarar que a variavel é um ponteiro.
	return 0;
}
