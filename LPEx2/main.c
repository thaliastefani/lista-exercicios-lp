#include <stdio.h>
#include <stdlib.h>
#define N 10

int main(){
    int a[N], b[N];
    int i;

    for(i = 0; i < N; i++){
        printf("Insira o %d valor: ", i+1);
        scanf("%d", &a[i]);

        if(a[i] % 2 != 0){
            b[i] = a[i] + 5;
        }else{
            b[i] = a[i] * 5;
        }
    }

    printf("A\t|\tB\n");

    for(i = (N-1);i >= 0; i--){
        printf("%d\t|\t%d\n", a[i],b[i]);
    }
    return 0;
}
