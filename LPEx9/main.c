#include <stdio.h>
#include <stdlib.h>

int main(){
    int matriz[5][5], i, j;

    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            if(i > j){
                matriz[i][j] = 0;
            } else {
                matriz[i][j] = 1;
            }
        }
    }

    printf(" Matriz Triangular Superior");

    for(i = 0; i < 5; i++){
        printf("\n");
        for(j = 0; j < 5; j++){
            printf("%d  ", matriz[i][j]);
        }
    }
    return 0;
}
