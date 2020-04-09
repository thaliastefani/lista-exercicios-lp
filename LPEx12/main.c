#include <stdio.h>
#include <stdlib.h>

int main(){
    char provaAlunos[5][10], gabaritoProva[10];
    int resultado[5] = {0}, i, j;

    printf("\t----GABARITO DA PROVA----\n");
    for (i = 0; i < 10; i++){
        printf("--QUESTAO %d--\n", i+1);
        printf("Insira a Resposta:");
        scanf(" %c", &gabaritoProva[i]);
    }
    printf("\t----PROVA----\n");

    for (i = 0; i < 5; i++){
        printf("\n");
        printf("--ALUNO %d--\n", i+1);
        for (j = 0; j < 10; j++){
            printf("\n--Questao %d--\n", j+1);
            printf("Resposta do aluno:");
            scanf(" %c", &provaAlunos[i][j]);
            if (provaAlunos[i][j] == gabaritoProva[j]){
                printf("Questao correta !!!\n");
                resultado[i] += 1;
            } else {
                printf("Questao incorreta !!!\n");
            }
        }
    }
    printf("\t--RESULTADO--\n");

    for (i = 0; i < 5; i++){
        printf("Aluno %d - Nota: %d\n",  (i+1), resultado[i]);
    }
    return 0;
}
