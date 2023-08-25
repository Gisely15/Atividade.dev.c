#include <stdio.h>



int main(void){
	
     int ano, idade;
     
     printf("Digite o ano de nascimento");
     scanf("%d" ,&ano);
     
    idade = 2023-ano;
    if (idade >= 18){
      printf("\nVoce tem idade para votar %d\n", idade);
  }
      else{
      printf("\nVoce nao tem idade para votar %d\n", idade);
	  }
	  return 0;
	}
	
    
