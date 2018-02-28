#include <stdio.h>
#include <stdlib.h>

/*  5. Crie um programa que:
a. declare e inicialize um vetor do tipo int;
b. declare e inicialize um vetor do tipo float;
c. declare um ponteiro para o vetor int e uma variável inteira;
d. declare um ponteiro para o vetor do tipo float;
e. Imprima os elementos do vetor;
f. Imprima o endereço de cada um dos elementos listados. */

int main() {
	//declaramos todas as variaveis e vetores e ponteiros pedidos no exercício
	int *v1, variavel_inteira, vetor[1];
	float *v2, vetor2[1];
	//vetor[0]=0;
	//vetor2[0]=0.0;
	v2=&vetor2[0];
	v1=&vetor[0];
	printf("%d\n", vetor[0]);
	printf("%.2f\n", vetor2[0]);
	printf("%p\n", v1);
	printf("%p\n", v2);
	printf("%p\n", &v1);
	printf("%p\n", &v2);
	printf("%p\n", &variavel_inteira);
	return 0;
}
