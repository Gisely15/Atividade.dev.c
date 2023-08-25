#include <stdio.h>

int main(void) {

	float a,b,c;

	printf("Digite um numero: ");
	scanf("%f",&a);
	printf("Digite um numero: ");
	scanf("%f",&b);

	if (a = b) {
	printf(" \nErro de digitacao!! Os numeros tem que ser diferentes. \n");
	printf("Digite novamente o Primeiro numero: ");
	scanf("%f" ,&a);
	printf("Digite novamente o Segundo numero: ");
	scanf("%f" ,&b);
	}

	else (a>b); 
	printf("Primeiro numero e maior %.2f ",a);
	printf("Segundo numero maior %.2f ",b);

}