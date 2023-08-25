#include<stdio.h>

main (void){
	
	int i, soma, num;

 num = 1;
 soma = 0;
 
 while (num != 0){
 printf("Digite um numero: "); 
 scanf("%d", &num);
 soma = soma + num;
 }
 printf("O resultado da soma dos numeros digitados e: %d", soma);

}