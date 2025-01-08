#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

typedef struct Produto 
{
    char nome[50];
    int codigo;
    float preco;
    int quantidade;
   
}item;

int main() {
    struct Produto item;
    setlocale(LC_ALL, "Portuguese");
    float i;


    printf("Para o valor total do estoque digite as informações\n");
    printf("Nome do produto:\n");
    scanf("%49s",item.nome);
    setbuf(stdin, NULL);
    printf("Código do produto:\n");
    scanf("%d", &item.codigo);
    setbuf(stdin, NULL);
    printf("Preço do produto:\n");
    scanf("%f", &item.preco);
    setbuf(stdin, NULL);
    printf("Quantidade do produto:\n");
    scanf("%d", &item.quantidade);
    setbuf(stdin, NULL);
    
    i = item.quantidade * item.preco;
       
    printf("valor total do estoque é:%f\n", i);
    return 0;
}