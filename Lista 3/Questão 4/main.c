#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int atualizarPonto(int *ponto){
    int x = 0;
    int y = 0;
    *ponto = x;
    *ponto = y;
        return 0;
}

int main(){
    
    setlocale(LC_ALL, "Portuguese");
    int pontox = 0;
    int pontoy = 0;
    int *p;
    
    printf("Digite o valor atual de x: ");
    scanf("%d", &pontox);
    printf("Digite o valor atual de y: ");
    scanf("%d", &pontoy);
    p = &pontox;
    p = &pontoy;
    printf("Ponto atual x: %d\n", pontox);
    printf("Ponto atual y: %d\n", pontoy);
    atualizarPonto(&p);
        return 0;
}