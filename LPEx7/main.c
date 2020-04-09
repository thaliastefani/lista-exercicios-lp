#include <stdio.h>
#include <stdlib.h>

int main(){
    int valor[5], i, valorMenor = 0, valorMaior = 0;
    float media = 0, soma = 0;

    for (i = 0; i < 5; i++){
        printf("Digite o %d valor: ", (i+1));
        scanf("%d", &valor[i]);

        if (i == 0){
            valorMenor = valor[i];
            valorMaior = valor[i];
        } else {
            if (valor[i] <= valorMenor){
                valorMenor = valor[i];
            } else if (valor[i] >= valorMaior){
                valorMaior = valor[i];
            }
        }
        soma += valor[i];
    }
    media = soma / 5;
    printf("\nNumeros inseridos \n");

    for (i = 0; i < 5; i++){
        printf("%d\n", valor[i]);
    }
    printf("\nValor menor: %d | Valor maior: %d | Media: %.2f\n", valorMenor, valorMaior, media);

    return 0;
}
