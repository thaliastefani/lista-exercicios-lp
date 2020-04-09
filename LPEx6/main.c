#include <stdio.h>
#include <stdlib.h>
#define N 10

int main(){
    float vetor[N];
    float somaPositivos = 0;
    int i, qtdNegativos = 0;

    for(i = 0; i < N; i++){
        printf("Digite um valor: ");
        scanf("%f", &vetor[i]);

        if(vetor[i] < 0){
            qtdNegativos += 1;
        }else{
            somaPositivos += vetor[i];
        }
    }
    printf("\nQuantidade de Nrs. (-): %d \n", qtdNegativos);
    printf("Soma de Nrs. (+): %.2f\n", somaPositivos);

    return 0;
}
