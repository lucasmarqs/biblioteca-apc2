#include <stdio.h>
#include "livro.h"

int contar_livros() {
  Livro livro;
  FILE* arq;
  int total_livros = 0;

  arq = fopen("livros.dat", "rb");

  if (arq != NULL) {
    while (fread(&livro, sizeof(livro), 1, arq)) {
      total_livros += 1;
    }
    fclose(arq);
  }

  return total_livros;
}
