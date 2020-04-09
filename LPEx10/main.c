#include <stdio.h>
#include <stdlib.h>
#define L 4
#define C 2

int main(){
    int a[L][C], b[L][C], c[L][C], i, j;

    for(i = 0; i < L; i++) {
            printf("\n----LINHA %d----", i+1);
        for(j = 0; j < C; j++) {
            printf("\nInsira o %d. valor para A: \n", j+1);
            scanf("%d", &a[i][j]);
            printf("\nInsira o %d. valor para B: \n", j+1);
            scanf("%d", &b[i][j]);

            c[i][j] = a[i][j] + b[i][j];
        }
    }
    printf("\n C");

    for(i = 0; i < L; i++) {
        printf("\n");
        for(j = 0; j < C; j++) {
            printf("%d ", c[i][j]);

        }
    }
    return 0;
}
