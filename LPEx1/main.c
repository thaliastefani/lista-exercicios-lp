#include <stdio.h>
#include <stdlib.h>
#define N 5

int main(){
    int a[N], i;
    int somaPar = 0, somaImpar = 0;
    float nPar = 0, nImpar = 0;

    for(i = 0; i < N; i++){
        printf("Insira o %d numero\n", i + 1);
        scanf("%d", &a[i]);

        if(a[i] % 2 == 0){
            somaPar += a[i];
            nPar += 1;
        }else{
            somaImpar += a[i];
            nImpar += 1;
        }
    }
    printf("Soma Pares: %d\n", somaPar);
    printf("Soma Impares: %d\n", somaImpar);
    printf("Soma Total: %d\n", somaPar + somaImpar);
    printf("Porcentagem Impares: %.2f%%\t| Porcentagem Par: %.2f%%", (nImpar / N) * 100 , (nPar / N) * 100);

    return 0;
}
