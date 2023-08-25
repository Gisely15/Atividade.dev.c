#include<stdio.h>

main(void){
	
	int x,N,soma;
soma = 0;	
for (N = 1; N <= 10; N = N + 1){

 printf("Entre com o valor: \n");
 scanf("%d",&x);
 soma = soma + x;
 }

printf("Resultado: %d", soma);


}
