#include<stdio.h>

int continuar;
int main() {


	do {
		printf(" Escolha um dos programas para continuar: \n ");
		printf("1 - Velocidade \n");
		printf(" 2 - Idade para votar \n");
		printf(" 3 - Media\n");
		printf(" 4 - Idade de Alistamento\n");
		printf(" 5 - Notas finais\n");
		printf(" 6 - Cadastrar Livros\n");
		printf(" 7 - Salario\n");
		printf(" 8 - Variaveis\n");
		printf(" 9 - Medidas\n");
		printf(" 10 - Medias\n");
		printf(" 11 - Numeros diferentes\n");
		printf(" 12 - Idade para Votar\n");
		printf(" 13 - Senha\n");
		printf(" 14 - Apple\n");
		printf(" 15 - Variaveis diferentes\n");
		printf(" 16 - Peso\n");
		printf(" 17 - Poligonos\n");
		printf(" 18 - Numero inicial e final\n");
		printf(" 19 - Tabuada\n");
		printf(" 20 - Inicial e Final\n");
		printf(" 21 - Racao\n");
		printf(" 22 - Antecessor e Sucessor\n");
		printf(" 23 - Somas\n");
		printf(" 24 - Numeros\n");
		printf(" 25 - Numeros pares\n");
		printf( "Digite 0 para sair\n");
		scanf("%d",&continuar);

		switch (continuar) {
			case 1:
				int v, vel;

				printf("Digite a velocidade ");
				scanf("%d",&v);
				if (v>80) {

					vel = (v-80)*5;
					printf("\nVocê foi multado, sua multa é de %d\n ", vel);
				}

				else {
					printf("\n Você não foi multado ");
				}
				break;

			case 2:
				int ano, idade;

				printf("Digite o ano de nascimento");
				scanf("%d",&ano);

				idade = 2023-ano;
				if (idade >= 18) {
					printf("\nVoce tem idade para votar %d\n", idade);
				} else {
					printf("\nVoce nao tem idade para votar %d\n", idade);
				}
				break;


			case 3:
				float p1, p2,media;
				char nome[10];

				printf( " Digite o seu nome " );
				scanf ("%s",&nome);
				printf( " Digite a sua nota na prova 1 " );
				scanf("%f",&p1);
				printf( " Digite a sua nota na prova 2 " );
				scanf("%f",&p2);

				media = (p1 + p2)/2;

				if( media >= 7 ) {

					printf( "\n %s Voce foi aprovado! Sua media foi %.2f\n ",  nome, media );
				}

				else {

					printf("\n %s Voce nao teve um bom aproveitamento. Sua media foi %.2f\n",nome, media );
				}
				break;


			case 4:
				int year, idad, n;

				printf("Digite o ano de nascimento");
				scanf("%d",&ano);

				idade = 2023-year;

				if (idade < 18 ) {

					n = 18-idade;
					printf("\nVoce nao tem idade para se alistar %d\n", idad);
					printf("\n Faltam %d ano(s) para voce se alistar\n", n);
				} else {

					n = idade-18;
					printf("\nVoce tem idade para se alistar %d\n", idad);
					printf("\n Ja se passaram %d anos do alistamento ", n);
				}
				break;

			case 5:
				char name [10];
				float n1, n2, n3, n4,soma,Media;
				int age;


				printf("Digite seu Nome");
				scanf("%s", &name);
				printf("Qual a sua Idade?");
				scanf("%d",&age);

				printf(" Digite sua Nota do Primeiro bimestre: ");
				scanf("%f",&n1);
				printf(" Digite sua Nota do Segundo bimestre: ");
				scanf("%f",&n2);
				printf(" Digite sua Nota do Terceiro bimestre: ");
				scanf("%f",&n3);
				printf(" Digite sua Nota do Quarto bimestre ");
				scanf("%f",&n4);

				soma = n1 + n2 + n3 + n4;
				Media = soma/4;
				if (Media >=15) {

					printf ("\n Aluna: %s \n",name );
					printf ("\n Sua idade e: %d\n", age );
					printf (" \n Aluno Aprovado \n");
					printf ("\n Sua media e: %.2f ", Media );
				}

				else {

					printf("\n Aluna: %s \n", name );
					printf ("\n Sua Idade e: %d\n", age );
					printf ("\n Aluno Reprovado\n");
					printf ("\n Sua media e: %.2f\n", media );
				}
				break;

			case 6:
				char Nome[10], cadrasto[20], tituloLivro[30], autor[20], local[28];
				int Ano, Idade, cadrastoLivro, edicao, data, data_Entrega, registro;

				printf("NOME DO LEITOR(a):\n " );
				scanf("%s",&Nome);
				printf( " ANO:\n " );
				scanf("%d",&Ano);
				printf( " IDADE: " );
				scanf("%d",&Idade);
				printf( "CADASTRO LIVROS\n " );
				scanf("%s",&cadrastoLivro);
				printf( "TITULO DO LIVRO\n " );
				scanf("%s",&tituloLivro);
				printf( " N DE REGISTROS\n ");
				scanf("%d",&registro);
				printf( "EDICAO\n " );
				scanf("%d",&edicao);
				printf( " AUTOR\n " );
				scanf ("%s",&autor);
				printf( " DATA\n " );
				scanf("%d",&data);
				printf( " DATA ENTREGA\n " );
				scanf("%d",&data_Entrega);
				printf( " LOCAL\n" );
				scanf("%s",&local);
				break;


			case 7:
				float sal, aum;

				printf( "Digite o salario atual do funcionario " );
				scanf("%f",&sal);

				aum = sal * 1.25;
				printf( "O salario e %.2f\n", aum );
				break;


			case 8:
				float a, b, c;

				printf( " Digite o numero da primeira variavel: ");
				scanf("%f",&a);
				printf( " Digite o numero da segunda variavel: ");
				scanf("%f",&b);
				printf( " O valor da variavel A e %f: ",a, " O valor da variavel B e %f: ",b );
				c = a;
				a = b;
				b = c;
				printf( " O valor da variavel A agora e %f:", a, " O valor da variavel B agora e%f: ", b);
				break;


			case 9:
				float vol, comp, lar, alt;


				printf( "Digite a medida do comprimento da caixa " );
				scanf("%f",&comp);
				printf( "Digite a medida da largura da caixa ");
				scanf("%f",&lar);
				printf( "Digite a medida da altura da caixa ");
				scanf("%f",&alt);
				vol = comp * lar * alt;
				printf( "O volume da caixa e: %.2f", vol, " cm ");
				break;


			case 10:
				int i,m;
				float s,x;

				printf( " Digite a quantidade de notas que voce deseja tirar a media: " );
				scanf("%d",&m);
				s = 0;
				for (i=1; i<=10; i++) {


					printf( " Digite as notas para serem somadas e tire a media: " );
					scanf ("%f",&x);
					s = s + x;
				}
				printf( " Sua media e: ", s/m );
				break;


			case 11:
				float d,e,f;

				printf("Digite um numero: ");
				scanf("%f",&d);
				printf("Digite um numero: ");
				scanf("%f",&e);

				if (d = e) {
					printf(" \nErro de digitacao!! Os numeros tem que ser diferentes. \n");
					printf("Digite novamente o Primeiro numero: ");
					scanf("%f",&d);
					printf("Digite novamente o Segundo numero: ");
					scanf("%f",&e);
				}

				else (d>e);
				printf("Primeiro numero e maior %.2f ",d);
				printf("Segundo numero maior %.2f ",e);
				break;


			case 12:
				int nasc, Idad;

				printf( "Digite o ano de nascimento e " );
				scanf("%d",&nasc);
				Idad = 2023 - nasc;

				if (Idad <= 16) {

					printf(" Voce nao podera votar ");
				} else
					printf(" Voce pode votar ");


			case 13:
				int senha;

				printf(" Digite a sua senha: ");
				scanf("%d",&senha);

				if (senha == 1234)
					printf(" Acesso permitido");

				else
					printf(" Acesso negado");
				break;


			case 14:
				float apple, mndz, madz;

				printf("Digite o numero de macas que voce comprou: ");
				scanf("%f",&apple);

				if (apple < 12) {
					mndz = apple*0.30;
					printf(" O valor a ser pago e de R$%.2f",mndz," reais");
				} else {
					madz = apple*0.25;
					printf("O valor a ser pago e de R$%.2f",madz,"reais");
				}
				break;

			case 15:
				int g, h, j;

				printf( "Digite o valor da primeira variavel: " );
				scanf("%d",&g);
				printf( "Digite o valor da segunda variavel: " );
				scanf("%d",&h);
				printf( "Digite o valor da terceira variavel: " );
				scanf("%d",&j);

				while (g==h and g==j and j==h) {

					printf( "erro de digitação!! Os numeros tem  que ser diferentes." );

					printf( "Digite novamente a primeira variavel" );
					scanf("%d",&g);

					printf( "Digite novamente a primeira variavel" );
					scanf("%d",&h);

					printf( "Digite novamente a terceira variavel" );
					scanf("%d",&j);
				}

				if(g<h and g<j and h<j) {
					printf("%d %d %d",g,h,j);
				} else {
					printf("%d %d %d",g,j,h);

				}
				if (h<g and h<j and g<j) {
					printf("%d %d %d",h,g,j);
				} else {

					printf("%d %d %d",h,j,g);
				}


				if (j<h<g)
					if(j>g)
						printf("%d %d %d",j,g,h);
					else
						printf("%d %d %d",j,h,g);
				break;


			case 16:
				float Altura, peso, sexo;

				printf( " Digite a altura da pessoa: " );
				scanf("%f",&Altura);
				printf( " Digite o sexo da pessoa ( 1 para feminino e 2 para masculino) " );
				scanf("%f",&sexo);

				if (sexo == 1) {
					peso = ( 62.1 * Altura ) - 44.7;
					printf( " O peso ideal da pessoa e: %.2f", peso);
				} else {

					peso = (72.7 * Altura ) - 58;
					printf( " O peso ideal da pessoa e: %.2fk", peso);
				}
				break;

			case 17:

				int num_lados;
				float medida_lado, area;

				printf( "Digite o numero de lados do poligono:\n ");
				scanf("%d",&num_lados);
				printf( "Digite a medida do lado (em cm): \n");
				scanf("%f",&medida_lado);

				if (num_lados == 3) {
					area = (medida_lado * medida_lado) / 2;
					printf("Triangulo\n");
					printf( "Area do Triangulo %.2f ",area, " cm \n");
				}
				if (num_lados == 4 ) {

					area= (medida_lado * medida_lado);
					printf( " Quadrado\n " );
					printf( " Area do Quadrado e: %.2f\n",area, " cm\n " );
				}
				if (num_lados == 5) {
					printf( "Pentagono\n" );
				} else if (num_lados<3 or num_lados >5) {
					printf( " poligono ideterminado\n ");
				}
				break;

			case 18:
				int inicial, final;


				printf( "Digite um numero inicial: \n");
				scanf("%d",&inicial);
				printf( "Digite um numero final:  \n");
				scanf("%d",&final);
				if ( final <= inicial) {
					printf(" O numero final deve ser maior que o numero inicial. Por favor, tente novamente! \n");
				}
				while (final > inicial);
				printf("inicial \n");
				inicial = final + 1;
				break;

			case 19:
				int num, p;
    
                printf("Digite o numero da tabuada que voce deseja: ");
                scanf("%d", &num);
    
                for (int p = 1; p <= 10; p++) {
                printf("%d x %d = %d\n", num, p, num * p);
                }

				break;

			case 20:
				int inicio, fim, q;


				printf( "Digite um numero inicio: ");
				scanf("%d",&inicial);
				printf( "Digite um numero fim: ");
				scanf("%d",&final);
				for (int q = inicio; q <= fim; q++);
				printf("%d",q);
		        break;

	        case 21:
		        float Peso, quant, gramas, sobra;

		        printf ("Digite o peso da racao: ");
	            scanf("%f",&Peso);
		        printf("Digite a quantidade de racao para os gatos(em gramas): ");
		        scanf("%f",&quant);

		        gramas=peso*1000;
		        sobra=gramas-(quant * 5);
	       	    printf("A quantidade de racao que sobrou no saco depois de 5 dias foi de %.2f",sobra, "gramas", gramas);
		        break;
		        
		    case 22:
			    	int numero;
	            printf("Digite um numero: ");
	            scanf("%d", &numero);
	            printf("\n O numero digitado foi: %d", numero);
	            printf("\n O seu antecessor e: %d", numero-1);
	            printf("\n O seu sucessor e: %d", numero+1);
	            break;
	            
	        case 23:
				int S,N,som;
                som = 0;	
                for ( S = 1;  S<= 10;  S = s + 1){

                printf("Entre com o valor: \n");
                scanf("%d",&S);
                som = som +  S;
                }
                printf("Resultado: %d", som);  
				break;
				
			case 24:
			    int y, Soma, nume;

                nume = 1;
                Soma = 0;
 
                while (nume != 0){
                printf("Digite um numero: "); 
                scanf("%d", &nume);
                Soma = Soma + nume;
                }
                printf("O resultado da soma dos numeros digitados e: %d", Soma);
                break;
                
            case 25:   
			    int Som, number, quantidade;
                float med;
 
                Som = 0;
                quantidade = 0;
  
                printf( "Digite um numero: ");
                scanf("%d",&number);
  
                while (numero != 0){
                if (numero % 2 == 0) {	
                Som = Som + number;
                quantidade = quantidade + 1;
                }  
                printf ("Digite um numero: ");
                scanf("%d",&number);
               }
	
	            if (quantidade > 0) {
                med = Som / quantidade;
                printf("A media dos numeros pares e: %.2f", med);
                }
                else{
                printf("Nenhum numero par foi digitado.");
                }
                break;
  


	default:
		printf("Sair");
		break;
	}	
	}while (continuar != 0);
}





