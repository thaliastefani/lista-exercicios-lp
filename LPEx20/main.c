#include <stdio.h>
#include <stdlib.h>

int ehPerfeito(int n){
    int somaN = 0, i, numPerfeito;

    for (i = 1; i < n; i++){
        if (n % i == 0){
            somaN += i;
        }
    }
    if (somaN == n){
        numPerfeito = 1;
    } else {
        numPerfeito = 0;
    }
    return numPerfeito;
}

int main(){
    int numero, perfeito;

    printf("Verificar Numeros Perfeitos\n");
    do {
        printf("Insira um numero:");
        scanf("%d", &numero);
        if (numero < 1){
            printf("Numero Invalido! O numero deve ser inteiro positivo");
        }
    } while (numero < 1);

    perfeito = ehPerfeito(numero);
    if (perfeito == 1){
        printf("O numero %d e perfeito!", numero);
    } else {
        printf("O numero %d nao e perfeito!", numero);
    }
    return 0;
}
