#include <stdio.h>
#include <stdlib.h>

int validacao(int num){
    while ((num < 0) || (num > 9999)){
        printf("\nNumero Invalido!\n");
        printf("Digite um numero positivo menor que 10000: ");
        scanf("%d", &num);
    }
    return num;
}

int qtdAlgarismo(int valor){
    int valorDigitos = 0, valor;

    do {
        valorDigitos += 1;
        valor /= 10;
    } while (valor != 0);

    return valorDigitos;
}

int main(){
    int a, b, i, valor, va[4] = {0}, vb[4] = {0}, aDigitos = 0, bDigitos = 0;

    printf("A - Digite um numero positivo menor que 10000: ");
    scanf("%d", &a);

    a = validacao(a);

    printf("B - Digite um numero positivo menor que 10000: ");
    scanf("%d", &b);

    b = validacao(b);

    aDigitos = qtdAlgarismo(a);
    bDigitos = qtdAlgarismo(b);

    switch(aDigitos){
        case 4:
            valor = a / 1000;
            va[3] = valor;
            a -= (va[3]*1000);
        case 3:
            valor = a / 100;
            va[2] = valor;
            a -= (va[2]*100);
        case 2:
            valor = a / 10;
            va[1] = valor;
            a -= (va[1]*10);
        case 1:
            valor = a / 1;
            va[0] = valor;
            a -= (va[0]*1);
            break;
    }
    switch(bDigitos){
        case 4:
            valor = b / 1000;
            vb[3] = valor;
            b -= (vb[3]*1000);
        case 3:
            valor = b / 100;
            vb[2] = valor;
            b -= (vb[2]*100);
        case 2:
            valor = b / 10;
            vb[1] = valor;
            b -= (vb[1]*10);
        case 1:
            valor = b / 1;
            vb[0] = valor;
            b -= (vb[0]*1);
            break;
    }
    printf("\n  A\t  |\t  B\n");
    for(i=3;i>=0;i--){
        printf("\n[%d]--%d\t  |\t[%d]--%d\n", i, va[i], i, vb[i]);
    }
    return 0;
}
