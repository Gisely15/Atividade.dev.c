#include <stdio.h>

int main(void) {

	int i,n;
	float s,x;

	printf( " Digite a quantidade de notas que voce deseja tirar a media: " );
	scanf("%d" ,&n);
	s = 0;
    for (i=1; i<=10; i++){


	printf( " Digite as notas para serem somadas e tire a media: " );
    scanf ("%f" ,&x);
	 s = s + x;
	}
	 printf( " Sua media e: ", s/n );

}