#include <stdio.h>
#include <stdlib.h>

int main(){
    int matriz[7][7] = {{0},{0}}, i, j;

    for(i = 0; i < 7; i++){
        for(j = 0; j < 7; j++){
            if(i == j){
                matriz[i][j] = 1;
            }
        }
    }

    printf(" Matriz Identidade");

    for(i = 0; i < 7; i++){
        printf("\n");
        for(j = 0; j < 7; j++){
            printf("%d  ", matriz[i][j]);
        }
    }
    return 0;
}
