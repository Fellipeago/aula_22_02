#include <stdio.h>
#include <stdlib.h>

/*  4. Analise o programa abaixo, e verifique o que ser� impresso.
main () { int x; int *p1, *p2; p1=&x; p2=p1; 1 printf(�%p�, p2); } */

int main() {
	int x; 
	int *p1, *p2; 
	p1=&x; 
	p2=p1; 
	// � poss�vel observar que %p faz a impress�o da posi��o "x" com sua unidade em hexadecimal, que possivelmente � a linguagem da maquina.
	printf("%p", p2);
	
	return 0;
}
