#include <stdio.h>

int main(void){
	
	float sal, aum;
  
   printf( "Digite o salario atual do funcionario " );
   scanf("%f" ,&sal);

   aum = sal * 1.25;
   printf( "O salario e %.2f\n", aum );

}
