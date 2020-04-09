#include <stdio.h>
#include <stdlib.h>
#define N 10

int main(){
    int vet[N];
    int i;

    for(i = 0; i < N; i++) {
        printf("\nInsira o %d valor: ", i+1);
        scanf("%d", &vet[i]);

        while(vet[i] % 2 != 0) {
            printf("\nNumero Invalido! Insira um numero par.\n");
            printf("\nInsira o %d valor: ", i+1);
            scanf("%d", &vet[i]);
        }
    }

    printf("Resultado:\n");

    for(i = (N-1);i >= 0; i--){
        printf("%d\n", vet[i]);
    }

    return 0;
}
