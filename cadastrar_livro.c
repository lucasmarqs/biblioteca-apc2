#include <stdio.h>
#include <string.h>
#include "livro.h"
#include "cadastrar_livro.h"

void cadastrar_livro(){
	FILE* arq;
	Livro livro;
	
	arq = fopen("arquivo.txt", "at");
	
	if (arq == NULL) {
		printf("ERRO!\n");
	} else {
		printf("Codigo: ");
		fgets(livro.cod, 8, stdin);
		printf("Nome: ");
		fgets(livro.nome, 30, stdin);
		printf("Autor: ");
		fgets(livro.autor, 30, stdin);
		printf("Genero: ");
		fgets(livro.genero, 30, stdin);
		printf("Ano de Lancamento: ");
		scanf("%i", &livro.ano);
		fflush(stdin);
		printf("Preco: ");
		scanf("%f", &livro.preco);
		fflush(stdin);

		fprintf(arq, "%s%s%s%s%i\n%f\n", livro.cod, livro.nome, livro.autor, livro.genero, livro.ano, livro.preco); 
		}
	fclose(arq);	
}
