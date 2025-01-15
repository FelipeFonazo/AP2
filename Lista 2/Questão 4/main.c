#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>

int reservar(int quartos[], int num){
    if(num >= 0 && num < 10){
        if(quartos[num] == 0){
            quartos[num] = 1;
            printf("\nReserva efetuada com sucesso\n");
            return 1;
        }else{
            printf("\nQuarto indisponivel\n");
            return 0;
        }
    }else{
        printf("\nQuarto invalido\n");
        return 0;
    }
}

int checar(int quartos[], int num){
    if(num >= 0 && num < 10){
        if(quartos[num] == 0){
            printf("\nQuarto disponvel\n");
        }else{
            printf("\nQuarto indisponivel\n");
        }
    }else{
        printf("Quarto inválido\n");
    }
}
int main(){
    setlocale(LC_ALL, "Portuguese");
    int op;
    int quartos[10] = {};
    int i; 

    do{
    printf("\nSistema de reserva de Hotel\n");
    printf("1- Disponibilidade de quartos\n");
    printf("2 - Reservar quarto\n");
    printf("3 - Checar Disponibilidade\n");
    printf("4 - Sair\n");
    scanf("%d", &op);
        switch (op)
        {
        case 1:
        for(i = 0; i < 10; i++){
    if(quartos[i] == 0)
      printf("Quartos disponiveis : %d\n", i);
}

        break;
        case 2:
            printf("Digite o numero do quarto que deseja reservar\n");
            scanf("%d", &i);
            reservar(quartos, i);
            break;
        case 3:
            printf("Digite o numero do quarto que deseja checar\n");
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