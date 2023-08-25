#include <stdio.h>

int main (){

int inicial, final;


   printf( "Digite um numero inicial: ");
   scanf("%d",&inicial);
   printf( "Digite um numero final: ");
   scanf("%d",&final);
   if ( final <= inicial){
   	printf(" O numero final deve ser maior queo o numero inicial. Por favor, tente novamente");
   }
   while (final > inicial);
   printf("inicial");
   inicial = final + 1;

 }     