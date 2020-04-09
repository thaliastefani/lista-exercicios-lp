#include <stdio.h>
#include <stdlib.h>
#define N 15

int main(){
    float notaAluno[N], soma = 0, mediaAlunos = 0;
    int i;

    for(i = 0; i < N; i++){
        printf("Insira a nota do Aluno %d: ", i+1);
        scanf("%f", &notaAluno[i]);

        soma += notaAluno[i];
    }
    mediaAlunos = soma / N;

    printf("\nMedia Geral dos Alunos: %.2f\n", mediaAlunos);

    return 0;
}
