#include <stdio.h>

int main(){
	
	int soma, numero, quantidade;
    float media;
 
  soma = 0;
  quantidade = 0;
  
  printf( "Digite um numero: ");
  scanf("%d",&numero);
  
  while (numero != 0){
    if (numero % 2 == 0) {	
        soma = soma + numero;
        quantidade = quantidade + 1;
    }  
    printf ("Digite um numero: ");
    scanf("%d",&numero);
    }
	
	 if (quantidade > 0) {
     media = soma / quantidade;
    printf("A media dos numeros pares e: %.2f", media);
    }
     else{
    printf("Nenhum numero par foi digitado.");
    }

}

