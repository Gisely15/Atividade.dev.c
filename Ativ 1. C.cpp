#include <stdio.h>



 int main(void){
 
      int v, vel;
	  
	  printf("Digite a velocidade");
	  scanf("%d",&v);
	  if (v>80) {
	  	
	  	  vel = (v-80)*5;
	  	  printf("\nVocê foi multado, sua multa é de %d\n", vel);
	  }
	  
	  else {
	  	  printf("\n Você não foi multado");
	  }
	   return 0;
}
	  
	  