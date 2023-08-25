#include <stdio.h>

int main(void) {

	float vol, comp, lar, alt;


	printf( "Digite a medida do comprimento da caixa " );
	scanf("%f" ,&comp);
	printf( "Digite a medida da largura da caixa ");
	scanf("%f" ,&lar);
	printf( "Digite a medida da altura da caixa ");
	scanf("%f" ,&alt);
	vol = comp * lar * alt;
	printf( "O volume da caixa e: %.2f", vol, " cm ");

}