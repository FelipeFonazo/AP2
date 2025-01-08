#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <locale.h>

struct Livro{
    char titulo[100];
    int ano;
    char autor [100];
    };

int main(){
        struct Livro livro;
        setlocale(LC_ALL, "Portuguese");

        printf("Insira os dados do livro:\n");
        printf("Titulo\n");
        scanf("%99s", livro.titulo);
        printf("Ano:\n");
        scanf("%d", &livro.ano);
        printf("Autor:\n");
        scanf("%99s", livro.autor);

        return 0;
}