#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int fibonnacci(int n){
    if(n == 0){
        return 0;
    }else if(n == 1){
        return 1;
    }else{
        return fibonnacci(n-1) + fibonnacci(n-2);
    }
}
int main(){
    setlocale(LC_ALL, "Portuguese");
    int n;

    printf("Digite o valor de n: ");
    scanf("%d", &n);
    printf("\n");
    printf("O %dº termo da sequência de Fibonacci é: %d\n", n, fibonnacci(n));
    return 0;

}