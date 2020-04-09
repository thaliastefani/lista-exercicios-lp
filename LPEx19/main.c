#include <stdio.h>
#include <stdlib.h>

int validarData(int dia, int mes, int ano){
    int ehValido = 0;

    if ((ano <= 0) || (mes > 12 || mes < 1) || (dia < 1 || dia > 31)){
            ehValido = 0;
    } else {
        if ((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0){
            if (dia <= 29){
                ehValido = 1;
            } else if ((dia == 30) && (mes != 2)){
                ehValido = 1;
            } else if ((dia == 31) && (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12)){
                ehValido = 1;
            }
        } else {
            if (dia <= 28){
                ehValido = 1;
            } else if ((dia <= 30) && (mes != 2)){
                ehValido = 1;
            } else if ((dia == 31) && (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12)){
                ehValido = 1;
            }
        }
    }
    return ehValido;
}

int main(){
    int d, m, a;

    printf("Validar DATA\n");
    printf("\nInsira o dia (dd): ");
    scanf("%d", &d);
    printf("\nInsira o mes (mm): ");
    scanf("%d", &m);
    printf("\nInsira o ano (aaaa): ");
    scanf("%d", &a);
    printf("\n%d\n", validarData(d, m, a));
    return 0;
}
