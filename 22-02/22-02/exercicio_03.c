#include <stdio.h>
#include <stdlib.h>

/*  Analise o programa abaixo, verifique se est� correto ou incorreto? Caso esteja incorreto, aponte
o erro e corrija-o.
main ( ) { int x, *p; x=10; p=x; printf( �%d\n�, *p); } */

int main() {
	int x, *p; 
	x=10;
	p=x; 
	// aqui imprimimos o valor contido em p, que veio de x
	printf( "%d\n", p);
	// aqui imprimimos a posi��o onde est� o p e o x
	printf( "%d\n", &p);
	printf( "%d\n", &x);
	// o * � utilizado apenas para declarar que a variavel � um ponteiro.
	return 0;
}
