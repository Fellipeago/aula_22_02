#include <stdio.h>
#include <stdlib.h>

/* */

main( ) {  

	
	int x, *p;
	x=10;
	//essa é a parte que estava erradaq
	p = &x;
	printf	("%d", *p);
	return 0;
}


