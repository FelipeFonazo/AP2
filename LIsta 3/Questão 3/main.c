#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int n, i;
    int *inteiros;
    
    printf("Digite a quantidade de n�meros inteiros que deseja digitar: ");
    scanf("%d", &n);
    
    inteiros = (int*)malloc(n*sizeof(int));
    if(inteiros == NULL){
        printf("Mem�ria insuficiente\n");
        return 1;
    }
    printf("Digite os n�meros inteiros: ");
    for(i = 0; i < n; i++){
        scanf("%d", &inteiros[i]);
    }
    printf("N�meros inteiros digitados s�o: ");
        for(i = 0; i < n; i++){
        printf("%d ", inteiros[i]);
    }
  
    free(inteiros);
    return 0;
}