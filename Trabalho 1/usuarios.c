#include <stdio.h>
#include "usuarios.h"

void addUsuario(BibliotecaUsuarios *bibliotecaUsuarios) {
    if (bibliotecaUsuarios->quantidade < 100) {
        Usuario usuario;
        usuario.id = bibliotecaUsuarios->quantidade + 1;
        printf("Digite o nome do usuário: ");
        scanf("%s", usuario.nome);
        printf("Digite o email do usuário: ");
        scanf("%s", usuario.email);
        bibliotecaUsuarios->usuarios[bibliotecaUsuarios->quantidade++] = usuario;
        printf("Usuário adicionado com sucesso!\n");
    } else {
        printf("Biblioteca cheia!\n");
    }
}

void listarUsuarios(BibliotecaUsuarios *bibliotecaUsuarios) {
    for (int i = 0; i < bibliotecaUsuarios->quantidade; i++) {
        Usuario usuario = bibliotecaUsuarios->usuarios[i];
        printf("ID: %d, Nome: %s, Email: %s\n", usuario.id, usuario.nome, usuario.email);
    }
}