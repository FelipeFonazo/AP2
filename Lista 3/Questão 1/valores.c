#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h> 

void trocar(int *a, int *b){
    int aux = *a;
    *a = *b;
    *b = aux;

};

int main(){
    setlocale(LC_ALL, "Portuguese");
    int a, b;

    printf("Digite o valor de A: ");
    scanf("%d", &a);
    setbuf(stdin, NULL);
    printf("Digite o valor de B: ");
    setbuf(stdin, NULL);
    scanf("%d", &b);
    printf("Antes da troca: %d %d\n", a, b);
    
    trocar(&a, &b);
    
    printf("Depois da troca: %d %d\n", a, b);
    
    return 0;
}