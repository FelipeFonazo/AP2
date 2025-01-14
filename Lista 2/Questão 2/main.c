#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include "login.h"
#include "cadastro.h"
#include "notas.h"
#include "media.h"

int Cadastro(char nome[], int matricula, float media);


int main() {
    int op;
    setlocale(LC_ALL, "Portuguese");
    struct Cadastro cad;
    do {
        printf("Escolha uma opcao:\n");
        printf("1 - Login\n");
        printf("2 - Cadastro de aluno\n");
        printf("3 - Calcular a Média\n");
        printf("4 - Sair\n");
        scanf("%d", &op);

        switch(op) {
            case 1:
                printf("Insira os dados de login\n");
                printf("Nome: ");
                scanf("%s", cad.nome);
                printf("Matricula: ");
                scanf("%d", &cad.matricula);
                if (login(cad.nome, cad.matricula) == 1) {
                    printf("Login efetuado com sucesso\n");
                    printf("Matricula: %d\n", cad.matricula);
                    printf("Nome: %s\n", cad.nome);
                } else {
                    printf("Login ou senha incorretos\n");
                }
                break;
            case 2:
                printf("Insira os dados do aluno\n");
                printf("Nome: ");
                scanf("%s", cad.nome);
                printf("Matricula: ");
                scanf("%d", &cad.matricula);
                printf("Media: ");
                scanf("%f", &cad.media);
                if (Cadastro(cad.nome, cad.matricula, cad.media) == 1) {
                    printf("Cadastro efetuado com sucesso\n");
                }
                break;
            case 3:
                {
                    float n1, n2;
                    printf("Digite a primeira nota: ");
                    scanf("%f", &n1);
                    printf("Digite a segunda nota: ");
                    scanf("%f", &n2);
                    printf("A média é: %.2f\n", notas(n1, n2));
                }
                break;
            case 4:
                exit(0);
                break;
            default:
                printf("Opcao invalida\n");
                break;
        }
    } while(op != 4);

    return 0;
}