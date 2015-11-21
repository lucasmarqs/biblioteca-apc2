#ifndef LIVRO_H
#define LIVRO_H

typedef struct Livro {
	char cod[8];
	char nome[30];
	char autor[30];
	char genero[30];
	int ano;
	float preco;
} Livro;

#endif
