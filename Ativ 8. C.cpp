#include <stdio.h>

int main(void) {

	float a, b, c;

	printf( " Digite o numero da primeira variavel: ");
	scanf("%f" ,&a);
	printf( " Digite o numero da segunda variavel: ");
	scanf("%f" ,&b);;
	printf( " O valor da variavel A e %f: ",a, " O valor da variavel B e %f: ",b );
	c = a;
	a = b;
	b = c;
	printf( " O valor da variavel A agora e %f:", a, " O valor da variavel B agora e%f: ", b);

}