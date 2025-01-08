#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <locale.h>

typedef struct Alunos{
        char nome[50];
        int matricula;
        float nota1;
        float nota2;
        float media;
    }Alunos;

int main(){
        struct Alunos aprovacao;
        setlocale(LC_ALL, "Portuguese");

        printf("Digite o nome do aluno:\n");
        scanf("%s", aprovacao.nome);
        setbuf(stdin, NULL);
        printf("Digite a matricula do aluno:\n");
        scanf("%d", &aprovacao.matricula);
        setbuf(stdin, NULL);
        printf("Digite a Nota 1:\n");
        scanf("%f", &aprovacao.nota1);
        setbuf(stdin, NULL);
        printf("Digite a Nota 2:\n");
        scanf("%f", &aprovacao.nota2);
        setbuf(stdin, NULL);
        
        aprovacao.media = (aprovacao.nota1 + aprovacao.nota2) / 2;

        printf("A Media do aluno %s é: %f\n", aprovacao.nome , aprovacao.media);
        return 0;
        }