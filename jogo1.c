#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){

	int numeroAleatorio,
		numeroTentativa,
		numeroDigitado,
		tentativaJogo,
		continuar,
		acertos,
		erros,
		i;
		
		 
		printf("\n Digite o numero de tentativas : ");
		scanf("%d", &numeroTentativa);
		// Validar o numero de tentavas
		while( numeroTentativa < 0 )
			{
				printf("\n Numero invalido o numero deve ser maior que 0, \n digite novamente: ");
				scanf("%d", &numeroTentativa);
			}	
		
		/* Semente do valor do meu sistema que será gerador na minha função rand()
		 A função srand() utilisa a leitura do sistema. 
		para forçar a função rand() a gerar numeros aleatorios 
		*/
		srand(time(NULL));

		// Inicialisação dos acomuladores
		acertos = 0;
		erros = 0;
		tentativaJogo = 0;
		
		// Inicio do jogo
		while( numeroTentativa != 0) 
		{ // inicio while
			numeroAleatorio = rand() % 1024;
			//printf("%d \n", numeroAleatorio );
			printf("\n Digite um numero para adivinhar : ");
			scanf("%d", &numeroDigitado);

			// Validar o numero digitado	
			while( numeroDigitado < 0)
				{ // inicio do escopo 1
					printf("\n Numero invalido o numero deve ser maior ou igual a 0, \n digite novamente. ");
					printf("\n Digite um numero para adivinhar : ");
					scanf("%d", &numeroDigitado);
				} // fim do escopo 1
			while( numeroDigitado > 1024)
				{ // inicio do escopo 1
					printf("\n Numero invalido o numero deve ser menor ou igual a 1024, \n digite novamente. ");
					printf("\n Digite um numero para adivinhar : ");
					scanf("%d", &numeroDigitado);
				}// fim do escopo 1

			if ( numeroDigitado == numeroAleatorio )
			  { // inicio escopo 1
			  	
			  	printf("\n Você ganhou");
			  	printf("\n Clica 1 para continuar ou qualquer numero para desistir ");

			  	scanf("%d", &continuar);
			  	if (continuar == 1)
 			  	 { // inicio escopo 2

					printf("\n Digite o numero de tentativas : ");
					scanf("%d", &numeroTentativa);
					// Validar o numero de tentavas
					while( numeroTentativa < 0 )
						{ // inicio escopo 3
							printf("\n Numero invalido o numero deve ser maior que 0, \n digite novamente: ");
							scanf("%d", &numeroTentativa);
						} // fim escopo 3
					
			  	 } // fim escopo 2
			  	 else
			  	 	numeroTentativa = 1; // Terminar o programa

			  	 acertos++;
			  } // fim escopo 1
			 else
				if ( numeroDigitado > numeroAleatorio )
				  { // inicio escopo 1
				  	printf("\n O numero digitado é maior ");
				  	erros++;
				  } // fim escopo 1
				else
				{ // inicio escopo 1
					printf("\n O numero digitado é menor ");
				  	erros++;
				} // fim escopo 1

			 // Actualização as tentativas
			 numeroTentativa--;

			 // Descisão para terminar o jogo após a tentativa esgotar
			 if ( numeroTentativa == 0)
			   { // inicio escopo 1 
			   		printf("\n Tetativas esgotadas");
			   		printf("\n Clica 1 para continuar ou qualquer numero para desistir ");

			  		scanf("%d", &continuar);
			  		if (continuar == 1)
	 			  	 { // inicio escopo 2

						printf("\n Digite o numero de tentativas : ");
						scanf("%d", &numeroTentativa);
						// Validar o numero de tentavas
						while( numeroTentativa < 0 )
							{ // inicio escopo 3
								printf("\n Numero invalido o numero deve ser maior que 0, \n digite novamente: ");
								scanf("%d", &numeroTentativa);
							} // fim escopo 3
						
				  	 } // fim escopo 2
			   } // fim escopo 1

			   // Contar o numero de vezes que o utilizador jogou
			   tentativaJogo++;
		} // fim while

		printf("\n Fim do jogo");
		printf("\n Numro de Acertos = %d",acertos );
		printf("\n Numero de Erros = %d", erros);
		printf("\n Numero de tentativas = %d", tentativaJogo);
		printf("\n");
	return 0;
}