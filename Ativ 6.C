#include <stdio.h>

int main(void) {
	char nome[10], cadrasto[20], tituloLivro[30], autor[20], local[28];
	int ano, idade, cadrastoLivro, edicao, data, data_Entrega, registro;

	printf("\nNOME DO LEITOR(a)" );
	scanf("%s",&nome);
	printf( "\n ANO" );
	scanf("%d",&ano);
	printf( "\nIDADE" );
	scanf("%d",&idade);
	printf( "\nCADASTRO LIVROS " );
	scanf("%s",&cadrastoLivro);
	printf( "\nTITULO DO LIVRO" );
	scanf("%s",&tituloLivro);
	printf( "\nN DE REGISTROS ");
	scanf("%d",&registro);
	printf( "\nEDICAO " );
	scanf("%d",&edicao);
	printf( "\nAUTOR " );
	scanf ("%s",&autor);
	printf( "\nDATA " );
	scanf("%d",&data);
	printf( "\nDATA ENTREGA " );
	scanf("%d",&data_Entrega);
	printf( "\nLOCAL " );
	scanf("%s",&local);
	return 0;

}