#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    FILE *arq;
    
    fopen_s(&arq, "saida.txt", "a");
    
    if(arq == NULL){
        printf("Erro na abertura do arquivo\n");
        system("pause");
        exit(1);
    }
    fprintf(arq, "Olá mundo! 4\n");
    fprintf(arq, "Olá mundo! 5\n");
    fprintf(arq, "Olá mundo! 6\n");    
    
    fclose(arq);

    printf("Arquivo gravado com sucesso!\n");
    return 0;
}