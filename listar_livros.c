#include <stdio.h>
#include <string.h>
#include "livro.h"
#include "listar_livros.h"

void listar_livros() {
  Livro livro;
  FILE* arq;

  arq = fopen("livros.dat", "rb");

  if (arq != NULL) {
    while (fread(&livro, sizeof(livro), 1, arq)) {
      printf("Codigo: %s", livro.cod);
      printf("Nome: %s", livro.nome);
      printf("Autor: %s", livro.autor);
      printf("Genero: %s", livro.genero);
      printf("Ano: %d\n", livro.ano);
      printf("Preco: %f\n", livro.preco);
      printf("-----------------------\n");
    }
    fclose(arq);
  }

}
