#include<stdio.h>

main (void){
	
   float n1, n2, aluno;
   int N;

for(N = 1; N <= 10; N = N + 1){

printf("Aluno: \n", N);
printf("Nota 1 = ");
scanf("%f" ,&n1);
printf("Nota 2 = ");
scanf("%f" ,n2);

aluno = (n1+n2)/2;
printf("Médias");
}



for(N = 1; N <= 10; N = N + 1)
printf("Aluno ", N, "= " ,aluno);


}