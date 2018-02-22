#include <stdio.h>
#include <stdlib.h>

/* */

main( ) {  

	
	int x, *p;
	x=10;
	//para salvar o valor de x no endereço p usa-se o & e para declarar um ponteiro se usa  '*'
	p = &x;
	/*forma errada 
	*p; x=10; */
	printf	("%d", *p);
	return 0;
}


