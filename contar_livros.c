#include <stdio.h>
#include "livro.h"

void contar_livros(int *pTotal_livros) {
  Livro livro;
  FILE* arq;
  int total_livros = 0;

  arq = fopen("livros.dat", "rb");

  if (arq != NULL) {
    while (fread(&livro, sizeof(Livro), 1, arq)) {
      total_livros += 1;
    }
    fclose(arq);
  }

  *pTotal_livros = total_livros;
}
