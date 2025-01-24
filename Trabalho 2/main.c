#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<locale.h>

typedef struct {
    char nome[50];
    int codigo;
    float preco;
    int quantidade;
} Produto;

typedef struct {
    Produto *produtos;
    int tamanho;
} Inventario;

void adicionarProduto(Inventario *inventario) {
    inventario->tamanho++;
    inventario->produtos = realloc(inventario->produtos, inventario->tamanho * sizeof(Produto));
    Produto *novoProduto = &inventario->produtos[inventario->tamanho - 1];

    printf("Digite o nome do produto: ");
    scanf("%s", novoProduto->nome);
    printf("Digite o código do produto: ");
    scanf("%d", &novoProduto->codigo);
    printf("Digite o preço do produto: ");
    scanf("%f", &novoProduto->preco);
    printf("Digite a quantidade do produto: ");
    scanf("%d", &novoProduto->quantidade);
}

void listarProdutos(Inventario *inventario) {
    for (int i = 0; i < inventario->tamanho; i++) {
        Produto *produto = &inventario->produtos[i];
        printf("Nome: %s, Código: %d, Preço: %.2f, Quantidade: %d\n", produto->nome, produto->codigo, produto->preco, produto->quantidade);
    }
}

Produto* buscarProduto(Inventario *inventario, int codigo) {
    for (int i = 0; i < inventario->tamanho; i++) {
        if (inventario->produtos[i].codigo == codigo) {
            return &inventario->produtos[i];
        }
    }
    return NULL;
}

void salvarEmArquivo(Inventario *inventario, const char *nomeArquivo) {
    FILE *arquivo = fopen(nomeArquivo, "w");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo para escrita.\n");
        return;
    }

    for (int i = 0; i < inventario->tamanho; i++) {
        Produto *produto = &inventario->produtos[i];
        fprintf(arquivo, "%s %d %.2f %d\n", produto->nome, produto->codigo, produto->preco, produto->quantidade);
    }

    fclose(arquivo);
}

void carregarDeArquivo(Inventario *inventario, const char *nomeArquivo) {
    FILE *arquivo = fopen(nomeArquivo, "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo para leitura.\n");
        return;
    }

    Produto produto;
    while (fscanf(arquivo, "%s %d %f %d", produto.nome, &produto.codigo, &produto.preco, &produto.quantidade) != EOF) {
        inventario->tamanho++;
        inventario->produtos = realloc(inventario->produtos, inventario->tamanho * sizeof(Produto));
        inventario->produtos[inventario->tamanho - 1] = produto;
    }

    fclose(arquivo);
}

int main() {
    setlocale(LC_ALL, "Portuguese");
    Inventario inventario;
    inventario.produtos = NULL;
    inventario.tamanho = 0;

    int opcao;
    do {
        printf("1 - Adicionar Produto\n");
        printf("2 - Listar Produtos\n");
        printf("3 - Buscar Produto\n");
        printf("4 - Salvar em Arquivo\n");
        printf("5 - Carregar de Arquivo\n");
        printf("6 - Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                adicionarProduto(&inventario);
                break;
            case 2:
                listarProdutos(&inventario);
                break;
            case 3: {
                int codigo;
                printf("Digite o código do produto: ");
                scanf("%d", &codigo);
                Produto *produto = buscarProduto(&inventario, codigo);
                if (produto != NULL) {
                    printf("Produto encontrado: Nome: %s, Código: %d, Preço: %.2f, Quantidade: %d\n", produto->nome, produto->codigo, produto->preco, produto->quantidade);
                } else {
                    printf("Produto não encontrado.\n");
                }
                break;
            }
            case 4:
                salvarEmArquivo(&inventario, "inventario.txt");
                break;
            case 5:
                carregarDeArquivo(&inventario, "inventario.txt");
                break;
            case 6:
                printf("Saindo...\n");
                break;
            default:
                printf("Opção inválida.\n");
                break;
        }
    } while (opcao != 6);

    free(inventario.produtos);
    return 0;
}