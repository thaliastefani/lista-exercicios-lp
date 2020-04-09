#include <stdio.h>
#include <stdlib.h>

int main(){
    int matriz[9][9], vetor[81], i, j, numAleatorio, auxiliar;

    srand((unsigned)(time(NULL)));

    for (i = 0; i < 9; i++){
        printf("\n");
        for (j = 0; j < 9; j++){
            numAleatorio = (rand() % 99);
            if ((numAleatorio % 2) == 0){
                numAleatorio += 1;
            }
            matriz[i][j] = numAleatorio;
            vetor[j] = matriz[i][j];
        }
    }
    for (i = 0; i < 81; i++){
        for (j = 0; j < 81; j++){
            if(vetor[i] < vetor[i+1]){
                auxiliar = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = auxiliar;
            }
        }
    }
    for (i = 0; i < 81; i++){
        printf("%d\n", vetor[i]);
    }

    return 0;
}
