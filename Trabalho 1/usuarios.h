#ifndef USUARIOS_H
#define USUARIOS_H

typedef struct {
    int id;
    char nome[100];
    char email[100];
} Usuario;

typedef struct {
    Usuario usuarios[100];
    int quantidade;
} BibliotecaUsuarios;

void addUsuario(BibliotecaUsuarios *bibliotecaUsuarios);
void listarUsuarios(BibliotecaUsuarios *bibliotecaUsuarios);

#endif