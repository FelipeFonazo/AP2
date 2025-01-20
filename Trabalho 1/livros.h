#ifndef LIVROS_H
#define LIVROS_H

typedef struct {
    int id;
    char titulo[100];
    char autor[100];
    int ano;
} Livro;

typedef struct {
    Livro livros[100];
    int quantidade;
} Biblioteca;

void addLivro(Biblioteca *biblioteca);
void listarLivros(Biblioteca *biblioteca);
Livro* buscarLivro(Biblioteca *biblioteca, const char *titulo, int index);

#endif 