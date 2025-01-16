#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    FILE *Ent, *Cop;

    fopen_s(&Ent, "entrada.txt", "r");
    if(Ent == NULL){
        printf("Erro ao abrir o arquivo\n");
        return 1;
    }
    fopen_s(&Cop,"copia.txt", "w");
    if(Cop == NULL){
        printf("Erro ao abrir o arquivo\n");
        fclose(Ent);
        return 1;
    }
    
    char c;

    while((c = fgetc(Ent)) != EOF){
        fputc(c, Cop);
    }
    fclose(Ent);
    fclose(Cop);

    printf("Arquivo copiado com sucesso\n");
    return 0;
}