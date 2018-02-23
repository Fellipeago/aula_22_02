#include <stdio.h>
#include <stdlib.h>

/*  4. Analise o programa abaixo, e verifique o que será impresso.
main () { int x; int *p1, *p2; p1=&x; p2=p1; 1 printf(“%p”, p2); } */

int main() {
	int x; 
	int *p1, *p2; 
	p1=&x; 
	p2=p1; 
	// é possível observar que %p faz a impressão da posição "x" com sua unidade em hexadecimal, que possivelmente é a linguagem da maquina.
	printf("%p", p2);
	
	return 0;
}
