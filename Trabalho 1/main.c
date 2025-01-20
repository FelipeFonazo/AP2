#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include "livros.h"
#include "usuarios.h"

void displayMenu() {
    printf("Sistema de Gerenciamento de Biblioteca\n");
    printf("1. Adicionar Livro\n");
    printf("2. Listar Livros\n");
    printf("3. Buscar Livro\n");
    printf("4. Adicionar Usuário\n");
    printf("5. Listar Usuários\n");
    printf("6. Sair\n");
    printf("Escolha uma opção: ");
}

int main() {
    setlocale(LC_ALL, "Portuguese");
    int option;
    Biblioteca biblioteca = { .quantidade = 0 };
    BibliotecaUsuarios bibliotecaUsuarios = { .quantidade = 0 };

    while (1) {
        displayMenu();
        scanf("%d", &option);

        switch (option) {
            case 1:
                addLivro(&biblioteca);
                break;
            case 2:
                listarLivros(&biblioteca);
                break;
            case 3: {
                char titulo[100];
                printf("Digite o título do livro: ");
                scanf("%s", titulo);
                Livro *livro = buscarLivro(&biblioteca, titulo, 0);
                if (livro) {
                    printf("Livro encontrado: %s por %s\n", livro->titulo, livro->autor);
                } else {
                    printf("Livro não encontrado.\n");
                }
                break;
            }
            case 4:
                addUsuario(&bibliotecaUsuarios);
                break;
            case 5:
                listarUsuarios(&bibliotecaUsuarios);
                break;
            case 6:
                exit(0);
            default:
                printf("Opção inválida.\n");
        }
    }
    return 0;
}