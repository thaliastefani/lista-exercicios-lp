#include <stdio.h>
#include <stdlib.h>

long int calcular_pot(int x, int n){
    int i;
    int base = x;

    if (n == 0){
        base = 1;
    } else {
        if (n > 0){
            for(i = 1; i < n; i++){
                base *= x;
            }
        } else {
            for(i = 1; i < abs(n); i++){
                base *= x;
            }
        }
    }
    return base;
}

int main(){
    int b, e;

    printf("Calculo de Potencia\n\n");
    printf("Insira um valor para a base: ");
    scanf("%d", &b);

    printf("Insira um valor para o expoente: ");
    scanf("%d", &e);

    if (e < 0){
        printf("1/%ld", calcular_pot(b,e));
    } else {
        printf("%ld\n", calcular_pot(b,e));
    }

    return 0;
}
