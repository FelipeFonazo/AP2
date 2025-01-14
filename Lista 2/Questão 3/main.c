#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include "cadastros.h"
#include "listar.h"

int main(){
    setlocale(LC_ALL, "Portuguese");
    int opcao;
    int senha;
    char nome[50];
    extern struct cadastroCliente Cadastro;
    
    
    do{
    printf("1 - Cadastrar\n");
    printf("2 - Listar\n");
    printf("3 - Sair\n");

    switch (opcao)
    {
    case 1:
            printf("Cadastrar\n");
            printf("Digite o nome do cliente: ");
            scanf("%s", &nome);
            printf("Digite a senha: ");
            scanf("%d", &senha);
            cadastroCliente(cadastroCliente.nome, cadastroCliente.senha);
        break;
    case 2:
            printf("Listar\n");
            listarClientes(nome, senha);
        break;
    case 3:
            printf("Sair\n");
            exit(0);
        break;
    default:
        break;
    }     
    }while(opcao != 3);
    return 0;
}