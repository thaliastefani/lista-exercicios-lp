#include <stdio.h>
#include <stdlib.h>
#define V 5

int main(){
    int num[V], i, numMaior, numMenor, posMaior, posMenor;

    for (i = 0; i < V; i++){
        printf("\nInsira um numero na posicao %d: ", i);
        scanf("%d", &num[i]);

        if (i == 0){
            numMaior = num[i];
            numMenor = num[i];
            posMaior = 0;
            posMenor = 0;
        } else {
            if (num[i] >= numMaior){
                numMaior = num[i];
                posMaior = i;
            } else if (num[i] <= numMenor){
                numMenor = num[i];
                posMenor = i;
            }
        }
    }
    printf("\nResultado\n");
    printf("Posicao Maior Numero: %d\t| Posicao Menor Numero: %d\n", posMaior, posMenor);

    return 0;
}
