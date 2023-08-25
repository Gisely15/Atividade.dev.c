#include <stdio.h>

int main (void){
	
  int num_lados;
  float medida_lado, area;

  printf( "Digite o numero de lados do poligono:\n ");
  scanf("%d",&num_lados);
  printf( "Digite a medida do lado (em cm): \n");
  scanf("%f",&medida_lado);
  
    if (num_lados == 3){
    area = (medida_lado * medida_lado) / 2;
    printf("Triangulo\n");
    printf( "Area do Triangulo %.2f " ,area, " cm \n");
}   
    if (num_lados == 4 ){
	
    area= (medida_lado * medida_lado);
    printf( " Quadrado\n " );
    printf( " Area do Quadrado e: %.2f\n" ,area , " cm\n " );
}
    if (num_lados == 5) {
    printf( "Pentagono\n" );
}   
    else
    if (num_lados<3 or num_lados >5){
    printf( " poligono ideterminado\n ");
  } 
}