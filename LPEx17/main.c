#include <stdio.h>
#include <stdlib.h>

int verificarSinal(int valor){
    int num = valor, numResult;

    if (num < 0){
        numResult = -1;
    } else if (num > 0){
        numResult = 1;
    } else {
        numResult = 0;
    }
    return numResult;
}
int main(){
    int numero;

    printf("Insira um nro. inteiro: ");
    scanf("%d", & numero);

    printf("Resultado: %d\n", verificarSinal(numero));
    return 0;
}
