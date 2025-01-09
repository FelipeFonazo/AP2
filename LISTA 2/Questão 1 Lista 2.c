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
    printf("Digite o primeiro número: ");
    scanf("%f", &a);
    setbuf(stdin, NULL);
    printf("Digite o segundo número: ");
    scanf("%f", &b);
    setbuf(stdin, NULL);
    printf("Escolha a operação desejada: \n");
    printf("1 - Soma\n");
    printf("2 - Subtração\n");
    printf("3 - Multiplicação\n");
    printf("4 - Divisão\n");
    scanf("%d", &op);

    switch (op){
        case 1:
            printf("O resultado da soma é: %.2f\n", a + b);
            break;
        case 2:
            printf("O resultado da subtração é: %.2f\n", a - b);
            break;
        case 3:
            printf("O resultado da multiplicação é: %.2f\n", a * b);
            break;
        case 4:
            printf("O resultado da divisão é: %.2f\n", a / b);
            break;
        default:
            printf("Opção inválida\n");
            break;
    }
    }while(op != 0);
    return 0;
}
