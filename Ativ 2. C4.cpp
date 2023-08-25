#include <stdio.h>
int main(void){
	
	int numero;
	printf("Digite um numero: ");
	scanf("%d", &numero);
	printf("\n O numero digitado foi: %d", numero);
	printf("\n O seu antecessor e: %d", numero-1);
	printf("\n O seu sucessor e: %d", numero+1);
}