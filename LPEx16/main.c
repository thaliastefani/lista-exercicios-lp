#include <stdio.h>
#include <stdlib.h>

long int somaDivisores(int n){
    int somaN = 0, i;
    for (i = 1; i <= n; i++){
        if (n % i == 0){
            somaN += i;
        }
    }
    return somaN;
}

int main(){
    int numb;
    char stop = ' ';

    while (stop != 's'){
        printf("\nDigite um numero: ");
        scanf("%d", &numb);

        if (numb < 1){
            printf("Numero Invalido! O numero deve ser maior que 0\n\n");
        } else {
            printf("\nSoma dos Divisores de %d: %d\n", numb, somaDivisores(numb));
        }
        printf("\nDigite 's' se desejar sair: ");
        scanf(" %c", &stop);
    }
    return 0;
}
