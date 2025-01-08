#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <locale.h>

typedef struct Funcionarios{ 

        char nome[50];
        int idade;
        float salario;
    };
int main(){ 

    struct Funcionarios funcionarios;
    setlocale(LC_ALL, "Portuguese");

        printf("insira os dados dos funcionarios:\n");
        printf("Nome:\n");
        scanf("%49s", funcionarios.nome);
        setbuf(stdin, NULL);
        printf("Idade:\n");
        scanf("%d", &funcionarios.idade);
        setbuf(stdin, NULL);
        printf("Salario:\n");
        scanf("%f", funcionarios.salario);
        setbuf(stdin, NULL);
            return 0;
}