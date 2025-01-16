#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    FILE *arq;

    fopen_s(&arq, "saida.txt", "r");

    if(arq == NULL){
        printf("Erro na abertura do arquivo\n");
        system("pause");
        exit(1);
    }

    int cont = 0;
    char c;

    while((c = fgetc(arq)) != EOF){
       cont++;}
    
    fclose(arq);
    printf("O arquivo possui %d caracteres\n", cont);
    return 0;
}