/********************************************************************
 * Nome Aluno: Lucas da Silva Marques RA: 40795448805
 * Nome Aluno: Mara Regina Domotor    RA: 42566937850
 * Data: 30/11/15
 * Descrição do programa: Cadastrar e listar informações  em arquivo
 ********************************************************************/

#include <stdio.h>
#include <string.h>
#include "livro.h"
#include "cadastrar_livro.h"
#include "listar_livros.h"
#include "contar_livros.h"

void clear_buffer();

int main()
{
	printf("Sistema de Gerenciamento da Biblioteca\n\n");

  int menu;
  int pTotal_livros;

  do {
    printf("Escolha a opção desejada\n0. Sair\n1. Cadastrar livros\n2. Listar todos os livros\n3. Listar quantidade de livros\n> ");
    scanf("%d", &menu);
    clear_buffer();

    switch(menu) {
      case 0:
        printf("Encerrando Sistema\n");
        break;
      case 1:
        cadastrar_livro();
        break;
      case 2:
        printf("-----------------------\n");
        listar_livros();
        break;
      case 3:
        contar_livros(&pTotal_livros);
        printf("-----------\nTotal de livros: %d\n-----------\n", pTotal_livros);
        break;
      default:
        printf("Opção Inválida. Tente novamente.\n");
    }
  } while (menu != 0);
	return 0;
}

void clear_buffer() {
  char buffer[2];

  fgets(buffer, 2, stdin);
}
