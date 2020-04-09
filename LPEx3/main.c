#include <stdio.h>
#include <stdlib.h>
#define N 10

int main(){
    int v[N];
    int i;

    for(i = 0; i < N; i++){
        printf("Insira o %d valor: ", i+1);
        scanf("%d", &v[i]);
    }

    printf("Resultado:\n");

    for(i = (N-1);i >= 0; i--){
        printf("%d\n", v[i]);
    }
    return 0;
}
