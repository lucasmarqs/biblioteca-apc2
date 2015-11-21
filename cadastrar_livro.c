#include <stdio.h>
#include <string.h>
#include "livro.h"
#include "cadastrar_livro.h"

void cadastrar_livro() {
	FILE* arq;
	Livro livro;

	arq = fopen("livros.dat", "ab");

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
		printf("Preco: ");
		scanf("%f", &livro.preco);
		fwrite(&livro, sizeof(Livro), 1, arq);
		}
	fclose(arq);
}
