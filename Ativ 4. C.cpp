#include <stdio.h>

int main() {
	int ano, idade, n;

	printf("Digite o ano de nascimento");
	scanf("%d",&ano);

	idade = 2023-ano;

	if (idade < 18 ){
	
		n = 18-idade;
	printf("\nVoce nao tem idade para se alistar %d\n", idade);
	printf("\n Faltam %d ano(s) para voce se alistar\n", n);
}
	else{
	
		n = idade-18;
	printf("\nVoce tem idade para se alistar %d\n", idade);
	printf("\n Ja se passaram %d anos do alistamento ", n);
}

}
