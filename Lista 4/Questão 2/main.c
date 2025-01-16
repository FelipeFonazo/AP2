#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    FILE *arq;

    fopen_s(&arq,"saida.txt", "r");

    if(arq == NULL){
        printf("Erro na abertura do arquivo\n");
        return 1;
    }

    char texto[200];

    printf("Conteudo do arquivo:\n");
    while(fgets(texto,sizeof(texto), arq) != NULL){
        printf("%s", texto);
    }
    fclose(arq);
    
    printf("Lido com sucesso\n");
    return 0;
}