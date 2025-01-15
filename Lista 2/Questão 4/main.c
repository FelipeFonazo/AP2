#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>

int quartos(){
    int quartos[10];
    int i;
    for(i = 0; i < 10; i++){
        quartos[i] = 0;
    }
    printf("Quartos disponíveis\n");
    for(i = 0; i < 10; i++){
        printf("%d\n", i+1);
    }
}

int reservar(int quartos[], int num){
    if(num >= 0 && num < 10){
        if(quartos[num] == 0){
            quartos[num] = 1;
            printf("Reserva efetuada com sucesso\n");
            return 1;
        }else{
            printf("Quarto indisponível\n");
            return 0;
        }
    }else{
        printf("Quarto inválido\n");
        return 0;
    }
}


int checar(int quartos[], int num){
    if(num >= 0 && num < 10){
        if(quartos[num] == 0){
            printf("Quarto disponível\n");
        }else{
            printf("Quarto indisponível\n");
        }
    }else{
        printf("Quarto inválido\n");
    }
}

int main(){
    setlocale(LC_ALL, "Portuguese");
    int op;
    int quartos[10] = {0};
    int i; 

    do{
    printf("\nSistema de reserva de Hotel\n");
    printf("1- Disponibilidade de quartos\n");
    printf("2 - Reservar quarto\n");
    printf("3 - Checar Disponibilidade\n");
    printf("Sair\n");
    scanf("%d", &op);
        switch (op)
        {
        case 1:
            printf("Quartos disponíveis:%d", quartos);
            break;
        case 2:
            printf("Digite o número do quarto que deseja reservar\n");
            scanf("%d", &i);
            reservar(quartos, i);
            break;
        case 3:
            printf("Digite o número do quarto que deseja checar\n");
            scanf("%d", &i);
            checar(quartos, i);
            break;
        case 4:
            printf("Saindo do sistema\n");
            break;
        default:
            break;
        }
    } while (op != 4);
    return 0;
}