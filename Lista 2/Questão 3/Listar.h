#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "cadastros.h"

int listarClientes(char nome[50], int senha);

    if(strcmp(nome,cadastroCliente.nome)== 0 && senha == cadastroCliente.senha){
        printf("Nome: %s\n", cadastroCliente.nome);
        printf("Senha: %d\n", cadastroCliente.senha);
        return 1;
    }
    else{
        printf("Nenhum cliente cadastrado\n");
        return 0;
    }