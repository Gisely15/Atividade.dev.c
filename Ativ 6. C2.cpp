#include <stdio.h>

int main (void){
	
	float Altura, peso, sexo;

  printf( " Digite a altura da pessoa: " );
  scanf("%f",&Altura);
  printf( " Digite o sexo da pessoa ( 1 para feminino e 2 para masculino) " );
  scanf("%f",&sexo);
  
  if (sexo == 1){
    peso = ( 62.1 * Altura ) - 44.7;
    printf( " O peso ideal da pessoa e: %.2f", peso);
 }   
  else {
  
    peso = (72.7 * Altura ) - 58;
    printf( " O peso ideal da pessoa e: %.2fk", peso);
	}
    return 0;
}