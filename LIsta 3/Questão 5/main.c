#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int contarCaracteres(char *car){
    if(*car == '\0'){
        return 0;
    } else {
        return 1 + contarCaracteres(car + 1);
    }
}

int main(){
    setlocale(LC_ALL, "Portuguese");
    char caracteres[100];
    int n;

    printf("Digite uma frase:");
    fgets(caracteres, 100, stdin);
    
    caracteres[strcspn(caracteres, "\n")] = '\0';

    n = contarCaracteres(caracteres);

    printf("Frase digitada: %s\n", caracteres);
    printf("Quantidade de caracteres: %d\n", n);

    return 0;
}