#include <stdio.h>

int main (void){

  int num, i;

  printf( "Digite o número da tabuada que você deseja: " );
  scanf("%d",&num);
      for(int i = 1; i <= 10; i++ ){
      	printf("%d x %d =  %d\n", num, i, num * i);
	  }
}	  