#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h> 

int somaArray(int *array, int n){
    int soma = 0;
    for(int i =0; i< n; i++){
        soma += *(array + i);
    }
    return soma;
}

int main(){
    setlocale(LC_ALL, "Portuguese");
    int n;

    printf("Digite o tamanho do array: ");
    if(scanf("%d", &n) != 1 || n <= 0){
        printf("Erro ao ler o tamanho do array\n");
        return 1;
    }
    
    int *array = malloc(n * sizeof(int));
    if(array == NULL){
        printf("Erro ao alocar memória\n");
        return 1;
    }

    for(int i = 0; i < n; i++){
        printf("Digite os valores do array: ");
    if(scanf("%d", &array[i]) != 1){  
        printf("Erro ao ler o valor do array\n");
        free(array);
        return 1;
    }
    int soma = somaArray(array, n);
    printf("A soma dos valores do array é: %d\n", soma);
    
    free(array);   
    return 0;}
}