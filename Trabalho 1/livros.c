#include <stdio.h>
#include <string.h>
#include "livros.h"

void addLivro(Biblioteca *biblioteca) {
    if (biblioteca->quantidade < 100) {
        Livro livro;
        livro.id = biblioteca->quantidade + 1;
        printf("Digite o título do livro: ");
        scanf("%s", livro.titulo);
        printf("Digite o autor do livro: ");
        scanf("%s", livro.autor);
        printf("Digite o ano do livro: ");
        scanf("%d", &livro.ano);
        biblioteca->livros[biblioteca->quantidade++] = livro;
        printf("Livro adicionado com sucesso!\n");
    } else {
        printf("Biblioteca cheia!\n");
    }
}

void listarLivros(Biblioteca *biblioteca) {
    for (int i = 0; i < biblioteca->quantidade; i++) {
        Livro livro = biblioteca->livros[i];
        printf("ID: %d, Título: %s, Autor: %s, Ano: %d\n", livro.id, livro.titulo, livro.autor, livro.ano);
    }
}

Livro* buscarLivro(Biblioteca *biblioteca, const char *titulo, int index) {
    if (index >= biblioteca->quantidade) {
        return NULL;
    }
    if (strcmp(biblioteca->livros[index].titulo, titulo) == 0) {
        return &biblioteca->livros[index];
    }
    return buscarLivro(biblioteca, titulo, index + 1);
}