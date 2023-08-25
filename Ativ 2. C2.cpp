#include <stdio.h>

int main (){
	
int nasc, idade;

  printf( "Digite o ano de nascimento e " );
  scanf("%d" ,&nasc);
  idade = 2023 - nasc;
  
  if (idade <= 16){
  
  printf(" Voce nao podera votar ");
}
  else
  printf(" Voce pode votar ");
}