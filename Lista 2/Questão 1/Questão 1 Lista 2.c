#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include "calculadora.h"

int main(){
    setlocale(LC_ALL, "Portuguese");
    float a , b;
    int op;

    do{
    printf("Digite o primeiro n�mero: ");
    scanf("%f", &a);
    setbuf(stdin, NULL);
    printf("Digite o segundo n�mero: ");
    scanf("%f", &b);
    setbuf(stdin, NULL);
    printf("Escolha a opera��o desejada: \n");
    printf("1 - Soma\n");
    printf("2 - Subtra��o\n");
    printf("3 - Multiplica��o\n");
    printf("4 - Divis�o\n");
    scanf("%d", &op);

    switch (op){
        case 1:
            printf("O resultado da soma �: %.2f\n", a + b);
            break;
        case 2:
            printf("O resultado da subtra��o �: %.2f\n", a - b);
            break;
        case 3:
            printf("O resultado da multiplica��o �: %.2f\n", a * b);
            break;
        case 4:
            printf("O resultado da divis�o �: %.2f\n", a / b);
            break;
        default:
            printf("Op��o inv�lida\n");
            break;
    }
    }while(op != 0);
    return 0;
}
