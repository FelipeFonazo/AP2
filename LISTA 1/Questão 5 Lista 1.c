#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

typedef struct ListaDeCadastro {
    char nome[50];
    int telefone;
    char email[50];
} cadastro;

struct listaDeContatos {
    cadastro cadastro[5];
    int quantidade;
};

void addcontatos(struct listaDeContatos *lista) {
    if (lista->quantidade < 5) {
        printf("Digite o nome: ");
        scanf("%s", lista->cadastro[lista->quantidade].nome);
        setbuf(stdin, NULL);

        printf("Digite o telefone: ");
        scanf("%d", &lista->cadastro[lista->quantidade].telefone);
        setbuf(stdin, NULL);

        printf("Digite o email: ");
        scanf("%s", lista->cadastro[lista->quantidade].email);
        setbuf(stdin, NULL);

        lista->quantidade++;
        printf("Contato adicionado com sucesso!\n");
    } else {
        printf("Lista cheia. N�o � poss�vel adicionar mais contatos.\n");
    }
}

void exibirContato(struct listaDeContatos *lista) {
    if (lista->quantidade == 0) {
        printf("\nNenhum contato salvo.\n");
        return;
    }

    printf("\nLista de Contatos:\n");
    for (int i = 0; i < lista->quantidade; i++) {
        printf("\nContato %d:\n", i + 1);
        printf("Nome: %s\n", lista->cadastro[i].nome);
        printf("Telefone: %d\n", lista->cadastro[i].telefone);
        printf("Email: %s\n", lista->cadastro[i].email);
    }
}

    int buscarContato(struct listaDeContatos lista, char *nome)
    {
            for(int i = 0; i < lista.quantidade; i++){
                if(strcmp(lista.cadastro[i].nome, nome) == 0){
                    return 1;
                }
            }
    };

    int main() {
        struct listaDeContatos lista;
            lista.quantidade = 0;
            int op;
            setlocale(LC_ALL, "Portuguese");
            char nome[100];
    do {
        printf("\nMenu:\n");
        printf("1. Adicionar Contato\n");
        printf("2. Exibir Lista de Contatos\n");
        printf("3. Buscar Contato\n");
        printf("0. Sair\n");
        printf("Op��o: ");
        scanf("%d", &op);

        switch (op) {
            case 1:
                addcontatos(&lista);
                break;
            case 2:
                exibirContato(&lista);
                break;
            case 3:
                
                printf("Digite o nome procurado:\n");
                setbuf(stdin, NULL);
                gets(nome);
                setbuf(stdin, NULL);

            int indice = buscarContato(lista,nome);
                if(indice == -1){
                    printf("contato n�o encontrado\n");
                    }
                else{
                    printf("Contato encontrado%d\n", indice + 1);
                    printf("Nome: %s\n", lista.cadastro[indice].nome);
                    printf("Telefone: %d\n", lista.cadastro[indice].telefone);
                    printf("Email: %s\n", lista.cadastro[indice].email);
                    }
                break;
            case 0:
                printf("Saindo...\n");
                break;
            default:
                printf("Op��o inv�lida. Tente novamente.\n");
        }
    } while (op != 0);

    return 0;
}