#include <stdio.h>
#include <stdlib.h>

long int potencia(int base, int expoente){
    int i;
    int n = base;

    for(i = 1; i < expoente; i++){
         n *= base;
    }
    return n;
}

int main(){
    int b, e;

    printf("Calculo de Potencia\n\n");
    printf("Insira um valor para a base: ");
    scanf("%d", &b);

    do{
        printf("Insira um valor para o expoente: ");
        scanf("%d", &e);

        if(e <= 0){
            printf("Numero Invalido! O expoente deve ser maior ou igual a 1\n");
        }
    }while(e <= 0);

    printf("Resultado: %ld\n", potencia(b,e));

    return 0;
}
