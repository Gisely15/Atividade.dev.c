#include<stdio.h>
 int main (void){
 	
   float peso, quant, gramas, sobra;
   
   printf ("Digite o peso da racao: ", "Kg");
   scanf("%f",&peso);
   printf("Digite a quantidade de racao para os gatos(em gramas): ");
   scanf("%f",&quant);
   
   gramas=peso*1000;
   sobra=gramas-(quant * 5);
   printf("A quantidade de racao que sobrou no saco depois de 5 dias foi de %.2f",sobra, "gramas", gramas);

 }